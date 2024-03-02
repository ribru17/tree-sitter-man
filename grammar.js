const NEWLINE = /\r?\n/;
const ANYTHING = /[^\r\n]+/;
const ANYTHING_STARTING_NON_WHITESPACE = /\S[^\r\n]*/;
const LINE_CONTENT = /\S[^\r\n]*\r?\n/;

module.exports = grammar({
  name: 'man',

  // Control whitespace explicitly
  extras: ($) => [],

  externals: ($) => [$.footer],

  rules: {
    manual: ($) => seq(alias(ANYTHING, $.title), NEWLINE, $._body),

    _body: ($) =>
      repeat1(
        choice(
          $.section_heading,
          $.footer,
          NEWLINE,
        ),
      ),

    block: ($) =>
      prec.right(seq($._content, repeat(choice($._content, NEWLINE)))),

    _content: ($) =>
      seq(
        // NOTE: `/ {7,}/` doesn't work?
        / {7} */,
        choice(
          $.reference,
          token(prec(-1, /\S+/)),
        ),
        repeat(choice(token(prec(-1, /\S+/)), $.reference, / +/)),
        NEWLINE,
      ),

    section_heading: ($) =>
      seq(LINE_CONTENT, repeat(choice($.block, $.subsection_heading))),

    subsection_heading: ($) =>
      prec.right(
        seq(
          / {3}/,
          LINE_CONTENT,
          repeat(choice($.block, $.option_section, NEWLINE)),
        ),
      ),

    // TODO: Handle when a reference is hyphenated, as seen in `man 2 wait`
    reference: ($) => /[a-zA-Z0-9_]+\(\d+\)/,

    // extremely simple heuristic to highlight most option sections
    option_section: ($) =>
      prec.right(seq(
        alias(
          / {7}([-+]\S+( +[A-Z]+| +<\S+>)?, +)*[-+]\S+( +[A-Z]+\s*\r?\n| +<\S+>\s*\r?\n)?/,
          $.option,
        ),
        optional(ANYTHING),
        NEWLINE,
        optional($.block),
      )),
  },
});
