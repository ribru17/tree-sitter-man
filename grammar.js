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
    manual: ($) => seq($.header, $._body),

    header: ($) => seq(ANYTHING, NEWLINE),

    _body: ($) =>
      repeat1(
        choice(
          $.section_heading,
          $.subsection_heading,
          $.footer,
          $.block,
          seq($.option, optional(ANYTHING)),
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

    section_heading: ($) => LINE_CONTENT,

    subsection_heading: ($) => seq(/ {3}/, LINE_CONTENT),

    // TODO: Handle when a reference is hyphenated, as seen in `man 2 wait`
    reference: ($) => /[a-zA-Z0-9_]+\(\d+\)/,

    // extremely simple heuristic to highlight most option instances
    option: ($) =>
      / {7}([-+]\S+( +[A-Z]+| +<\S+>)?, +)*[-+]\S+( +[A-Z]+\s*\r?\n| +<\S+>\s*\r?\n)?/,
  },
});
