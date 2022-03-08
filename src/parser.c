#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 48
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 41
#define ALIAS_COUNT 0
#define TOKEN_COUNT 28
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 4
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 4

enum {
  anon_sym_DOLLAR = 1,
  sym_anchor_begin = 2,
  sym__raw_character = 3,
  sym_all_char = 4,
  sym_control_char = 5,
  sym_digit_char = 6,
  sym_printable_char = 7,
  sym_lowercase_char = 8,
  sym_punctuation_char = 9,
  sym_space_char = 10,
  sym_uppercase_char = 11,
  sym_alphanumeric_char = 12,
  sym_hexadecimal_char = 13,
  sym_escape_char = 14,
  sym_capture_index = 15,
  anon_sym_b = 16,
  aux_sym_balanced_match_token1 = 17,
  sym_zero_or_more = 18,
  anon_sym_DASH = 19,
  sym_one_or_more = 20,
  sym_zero_or_one = 21,
  anon_sym_PERCENT = 22,
  aux_sym_range_token1 = 23,
  anon_sym_LBRACK = 24,
  anon_sym_RBRACK = 25,
  anon_sym_LBRACK_CARET = 26,
  anon_sym_DASH2 = 27,
  sym_pattern = 28,
  sym_anchor_end = 29,
  sym_character = 30,
  sym_balanced_match = 31,
  sym_shortest_zero_or_more = 32,
  sym__class = 33,
  sym_class = 34,
  sym_range = 35,
  sym_set = 36,
  sym_negated_set = 37,
  aux_sym_pattern_repeat1 = 38,
  aux_sym_set_repeat1 = 39,
  aux_sym_negated_set_repeat1 = 40,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_DOLLAR] = "$",
  [sym_anchor_begin] = "anchor_begin",
  [sym__raw_character] = "_raw_character",
  [sym_all_char] = "all_char",
  [sym_control_char] = "control_char",
  [sym_digit_char] = "digit_char",
  [sym_printable_char] = "printable_char",
  [sym_lowercase_char] = "lowercase_char",
  [sym_punctuation_char] = "punctuation_char",
  [sym_space_char] = "space_char",
  [sym_uppercase_char] = "uppercase_char",
  [sym_alphanumeric_char] = "alphanumeric_char",
  [sym_hexadecimal_char] = "hexadecimal_char",
  [sym_escape_char] = "escape_char",
  [sym_capture_index] = "capture_index",
  [anon_sym_b] = "b",
  [aux_sym_balanced_match_token1] = "character",
  [sym_zero_or_more] = "zero_or_more",
  [anon_sym_DASH] = "-",
  [sym_one_or_more] = "one_or_more",
  [sym_zero_or_one] = "zero_or_one",
  [anon_sym_PERCENT] = "%",
  [aux_sym_range_token1] = "character",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_LBRACK_CARET] = "[^",
  [anon_sym_DASH2] = "character",
  [sym_pattern] = "pattern",
  [sym_anchor_end] = "anchor_end",
  [sym_character] = "character",
  [sym_balanced_match] = "balanced_match",
  [sym_shortest_zero_or_more] = "shortest_zero_or_more",
  [sym__class] = "_class",
  [sym_class] = "class",
  [sym_range] = "range",
  [sym_set] = "set",
  [sym_negated_set] = "negated_set",
  [aux_sym_pattern_repeat1] = "pattern_repeat1",
  [aux_sym_set_repeat1] = "set_repeat1",
  [aux_sym_negated_set_repeat1] = "negated_set_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_DOLLAR] = anon_sym_DOLLAR,
  [sym_anchor_begin] = sym_anchor_begin,
  [sym__raw_character] = sym__raw_character,
  [sym_all_char] = sym_all_char,
  [sym_control_char] = sym_control_char,
  [sym_digit_char] = sym_digit_char,
  [sym_printable_char] = sym_printable_char,
  [sym_lowercase_char] = sym_lowercase_char,
  [sym_punctuation_char] = sym_punctuation_char,
  [sym_space_char] = sym_space_char,
  [sym_uppercase_char] = sym_uppercase_char,
  [sym_alphanumeric_char] = sym_alphanumeric_char,
  [sym_hexadecimal_char] = sym_hexadecimal_char,
  [sym_escape_char] = sym_escape_char,
  [sym_capture_index] = sym_capture_index,
  [anon_sym_b] = anon_sym_b,
  [aux_sym_balanced_match_token1] = sym_character,
  [sym_zero_or_more] = sym_zero_or_more,
  [anon_sym_DASH] = anon_sym_DASH,
  [sym_one_or_more] = sym_one_or_more,
  [sym_zero_or_one] = sym_zero_or_one,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [aux_sym_range_token1] = sym_character,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_LBRACK_CARET] = anon_sym_LBRACK_CARET,
  [anon_sym_DASH2] = sym_character,
  [sym_pattern] = sym_pattern,
  [sym_anchor_end] = sym_anchor_end,
  [sym_character] = sym_character,
  [sym_balanced_match] = sym_balanced_match,
  [sym_shortest_zero_or_more] = sym_shortest_zero_or_more,
  [sym__class] = sym__class,
  [sym_class] = sym_class,
  [sym_range] = sym_range,
  [sym_set] = sym_set,
  [sym_negated_set] = sym_negated_set,
  [aux_sym_pattern_repeat1] = aux_sym_pattern_repeat1,
  [aux_sym_set_repeat1] = aux_sym_set_repeat1,
  [aux_sym_negated_set_repeat1] = aux_sym_negated_set_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_DOLLAR] = {
    .visible = true,
    .named = false,
  },
  [sym_anchor_begin] = {
    .visible = true,
    .named = true,
  },
  [sym__raw_character] = {
    .visible = false,
    .named = true,
  },
  [sym_all_char] = {
    .visible = true,
    .named = true,
  },
  [sym_control_char] = {
    .visible = true,
    .named = true,
  },
  [sym_digit_char] = {
    .visible = true,
    .named = true,
  },
  [sym_printable_char] = {
    .visible = true,
    .named = true,
  },
  [sym_lowercase_char] = {
    .visible = true,
    .named = true,
  },
  [sym_punctuation_char] = {
    .visible = true,
    .named = true,
  },
  [sym_space_char] = {
    .visible = true,
    .named = true,
  },
  [sym_uppercase_char] = {
    .visible = true,
    .named = true,
  },
  [sym_alphanumeric_char] = {
    .visible = true,
    .named = true,
  },
  [sym_hexadecimal_char] = {
    .visible = true,
    .named = true,
  },
  [sym_escape_char] = {
    .visible = true,
    .named = true,
  },
  [sym_capture_index] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_b] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_balanced_match_token1] = {
    .visible = true,
    .named = true,
  },
  [sym_zero_or_more] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [sym_one_or_more] = {
    .visible = true,
    .named = true,
  },
  [sym_zero_or_one] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_range_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK_CARET] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH2] = {
    .visible = true,
    .named = true,
  },
  [sym_pattern] = {
    .visible = true,
    .named = true,
  },
  [sym_anchor_end] = {
    .visible = true,
    .named = true,
  },
  [sym_character] = {
    .visible = true,
    .named = true,
  },
  [sym_balanced_match] = {
    .visible = true,
    .named = true,
  },
  [sym_shortest_zero_or_more] = {
    .visible = true,
    .named = true,
  },
  [sym__class] = {
    .visible = false,
    .named = true,
  },
  [sym_class] = {
    .visible = true,
    .named = true,
  },
  [sym_range] = {
    .visible = true,
    .named = true,
  },
  [sym_set] = {
    .visible = true,
    .named = true,
  },
  [sym_negated_set] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_pattern_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_set_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_negated_set_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_first = 1,
  field_from = 2,
  field_last = 3,
  field_to = 4,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_first] = "first",
  [field_from] = "from",
  [field_last] = "last",
  [field_to] = "to",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [2] = {.index = 0, .length = 2},
  [3] = {.index = 2, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_first, 1},
    {field_last, 2},
  [2] =
    {field_from, 0},
    {field_to, 2},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [0] = sym_character,
  },
  [3] = {
    [0] = sym_character,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 2,
  [4] = 2,
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
  [27] = 11,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 12,
  [33] = 31,
  [34] = 11,
  [35] = 12,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 38,
  [43] = 36,
  [44] = 44,
  [45] = 38,
  [46] = 40,
  [47] = 40,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(14);
      if (lookahead == '\n') SKIP(13)
      if (lookahead == '$') ADVANCE(15);
      if (lookahead == '%') ADVANCE(36);
      if (lookahead == '*') ADVANCE(32);
      if (lookahead == '+') ADVANCE(34);
      if (lookahead == '-') ADVANCE(33);
      if (lookahead == '?') ADVANCE(35);
      if (lookahead == '[') ADVANCE(39);
      if (lookahead == ']') ADVANCE(40);
      if (lookahead == '^') ADVANCE(16);
      if (lookahead == 'a') ADVANCE(18);
      if (lookahead == 'b') ADVANCE(30);
      if (lookahead == 'c') ADVANCE(19);
      if (lookahead == 'd') ADVANCE(20);
      if (lookahead == 'g') ADVANCE(21);
      if (lookahead == 'l') ADVANCE(22);
      if (lookahead == 'p') ADVANCE(23);
      if (lookahead == 's') ADVANCE(24);
      if (lookahead == 'u') ADVANCE(25);
      if (lookahead == 'w') ADVANCE(26);
      if (lookahead == 'x') ADVANCE(27);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(17);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(17);
      if (lookahead != 0 &&
          lookahead != '(') ADVANCE(17);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(6)
      if (lookahead == '%') ADVANCE(36);
      if (lookahead == '-') ADVANCE(33);
      if (lookahead == ']') ADVANCE(40);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(17);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(17);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(6)
      if (lookahead == '%') ADVANCE(36);
      if (lookahead == '-') ADVANCE(42);
      if (lookahead == ']') ADVANCE(40);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(17);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(17);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(6)
      if (lookahead == '%') ADVANCE(36);
      if (lookahead == '-') ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(17);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(17);
      END_STATE();
    case 4:
      if (lookahead == '%') ADVANCE(36);
      if (lookahead == '-') ADVANCE(33);
      if (lookahead == ']') ADVANCE(40);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(17);
      END_STATE();
    case 5:
      if (lookahead == '%') ADVANCE(36);
      if (lookahead == '-') ADVANCE(33);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(17);
      END_STATE();
    case 6:
      if (lookahead == '-') ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      END_STATE();
    case 7:
      if (lookahead == 'a') ADVANCE(18);
      if (lookahead == 'b') ADVANCE(30);
      if (lookahead == 'c') ADVANCE(19);
      if (lookahead == 'd') ADVANCE(20);
      if (lookahead == 'g') ADVANCE(21);
      if (lookahead == 'l') ADVANCE(22);
      if (lookahead == 'p') ADVANCE(23);
      if (lookahead == 's') ADVANCE(24);
      if (lookahead == 'u') ADVANCE(25);
      if (lookahead == 'w') ADVANCE(26);
      if (lookahead == 'x') ADVANCE(27);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(29);
      if (lookahead != 0 &&
          lookahead != '0' &&
          (lookahead < 'A' || 'Z' < lookahead) &&
          lookahead != '_' &&
          (lookahead < 'e' || 'z' < lookahead)) ADVANCE(28);
      END_STATE();
    case 8:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(37);
      END_STATE();
    case 9:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(31);
      END_STATE();
    case 10:
      if (eof) ADVANCE(14);
      if (lookahead == '$') ADVANCE(15);
      if (lookahead == '%') ADVANCE(36);
      if (lookahead == '*') ADVANCE(32);
      if (lookahead == '+') ADVANCE(34);
      if (lookahead == '-') ADVANCE(33);
      if (lookahead == '?') ADVANCE(35);
      if (lookahead == '[') ADVANCE(39);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '(') ADVANCE(17);
      END_STATE();
    case 11:
      if (eof) ADVANCE(14);
      if (lookahead == '$') ADVANCE(15);
      if (lookahead == '%') ADVANCE(36);
      if (lookahead == '[') ADVANCE(39);
      if (lookahead == '^') ADVANCE(16);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '(') ADVANCE(17);
      END_STATE();
    case 12:
      if (eof) ADVANCE(14);
      if (lookahead == '$') ADVANCE(15);
      if (lookahead == '%') ADVANCE(36);
      if (lookahead == '[') ADVANCE(39);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '(') ADVANCE(17);
      END_STATE();
    case 13:
      if (eof) ADVANCE(14);
      if (lookahead == '-') ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      END_STATE();
    case 14:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_anchor_begin);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym__raw_character);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_all_char);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_control_char);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_digit_char);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_printable_char);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_lowercase_char);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_punctuation_char);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_space_char);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_uppercase_char);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_alphanumeric_char);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_hexadecimal_char);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_escape_char);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_capture_index);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_b);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(aux_sym_balanced_match_token1);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_zero_or_more);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_one_or_more);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_zero_or_one);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym_range_token1);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym_range_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(37);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == '^') ADVANCE(41);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_LBRACK_CARET);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_DASH2);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 11},
  [2] = {.lex_state = 7},
  [3] = {.lex_state = 7},
  [4] = {.lex_state = 7},
  [5] = {.lex_state = 12},
  [6] = {.lex_state = 12},
  [7] = {.lex_state = 12},
  [8] = {.lex_state = 12},
  [9] = {.lex_state = 10},
  [10] = {.lex_state = 10},
  [11] = {.lex_state = 10},
  [12] = {.lex_state = 10},
  [13] = {.lex_state = 4},
  [14] = {.lex_state = 4},
  [15] = {.lex_state = 2},
  [16] = {.lex_state = 2},
  [17] = {.lex_state = 5},
  [18] = {.lex_state = 12},
  [19] = {.lex_state = 12},
  [20] = {.lex_state = 12},
  [21] = {.lex_state = 12},
  [22] = {.lex_state = 12},
  [23] = {.lex_state = 12},
  [24] = {.lex_state = 3},
  [25] = {.lex_state = 12},
  [26] = {.lex_state = 1},
  [27] = {.lex_state = 4},
  [28] = {.lex_state = 2},
  [29] = {.lex_state = 4},
  [30] = {.lex_state = 4},
  [31] = {.lex_state = 4},
  [32] = {.lex_state = 4},
  [33] = {.lex_state = 2},
  [34] = {.lex_state = 2},
  [35] = {.lex_state = 2},
  [36] = {.lex_state = 8},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 9},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 9},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 9},
  [43] = {.lex_state = 8},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 9},
  [46] = {.lex_state = 9},
  [47] = {.lex_state = 9},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [sym_anchor_begin] = ACTIONS(1),
    [sym__raw_character] = ACTIONS(1),
    [sym_all_char] = ACTIONS(1),
    [sym_control_char] = ACTIONS(1),
    [sym_digit_char] = ACTIONS(1),
    [sym_printable_char] = ACTIONS(1),
    [sym_lowercase_char] = ACTIONS(1),
    [sym_punctuation_char] = ACTIONS(1),
    [sym_space_char] = ACTIONS(1),
    [sym_uppercase_char] = ACTIONS(1),
    [sym_alphanumeric_char] = ACTIONS(1),
    [sym_hexadecimal_char] = ACTIONS(1),
    [sym_capture_index] = ACTIONS(1),
    [anon_sym_b] = ACTIONS(1),
    [sym_zero_or_more] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [sym_one_or_more] = ACTIONS(1),
    [sym_zero_or_one] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACK_CARET] = ACTIONS(1),
    [anon_sym_DASH2] = ACTIONS(1),
  },
  [1] = {
    [sym_pattern] = STATE(39),
    [sym_anchor_end] = STATE(44),
    [sym_character] = STATE(6),
    [sym__class] = STATE(10),
    [sym_class] = STATE(6),
    [sym_set] = STATE(6),
    [sym_negated_set] = STATE(6),
    [aux_sym_pattern_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_DOLLAR] = ACTIONS(5),
    [sym_anchor_begin] = ACTIONS(7),
    [sym__raw_character] = ACTIONS(9),
    [anon_sym_PERCENT] = ACTIONS(11),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_LBRACK_CARET] = ACTIONS(15),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(19), 1,
      anon_sym_b,
    STATE(11), 1,
      sym_balanced_match,
    ACTIONS(17), 12,
      sym_all_char,
      sym_control_char,
      sym_digit_char,
      sym_printable_char,
      sym_lowercase_char,
      sym_punctuation_char,
      sym_space_char,
      sym_uppercase_char,
      sym_alphanumeric_char,
      sym_hexadecimal_char,
      sym_escape_char,
      sym_capture_index,
  [21] = 3,
    ACTIONS(23), 1,
      anon_sym_b,
    STATE(34), 1,
      sym_balanced_match,
    ACTIONS(21), 12,
      sym_all_char,
      sym_control_char,
      sym_digit_char,
      sym_printable_char,
      sym_lowercase_char,
      sym_punctuation_char,
      sym_space_char,
      sym_uppercase_char,
      sym_alphanumeric_char,
      sym_hexadecimal_char,
      sym_escape_char,
      sym_capture_index,
  [42] = 3,
    ACTIONS(27), 1,
      anon_sym_b,
    STATE(27), 1,
      sym_balanced_match,
    ACTIONS(25), 12,
      sym_all_char,
      sym_control_char,
      sym_digit_char,
      sym_printable_char,
      sym_lowercase_char,
      sym_punctuation_char,
      sym_space_char,
      sym_uppercase_char,
      sym_alphanumeric_char,
      sym_hexadecimal_char,
      sym_escape_char,
      sym_capture_index,
  [63] = 9,
    ACTIONS(5), 1,
      anon_sym_DOLLAR,
    ACTIONS(9), 1,
      sym__raw_character,
    ACTIONS(11), 1,
      anon_sym_PERCENT,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    ACTIONS(15), 1,
      anon_sym_LBRACK_CARET,
    ACTIONS(29), 1,
      ts_builtin_sym_end,
    STATE(10), 1,
      sym__class,
    STATE(41), 1,
      sym_anchor_end,
    STATE(7), 5,
      sym_character,
      sym_class,
      sym_set,
      sym_negated_set,
      aux_sym_pattern_repeat1,
  [95] = 9,
    ACTIONS(5), 1,
      anon_sym_DOLLAR,
    ACTIONS(9), 1,
      sym__raw_character,
    ACTIONS(11), 1,
      anon_sym_PERCENT,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    ACTIONS(15), 1,
      anon_sym_LBRACK_CARET,
    ACTIONS(29), 1,
      ts_builtin_sym_end,
    STATE(10), 1,
      sym__class,
    STATE(41), 1,
      sym_anchor_end,
    STATE(8), 5,
      sym_character,
      sym_class,
      sym_set,
      sym_negated_set,
      aux_sym_pattern_repeat1,
  [127] = 9,
    ACTIONS(5), 1,
      anon_sym_DOLLAR,
    ACTIONS(9), 1,
      sym__raw_character,
    ACTIONS(11), 1,
      anon_sym_PERCENT,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    ACTIONS(15), 1,
      anon_sym_LBRACK_CARET,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
    STATE(10), 1,
      sym__class,
    STATE(37), 1,
      sym_anchor_end,
    STATE(8), 5,
      sym_character,
      sym_class,
      sym_set,
      sym_negated_set,
      aux_sym_pattern_repeat1,
  [159] = 8,
    ACTIONS(33), 1,
      ts_builtin_sym_end,
    ACTIONS(35), 1,
      anon_sym_DOLLAR,
    ACTIONS(38), 1,
      sym__raw_character,
    ACTIONS(41), 1,
      anon_sym_PERCENT,
    ACTIONS(44), 1,
      anon_sym_LBRACK,
    ACTIONS(47), 1,
      anon_sym_LBRACK_CARET,
    STATE(10), 1,
      sym__class,
    STATE(8), 5,
      sym_character,
      sym_class,
      sym_set,
      sym_negated_set,
      aux_sym_pattern_repeat1,
  [188] = 5,
    ACTIONS(56), 1,
      anon_sym_DASH,
    STATE(19), 1,
      sym_shortest_zero_or_more,
    ACTIONS(52), 2,
      sym__raw_character,
      anon_sym_LBRACK,
    ACTIONS(54), 3,
      sym_zero_or_more,
      sym_one_or_more,
      sym_zero_or_one,
    ACTIONS(50), 4,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
      anon_sym_PERCENT,
      anon_sym_LBRACK_CARET,
  [210] = 5,
    ACTIONS(56), 1,
      anon_sym_DASH,
    STATE(23), 1,
      sym_shortest_zero_or_more,
    ACTIONS(60), 2,
      sym__raw_character,
      anon_sym_LBRACK,
    ACTIONS(62), 3,
      sym_zero_or_more,
      sym_one_or_more,
      sym_zero_or_one,
    ACTIONS(58), 4,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
      anon_sym_PERCENT,
      anon_sym_LBRACK_CARET,
  [232] = 2,
    ACTIONS(66), 2,
      sym__raw_character,
      anon_sym_LBRACK,
    ACTIONS(64), 8,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
      sym_zero_or_more,
      anon_sym_DASH,
      sym_one_or_more,
      sym_zero_or_one,
      anon_sym_PERCENT,
      anon_sym_LBRACK_CARET,
  [247] = 2,
    ACTIONS(70), 2,
      sym__raw_character,
      anon_sym_LBRACK,
    ACTIONS(68), 8,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
      sym_zero_or_more,
      anon_sym_DASH,
      sym_one_or_more,
      sym_zero_or_one,
      anon_sym_PERCENT,
      anon_sym_LBRACK_CARET,
  [262] = 5,
    ACTIONS(72), 1,
      sym__raw_character,
    ACTIONS(74), 1,
      anon_sym_DASH,
    ACTIONS(76), 1,
      anon_sym_PERCENT,
    ACTIONS(78), 1,
      anon_sym_RBRACK,
    STATE(14), 3,
      sym__class,
      sym_range,
      aux_sym_set_repeat1,
  [280] = 5,
    ACTIONS(80), 1,
      sym__raw_character,
    ACTIONS(83), 1,
      anon_sym_DASH,
    ACTIONS(86), 1,
      anon_sym_PERCENT,
    ACTIONS(89), 1,
      anon_sym_RBRACK,
    STATE(14), 3,
      sym__class,
      sym_range,
      aux_sym_set_repeat1,
  [298] = 5,
    ACTIONS(91), 1,
      sym__raw_character,
    ACTIONS(93), 1,
      anon_sym_PERCENT,
    ACTIONS(95), 1,
      anon_sym_RBRACK,
    ACTIONS(97), 1,
      anon_sym_DASH2,
    STATE(16), 3,
      sym__class,
      sym_range,
      aux_sym_negated_set_repeat1,
  [316] = 5,
    ACTIONS(99), 1,
      sym__raw_character,
    ACTIONS(102), 1,
      anon_sym_PERCENT,
    ACTIONS(105), 1,
      anon_sym_RBRACK,
    ACTIONS(107), 1,
      anon_sym_DASH2,
    STATE(16), 3,
      sym__class,
      sym_range,
      aux_sym_negated_set_repeat1,
  [334] = 4,
    ACTIONS(72), 1,
      sym__raw_character,
    ACTIONS(74), 1,
      anon_sym_DASH,
    ACTIONS(76), 1,
      anon_sym_PERCENT,
    STATE(13), 3,
      sym__class,
      sym_range,
      aux_sym_set_repeat1,
  [349] = 2,
    ACTIONS(112), 2,
      sym__raw_character,
      anon_sym_LBRACK,
    ACTIONS(110), 4,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
      anon_sym_PERCENT,
      anon_sym_LBRACK_CARET,
  [360] = 2,
    ACTIONS(116), 2,
      sym__raw_character,
      anon_sym_LBRACK,
    ACTIONS(114), 4,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
      anon_sym_PERCENT,
      anon_sym_LBRACK_CARET,
  [371] = 2,
    ACTIONS(120), 2,
      sym__raw_character,
      anon_sym_LBRACK,
    ACTIONS(118), 4,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
      anon_sym_PERCENT,
      anon_sym_LBRACK_CARET,
  [382] = 2,
    ACTIONS(124), 2,
      sym__raw_character,
      anon_sym_LBRACK,
    ACTIONS(122), 4,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
      anon_sym_PERCENT,
      anon_sym_LBRACK_CARET,
  [393] = 3,
    ACTIONS(126), 1,
      ts_builtin_sym_end,
    ACTIONS(112), 2,
      sym__raw_character,
      anon_sym_LBRACK,
    ACTIONS(110), 3,
      anon_sym_DOLLAR,
      anon_sym_PERCENT,
      anon_sym_LBRACK_CARET,
  [406] = 2,
    ACTIONS(130), 2,
      sym__raw_character,
      anon_sym_LBRACK,
    ACTIONS(128), 4,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
      anon_sym_PERCENT,
      anon_sym_LBRACK_CARET,
  [417] = 4,
    ACTIONS(91), 1,
      sym__raw_character,
    ACTIONS(93), 1,
      anon_sym_PERCENT,
    ACTIONS(97), 1,
      anon_sym_DASH2,
    STATE(15), 3,
      sym__class,
      sym_range,
      aux_sym_negated_set_repeat1,
  [432] = 2,
    ACTIONS(134), 2,
      sym__raw_character,
      anon_sym_LBRACK,
    ACTIONS(132), 4,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
      anon_sym_PERCENT,
      anon_sym_LBRACK_CARET,
  [443] = 3,
    ACTIONS(138), 1,
      anon_sym_DASH,
    ACTIONS(136), 2,
      sym__raw_character,
      anon_sym_DASH2,
    ACTIONS(140), 2,
      anon_sym_PERCENT,
      anon_sym_RBRACK,
  [455] = 2,
    ACTIONS(66), 1,
      sym__raw_character,
    ACTIONS(64), 3,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_RBRACK,
  [464] = 2,
    ACTIONS(136), 2,
      sym__raw_character,
      anon_sym_DASH2,
    ACTIONS(140), 2,
      anon_sym_PERCENT,
      anon_sym_RBRACK,
  [473] = 2,
    ACTIONS(142), 1,
      sym__raw_character,
    ACTIONS(144), 3,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_RBRACK,
  [482] = 3,
    ACTIONS(142), 1,
      sym__raw_character,
    ACTIONS(146), 1,
      anon_sym_DASH,
    ACTIONS(144), 2,
      anon_sym_PERCENT,
      anon_sym_RBRACK,
  [493] = 2,
    ACTIONS(149), 1,
      sym__raw_character,
    ACTIONS(151), 3,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_RBRACK,
  [502] = 2,
    ACTIONS(70), 1,
      sym__raw_character,
    ACTIONS(68), 3,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_RBRACK,
  [511] = 2,
    ACTIONS(149), 2,
      sym__raw_character,
      anon_sym_DASH2,
    ACTIONS(151), 2,
      anon_sym_PERCENT,
      anon_sym_RBRACK,
  [520] = 2,
    ACTIONS(64), 2,
      anon_sym_PERCENT,
      anon_sym_RBRACK,
    ACTIONS(66), 2,
      sym__raw_character,
      anon_sym_DASH2,
  [529] = 2,
    ACTIONS(68), 2,
      anon_sym_PERCENT,
      anon_sym_RBRACK,
    ACTIONS(70), 2,
      sym__raw_character,
      anon_sym_DASH2,
  [538] = 1,
    ACTIONS(153), 1,
      aux_sym_range_token1,
  [542] = 1,
    ACTIONS(155), 1,
      ts_builtin_sym_end,
  [546] = 1,
    ACTIONS(157), 1,
      aux_sym_balanced_match_token1,
  [550] = 1,
    ACTIONS(159), 1,
      ts_builtin_sym_end,
  [554] = 1,
    ACTIONS(161), 1,
      aux_sym_balanced_match_token1,
  [558] = 1,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
  [562] = 1,
    ACTIONS(163), 1,
      aux_sym_balanced_match_token1,
  [566] = 1,
    ACTIONS(165), 1,
      aux_sym_range_token1,
  [570] = 1,
    ACTIONS(29), 1,
      ts_builtin_sym_end,
  [574] = 1,
    ACTIONS(167), 1,
      aux_sym_balanced_match_token1,
  [578] = 1,
    ACTIONS(169), 1,
      aux_sym_balanced_match_token1,
  [582] = 1,
    ACTIONS(171), 1,
      aux_sym_balanced_match_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 21,
  [SMALL_STATE(4)] = 42,
  [SMALL_STATE(5)] = 63,
  [SMALL_STATE(6)] = 95,
  [SMALL_STATE(7)] = 127,
  [SMALL_STATE(8)] = 159,
  [SMALL_STATE(9)] = 188,
  [SMALL_STATE(10)] = 210,
  [SMALL_STATE(11)] = 232,
  [SMALL_STATE(12)] = 247,
  [SMALL_STATE(13)] = 262,
  [SMALL_STATE(14)] = 280,
  [SMALL_STATE(15)] = 298,
  [SMALL_STATE(16)] = 316,
  [SMALL_STATE(17)] = 334,
  [SMALL_STATE(18)] = 349,
  [SMALL_STATE(19)] = 360,
  [SMALL_STATE(20)] = 371,
  [SMALL_STATE(21)] = 382,
  [SMALL_STATE(22)] = 393,
  [SMALL_STATE(23)] = 406,
  [SMALL_STATE(24)] = 417,
  [SMALL_STATE(25)] = 432,
  [SMALL_STATE(26)] = 443,
  [SMALL_STATE(27)] = 455,
  [SMALL_STATE(28)] = 464,
  [SMALL_STATE(29)] = 473,
  [SMALL_STATE(30)] = 482,
  [SMALL_STATE(31)] = 493,
  [SMALL_STATE(32)] = 502,
  [SMALL_STATE(33)] = 511,
  [SMALL_STATE(34)] = 520,
  [SMALL_STATE(35)] = 529,
  [SMALL_STATE(36)] = 538,
  [SMALL_STATE(37)] = 542,
  [SMALL_STATE(38)] = 546,
  [SMALL_STATE(39)] = 550,
  [SMALL_STATE(40)] = 554,
  [SMALL_STATE(41)] = 558,
  [SMALL_STATE(42)] = 562,
  [SMALL_STATE(43)] = 566,
  [SMALL_STATE(44)] = 570,
  [SMALL_STATE(45)] = 574,
  [SMALL_STATE(46)] = 578,
  [SMALL_STATE(47)] = 582,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 1),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 2),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pattern_repeat1, 2),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pattern_repeat1, 2), SHIFT_REPEAT(18),
  [38] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_pattern_repeat1, 2), SHIFT_REPEAT(9),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pattern_repeat1, 2), SHIFT_REPEAT(2),
  [44] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_pattern_repeat1, 2), SHIFT_REPEAT(17),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pattern_repeat1, 2), SHIFT_REPEAT(24),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_character, 1),
  [52] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_character, 1),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class, 1),
  [60] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class, 1),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__class, 2),
  [66] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__class, 2),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_balanced_match, 3, .production_id = 2),
  [70] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_balanced_match, 3, .production_id = 2),
  [72] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [80] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_set_repeat1, 2), SHIFT_REPEAT(30),
  [83] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_set_repeat1, 2), SHIFT_REPEAT(29),
  [86] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_set_repeat1, 2), SHIFT_REPEAT(4),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_set_repeat1, 2),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [99] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_negated_set_repeat1, 2), SHIFT_REPEAT(26),
  [102] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_negated_set_repeat1, 2), SHIFT_REPEAT(3),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_negated_set_repeat1, 2),
  [107] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_negated_set_repeat1, 2), SHIFT_REPEAT(28),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pattern_repeat1, 1, .production_id = 1),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_pattern_repeat1, 1, .production_id = 1),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_character, 2),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_character, 2),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shortest_zero_or_more, 1),
  [120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shortest_zero_or_more, 1),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_negated_set, 3),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_negated_set, 3),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_anchor_end, 1),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class, 2),
  [130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class, 2),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set, 3),
  [134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_set, 3),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_negated_set_repeat1, 1, .production_id = 1),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_negated_set_repeat1, 1, .production_id = 1),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_set_repeat1, 1, .production_id = 1),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_set_repeat1, 1, .production_id = 1),
  [146] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_set_repeat1, 1, .production_id = 1), SHIFT(36),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_range, 3, .dynamic_precedence = 1, .production_id = 3),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range, 3, .dynamic_precedence = 1, .production_id = 3),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 3),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [159] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_luap(void) {
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
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
