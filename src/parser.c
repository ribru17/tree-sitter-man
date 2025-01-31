#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 29
#define LARGE_STATE_COUNT 5
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
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(23);
      if (lookahead == '\n') ADVANCE(30);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ' ') ADVANCE(24);
      if (('\t' <= lookahead && lookahead <= '\f')) ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(25);
      if (lookahead != 0) ADVANCE(28);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(30);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(30);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ' ') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(33);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(36);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(30);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(29);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(38);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(38);
      if (lookahead == '\r') ADVANCE(4);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(41);
      if (lookahead == '\r') ADVANCE(8);
      if (lookahead == ',') ADVANCE(14);
      if (lookahead == '>') ADVANCE(6);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(8);
      if (lookahead != 0) ADVANCE(19);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(41);
      if (lookahead == '\r') ADVANCE(8);
      if (lookahead == ',') ADVANCE(13);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(8);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(41);
      if (lookahead == '\r') ADVANCE(8);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == ' ') ADVANCE(39);
      END_STATE();
    case 10:
      if (lookahead == ' ') ADVANCE(32);
      END_STATE();
    case 11:
      if (lookahead == ' ') ADVANCE(11);
      if (lookahead == '<') ADVANCE(21);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(7);
      END_STATE();
    case 12:
      if (lookahead == ' ') ADVANCE(12);
      if (lookahead == '<') ADVANCE(21);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(20);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(7);
      END_STATE();
    case 13:
      if (lookahead == ' ') ADVANCE(15);
      END_STATE();
    case 14:
      if (lookahead == ' ') ADVANCE(15);
      if (lookahead == '>') ADVANCE(6);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(19);
      END_STATE();
    case 15:
      if (lookahead == ' ') ADVANCE(15);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(20);
      END_STATE();
    case 16:
      if (lookahead == ' ') ADVANCE(9);
      END_STATE();
    case 17:
      if (lookahead == ' ') ADVANCE(10);
      END_STATE();
    case 18:
      if (lookahead == ' ') ADVANCE(17);
      END_STATE();
    case 19:
      if (lookahead == '>') ADVANCE(6);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(19);
      END_STATE();
    case 20:
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(42);
      END_STATE();
    case 21:
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(19);
      END_STATE();
    case 22:
      if (eof) ADVANCE(23);
      if (lookahead == '\n') ADVANCE(30);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ' ') ADVANCE(16);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(5);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(aux_sym_manual_token1);
      if (lookahead == ' ') ADVANCE(24);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(29);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(aux_sym_manual_token1);
      if (lookahead == '(') ADVANCE(27);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(25);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(28);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(aux_sym_manual_token1);
      if (lookahead == ')') ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(26);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(28);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(aux_sym_manual_token1);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(26);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(28);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(aux_sym_manual_token1);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(28);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(aux_sym_manual_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(29);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(aux_sym_manual_token2);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(aux_sym__content_token1);
      if (lookahead == ' ') ADVANCE(31);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(aux_sym__content_token1);
      if (lookahead == ' ') ADVANCE(31);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(20);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym__content_token2);
      if (lookahead == '(') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(33);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(36);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym__content_token2);
      if (lookahead == ')') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(34);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(36);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym__content_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(34);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(36);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym__content_token2);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(36);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym__content_token3);
      if (lookahead == ' ') ADVANCE(37);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym_section_heading_token1);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym_subsection_heading_token1);
      if (lookahead == ' ') ADVANCE(18);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_reference);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym_option_section_token1);
      if (lookahead == '\n') ADVANCE(41);
      if (lookahead == '\r') ADVANCE(8);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(8);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym_option_section_token1);
      if (lookahead == ' ') ADVANCE(11);
      if (lookahead == ',') ADVANCE(43);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(42);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym_option_section_token1);
      if (lookahead == ' ') ADVANCE(12);
      if (lookahead == ',') ADVANCE(43);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(42);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 3},
  [2] = {.lex_state = 22, .external_lex_state = 1},
  [3] = {.lex_state = 22, .external_lex_state = 1},
  [4] = {.lex_state = 22, .external_lex_state = 1},
  [5] = {.lex_state = 22, .external_lex_state = 1},
  [6] = {.lex_state = 22, .external_lex_state = 1},
  [7] = {.lex_state = 22, .external_lex_state = 1},
  [8] = {.lex_state = 22, .external_lex_state = 1},
  [9] = {.lex_state = 22, .external_lex_state = 1},
  [10] = {.lex_state = 22, .external_lex_state = 1},
  [11] = {.lex_state = 22, .external_lex_state = 1},
  [12] = {.lex_state = 22, .external_lex_state = 1},
  [13] = {.lex_state = 22, .external_lex_state = 1},
  [14] = {.lex_state = 22, .external_lex_state = 1},
  [15] = {.lex_state = 22, .external_lex_state = 1},
  [16] = {.lex_state = 22, .external_lex_state = 1},
  [17] = {.lex_state = 22, .external_lex_state = 1},
  [18] = {.lex_state = 22, .external_lex_state = 1},
  [19] = {.lex_state = 22, .external_lex_state = 1},
  [20] = {.lex_state = 2},
  [21] = {.lex_state = 2},
  [22] = {.lex_state = 2},
  [23] = {.lex_state = 3},
  [24] = {.lex_state = 2},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 22},
  [28] = {.lex_state = 0},
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
    [sym_manual] = STATE(26),
    [aux_sym_manual_token1] = ACTIONS(3),
  },
  [2] = {
    [sym_block] = STATE(3),
    [sym__content] = STATE(8),
    [sym_subsection_heading] = STATE(3),
    [sym_option_section] = STATE(3),
    [aux_sym_section_heading_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(5),
    [aux_sym_manual_token2] = ACTIONS(5),
    [aux_sym__content_token1] = ACTIONS(7),
    [aux_sym_section_heading_token1] = ACTIONS(5),
    [aux_sym_subsection_heading_token1] = ACTIONS(9),
    [aux_sym_option_section_token1] = ACTIONS(11),
    [sym_footer] = ACTIONS(5),
  },
  [3] = {
    [sym_block] = STATE(4),
    [sym__content] = STATE(8),
    [sym_subsection_heading] = STATE(4),
    [sym_option_section] = STATE(4),
    [aux_sym_section_heading_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(13),
    [aux_sym_manual_token2] = ACTIONS(13),
    [aux_sym__content_token1] = ACTIONS(7),
    [aux_sym_section_heading_token1] = ACTIONS(13),
    [aux_sym_subsection_heading_token1] = ACTIONS(9),
    [aux_sym_option_section_token1] = ACTIONS(11),
    [sym_footer] = ACTIONS(13),
  },
  [4] = {
    [sym_block] = STATE(4),
    [sym__content] = STATE(8),
    [sym_subsection_heading] = STATE(4),
    [sym_option_section] = STATE(4),
    [aux_sym_section_heading_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(15),
    [aux_sym_manual_token2] = ACTIONS(15),
    [aux_sym__content_token1] = ACTIONS(17),
    [aux_sym_section_heading_token1] = ACTIONS(15),
    [aux_sym_subsection_heading_token1] = ACTIONS(20),
    [aux_sym_option_section_token1] = ACTIONS(23),
    [sym_footer] = ACTIONS(15),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 7,
    ACTIONS(7), 1,
      aux_sym__content_token1,
    ACTIONS(11), 1,
      aux_sym_option_section_token1,
    ACTIONS(28), 1,
      aux_sym_manual_token2,
    ACTIONS(30), 1,
      aux_sym_subsection_heading_token1,
    STATE(8), 1,
      sym__content,
    ACTIONS(26), 3,
      sym_footer,
      ts_builtin_sym_end,
      aux_sym_section_heading_token1,
    STATE(7), 3,
      sym_block,
      sym_option_section,
      aux_sym_subsection_heading_repeat1,
  [26] = 7,
    ACTIONS(7), 1,
      aux_sym__content_token1,
    ACTIONS(11), 1,
      aux_sym_option_section_token1,
    ACTIONS(34), 1,
      aux_sym_manual_token2,
    ACTIONS(36), 1,
      aux_sym_subsection_heading_token1,
    STATE(8), 1,
      sym__content,
    ACTIONS(32), 3,
      sym_footer,
      ts_builtin_sym_end,
      aux_sym_section_heading_token1,
    STATE(5), 3,
      sym_block,
      sym_option_section,
      aux_sym_subsection_heading_repeat1,
  [52] = 7,
    ACTIONS(40), 1,
      aux_sym_manual_token2,
    ACTIONS(43), 1,
      aux_sym__content_token1,
    ACTIONS(46), 1,
      aux_sym_subsection_heading_token1,
    ACTIONS(48), 1,
      aux_sym_option_section_token1,
    STATE(8), 1,
      sym__content,
    ACTIONS(38), 3,
      sym_footer,
      ts_builtin_sym_end,
      aux_sym_section_heading_token1,
    STATE(7), 3,
      sym_block,
      sym_option_section,
      aux_sym_subsection_heading_repeat1,
  [78] = 5,
    ACTIONS(7), 1,
      aux_sym__content_token1,
    ACTIONS(53), 1,
      aux_sym_manual_token2,
    ACTIONS(55), 1,
      aux_sym_subsection_heading_token1,
    STATE(12), 2,
      sym__content,
      aux_sym_block_repeat1,
    ACTIONS(51), 4,
      sym_footer,
      ts_builtin_sym_end,
      aux_sym_section_heading_token1,
      aux_sym_option_section_token1,
  [98] = 5,
    ACTIONS(7), 1,
      aux_sym__content_token1,
    ACTIONS(59), 1,
      aux_sym_subsection_heading_token1,
    STATE(8), 1,
      sym__content,
    STATE(15), 1,
      sym_block,
    ACTIONS(57), 5,
      sym_footer,
      ts_builtin_sym_end,
      aux_sym_manual_token2,
      aux_sym_section_heading_token1,
      aux_sym_option_section_token1,
  [118] = 5,
    ACTIONS(63), 1,
      aux_sym_manual_token2,
    ACTIONS(66), 1,
      aux_sym__content_token1,
    ACTIONS(69), 1,
      aux_sym_subsection_heading_token1,
    STATE(10), 2,
      sym__content,
      aux_sym_block_repeat1,
    ACTIONS(61), 4,
      sym_footer,
      ts_builtin_sym_end,
      aux_sym_section_heading_token1,
      aux_sym_option_section_token1,
  [138] = 5,
    ACTIONS(7), 1,
      aux_sym__content_token1,
    ACTIONS(73), 1,
      aux_sym_subsection_heading_token1,
    STATE(8), 1,
      sym__content,
    STATE(16), 1,
      sym_block,
    ACTIONS(71), 5,
      sym_footer,
      ts_builtin_sym_end,
      aux_sym_manual_token2,
      aux_sym_section_heading_token1,
      aux_sym_option_section_token1,
  [158] = 5,
    ACTIONS(7), 1,
      aux_sym__content_token1,
    ACTIONS(77), 1,
      aux_sym_manual_token2,
    ACTIONS(79), 1,
      aux_sym_subsection_heading_token1,
    STATE(10), 2,
      sym__content,
      aux_sym_block_repeat1,
    ACTIONS(75), 4,
      sym_footer,
      ts_builtin_sym_end,
      aux_sym_section_heading_token1,
      aux_sym_option_section_token1,
  [178] = 2,
    ACTIONS(83), 2,
      aux_sym__content_token1,
      aux_sym_subsection_heading_token1,
    ACTIONS(81), 5,
      sym_footer,
      ts_builtin_sym_end,
      aux_sym_manual_token2,
      aux_sym_section_heading_token1,
      aux_sym_option_section_token1,
  [190] = 2,
    ACTIONS(87), 2,
      aux_sym__content_token1,
      aux_sym_subsection_heading_token1,
    ACTIONS(85), 5,
      sym_footer,
      ts_builtin_sym_end,
      aux_sym_manual_token2,
      aux_sym_section_heading_token1,
      aux_sym_option_section_token1,
  [202] = 2,
    ACTIONS(73), 2,
      aux_sym__content_token1,
      aux_sym_subsection_heading_token1,
    ACTIONS(71), 5,
      sym_footer,
      ts_builtin_sym_end,
      aux_sym_manual_token2,
      aux_sym_section_heading_token1,
      aux_sym_option_section_token1,
  [214] = 2,
    ACTIONS(91), 2,
      aux_sym__content_token1,
      aux_sym_subsection_heading_token1,
    ACTIONS(89), 5,
      sym_footer,
      ts_builtin_sym_end,
      aux_sym_manual_token2,
      aux_sym_section_heading_token1,
      aux_sym_option_section_token1,
  [226] = 4,
    ACTIONS(93), 1,
      ts_builtin_sym_end,
    ACTIONS(97), 1,
      aux_sym_section_heading_token1,
    ACTIONS(95), 2,
      sym_footer,
      aux_sym_manual_token2,
    STATE(18), 2,
      aux_sym__body,
      sym_section_heading,
  [241] = 4,
    ACTIONS(99), 1,
      ts_builtin_sym_end,
    ACTIONS(104), 1,
      aux_sym_section_heading_token1,
    ACTIONS(101), 2,
      sym_footer,
      aux_sym_manual_token2,
    STATE(18), 2,
      aux_sym__body,
      sym_section_heading,
  [256] = 3,
    ACTIONS(97), 1,
      aux_sym_section_heading_token1,
    ACTIONS(107), 2,
      sym_footer,
      aux_sym_manual_token2,
    STATE(17), 2,
      aux_sym__body,
      sym_section_heading,
  [268] = 4,
    ACTIONS(109), 1,
      aux_sym_manual_token2,
    ACTIONS(111), 1,
      aux_sym__content_token2,
    STATE(22), 1,
      aux_sym__content_repeat1,
    ACTIONS(113), 2,
      aux_sym__content_token3,
      sym_reference,
  [282] = 4,
    ACTIONS(115), 1,
      aux_sym_manual_token2,
    ACTIONS(117), 1,
      aux_sym__content_token2,
    STATE(21), 1,
      aux_sym__content_repeat1,
    ACTIONS(120), 2,
      aux_sym__content_token3,
      sym_reference,
  [296] = 4,
    ACTIONS(123), 1,
      aux_sym_manual_token2,
    ACTIONS(125), 1,
      aux_sym__content_token2,
    STATE(21), 1,
      aux_sym__content_repeat1,
    ACTIONS(127), 2,
      aux_sym__content_token3,
      sym_reference,
  [310] = 2,
    ACTIONS(129), 1,
      aux_sym_manual_token1,
    ACTIONS(131), 1,
      aux_sym_manual_token2,
  [317] = 2,
    ACTIONS(133), 1,
      aux_sym__content_token2,
    ACTIONS(135), 1,
      sym_reference,
  [324] = 1,
    ACTIONS(137), 1,
      aux_sym_manual_token2,
  [328] = 1,
    ACTIONS(139), 1,
      ts_builtin_sym_end,
  [332] = 1,
    ACTIONS(141), 1,
      aux_sym_section_heading_token1,
  [336] = 1,
    ACTIONS(143), 1,
      aux_sym_manual_token2,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(5)] = 0,
  [SMALL_STATE(6)] = 26,
  [SMALL_STATE(7)] = 52,
  [SMALL_STATE(8)] = 78,
  [SMALL_STATE(9)] = 98,
  [SMALL_STATE(10)] = 118,
  [SMALL_STATE(11)] = 138,
  [SMALL_STATE(12)] = 158,
  [SMALL_STATE(13)] = 178,
  [SMALL_STATE(14)] = 190,
  [SMALL_STATE(15)] = 202,
  [SMALL_STATE(16)] = 214,
  [SMALL_STATE(17)] = 226,
  [SMALL_STATE(18)] = 241,
  [SMALL_STATE(19)] = 256,
  [SMALL_STATE(20)] = 268,
  [SMALL_STATE(21)] = 282,
  [SMALL_STATE(22)] = 296,
  [SMALL_STATE(23)] = 310,
  [SMALL_STATE(24)] = 317,
  [SMALL_STATE(25)] = 324,
  [SMALL_STATE(26)] = 328,
  [SMALL_STATE(27)] = 332,
  [SMALL_STATE(28)] = 336,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section_heading, 1, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section_heading, 2, 0, 0),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_section_heading_repeat1, 2, 0, 0),
  [17] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_section_heading_repeat1, 2, 0, 0), SHIFT_REPEAT(24),
  [20] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_section_heading_repeat1, 2, 0, 0), SHIFT_REPEAT(27),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_section_heading_repeat1, 2, 0, 0), SHIFT_REPEAT(23),
  [26] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subsection_heading, 3, 0, 2),
  [28] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [30] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subsection_heading, 3, 0, 2),
  [32] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subsection_heading, 2, 0, 2),
  [34] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [36] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subsection_heading, 2, 0, 2),
  [38] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_subsection_heading_repeat1, 2, 0, 0),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_subsection_heading_repeat1, 2, 0, 0), SHIFT_REPEAT(7),
  [43] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_subsection_heading_repeat1, 2, 0, 0), SHIFT_REPEAT(24),
  [46] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_subsection_heading_repeat1, 2, 0, 0),
  [48] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_subsection_heading_repeat1, 2, 0, 0), SHIFT_REPEAT(23),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 1, 0, 0),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 1, 0, 0),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_section, 2, 0, 0),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_option_section, 2, 0, 0),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(10),
  [66] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(24),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_section, 3, 0, 0),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_option_section, 3, 0, 0),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2, 0, 0),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2, 0, 0),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__content, 3, 0, 0),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__content, 3, 0, 0),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__content, 4, 0, 0),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__content, 4, 0, 0),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_section, 4, 0, 0),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_option_section, 4, 0, 0),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_manual, 3, 0, 1),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__body, 2, 0, 0),
  [101] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__body, 2, 0, 0), SHIFT_REPEAT(18),
  [104] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__body, 2, 0, 0), SHIFT_REPEAT(2),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__content_repeat1, 2, 0, 0),
  [117] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__content_repeat1, 2, 0, 0), SHIFT_REPEAT(21),
  [120] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__content_repeat1, 2, 0, 0), SHIFT_REPEAT(21),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [139] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
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

#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_man(void) {
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
