#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 19
#define LARGE_STATE_COUNT 5
#define SYMBOL_COUNT 18
#define ALIAS_COUNT 0
#define TOKEN_COUNT 11
#define EXTERNAL_TOKEN_COUNT 1
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  aux_sym_header_token1 = 1,
  aux_sym_header_token2 = 2,
  aux_sym__content_token1 = 3,
  aux_sym__content_token2 = 4,
  aux_sym__content_token3 = 5,
  aux_sym_section_heading_token1 = 6,
  aux_sym_subsection_heading_token1 = 7,
  sym_reference = 8,
  sym_option = 9,
  sym_footer = 10,
  sym_manual = 11,
  sym_header = 12,
  aux_sym__body = 13,
  sym__content = 14,
  sym_section_heading = 15,
  sym_subsection_heading = 16,
  aux_sym__content_repeat1 = 17,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_header_token1] = "header_token1",
  [aux_sym_header_token2] = "header_token2",
  [aux_sym__content_token1] = "_content_token1",
  [aux_sym__content_token2] = "_content_token2",
  [aux_sym__content_token3] = "_content_token3",
  [aux_sym_section_heading_token1] = "section_heading_token1",
  [aux_sym_subsection_heading_token1] = "subsection_heading_token1",
  [sym_reference] = "reference",
  [sym_option] = "option",
  [sym_footer] = "footer",
  [sym_manual] = "manual",
  [sym_header] = "header",
  [aux_sym__body] = "_body",
  [sym__content] = "_content",
  [sym_section_heading] = "section_heading",
  [sym_subsection_heading] = "subsection_heading",
  [aux_sym__content_repeat1] = "_content_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_header_token1] = aux_sym_header_token1,
  [aux_sym_header_token2] = aux_sym_header_token2,
  [aux_sym__content_token1] = aux_sym__content_token1,
  [aux_sym__content_token2] = aux_sym__content_token2,
  [aux_sym__content_token3] = aux_sym__content_token3,
  [aux_sym_section_heading_token1] = aux_sym_section_heading_token1,
  [aux_sym_subsection_heading_token1] = aux_sym_subsection_heading_token1,
  [sym_reference] = sym_reference,
  [sym_option] = sym_option,
  [sym_footer] = sym_footer,
  [sym_manual] = sym_manual,
  [sym_header] = sym_header,
  [aux_sym__body] = aux_sym__body,
  [sym__content] = sym__content,
  [sym_section_heading] = sym_section_heading,
  [sym_subsection_heading] = sym_subsection_heading,
  [aux_sym__content_repeat1] = aux_sym__content_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_header_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_header_token2] = {
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
    .visible = false,
    .named = false,
  },
  [aux_sym_subsection_heading_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_reference] = {
    .visible = true,
    .named = true,
  },
  [sym_option] = {
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
  [sym_header] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__body] = {
    .visible = false,
    .named = false,
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
  [aux_sym__content_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(24);
      if (lookahead == '\n') ADVANCE(52);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ' ') ADVANCE(30);
      if (('\t' <= lookahead && lookahead <= '\f')) ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(52);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(52);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ' ') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\f' < lookahead)) ADVANCE(58);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(60);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(60);
      if (lookahead == '\r') ADVANCE(3);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(63);
      if (lookahead == '\r') ADVANCE(7);
      if (lookahead == ',') ADVANCE(13);
      if (lookahead == '>') ADVANCE(5);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(7);
      if (lookahead != 0) ADVANCE(18);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(63);
      if (lookahead == '\r') ADVANCE(7);
      if (lookahead == ',') ADVANCE(12);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(7);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(63);
      if (lookahead == '\r') ADVANCE(7);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == ' ') ADVANCE(61);
      END_STATE();
    case 9:
      if (lookahead == ' ') ADVANCE(54);
      END_STATE();
    case 10:
      if (lookahead == ' ') ADVANCE(10);
      if (lookahead == '<') ADVANCE(20);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(6);
      END_STATE();
    case 11:
      if (lookahead == ' ') ADVANCE(11);
      if (lookahead == '<') ADVANCE(20);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(19);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(6);
      END_STATE();
    case 12:
      if (lookahead == ' ') ADVANCE(14);
      END_STATE();
    case 13:
      if (lookahead == ' ') ADVANCE(14);
      if (lookahead == '>') ADVANCE(5);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(18);
      END_STATE();
    case 14:
      if (lookahead == ' ') ADVANCE(14);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(19);
      END_STATE();
    case 15:
      if (lookahead == ' ') ADVANCE(8);
      END_STATE();
    case 16:
      if (lookahead == ' ') ADVANCE(9);
      END_STATE();
    case 17:
      if (lookahead == ' ') ADVANCE(16);
      END_STATE();
    case 18:
      if (lookahead == '>') ADVANCE(5);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(18);
      END_STATE();
    case 19:
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(64);
      END_STATE();
    case 20:
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(18);
      END_STATE();
    case 21:
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(51);
      END_STATE();
    case 22:
      if (eof) ADVANCE(24);
      if (lookahead == '\n') ADVANCE(52);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ' ') ADVANCE(15);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\f' < lookahead)) ADVANCE(4);
      END_STATE();
    case 23:
      if (eof) ADVANCE(24);
      if (lookahead == '\n') ADVANCE(52);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ' ') ADVANCE(43);
      if (('\t' <= lookahead && lookahead <= '\f')) ADVANCE(51);
      if (lookahead != 0) ADVANCE(25);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(aux_sym_header_token1);
      if (lookahead == '\n') ADVANCE(60);
      if (lookahead == '\r') ADVANCE(3);
      if (lookahead != 0) ADVANCE(25);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(aux_sym_header_token1);
      if (lookahead == '\n') ADVANCE(63);
      if (lookahead == '\r') ADVANCE(7);
      if (lookahead == ',') ADVANCE(37);
      if (lookahead == '>') ADVANCE(26);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(28);
      if (lookahead != 0) ADVANCE(46);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(aux_sym_header_token1);
      if (lookahead == '\n') ADVANCE(63);
      if (lookahead == '\r') ADVANCE(7);
      if (lookahead == ',') ADVANCE(39);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(28);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(27);
      if (lookahead != 0) ADVANCE(51);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(aux_sym_header_token1);
      if (lookahead == '\n') ADVANCE(63);
      if (lookahead == '\r') ADVANCE(7);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(28);
      if (lookahead != 0) ADVANCE(51);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(aux_sym_header_token1);
      if (lookahead == ' ') ADVANCE(30);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(49);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(51);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(aux_sym_header_token1);
      if (lookahead == ' ') ADVANCE(30);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(51);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(aux_sym_header_token1);
      if (lookahead == ' ') ADVANCE(29);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(51);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(aux_sym_header_token1);
      if (lookahead == ' ') ADVANCE(33);
      if (lookahead == ',') ADVANCE(34);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f') ADVANCE(51);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead)) ADVANCE(32);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym_header_token1);
      if (lookahead == ' ') ADVANCE(33);
      if (lookahead == '<') ADVANCE(50);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(27);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(51);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym_header_token1);
      if (lookahead == ' ') ADVANCE(35);
      if (lookahead == ',') ADVANCE(34);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f') ADVANCE(51);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead)) ADVANCE(32);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym_header_token1);
      if (lookahead == ' ') ADVANCE(35);
      if (lookahead == '<') ADVANCE(50);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(49);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(27);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(51);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym_header_token1);
      if (lookahead == ' ') ADVANCE(31);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(51);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym_header_token1);
      if (lookahead == ' ') ADVANCE(38);
      if (lookahead == '>') ADVANCE(26);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f') ADVANCE(51);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead)) ADVANCE(46);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym_header_token1);
      if (lookahead == ' ') ADVANCE(38);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(49);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(51);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym_header_token1);
      if (lookahead == ' ') ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(51);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym_header_token1);
      if (lookahead == ' ') ADVANCE(36);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(51);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym_header_token1);
      if (lookahead == ' ') ADVANCE(40);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(51);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym_header_token1);
      if (lookahead == ' ') ADVANCE(41);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(51);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym_header_token1);
      if (lookahead == ' ') ADVANCE(42);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(51);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_header_token1);
      if (lookahead == '(') ADVANCE(47);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead)) ADVANCE(48);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_header_token1);
      if (lookahead == ')') ADVANCE(48);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(45);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead)) ADVANCE(48);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_header_token1);
      if (lookahead == '>') ADVANCE(26);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(51);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead)) ADVANCE(46);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_header_token1);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(45);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead)) ADVANCE(48);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_header_token1);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(51);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead)) ADVANCE(48);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym_header_token1);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(51);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead)) ADVANCE(32);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym_header_token1);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(51);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead)) ADVANCE(46);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym_header_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(51);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym_header_token2);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym__content_token1);
      if (lookahead == ' ') ADVANCE(53);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym__content_token1);
      if (lookahead == ' ') ADVANCE(53);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(19);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym__content_token2);
      if (lookahead == '(') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(58);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym__content_token2);
      if (lookahead == ')') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(56);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(58);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym__content_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(56);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(58);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym__content_token2);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(58);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym__content_token3);
      if (lookahead == ' ') ADVANCE(59);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym_section_heading_token1);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym_subsection_heading_token1);
      if (lookahead == ' ') ADVANCE(17);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_reference);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_option);
      if (lookahead == '\n') ADVANCE(63);
      if (lookahead == '\r') ADVANCE(7);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(7);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_option);
      if (lookahead == ' ') ADVANCE(10);
      if (lookahead == ',') ADVANCE(65);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(64);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_option);
      if (lookahead == ' ') ADVANCE(11);
      if (lookahead == ',') ADVANCE(65);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(64);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 21},
  [2] = {.lex_state = 22, .external_lex_state = 1},
  [3] = {.lex_state = 22, .external_lex_state = 1},
  [4] = {.lex_state = 22, .external_lex_state = 1},
  [5] = {.lex_state = 23, .external_lex_state = 1},
  [6] = {.lex_state = 22, .external_lex_state = 1},
  [7] = {.lex_state = 22, .external_lex_state = 1},
  [8] = {.lex_state = 22, .external_lex_state = 1},
  [9] = {.lex_state = 22, .external_lex_state = 1},
  [10] = {.lex_state = 22, .external_lex_state = 1},
  [11] = {.lex_state = 22, .external_lex_state = 1},
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 2},
  [14] = {.lex_state = 2},
  [15] = {.lex_state = 2},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 22},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_header_token1] = ACTIONS(1),
    [aux_sym_header_token2] = ACTIONS(1),
    [aux_sym__content_token1] = ACTIONS(1),
    [aux_sym__content_token2] = ACTIONS(1),
    [aux_sym__content_token3] = ACTIONS(1),
    [aux_sym_subsection_heading_token1] = ACTIONS(1),
    [sym_reference] = ACTIONS(1),
    [sym_footer] = ACTIONS(1),
  },
  [1] = {
    [sym_manual] = STATE(17),
    [sym_header] = STATE(4),
    [aux_sym_header_token1] = ACTIONS(3),
  },
  [2] = {
    [aux_sym__body] = STATE(3),
    [sym__content] = STATE(3),
    [sym_section_heading] = STATE(3),
    [sym_subsection_heading] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(5),
    [aux_sym_header_token2] = ACTIONS(7),
    [aux_sym__content_token1] = ACTIONS(9),
    [aux_sym_section_heading_token1] = ACTIONS(11),
    [aux_sym_subsection_heading_token1] = ACTIONS(13),
    [sym_option] = ACTIONS(15),
    [sym_footer] = ACTIONS(7),
  },
  [3] = {
    [aux_sym__body] = STATE(3),
    [sym__content] = STATE(3),
    [sym_section_heading] = STATE(3),
    [sym_subsection_heading] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(17),
    [aux_sym_header_token2] = ACTIONS(19),
    [aux_sym__content_token1] = ACTIONS(22),
    [aux_sym_section_heading_token1] = ACTIONS(25),
    [aux_sym_subsection_heading_token1] = ACTIONS(28),
    [sym_option] = ACTIONS(31),
    [sym_footer] = ACTIONS(19),
  },
  [4] = {
    [aux_sym__body] = STATE(2),
    [sym__content] = STATE(2),
    [sym_section_heading] = STATE(2),
    [sym_subsection_heading] = STATE(2),
    [aux_sym_header_token2] = ACTIONS(34),
    [aux_sym__content_token1] = ACTIONS(9),
    [aux_sym_section_heading_token1] = ACTIONS(11),
    [aux_sym_subsection_heading_token1] = ACTIONS(13),
    [sym_option] = ACTIONS(15),
    [sym_footer] = ACTIONS(34),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(38), 1,
      aux_sym_header_token1,
    ACTIONS(40), 3,
      aux_sym__content_token1,
      aux_sym_subsection_heading_token1,
      sym_option,
    ACTIONS(36), 4,
      sym_footer,
      ts_builtin_sym_end,
      aux_sym_header_token2,
      aux_sym_section_heading_token1,
  [15] = 2,
    ACTIONS(44), 2,
      aux_sym__content_token1,
      aux_sym_subsection_heading_token1,
    ACTIONS(42), 5,
      sym_footer,
      ts_builtin_sym_end,
      aux_sym_header_token2,
      aux_sym_section_heading_token1,
      sym_option,
  [27] = 2,
    ACTIONS(48), 2,
      aux_sym__content_token1,
      aux_sym_subsection_heading_token1,
    ACTIONS(46), 5,
      sym_footer,
      ts_builtin_sym_end,
      aux_sym_header_token2,
      aux_sym_section_heading_token1,
      sym_option,
  [39] = 2,
    ACTIONS(50), 2,
      aux_sym__content_token1,
      aux_sym_subsection_heading_token1,
    ACTIONS(17), 5,
      sym_footer,
      ts_builtin_sym_end,
      aux_sym_header_token2,
      aux_sym_section_heading_token1,
      sym_option,
  [51] = 2,
    ACTIONS(54), 2,
      aux_sym__content_token1,
      aux_sym_subsection_heading_token1,
    ACTIONS(52), 5,
      sym_footer,
      ts_builtin_sym_end,
      aux_sym_header_token2,
      aux_sym_section_heading_token1,
      sym_option,
  [63] = 2,
    ACTIONS(58), 2,
      aux_sym__content_token1,
      aux_sym_subsection_heading_token1,
    ACTIONS(56), 5,
      sym_footer,
      ts_builtin_sym_end,
      aux_sym_header_token2,
      aux_sym_section_heading_token1,
      sym_option,
  [75] = 2,
    ACTIONS(62), 2,
      aux_sym__content_token1,
      aux_sym_subsection_heading_token1,
    ACTIONS(60), 4,
      sym_footer,
      aux_sym_header_token2,
      aux_sym_section_heading_token1,
      sym_option,
  [86] = 4,
    ACTIONS(64), 1,
      aux_sym_header_token2,
    ACTIONS(66), 1,
      aux_sym__content_token2,
    STATE(13), 1,
      aux_sym__content_repeat1,
    ACTIONS(68), 2,
      aux_sym__content_token3,
      sym_reference,
  [100] = 4,
    ACTIONS(70), 1,
      aux_sym_header_token2,
    ACTIONS(72), 1,
      aux_sym__content_token2,
    STATE(14), 1,
      aux_sym__content_repeat1,
    ACTIONS(74), 2,
      aux_sym__content_token3,
      sym_reference,
  [114] = 4,
    ACTIONS(76), 1,
      aux_sym_header_token2,
    ACTIONS(78), 1,
      aux_sym__content_token2,
    STATE(14), 1,
      aux_sym__content_repeat1,
    ACTIONS(81), 2,
      aux_sym__content_token3,
      sym_reference,
  [128] = 2,
    ACTIONS(84), 1,
      aux_sym__content_token2,
    ACTIONS(86), 1,
      sym_reference,
  [135] = 1,
    ACTIONS(88), 1,
      aux_sym_header_token2,
  [139] = 1,
    ACTIONS(90), 1,
      ts_builtin_sym_end,
  [143] = 1,
    ACTIONS(92), 1,
      aux_sym_section_heading_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(5)] = 0,
  [SMALL_STATE(6)] = 15,
  [SMALL_STATE(7)] = 27,
  [SMALL_STATE(8)] = 39,
  [SMALL_STATE(9)] = 51,
  [SMALL_STATE(10)] = 63,
  [SMALL_STATE(11)] = 75,
  [SMALL_STATE(12)] = 86,
  [SMALL_STATE(13)] = 100,
  [SMALL_STATE(14)] = 114,
  [SMALL_STATE(15)] = 128,
  [SMALL_STATE(16)] = 135,
  [SMALL_STATE(17)] = 139,
  [SMALL_STATE(18)] = 143,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_manual, 2),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__body, 2),
  [19] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__body, 2), SHIFT_REPEAT(3),
  [22] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__body, 2), SHIFT_REPEAT(15),
  [25] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__body, 2), SHIFT_REPEAT(6),
  [28] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__body, 2), SHIFT_REPEAT(18),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__body, 2), SHIFT_REPEAT(5),
  [34] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [36] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__body, 1),
  [38] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [40] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__body, 1),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section_heading, 1),
  [44] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section_heading, 1),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subsection_heading, 2),
  [48] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subsection_heading, 2),
  [50] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__body, 2),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__content, 3),
  [54] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__content, 3),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__content, 4),
  [58] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__content, 4),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 2),
  [62] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header, 2),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [66] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [72] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__content_repeat1, 2),
  [78] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__content_repeat1, 2), SHIFT_REPEAT(14),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__content_repeat1, 2), SHIFT_REPEAT(14),
  [84] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [90] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
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
