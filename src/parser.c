#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 37
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 22
#define ALIAS_COUNT 2
#define TOKEN_COUNT 11
#define EXTERNAL_TOKEN_COUNT 1
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 3

enum ts_symbol_identifiers {
  aux_sym_manual_token1 = 1,
  aux_sym_manual_token2 = 2,
  aux_sym__content_token1 = 3,
  aux_sym__content_token2 = 4,
  aux_sym__content_token3 = 5,
  aux_sym_section_heading_token1 = 6,
  aux_sym_subsection_heading_token1 = 7,
  sym_reference = 8,
  aux_sym_option_section_token1 = 9,
  sym_footer = 10,
  sym_manual = 11,
  aux_sym__body = 12,
  sym_block = 13,
  sym__content = 14,
  sym_section_heading = 15,
  sym_subsection_heading = 16,
  sym_option_section = 17,
  aux_sym_block_repeat1 = 18,
  aux_sym__content_repeat1 = 19,
  aux_sym_section_heading_repeat1 = 20,
  aux_sym_subsection_heading_repeat1 = 21,
  alias_sym_subsection_title = 22,
  alias_sym_title = 23,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_manual_token1] = "manual_token1",
  [aux_sym_manual_token2] = "manual_token2",
  [aux_sym__content_token1] = "_content_token1",
  [aux_sym__content_token2] = "_content_token2",
  [aux_sym__content_token3] = "_content_token3",
  [aux_sym_section_heading_token1] = "section_title",
  [aux_sym_subsection_heading_token1] = "subsection_heading_token1",
  [sym_reference] = "reference",
  [aux_sym_option_section_token1] = "option",
  [sym_footer] = "footer",
  [sym_manual] = "manual",
  [aux_sym__body] = "_body",
  [sym_block] = "block",
  [sym__content] = "_content",
  [sym_section_heading] = "section_heading",
  [sym_subsection_heading] = "subsection_heading",
  [sym_option_section] = "option_section",
  [aux_sym_block_repeat1] = "block_repeat1",
  [aux_sym__content_repeat1] = "_content_repeat1",
  [aux_sym_section_heading_repeat1] = "section_heading_repeat1",
  [aux_sym_subsection_heading_repeat1] = "subsection_heading_repeat1",
  [alias_sym_subsection_title] = "subsection_title",
  [alias_sym_title] = "title",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_manual_token1] = aux_sym_manual_token1,
  [aux_sym_manual_token2] = aux_sym_manual_token2,
  [aux_sym__content_token1] = aux_sym__content_token1,
  [aux_sym__content_token2] = aux_sym__content_token2,
  [aux_sym__content_token3] = aux_sym__content_token3,
  [aux_sym_section_heading_token1] = aux_sym_section_heading_token1,
  [aux_sym_subsection_heading_token1] = aux_sym_subsection_heading_token1,
  [sym_reference] = sym_reference,
  [aux_sym_option_section_token1] = aux_sym_option_section_token1,
  [sym_footer] = sym_footer,
  [sym_manual] = sym_manual,
  [aux_sym__body] = aux_sym__body,
  [sym_block] = sym_block,
  [sym__content] = sym__content,
  [sym_section_heading] = sym_section_heading,
  [sym_subsection_heading] = sym_subsection_heading,
  [sym_option_section] = sym_option_section,
  [aux_sym_block_repeat1] = aux_sym_block_repeat1,
  [aux_sym__content_repeat1] = aux_sym__content_repeat1,
  [aux_sym_section_heading_repeat1] = aux_sym_section_heading_repeat1,
  [aux_sym_subsection_heading_repeat1] = aux_sym_subsection_heading_repeat1,
  [alias_sym_subsection_title] = alias_sym_subsection_title,
  [alias_sym_title] = alias_sym_title,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_manual_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_manual_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__content_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__content_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__content_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_section_heading_token1] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_subsection_heading_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_reference] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_option_section_token1] = {
    .visible = true,
    .named = true,
  },
  [sym_footer] = {
    .visible = true,
    .named = true,
  },
  [sym_manual] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__body] = {
    .visible = false,
    .named = false,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym__content] = {
    .visible = false,
    .named = true,
  },
  [sym_section_heading] = {
    .visible = true,
    .named = true,
  },
  [sym_subsection_heading] = {
    .visible = true,
    .named = true,
  },
  [sym_option_section] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__content_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_section_heading_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_subsection_heading_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_subsection_title] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_title] = {
    .visible = true,
    .named = true,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [0] = alias_sym_title,
  },
  [2] = {
    [1] = alias_sym_subsection_title,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 10,
  [14] = 8,
  [15] = 9,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 18,
  [21] = 19,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 26,
  [29] = 24,
  [30] = 30,
  [31] = 31,
  [32] = 31,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(29);
      if (lookahead == '\n') ADVANCE(36);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ' ') ADVANCE(30);
      if (('\t' <= lookahead && lookahead <= '\f')) ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(31);
      if (lookahead != 0) ADVANCE(34);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(36);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(36);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ' ') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\f' < lookahead)) ADVANCE(42);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(36);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(35);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(44);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(44);
      if (lookahead == '\r') ADVANCE(4);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(48);
      if (lookahead == '\r') ADVANCE(8);
      if (lookahead == ',') ADVANCE(15);
      if (lookahead == '>') ADVANCE(6);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(8);
      if (lookahead != 0) ADVANCE(24);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(48);
      if (lookahead == '\r') ADVANCE(8);
      if (lookahead == ',') ADVANCE(14);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(8);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(48);
      if (lookahead == '\r') ADVANCE(8);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == ' ') ADVANCE(45);
      END_STATE();
    case 10:
      if (lookahead == ' ') ADVANCE(38);
      END_STATE();
    case 11:
      if (lookahead == ' ') ADVANCE(37);
      END_STATE();
    case 12:
      if (lookahead == ' ') ADVANCE(12);
      if (lookahead == '<') ADVANCE(26);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(7);
      END_STATE();
    case 13:
      if (lookahead == ' ') ADVANCE(13);
      if (lookahead == '<') ADVANCE(26);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(25);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(7);
      END_STATE();
    case 14:
      if (lookahead == ' ') ADVANCE(16);
      END_STATE();
    case 15:
      if (lookahead == ' ') ADVANCE(16);
      if (lookahead == '>') ADVANCE(6);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(24);
      END_STATE();
    case 16:
      if (lookahead == ' ') ADVANCE(16);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(25);
      END_STATE();
    case 17:
      if (lookahead == ' ') ADVANCE(9);
      END_STATE();
    case 18:
      if (lookahead == ' ') ADVANCE(10);
      END_STATE();
    case 19:
      if (lookahead == ' ') ADVANCE(11);
      END_STATE();
    case 20:
      if (lookahead == ' ') ADVANCE(18);
      END_STATE();
    case 21:
      if (lookahead == ' ') ADVANCE(19);
      END_STATE();
    case 22:
      if (lookahead == ' ') ADVANCE(46);
      END_STATE();
    case 23:
      if (lookahead == ' ') ADVANCE(22);
      END_STATE();
    case 24:
      if (lookahead == '>') ADVANCE(6);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(24);
      END_STATE();
    case 25:
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(49);
      END_STATE();
    case 26:
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(24);
      END_STATE();
    case 27:
      if (eof) ADVANCE(29);
      if (lookahead == '\n') ADVANCE(36);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ' ') ADVANCE(17);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\f' < lookahead)) ADVANCE(5);
      END_STATE();
    case 28:
      if (eof) ADVANCE(29);
      if (lookahead == '\n') ADVANCE(36);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ' ') ADVANCE(23);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\f' < lookahead)) ADVANCE(5);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(aux_sym_manual_token1);
      if (lookahead == ' ') ADVANCE(30);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(35);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(aux_sym_manual_token1);
      if (lookahead == '(') ADVANCE(33);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(31);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead)) ADVANCE(34);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(aux_sym_manual_token1);
      if (lookahead == ')') ADVANCE(34);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(32);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead)) ADVANCE(34);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym_manual_token1);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(32);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead)) ADVANCE(34);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym_manual_token1);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(35);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead)) ADVANCE(34);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym_manual_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(35);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym_manual_token2);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym__content_token1);
      if (lookahead == ' ') ADVANCE(37);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym__content_token1);
      if (lookahead == ' ') ADVANCE(37);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(25);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym__content_token2);
      if (lookahead == '(') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(42);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym__content_token2);
      if (lookahead == ')') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(40);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(42);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym__content_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(40);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(42);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym__content_token2);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(42);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym__content_token3);
      if (lookahead == ' ') ADVANCE(43);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_section_heading_token1);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_subsection_heading_token1);
      if (lookahead == ' ') ADVANCE(20);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_subsection_heading_token1);
      if (lookahead == ' ') ADVANCE(21);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_reference);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_option_section_token1);
      if (lookahead == '\n') ADVANCE(48);
      if (lookahead == '\r') ADVANCE(8);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(8);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym_option_section_token1);
      if (lookahead == ' ') ADVANCE(12);
      if (lookahead == ',') ADVANCE(50);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(49);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym_option_section_token1);
      if (lookahead == ' ') ADVANCE(13);
      if (lookahead == ',') ADVANCE(50);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(49);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 3},
  [2] = {.lex_state = 27, .external_lex_state = 1},
  [3] = {.lex_state = 27, .external_lex_state = 1},
  [4] = {.lex_state = 27, .external_lex_state = 1},
  [5] = {.lex_state = 28, .external_lex_state = 1},
  [6] = {.lex_state = 28, .external_lex_state = 1},
  [7] = {.lex_state = 28, .external_lex_state = 1},
  [8] = {.lex_state = 27, .external_lex_state = 1},
  [9] = {.lex_state = 27, .external_lex_state = 1},
  [10] = {.lex_state = 27, .external_lex_state = 1},
  [11] = {.lex_state = 27, .external_lex_state = 1},
  [12] = {.lex_state = 27, .external_lex_state = 1},
  [13] = {.lex_state = 28, .external_lex_state = 1},
  [14] = {.lex_state = 28, .external_lex_state = 1},
  [15] = {.lex_state = 28, .external_lex_state = 1},
  [16] = {.lex_state = 27, .external_lex_state = 1},
  [17] = {.lex_state = 27, .external_lex_state = 1},
  [18] = {.lex_state = 27, .external_lex_state = 1},
  [19] = {.lex_state = 27, .external_lex_state = 1},
  [20] = {.lex_state = 28, .external_lex_state = 1},
  [21] = {.lex_state = 28, .external_lex_state = 1},
  [22] = {.lex_state = 27, .external_lex_state = 1},
  [23] = {.lex_state = 27, .external_lex_state = 1},
  [24] = {.lex_state = 2},
  [25] = {.lex_state = 2},
  [26] = {.lex_state = 2},
  [27] = {.lex_state = 27, .external_lex_state = 1},
  [28] = {.lex_state = 2},
  [29] = {.lex_state = 2},
  [30] = {.lex_state = 3},
  [31] = {.lex_state = 2},
  [32] = {.lex_state = 2},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 27},
  [36] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_manual_token1] = ACTIONS(1),
    [aux_sym_manual_token2] = ACTIONS(1),
    [aux_sym__content_token1] = ACTIONS(1),
    [aux_sym__content_token2] = ACTIONS(1),
    [aux_sym__content_token3] = ACTIONS(1),
    [aux_sym_subsection_heading_token1] = ACTIONS(1),
    [sym_reference] = ACTIONS(1),
    [sym_footer] = ACTIONS(1),
  },
  [1] = {
    [sym_manual] = STATE(36),
    [aux_sym_manual_token1] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 7,
    ACTIONS(7), 1,
      aux_sym_manual_token2,
    ACTIONS(9), 1,
      aux_sym__content_token1,
    ACTIONS(11), 1,
      aux_sym_subsection_heading_token1,
    ACTIONS(13), 1,
      aux_sym_option_section_token1,
    STATE(10), 1,
      sym__content,
    ACTIONS(5), 3,
      sym_footer,
      ts_builtin_sym_end,
      aux_sym_section_heading_token1,
    STATE(3), 3,
      sym_block,
      sym_option_section,
      aux_sym_subsection_heading_repeat1,
  [26] = 7,
    ACTIONS(17), 1,
      aux_sym_manual_token2,
    ACTIONS(20), 1,
      aux_sym__content_token1,
    ACTIONS(23), 1,
      aux_sym_subsection_heading_token1,
    ACTIONS(25), 1,
      aux_sym_option_section_token1,
    STATE(10), 1,
      sym__content,
    ACTIONS(15), 3,
      sym_footer,
      ts_builtin_sym_end,
      aux_sym_section_heading_token1,
    STATE(3), 3,
      sym_block,
      sym_option_section,
      aux_sym_subsection_heading_repeat1,
  [52] = 7,
    ACTIONS(9), 1,
      aux_sym__content_token1,
    ACTIONS(13), 1,
      aux_sym_option_section_token1,
    ACTIONS(30), 1,
      aux_sym_manual_token2,
    ACTIONS(32), 1,
      aux_sym_subsection_heading_token1,
    STATE(10), 1,
      sym__content,
    ACTIONS(28), 3,
      sym_footer,
      ts_builtin_sym_end,
      aux_sym_section_heading_token1,
    STATE(2), 3,
      sym_block,
      sym_option_section,
      aux_sym_subsection_heading_repeat1,
  [78] = 5,
    ACTIONS(36), 1,
      aux_sym__content_token1,
    ACTIONS(38), 1,
      aux_sym_subsection_heading_token1,
    STATE(13), 1,
      sym__content,
    STATE(6), 3,
      sym_block,
      sym_subsection_heading,
      aux_sym_section_heading_repeat1,
    ACTIONS(34), 4,
      sym_footer,
      ts_builtin_sym_end,
      aux_sym_manual_token2,
      aux_sym_section_heading_token1,
  [99] = 5,
    ACTIONS(36), 1,
      aux_sym__content_token1,
    ACTIONS(38), 1,
      aux_sym_subsection_heading_token1,
    STATE(13), 1,
      sym__content,
    STATE(7), 3,
      sym_block,
      sym_subsection_heading,
      aux_sym_section_heading_repeat1,
    ACTIONS(40), 4,
      sym_footer,
      ts_builtin_sym_end,
      aux_sym_manual_token2,
      aux_sym_section_heading_token1,
  [120] = 5,
    ACTIONS(44), 1,
      aux_sym__content_token1,
    ACTIONS(47), 1,
      aux_sym_subsection_heading_token1,
    STATE(13), 1,
      sym__content,
    STATE(7), 3,
      sym_block,
      sym_subsection_heading,
      aux_sym_section_heading_repeat1,
    ACTIONS(42), 4,
      sym_footer,
      ts_builtin_sym_end,
      aux_sym_manual_token2,
      aux_sym_section_heading_token1,
  [141] = 5,
    ACTIONS(52), 1,
      aux_sym_manual_token2,
    ACTIONS(55), 1,
      aux_sym__content_token1,
    ACTIONS(58), 1,
      aux_sym_subsection_heading_token1,
    STATE(8), 2,
      sym__content,
      aux_sym_block_repeat1,
    ACTIONS(50), 4,
      sym_footer,
      ts_builtin_sym_end,
      aux_sym_section_heading_token1,
      aux_sym_option_section_token1,
  [161] = 5,
    ACTIONS(9), 1,
      aux_sym__content_token1,
    ACTIONS(62), 1,
      aux_sym_manual_token2,
    ACTIONS(64), 1,
      aux_sym_subsection_heading_token1,
    STATE(8), 2,
      sym__content,
      aux_sym_block_repeat1,
    ACTIONS(60), 4,
      sym_footer,
      ts_builtin_sym_end,
      aux_sym_section_heading_token1,
      aux_sym_option_section_token1,
  [181] = 5,
    ACTIONS(9), 1,
      aux_sym__content_token1,
    ACTIONS(68), 1,
      aux_sym_manual_token2,
    ACTIONS(70), 1,
      aux_sym_subsection_heading_token1,
    STATE(9), 2,
      sym__content,
      aux_sym_block_repeat1,
    ACTIONS(66), 4,
      sym_footer,
      ts_builtin_sym_end,
      aux_sym_section_heading_token1,
      aux_sym_option_section_token1,
  [201] = 5,
    ACTIONS(9), 1,
      aux_sym__content_token1,
    ACTIONS(74), 1,
      aux_sym_subsection_heading_token1,
    STATE(10), 1,
      sym__content,
    STATE(17), 1,
      sym_block,
    ACTIONS(72), 5,
      sym_footer,
      ts_builtin_sym_end,
      aux_sym_manual_token2,
      aux_sym_section_heading_token1,
      aux_sym_option_section_token1,
  [221] = 5,
    ACTIONS(9), 1,
      aux_sym__content_token1,
    ACTIONS(78), 1,
      aux_sym_subsection_heading_token1,
    STATE(10), 1,
      sym__content,
    STATE(16), 1,
      sym_block,
    ACTIONS(76), 5,
      sym_footer,
      ts_builtin_sym_end,
      aux_sym_manual_token2,
      aux_sym_section_heading_token1,
      aux_sym_option_section_token1,
  [241] = 5,
    ACTIONS(36), 1,
      aux_sym__content_token1,
    ACTIONS(70), 1,
      aux_sym_subsection_heading_token1,
    ACTIONS(80), 1,
      aux_sym_manual_token2,
    STATE(15), 2,
      sym__content,
      aux_sym_block_repeat1,
    ACTIONS(66), 3,
      sym_footer,
      ts_builtin_sym_end,
      aux_sym_section_heading_token1,
  [260] = 5,
    ACTIONS(58), 1,
      aux_sym_subsection_heading_token1,
    ACTIONS(82), 1,
      aux_sym_manual_token2,
    ACTIONS(85), 1,
      aux_sym__content_token1,
    STATE(14), 2,
      sym__content,
      aux_sym_block_repeat1,
    ACTIONS(50), 3,
      sym_footer,
      ts_builtin_sym_end,
      aux_sym_section_heading_token1,
  [279] = 5,
    ACTIONS(36), 1,
      aux_sym__content_token1,
    ACTIONS(64), 1,
      aux_sym_subsection_heading_token1,
    ACTIONS(88), 1,
      aux_sym_manual_token2,
    STATE(14), 2,
      sym__content,
      aux_sym_block_repeat1,
    ACTIONS(60), 3,
      sym_footer,
      ts_builtin_sym_end,
      aux_sym_section_heading_token1,
  [298] = 2,
    ACTIONS(74), 2,
      aux_sym__content_token1,
      aux_sym_subsection_heading_token1,
    ACTIONS(72), 5,
      sym_footer,
      ts_builtin_sym_end,
      aux_sym_manual_token2,
      aux_sym_section_heading_token1,
      aux_sym_option_section_token1,
  [310] = 2,
    ACTIONS(92), 2,
      aux_sym__content_token1,
      aux_sym_subsection_heading_token1,
    ACTIONS(90), 5,
      sym_footer,
      ts_builtin_sym_end,
      aux_sym_manual_token2,
      aux_sym_section_heading_token1,
      aux_sym_option_section_token1,
  [322] = 2,
    ACTIONS(96), 2,
      aux_sym__content_token1,
      aux_sym_subsection_heading_token1,
    ACTIONS(94), 5,
      sym_footer,
      ts_builtin_sym_end,
      aux_sym_manual_token2,
      aux_sym_section_heading_token1,
      aux_sym_option_section_token1,
  [334] = 2,
    ACTIONS(100), 2,
      aux_sym__content_token1,
      aux_sym_subsection_heading_token1,
    ACTIONS(98), 5,
      sym_footer,
      ts_builtin_sym_end,
      aux_sym_manual_token2,
      aux_sym_section_heading_token1,
      aux_sym_option_section_token1,
  [346] = 2,
    ACTIONS(96), 1,
      aux_sym_subsection_heading_token1,
    ACTIONS(94), 5,
      sym_footer,
      ts_builtin_sym_end,
      aux_sym_manual_token2,
      aux_sym__content_token1,
      aux_sym_section_heading_token1,
  [357] = 2,
    ACTIONS(100), 1,
      aux_sym_subsection_heading_token1,
    ACTIONS(98), 5,
      sym_footer,
      ts_builtin_sym_end,
      aux_sym_manual_token2,
      aux_sym__content_token1,
      aux_sym_section_heading_token1,
  [368] = 4,
    ACTIONS(102), 1,
      ts_builtin_sym_end,
    ACTIONS(107), 1,
      aux_sym_section_heading_token1,
    ACTIONS(104), 2,
      sym_footer,
      aux_sym_manual_token2,
    STATE(22), 2,
      aux_sym__body,
      sym_section_heading,
  [383] = 4,
    ACTIONS(110), 1,
      ts_builtin_sym_end,
    ACTIONS(114), 1,
      aux_sym_section_heading_token1,
    ACTIONS(112), 2,
      sym_footer,
      aux_sym_manual_token2,
    STATE(22), 2,
      aux_sym__body,
      sym_section_heading,
  [398] = 4,
    ACTIONS(116), 1,
      aux_sym_manual_token2,
    ACTIONS(118), 1,
      aux_sym__content_token2,
    STATE(25), 1,
      aux_sym__content_repeat1,
    ACTIONS(120), 2,
      aux_sym__content_token3,
      sym_reference,
  [412] = 4,
    ACTIONS(122), 1,
      aux_sym_manual_token2,
    ACTIONS(124), 1,
      aux_sym__content_token2,
    STATE(25), 1,
      aux_sym__content_repeat1,
    ACTIONS(127), 2,
      aux_sym__content_token3,
      sym_reference,
  [426] = 4,
    ACTIONS(130), 1,
      aux_sym_manual_token2,
    ACTIONS(132), 1,
      aux_sym__content_token2,
    STATE(24), 1,
      aux_sym__content_repeat1,
    ACTIONS(134), 2,
      aux_sym__content_token3,
      sym_reference,
  [440] = 3,
    ACTIONS(114), 1,
      aux_sym_section_heading_token1,
    ACTIONS(136), 2,
      sym_footer,
      aux_sym_manual_token2,
    STATE(23), 2,
      aux_sym__body,
      sym_section_heading,
  [452] = 4,
    ACTIONS(138), 1,
      aux_sym_manual_token2,
    ACTIONS(140), 1,
      aux_sym__content_token2,
    STATE(29), 1,
      aux_sym__content_repeat1,
    ACTIONS(142), 2,
      aux_sym__content_token3,
      sym_reference,
  [466] = 4,
    ACTIONS(118), 1,
      aux_sym__content_token2,
    ACTIONS(144), 1,
      aux_sym_manual_token2,
    STATE(25), 1,
      aux_sym__content_repeat1,
    ACTIONS(120), 2,
      aux_sym__content_token3,
      sym_reference,
  [480] = 2,
    ACTIONS(146), 1,
      aux_sym_manual_token1,
    ACTIONS(148), 1,
      aux_sym_manual_token2,
  [487] = 2,
    ACTIONS(150), 1,
      aux_sym__content_token2,
    ACTIONS(152), 1,
      sym_reference,
  [494] = 2,
    ACTIONS(154), 1,
      aux_sym__content_token2,
    ACTIONS(156), 1,
      sym_reference,
  [501] = 1,
    ACTIONS(158), 1,
      aux_sym_manual_token2,
  [505] = 1,
    ACTIONS(160), 1,
      aux_sym_manual_token2,
  [509] = 1,
    ACTIONS(162), 1,
      aux_sym_section_heading_token1,
  [513] = 1,
    ACTIONS(164), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 26,
  [SMALL_STATE(4)] = 52,
  [SMALL_STATE(5)] = 78,
  [SMALL_STATE(6)] = 99,
  [SMALL_STATE(7)] = 120,
  [SMALL_STATE(8)] = 141,
  [SMALL_STATE(9)] = 161,
  [SMALL_STATE(10)] = 181,
  [SMALL_STATE(11)] = 201,
  [SMALL_STATE(12)] = 221,
  [SMALL_STATE(13)] = 241,
  [SMALL_STATE(14)] = 260,
  [SMALL_STATE(15)] = 279,
  [SMALL_STATE(16)] = 298,
  [SMALL_STATE(17)] = 310,
  [SMALL_STATE(18)] = 322,
  [SMALL_STATE(19)] = 334,
  [SMALL_STATE(20)] = 346,
  [SMALL_STATE(21)] = 357,
  [SMALL_STATE(22)] = 368,
  [SMALL_STATE(23)] = 383,
  [SMALL_STATE(24)] = 398,
  [SMALL_STATE(25)] = 412,
  [SMALL_STATE(26)] = 426,
  [SMALL_STATE(27)] = 440,
  [SMALL_STATE(28)] = 452,
  [SMALL_STATE(29)] = 466,
  [SMALL_STATE(30)] = 480,
  [SMALL_STATE(31)] = 487,
  [SMALL_STATE(32)] = 494,
  [SMALL_STATE(33)] = 501,
  [SMALL_STATE(34)] = 505,
  [SMALL_STATE(35)] = 509,
  [SMALL_STATE(36)] = 513,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subsection_heading, 3, .production_id = 2),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [11] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subsection_heading, 3, .production_id = 2),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_subsection_heading_repeat1, 2),
  [17] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_subsection_heading_repeat1, 2), SHIFT_REPEAT(3),
  [20] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_subsection_heading_repeat1, 2), SHIFT_REPEAT(32),
  [23] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_subsection_heading_repeat1, 2),
  [25] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_subsection_heading_repeat1, 2), SHIFT_REPEAT(30),
  [28] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subsection_heading, 2, .production_id = 2),
  [30] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [32] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subsection_heading, 2, .production_id = 2),
  [34] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section_heading, 1),
  [36] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [38] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section_heading, 2),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_section_heading_repeat1, 2),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_section_heading_repeat1, 2), SHIFT_REPEAT(31),
  [47] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_section_heading_repeat1, 2), SHIFT_REPEAT(35),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(8),
  [55] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(32),
  [58] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [64] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 1),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [70] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 1),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_section, 3),
  [74] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_option_section, 3),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_section, 2),
  [78] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_option_section, 2),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [82] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(14),
  [85] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(31),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_section, 4),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_option_section, 4),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__content, 3),
  [96] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__content, 3),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__content, 4),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__content, 4),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__body, 2),
  [104] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__body, 2), SHIFT_REPEAT(22),
  [107] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__body, 2), SHIFT_REPEAT(5),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_manual, 3, .production_id = 1),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [118] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__content_repeat1, 2),
  [124] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__content_repeat1, 2), SHIFT_REPEAT(25),
  [127] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__content_repeat1, 2), SHIFT_REPEAT(25),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [132] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [140] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [150] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [154] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [164] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

enum ts_external_scanner_symbol_identifiers {
  ts_external_token_footer = 0,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token_footer] = sym_footer,
};

static const bool ts_external_scanner_states[2][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token_footer] = true,
  },
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_man_external_scanner_create(void);
void tree_sitter_man_external_scanner_destroy(void *);
bool tree_sitter_man_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_man_external_scanner_serialize(void *, char *);
void tree_sitter_man_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_man(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_man_external_scanner_create,
      tree_sitter_man_external_scanner_destroy,
      tree_sitter_man_external_scanner_scan,
      tree_sitter_man_external_scanner_serialize,
      tree_sitter_man_external_scanner_deserialize,
    },
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
