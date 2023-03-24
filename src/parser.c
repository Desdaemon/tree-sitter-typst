#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 463
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 131
#define ALIAS_COUNT 1
#define TOKEN_COUNT 79
#define EXTERNAL_TOKEN_COUNT 2
#define FIELD_COUNT 16
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 18

enum {
  sym_identifier = 1,
  sym__whitespace = 2,
  sym_line_comment = 3,
  sym_line_break = 4,
  anon_sym_DQUOTE = 5,
  aux_sym__text_token1 = 6,
  anon_sym_SLASH = 7,
  anon_sym_TILDE = 8,
  anon_sym_DASH = 9,
  anon_sym_PLUS = 10,
  anon_sym_LPAREN = 11,
  anon_sym_RPAREN = 12,
  anon_sym_SQUOTE = 13,
  anon_sym_DOT = 14,
  anon_sym_COLON = 15,
  anon_sym_STAR = 16,
  anon_sym__ = 17,
  anon_sym_BQUOTE = 18,
  anon_sym_DOLLAR = 19,
  anon_sym_EQ = 20,
  anon_sym_LT = 21,
  anon_sym_GT = 22,
  anon_sym_AT = 23,
  anon_sym_COMMA = 24,
  anon_sym_SEMI = 25,
  anon_sym_QMARK = 26,
  anon_sym_BANG = 27,
  anon_sym_PERCENT = 28,
  anon_sym_POUND = 29,
  anon_sym_LBRACE = 30,
  anon_sym_RBRACE = 31,
  anon_sym_LBRACK = 32,
  anon_sym_RBRACK = 33,
  anon_sym_COMMA2 = 34,
  anon_sym_SEMI2 = 35,
  anon_sym_break = 36,
  anon_sym_continue = 37,
  anon_sym_let = 38,
  anon_sym_if = 39,
  anon_sym_else = 40,
  anon_sym_while = 41,
  anon_sym_for = 42,
  anon_sym_in = 43,
  anon_sym_EQ_GT = 44,
  anon_sym_LPAREN2 = 45,
  anon_sym_DOT_DOT = 46,
  anon_sym_DOT2 = 47,
  anon_sym_SQUOTE2 = 48,
  anon_sym_QMARK2 = 49,
  anon_sym_BANG2 = 50,
  sym_none = 51,
  anon_sym_true = 52,
  anon_sym_false = 53,
  sym_int_literal = 54,
  sym_float_literal = 55,
  anon_sym_pt = 56,
  anon_sym_mm = 57,
  anon_sym_cm = 58,
  anon_sym_deg = 59,
  anon_sym_rad = 60,
  anon_sym_em = 61,
  anon_sym_fr = 62,
  aux_sym_string_literal_token1 = 63,
  sym__not_an_escape_sequence = 64,
  sym_escape_sequence = 65,
  anon_sym_not = 66,
  anon_sym_and = 67,
  anon_sym_or = 68,
  anon_sym_LT_EQ = 69,
  anon_sym_EQ_EQ = 70,
  anon_sym_BANG_EQ = 71,
  anon_sym_GT_EQ = 72,
  anon_sym_PLUS_EQ = 73,
  anon_sym_DASH_EQ = 74,
  anon_sym_STAR_EQ = 75,
  anon_sym_SLASH_EQ = 76,
  sym__string_content = 77,
  sym_block_comment = 78,
  sym_source_file = 79,
  sym__markup = 80,
  sym_quote = 81,
  aux_sym__text = 82,
  sym__code_mode = 83,
  sym__code_block = 84,
  sym_code_block = 85,
  sym_content_block = 86,
  sym_parenthesized_expression = 87,
  sym_array = 88,
  sym__array = 89,
  aux_sym__weird_edge_case = 90,
  sym__statements = 91,
  sym__expression_statement = 92,
  sym__control_flow = 93,
  sym_break_statement = 94,
  sym_continue_statement = 95,
  sym_let_declaration = 96,
  sym_if_expression = 97,
  sym_else_clause = 98,
  sym_while_expression = 99,
  sym_for_expression = 100,
  sym_unnamed_function = 101,
  sym__unnamed_arguments = 102,
  sym_parameters = 103,
  sym__parameters = 104,
  sym__parameter = 105,
  sym_asssigned_parameter = 106,
  sym_function = 107,
  sym_pattern = 108,
  sym_pattern_list = 109,
  sym__literal = 110,
  sym_expression = 111,
  sym_assignment = 112,
  sym_function_call = 113,
  sym_boolean_literal = 114,
  sym_unit = 115,
  sym_numeric = 116,
  sym_string_literal = 117,
  sym_unary_operator = 118,
  sym_not_operator = 119,
  sym_boolean_operator = 120,
  sym_binary_operator = 121,
  sym_comparison_operator = 122,
  sym_augmented_assignment = 123,
  aux_sym_source_file_repeat1 = 124,
  aux_sym_quote_repeat1 = 125,
  aux_sym__array_repeat1 = 126,
  aux_sym__statements_repeat1 = 127,
  aux_sym__unnamed_arguments_repeat1 = 128,
  aux_sym_pattern_list_repeat1 = 129,
  aux_sym_string_literal_repeat1 = 130,
  anon_alias_sym_notin = 131,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [sym__whitespace] = "_whitespace",
  [sym_line_comment] = "line_comment",
  [sym_line_break] = "line_break",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym__text_token1] = "_text_token1",
  [anon_sym_SLASH] = "/",
  [anon_sym_TILDE] = "~",
  [anon_sym_DASH] = "-",
  [anon_sym_PLUS] = "+",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_SQUOTE] = "'",
  [anon_sym_DOT] = ".",
  [anon_sym_COLON] = ":",
  [anon_sym_STAR] = "*",
  [anon_sym__] = "_",
  [anon_sym_BQUOTE] = "`",
  [anon_sym_DOLLAR] = "$",
  [anon_sym_EQ] = "=",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [anon_sym_AT] = "@",
  [anon_sym_COMMA] = ",",
  [anon_sym_SEMI] = ";",
  [anon_sym_QMARK] = "\?",
  [anon_sym_BANG] = "!",
  [anon_sym_PERCENT] = "%",
  [anon_sym_POUND] = "#",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_COMMA2] = ",",
  [anon_sym_SEMI2] = ";",
  [anon_sym_break] = "break",
  [anon_sym_continue] = "continue",
  [anon_sym_let] = "let",
  [anon_sym_if] = "if",
  [anon_sym_else] = "else",
  [anon_sym_while] = "while",
  [anon_sym_for] = "for",
  [anon_sym_in] = "in",
  [anon_sym_EQ_GT] = "=>",
  [anon_sym_LPAREN2] = "(",
  [anon_sym_DOT_DOT] = "..",
  [anon_sym_DOT2] = ".",
  [anon_sym_SQUOTE2] = "'",
  [anon_sym_QMARK2] = "\?",
  [anon_sym_BANG2] = "!",
  [sym_none] = "none",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [sym_int_literal] = "int_literal",
  [sym_float_literal] = "float_literal",
  [anon_sym_pt] = "pt",
  [anon_sym_mm] = "mm",
  [anon_sym_cm] = "cm",
  [anon_sym_deg] = "deg",
  [anon_sym_rad] = "rad",
  [anon_sym_em] = "em",
  [anon_sym_fr] = "fr",
  [aux_sym_string_literal_token1] = "string_literal_token1",
  [sym__not_an_escape_sequence] = "_not_an_escape_sequence",
  [sym_escape_sequence] = "escape_sequence",
  [anon_sym_not] = "not",
  [anon_sym_and] = "and",
  [anon_sym_or] = "or",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_PLUS_EQ] = "+=",
  [anon_sym_DASH_EQ] = "-=",
  [anon_sym_STAR_EQ] = "*=",
  [anon_sym_SLASH_EQ] = "/=",
  [sym__string_content] = "_string_content",
  [sym_block_comment] = "block_comment",
  [sym_source_file] = "source_file",
  [sym__markup] = "_markup",
  [sym_quote] = "quote",
  [aux_sym__text] = "_text",
  [sym__code_mode] = "_code_mode",
  [sym__code_block] = "_code_block",
  [sym_code_block] = "code_block",
  [sym_content_block] = "content_block",
  [sym_parenthesized_expression] = "parenthesized_expression",
  [sym_array] = "array",
  [sym__array] = "_array",
  [aux_sym__weird_edge_case] = "_weird_edge_case",
  [sym__statements] = "_statements",
  [sym__expression_statement] = "_expression_statement",
  [sym__control_flow] = "_control_flow",
  [sym_break_statement] = "break_statement",
  [sym_continue_statement] = "continue_statement",
  [sym_let_declaration] = "let_declaration",
  [sym_if_expression] = "if_expression",
  [sym_else_clause] = "else_clause",
  [sym_while_expression] = "while_expression",
  [sym_for_expression] = "for_expression",
  [sym_unnamed_function] = "unnamed_function",
  [sym__unnamed_arguments] = "_unnamed_arguments",
  [sym_parameters] = "parameters",
  [sym__parameters] = "_parameters",
  [sym__parameter] = "_parameter",
  [sym_asssigned_parameter] = "asssigned_parameter",
  [sym_function] = "function",
  [sym_pattern] = "pattern",
  [sym_pattern_list] = "pattern_list",
  [sym__literal] = "_literal",
  [sym_expression] = "expression",
  [sym_assignment] = "assignment",
  [sym_function_call] = "function_call",
  [sym_boolean_literal] = "boolean_literal",
  [sym_unit] = "unit",
  [sym_numeric] = "numeric",
  [sym_string_literal] = "string_literal",
  [sym_unary_operator] = "unary_operator",
  [sym_not_operator] = "not_operator",
  [sym_boolean_operator] = "boolean_operator",
  [sym_binary_operator] = "binary_operator",
  [sym_comparison_operator] = "comparison_operator",
  [sym_augmented_assignment] = "augmented_assignment",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_quote_repeat1] = "quote_repeat1",
  [aux_sym__array_repeat1] = "_array_repeat1",
  [aux_sym__statements_repeat1] = "_statements_repeat1",
  [aux_sym__unnamed_arguments_repeat1] = "_unnamed_arguments_repeat1",
  [aux_sym_pattern_list_repeat1] = "pattern_list_repeat1",
  [aux_sym_string_literal_repeat1] = "string_literal_repeat1",
  [anon_alias_sym_notin] = "not in",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [sym__whitespace] = sym__whitespace,
  [sym_line_comment] = sym_line_comment,
  [sym_line_break] = sym_line_break,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym__text_token1] = aux_sym__text_token1,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_TILDE] = anon_sym_TILDE,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym__] = anon_sym__,
  [anon_sym_BQUOTE] = anon_sym_BQUOTE,
  [anon_sym_DOLLAR] = anon_sym_DOLLAR,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_AT] = anon_sym_AT,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_QMARK] = anon_sym_QMARK,
  [anon_sym_BANG] = anon_sym_BANG,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [anon_sym_POUND] = anon_sym_POUND,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_COMMA2] = anon_sym_COMMA,
  [anon_sym_SEMI2] = anon_sym_SEMI,
  [anon_sym_break] = anon_sym_break,
  [anon_sym_continue] = anon_sym_continue,
  [anon_sym_let] = anon_sym_let,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_else] = anon_sym_else,
  [anon_sym_while] = anon_sym_while,
  [anon_sym_for] = anon_sym_for,
  [anon_sym_in] = anon_sym_in,
  [anon_sym_EQ_GT] = anon_sym_EQ_GT,
  [anon_sym_LPAREN2] = anon_sym_LPAREN,
  [anon_sym_DOT_DOT] = anon_sym_DOT_DOT,
  [anon_sym_DOT2] = anon_sym_DOT,
  [anon_sym_SQUOTE2] = anon_sym_SQUOTE,
  [anon_sym_QMARK2] = anon_sym_QMARK,
  [anon_sym_BANG2] = anon_sym_BANG,
  [sym_none] = sym_none,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [sym_int_literal] = sym_int_literal,
  [sym_float_literal] = sym_float_literal,
  [anon_sym_pt] = anon_sym_pt,
  [anon_sym_mm] = anon_sym_mm,
  [anon_sym_cm] = anon_sym_cm,
  [anon_sym_deg] = anon_sym_deg,
  [anon_sym_rad] = anon_sym_rad,
  [anon_sym_em] = anon_sym_em,
  [anon_sym_fr] = anon_sym_fr,
  [aux_sym_string_literal_token1] = aux_sym_string_literal_token1,
  [sym__not_an_escape_sequence] = sym__not_an_escape_sequence,
  [sym_escape_sequence] = sym_escape_sequence,
  [anon_sym_not] = anon_sym_not,
  [anon_sym_and] = anon_sym_and,
  [anon_sym_or] = anon_sym_or,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_PLUS_EQ] = anon_sym_PLUS_EQ,
  [anon_sym_DASH_EQ] = anon_sym_DASH_EQ,
  [anon_sym_STAR_EQ] = anon_sym_STAR_EQ,
  [anon_sym_SLASH_EQ] = anon_sym_SLASH_EQ,
  [sym__string_content] = sym__string_content,
  [sym_block_comment] = sym_block_comment,
  [sym_source_file] = sym_source_file,
  [sym__markup] = sym__markup,
  [sym_quote] = sym_quote,
  [aux_sym__text] = aux_sym__text,
  [sym__code_mode] = sym__code_mode,
  [sym__code_block] = sym__code_block,
  [sym_code_block] = sym_code_block,
  [sym_content_block] = sym_content_block,
  [sym_parenthesized_expression] = sym_parenthesized_expression,
  [sym_array] = sym_array,
  [sym__array] = sym__array,
  [aux_sym__weird_edge_case] = aux_sym__weird_edge_case,
  [sym__statements] = sym__statements,
  [sym__expression_statement] = sym__expression_statement,
  [sym__control_flow] = sym__control_flow,
  [sym_break_statement] = sym_break_statement,
  [sym_continue_statement] = sym_continue_statement,
  [sym_let_declaration] = sym_let_declaration,
  [sym_if_expression] = sym_if_expression,
  [sym_else_clause] = sym_else_clause,
  [sym_while_expression] = sym_while_expression,
  [sym_for_expression] = sym_for_expression,
  [sym_unnamed_function] = sym_unnamed_function,
  [sym__unnamed_arguments] = sym__unnamed_arguments,
  [sym_parameters] = sym_parameters,
  [sym__parameters] = sym__parameters,
  [sym__parameter] = sym__parameter,
  [sym_asssigned_parameter] = sym_asssigned_parameter,
  [sym_function] = sym_function,
  [sym_pattern] = sym_pattern,
  [sym_pattern_list] = sym_pattern_list,
  [sym__literal] = sym__literal,
  [sym_expression] = sym_expression,
  [sym_assignment] = sym_assignment,
  [sym_function_call] = sym_function_call,
  [sym_boolean_literal] = sym_boolean_literal,
  [sym_unit] = sym_unit,
  [sym_numeric] = sym_numeric,
  [sym_string_literal] = sym_string_literal,
  [sym_unary_operator] = sym_unary_operator,
  [sym_not_operator] = sym_not_operator,
  [sym_boolean_operator] = sym_boolean_operator,
  [sym_binary_operator] = sym_binary_operator,
  [sym_comparison_operator] = sym_comparison_operator,
  [sym_augmented_assignment] = sym_augmented_assignment,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_quote_repeat1] = aux_sym_quote_repeat1,
  [aux_sym__array_repeat1] = aux_sym__array_repeat1,
  [aux_sym__statements_repeat1] = aux_sym__statements_repeat1,
  [aux_sym__unnamed_arguments_repeat1] = aux_sym__unnamed_arguments_repeat1,
  [aux_sym_pattern_list_repeat1] = aux_sym_pattern_list_repeat1,
  [aux_sym_string_literal_repeat1] = aux_sym_string_literal_repeat1,
  [anon_alias_sym_notin] = anon_alias_sym_notin,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym__whitespace] = {
    .visible = false,
    .named = true,
  },
  [sym_line_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_line_break] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__text_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TILDE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym__] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QMARK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_break] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_continue] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_let] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_if] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_else] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_while] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_for] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_in] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QMARK2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG2] = {
    .visible = true,
    .named = false,
  },
  [sym_none] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [sym_int_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_float_literal] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_pt] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mm] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cm] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_deg] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rad] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_em] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fr] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_literal_token1] = {
    .visible = false,
    .named = false,
  },
  [sym__not_an_escape_sequence] = {
    .visible = false,
    .named = true,
  },
  [sym_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_not] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_and] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_or] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH_EQ] = {
    .visible = true,
    .named = false,
  },
  [sym__string_content] = {
    .visible = false,
    .named = true,
  },
  [sym_block_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__markup] = {
    .visible = false,
    .named = true,
  },
  [sym_quote] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__text] = {
    .visible = false,
    .named = false,
  },
  [sym__code_mode] = {
    .visible = false,
    .named = true,
  },
  [sym__code_block] = {
    .visible = false,
    .named = true,
  },
  [sym_code_block] = {
    .visible = true,
    .named = true,
  },
  [sym_content_block] = {
    .visible = true,
    .named = true,
  },
  [sym_parenthesized_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_array] = {
    .visible = true,
    .named = true,
  },
  [sym__array] = {
    .visible = false,
    .named = true,
  },
  [aux_sym__weird_edge_case] = {
    .visible = false,
    .named = false,
  },
  [sym__statements] = {
    .visible = false,
    .named = true,
  },
  [sym__expression_statement] = {
    .visible = false,
    .named = true,
  },
  [sym__control_flow] = {
    .visible = false,
    .named = true,
  },
  [sym_break_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_continue_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_let_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_if_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_else_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_while_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_for_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_unnamed_function] = {
    .visible = true,
    .named = true,
  },
  [sym__unnamed_arguments] = {
    .visible = false,
    .named = true,
  },
  [sym_parameters] = {
    .visible = true,
    .named = true,
  },
  [sym__parameters] = {
    .visible = false,
    .named = true,
  },
  [sym__parameter] = {
    .visible = false,
    .named = true,
  },
  [sym_asssigned_parameter] = {
    .visible = true,
    .named = true,
  },
  [sym_function] = {
    .visible = true,
    .named = true,
  },
  [sym_pattern] = {
    .visible = true,
    .named = true,
  },
  [sym_pattern_list] = {
    .visible = true,
    .named = true,
  },
  [sym__literal] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym_expression] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym_assignment] = {
    .visible = true,
    .named = true,
  },
  [sym_function_call] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_unit] = {
    .visible = true,
    .named = true,
  },
  [sym_numeric] = {
    .visible = true,
    .named = true,
  },
  [sym_string_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_unary_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_not_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_comparison_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_augmented_assignment] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_quote_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__array_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__statements_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__unnamed_arguments_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_pattern_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_literal_repeat1] = {
    .visible = false,
    .named = false,
  },
  [anon_alias_sym_notin] = {
    .visible = true,
    .named = false,
  },
};

enum {
  field_alternative = 1,
  field_argument = 2,
  field_arguments = 3,
  field_body = 4,
  field_condition = 5,
  field_consequence = 6,
  field_field = 7,
  field_function = 8,
  field_left = 9,
  field_lhs = 10,
  field_name = 11,
  field_operator = 12,
  field_parameters = 13,
  field_rhs = 14,
  field_right = 15,
  field_value = 16,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_alternative] = "alternative",
  [field_argument] = "argument",
  [field_arguments] = "arguments",
  [field_body] = "body",
  [field_condition] = "condition",
  [field_consequence] = "consequence",
  [field_field] = "field",
  [field_function] = "function",
  [field_left] = "left",
  [field_lhs] = "lhs",
  [field_name] = "name",
  [field_operator] = "operator",
  [field_parameters] = "parameters",
  [field_rhs] = "rhs",
  [field_right] = "right",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
  [3] = {.index = 3, .length = 2},
  [4] = {.index = 5, .length = 1},
  [5] = {.index = 6, .length = 2},
  [6] = {.index = 8, .length = 2},
  [7] = {.index = 10, .length = 3},
  [8] = {.index = 13, .length = 2},
  [9] = {.index = 15, .length = 2},
  [10] = {.index = 17, .length = 2},
  [11] = {.index = 19, .length = 2},
  [12] = {.index = 21, .length = 3},
  [13] = {.index = 24, .length = 2},
  [14] = {.index = 26, .length = 2},
  [15] = {.index = 28, .length = 3},
  [16] = {.index = 31, .length = 4},
  [17] = {.index = 35, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_function, 0},
  [1] =
    {field_arguments, 1},
    {field_function, 0},
  [3] =
    {field_argument, 1},
    {field_operator, 0},
  [5] =
    {field_argument, 1},
  [6] =
    {field_lhs, 0},
    {field_rhs, 2},
  [8] =
    {field_field, 2},
    {field_function, 0},
  [10] =
    {field_left, 0},
    {field_operator, 1},
    {field_right, 2},
  [13] =
    {field_name, 0},
    {field_parameters, 1},
  [15] =
    {field_condition, 1},
    {field_consequence, 2},
  [17] =
    {field_body, 2},
    {field_condition, 1},
  [19] =
    {field_arguments, 0},
    {field_body, 2},
  [21] =
    {field_arguments, 1},
    {field_field, 3},
    {field_function, 0},
  [24] =
    {field_name, 0},
    {field_value, 2},
  [26] =
    {field_lhs, 1},
    {field_rhs, 3},
  [28] =
    {field_alternative, 3},
    {field_condition, 1},
    {field_consequence, 2},
  [31] =
    {field_left, 0},
    {field_operator, 1},
    {field_operator, 2},
    {field_right, 3},
  [35] =
    {field_body, 4},
    {field_left, 1},
    {field_value, 3},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [16] = {
    [1] = anon_alias_sym_notin,
    [2] = anon_alias_sym_notin,
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
  [5] = 2,
  [6] = 2,
  [7] = 2,
  [8] = 2,
  [9] = 2,
  [10] = 2,
  [11] = 2,
  [12] = 12,
  [13] = 13,
  [14] = 13,
  [15] = 15,
  [16] = 16,
  [17] = 16,
  [18] = 18,
  [19] = 18,
  [20] = 13,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 22,
  [25] = 21,
  [26] = 23,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 27,
  [33] = 18,
  [34] = 30,
  [35] = 35,
  [36] = 29,
  [37] = 37,
  [38] = 37,
  [39] = 35,
  [40] = 27,
  [41] = 31,
  [42] = 42,
  [43] = 30,
  [44] = 28,
  [45] = 30,
  [46] = 35,
  [47] = 47,
  [48] = 35,
  [49] = 47,
  [50] = 42,
  [51] = 27,
  [52] = 21,
  [53] = 23,
  [54] = 23,
  [55] = 21,
  [56] = 56,
  [57] = 22,
  [58] = 58,
  [59] = 56,
  [60] = 58,
  [61] = 58,
  [62] = 58,
  [63] = 63,
  [64] = 64,
  [65] = 42,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 23,
  [71] = 21,
  [72] = 66,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 66,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 31,
  [87] = 87,
  [88] = 74,
  [89] = 89,
  [90] = 90,
  [91] = 68,
  [92] = 66,
  [93] = 42,
  [94] = 90,
  [95] = 95,
  [96] = 67,
  [97] = 81,
  [98] = 78,
  [99] = 69,
  [100] = 73,
  [101] = 47,
  [102] = 102,
  [103] = 103,
  [104] = 29,
  [105] = 105,
  [106] = 106,
  [107] = 63,
  [108] = 108,
  [109] = 109,
  [110] = 87,
  [111] = 29,
  [112] = 109,
  [113] = 66,
  [114] = 114,
  [115] = 106,
  [116] = 105,
  [117] = 82,
  [118] = 76,
  [119] = 77,
  [120] = 114,
  [121] = 103,
  [122] = 108,
  [123] = 64,
  [124] = 95,
  [125] = 89,
  [126] = 31,
  [127] = 75,
  [128] = 84,
  [129] = 85,
  [130] = 83,
  [131] = 79,
  [132] = 102,
  [133] = 47,
  [134] = 134,
  [135] = 134,
  [136] = 134,
  [137] = 137,
  [138] = 138,
  [139] = 134,
  [140] = 137,
  [141] = 134,
  [142] = 137,
  [143] = 137,
  [144] = 144,
  [145] = 134,
  [146] = 137,
  [147] = 134,
  [148] = 134,
  [149] = 42,
  [150] = 150,
  [151] = 151,
  [152] = 137,
  [153] = 137,
  [154] = 27,
  [155] = 155,
  [156] = 134,
  [157] = 47,
  [158] = 137,
  [159] = 134,
  [160] = 30,
  [161] = 150,
  [162] = 29,
  [163] = 28,
  [164] = 164,
  [165] = 31,
  [166] = 137,
  [167] = 35,
  [168] = 137,
  [169] = 37,
  [170] = 170,
  [171] = 171,
  [172] = 56,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 69,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 177,
  [181] = 181,
  [182] = 182,
  [183] = 84,
  [184] = 184,
  [185] = 74,
  [186] = 186,
  [187] = 182,
  [188] = 188,
  [189] = 189,
  [190] = 188,
  [191] = 182,
  [192] = 186,
  [193] = 184,
  [194] = 181,
  [195] = 181,
  [196] = 189,
  [197] = 177,
  [198] = 198,
  [199] = 179,
  [200] = 178,
  [201] = 188,
  [202] = 189,
  [203] = 186,
  [204] = 204,
  [205] = 205,
  [206] = 206,
  [207] = 75,
  [208] = 179,
  [209] = 209,
  [210] = 198,
  [211] = 211,
  [212] = 178,
  [213] = 204,
  [214] = 198,
  [215] = 205,
  [216] = 209,
  [217] = 82,
  [218] = 103,
  [219] = 209,
  [220] = 209,
  [221] = 90,
  [222] = 205,
  [223] = 198,
  [224] = 224,
  [225] = 68,
  [226] = 102,
  [227] = 211,
  [228] = 224,
  [229] = 67,
  [230] = 211,
  [231] = 73,
  [232] = 76,
  [233] = 77,
  [234] = 78,
  [235] = 79,
  [236] = 205,
  [237] = 204,
  [238] = 178,
  [239] = 179,
  [240] = 177,
  [241] = 181,
  [242] = 105,
  [243] = 83,
  [244] = 106,
  [245] = 188,
  [246] = 204,
  [247] = 85,
  [248] = 63,
  [249] = 211,
  [250] = 89,
  [251] = 109,
  [252] = 95,
  [253] = 64,
  [254] = 184,
  [255] = 114,
  [256] = 87,
  [257] = 108,
  [258] = 258,
  [259] = 258,
  [260] = 260,
  [261] = 13,
  [262] = 73,
  [263] = 74,
  [264] = 84,
  [265] = 73,
  [266] = 64,
  [267] = 74,
  [268] = 268,
  [269] = 84,
  [270] = 268,
  [271] = 64,
  [272] = 272,
  [273] = 273,
  [274] = 274,
  [275] = 275,
  [276] = 276,
  [277] = 74,
  [278] = 276,
  [279] = 279,
  [280] = 280,
  [281] = 272,
  [282] = 73,
  [283] = 64,
  [284] = 284,
  [285] = 285,
  [286] = 84,
  [287] = 287,
  [288] = 275,
  [289] = 84,
  [290] = 274,
  [291] = 291,
  [292] = 273,
  [293] = 291,
  [294] = 280,
  [295] = 285,
  [296] = 287,
  [297] = 74,
  [298] = 73,
  [299] = 64,
  [300] = 18,
  [301] = 22,
  [302] = 23,
  [303] = 21,
  [304] = 258,
  [305] = 47,
  [306] = 28,
  [307] = 29,
  [308] = 37,
  [309] = 30,
  [310] = 42,
  [311] = 27,
  [312] = 84,
  [313] = 74,
  [314] = 64,
  [315] = 35,
  [316] = 31,
  [317] = 73,
  [318] = 74,
  [319] = 273,
  [320] = 272,
  [321] = 321,
  [322] = 274,
  [323] = 285,
  [324] = 73,
  [325] = 64,
  [326] = 280,
  [327] = 275,
  [328] = 84,
  [329] = 329,
  [330] = 56,
  [331] = 331,
  [332] = 74,
  [333] = 85,
  [334] = 90,
  [335] = 89,
  [336] = 95,
  [337] = 64,
  [338] = 108,
  [339] = 339,
  [340] = 87,
  [341] = 114,
  [342] = 109,
  [343] = 63,
  [344] = 106,
  [345] = 105,
  [346] = 102,
  [347] = 331,
  [348] = 103,
  [349] = 349,
  [350] = 79,
  [351] = 83,
  [352] = 78,
  [353] = 77,
  [354] = 67,
  [355] = 76,
  [356] = 73,
  [357] = 339,
  [358] = 82,
  [359] = 69,
  [360] = 331,
  [361] = 339,
  [362] = 349,
  [363] = 84,
  [364] = 349,
  [365] = 365,
  [366] = 365,
  [367] = 365,
  [368] = 365,
  [369] = 369,
  [370] = 370,
  [371] = 371,
  [372] = 372,
  [373] = 372,
  [374] = 372,
  [375] = 375,
  [376] = 376,
  [377] = 376,
  [378] = 375,
  [379] = 379,
  [380] = 376,
  [381] = 375,
  [382] = 376,
  [383] = 375,
  [384] = 384,
  [385] = 384,
  [386] = 386,
  [387] = 387,
  [388] = 387,
  [389] = 389,
  [390] = 390,
  [391] = 391,
  [392] = 392,
  [393] = 393,
  [394] = 394,
  [395] = 395,
  [396] = 396,
  [397] = 397,
  [398] = 398,
  [399] = 392,
  [400] = 392,
  [401] = 401,
  [402] = 389,
  [403] = 389,
  [404] = 404,
  [405] = 395,
  [406] = 406,
  [407] = 395,
  [408] = 408,
  [409] = 392,
  [410] = 410,
  [411] = 411,
  [412] = 412,
  [413] = 413,
  [414] = 414,
  [415] = 415,
  [416] = 414,
  [417] = 417,
  [418] = 418,
  [419] = 414,
  [420] = 420,
  [421] = 421,
  [422] = 422,
  [423] = 423,
  [424] = 424,
  [425] = 425,
  [426] = 421,
  [427] = 427,
  [428] = 37,
  [429] = 422,
  [430] = 424,
  [431] = 421,
  [432] = 432,
  [433] = 432,
  [434] = 422,
  [435] = 423,
  [436] = 436,
  [437] = 424,
  [438] = 422,
  [439] = 423,
  [440] = 28,
  [441] = 432,
  [442] = 422,
  [443] = 443,
  [444] = 422,
  [445] = 425,
  [446] = 422,
  [447] = 422,
  [448] = 421,
  [449] = 449,
  [450] = 422,
  [451] = 422,
  [452] = 424,
  [453] = 432,
  [454] = 454,
  [455] = 425,
  [456] = 456,
  [457] = 457,
  [458] = 458,
  [459] = 456,
  [460] = 456,
  [461] = 424,
  [462] = 423,
};

static inline bool sym_identifier_character_set_1(int32_t c) {
  return (c < 43514
    ? (c < 4193
      ? (c < 2707
        ? (c < 1994
          ? (c < 931
            ? (c < 748
              ? (c < 192
                ? (c < 170
                  ? (c < 'g'
                    ? (c >= 'A' && c <= 'Z')
                    : c <= 'z')
                  : (c <= 170 || (c < 186
                    ? c == 181
                    : c <= 186)))
                : (c <= 214 || (c < 710
                  ? (c < 248
                    ? (c >= 216 && c <= 246)
                    : c <= 705)
                  : (c <= 721 || (c >= 736 && c <= 740)))))
              : (c <= 748 || (c < 895
                ? (c < 886
                  ? (c < 880
                    ? c == 750
                    : c <= 884)
                  : (c <= 887 || (c >= 891 && c <= 893)))
                : (c <= 895 || (c < 908
                  ? (c < 904
                    ? c == 902
                    : c <= 906)
                  : (c <= 908 || (c >= 910 && c <= 929)))))))
            : (c <= 1013 || (c < 1649
              ? (c < 1376
                ? (c < 1329
                  ? (c < 1162
                    ? (c >= 1015 && c <= 1153)
                    : c <= 1327)
                  : (c <= 1366 || c == 1369))
                : (c <= 1416 || (c < 1568
                  ? (c < 1519
                    ? (c >= 1488 && c <= 1514)
                    : c <= 1522)
                  : (c <= 1610 || (c >= 1646 && c <= 1647)))))
              : (c <= 1747 || (c < 1791
                ? (c < 1774
                  ? (c < 1765
                    ? c == 1749
                    : c <= 1766)
                  : (c <= 1775 || (c >= 1786 && c <= 1788)))
                : (c <= 1791 || (c < 1869
                  ? (c < 1810
                    ? c == 1808
                    : c <= 1839)
                  : (c <= 1957 || c == 1969))))))))
          : (c <= 2026 || (c < 2482
            ? (c < 2208
              ? (c < 2088
                ? (c < 2048
                  ? (c < 2042
                    ? (c >= 2036 && c <= 2037)
                    : c <= 2042)
                  : (c <= 2069 || (c < 2084
                    ? c == 2074
                    : c <= 2084)))
                : (c <= 2088 || (c < 2160
                  ? (c < 2144
                    ? (c >= 2112 && c <= 2136)
                    : c <= 2154)
                  : (c <= 2183 || (c >= 2185 && c <= 2190)))))
              : (c <= 2249 || (c < 2417
                ? (c < 2384
                  ? (c < 2365
                    ? (c >= 2308 && c <= 2361)
                    : c <= 2365)
                  : (c <= 2384 || (c >= 2392 && c <= 2401)))
                : (c <= 2432 || (c < 2451
                  ? (c < 2447
                    ? (c >= 2437 && c <= 2444)
                    : c <= 2448)
                  : (c <= 2472 || (c >= 2474 && c <= 2480)))))))
            : (c <= 2482 || (c < 2579
              ? (c < 2527
                ? (c < 2510
                  ? (c < 2493
                    ? (c >= 2486 && c <= 2489)
                    : c <= 2493)
                  : (c <= 2510 || (c >= 2524 && c <= 2525)))
                : (c <= 2529 || (c < 2565
                  ? (c < 2556
                    ? (c >= 2544 && c <= 2545)
                    : c <= 2556)
                  : (c <= 2570 || (c >= 2575 && c <= 2576)))))
              : (c <= 2600 || (c < 2649
                ? (c < 2613
                  ? (c < 2610
                    ? (c >= 2602 && c <= 2608)
                    : c <= 2611)
                  : (c <= 2614 || (c >= 2616 && c <= 2617)))
                : (c <= 2652 || (c < 2693
                  ? (c < 2674
                    ? c == 2654
                    : c <= 2676)
                  : (c <= 2701 || (c >= 2703 && c <= 2705)))))))))))
        : (c <= 2728 || (c < 3242
          ? (c < 2962
            ? (c < 2858
              ? (c < 2784
                ? (c < 2741
                  ? (c < 2738
                    ? (c >= 2730 && c <= 2736)
                    : c <= 2739)
                  : (c <= 2745 || (c < 2768
                    ? c == 2749
                    : c <= 2768)))
                : (c <= 2785 || (c < 2831
                  ? (c < 2821
                    ? c == 2809
                    : c <= 2828)
                  : (c <= 2832 || (c >= 2835 && c <= 2856)))))
              : (c <= 2864 || (c < 2911
                ? (c < 2877
                  ? (c < 2869
                    ? (c >= 2866 && c <= 2867)
                    : c <= 2873)
                  : (c <= 2877 || (c >= 2908 && c <= 2909)))
                : (c <= 2913 || (c < 2949
                  ? (c < 2947
                    ? c == 2929
                    : c <= 2947)
                  : (c <= 2954 || (c >= 2958 && c <= 2960)))))))
            : (c <= 2965 || (c < 3090
              ? (c < 2984
                ? (c < 2974
                  ? (c < 2972
                    ? (c >= 2969 && c <= 2970)
                    : c <= 2972)
                  : (c <= 2975 || (c >= 2979 && c <= 2980)))
                : (c <= 2986 || (c < 3077
                  ? (c < 3024
                    ? (c >= 2990 && c <= 3001)
                    : c <= 3024)
                  : (c <= 3084 || (c >= 3086 && c <= 3088)))))
              : (c <= 3112 || (c < 3168
                ? (c < 3160
                  ? (c < 3133
                    ? (c >= 3114 && c <= 3129)
                    : c <= 3133)
                  : (c <= 3162 || c == 3165))
                : (c <= 3169 || (c < 3214
                  ? (c < 3205
                    ? c == 3200
                    : c <= 3212)
                  : (c <= 3216 || (c >= 3218 && c <= 3240)))))))))
          : (c <= 3251 || (c < 3648
            ? (c < 3412
              ? (c < 3332
                ? (c < 3293
                  ? (c < 3261
                    ? (c >= 3253 && c <= 3257)
                    : c <= 3261)
                  : (c <= 3294 || (c < 3313
                    ? (c >= 3296 && c <= 3297)
                    : c <= 3314)))
                : (c <= 3340 || (c < 3389
                  ? (c < 3346
                    ? (c >= 3342 && c <= 3344)
                    : c <= 3386)
                  : (c <= 3389 || c == 3406))))
              : (c <= 3414 || (c < 3507
                ? (c < 3461
                  ? (c < 3450
                    ? (c >= 3423 && c <= 3425)
                    : c <= 3455)
                  : (c <= 3478 || (c >= 3482 && c <= 3505)))
                : (c <= 3515 || (c < 3585
                  ? (c < 3520
                    ? c == 3517
                    : c <= 3526)
                  : (c <= 3632 || c == 3634))))))
            : (c <= 3654 || (c < 3782
              ? (c < 3749
                ? (c < 3718
                  ? (c < 3716
                    ? (c >= 3713 && c <= 3714)
                    : c <= 3716)
                  : (c <= 3722 || (c >= 3724 && c <= 3747)))
                : (c <= 3749 || (c < 3773
                  ? (c < 3762
                    ? (c >= 3751 && c <= 3760)
                    : c <= 3762)
                  : (c <= 3773 || (c >= 3776 && c <= 3780)))))
              : (c <= 3782 || (c < 3976
                ? (c < 3904
                  ? (c < 3840
                    ? (c >= 3804 && c <= 3807)
                    : c <= 3840)
                  : (c <= 3911 || (c >= 3913 && c <= 3948)))
                : (c <= 3980 || (c < 4176
                  ? (c < 4159
                    ? (c >= 4096 && c <= 4138)
                    : c <= 4159)
                  : (c <= 4181 || (c >= 4186 && c <= 4189)))))))))))))
      : (c <= 4193 || (c < 8134
        ? (c < 6176
          ? (c < 4808
            ? (c < 4688
              ? (c < 4295
                ? (c < 4213
                  ? (c < 4206
                    ? (c >= 4197 && c <= 4198)
                    : c <= 4208)
                  : (c <= 4225 || (c < 4256
                    ? c == 4238
                    : c <= 4293)))
                : (c <= 4295 || (c < 4348
                  ? (c < 4304
                    ? c == 4301
                    : c <= 4346)
                  : (c <= 4680 || (c >= 4682 && c <= 4685)))))
              : (c <= 4694 || (c < 4752
                ? (c < 4704
                  ? (c < 4698
                    ? c == 4696
                    : c <= 4701)
                  : (c <= 4744 || (c >= 4746 && c <= 4749)))
                : (c <= 4784 || (c < 4800
                  ? (c < 4792
                    ? (c >= 4786 && c <= 4789)
                    : c <= 4798)
                  : (c <= 4800 || (c >= 4802 && c <= 4805)))))))
            : (c <= 4822 || (c < 5792
              ? (c < 5024
                ? (c < 4888
                  ? (c < 4882
                    ? (c >= 4824 && c <= 4880)
                    : c <= 4885)
                  : (c <= 4954 || (c >= 4992 && c <= 5007)))
                : (c <= 5109 || (c < 5743
                  ? (c < 5121
                    ? (c >= 5112 && c <= 5117)
                    : c <= 5740)
                  : (c <= 5759 || (c >= 5761 && c <= 5786)))))
              : (c <= 5866 || (c < 5984
                ? (c < 5919
                  ? (c < 5888
                    ? (c >= 5870 && c <= 5880)
                    : c <= 5905)
                  : (c <= 5937 || (c >= 5952 && c <= 5969)))
                : (c <= 5996 || (c < 6103
                  ? (c < 6016
                    ? (c >= 5998 && c <= 6000)
                    : c <= 6067)
                  : (c <= 6103 || c == 6108))))))))
          : (c <= 6264 || (c < 7312
            ? (c < 6823
              ? (c < 6512
                ? (c < 6320
                  ? (c < 6314
                    ? (c >= 6272 && c <= 6312)
                    : c <= 6314)
                  : (c <= 6389 || (c < 6480
                    ? (c >= 6400 && c <= 6430)
                    : c <= 6509)))
                : (c <= 6516 || (c < 6656
                  ? (c < 6576
                    ? (c >= 6528 && c <= 6571)
                    : c <= 6601)
                  : (c <= 6678 || (c >= 6688 && c <= 6740)))))
              : (c <= 6823 || (c < 7098
                ? (c < 7043
                  ? (c < 6981
                    ? (c >= 6917 && c <= 6963)
                    : c <= 6988)
                  : (c <= 7072 || (c >= 7086 && c <= 7087)))
                : (c <= 7141 || (c < 7258
                  ? (c < 7245
                    ? (c >= 7168 && c <= 7203)
                    : c <= 7247)
                  : (c <= 7293 || (c >= 7296 && c <= 7304)))))))
            : (c <= 7354 || (c < 8008
              ? (c < 7418
                ? (c < 7406
                  ? (c < 7401
                    ? (c >= 7357 && c <= 7359)
                    : c <= 7404)
                  : (c <= 7411 || (c >= 7413 && c <= 7414)))
                : (c <= 7418 || (c < 7960
                  ? (c < 7680
                    ? (c >= 7424 && c <= 7615)
                    : c <= 7957)
                  : (c <= 7965 || (c >= 7968 && c <= 8005)))))
              : (c <= 8013 || (c < 8031
                ? (c < 8027
                  ? (c < 8025
                    ? (c >= 8016 && c <= 8023)
                    : c <= 8025)
                  : (c <= 8027 || c == 8029))
                : (c <= 8061 || (c < 8126
                  ? (c < 8118
                    ? (c >= 8064 && c <= 8116)
                    : c <= 8124)
                  : (c <= 8126 || (c >= 8130 && c <= 8132)))))))))))
        : (c <= 8140 || (c < 12337
          ? (c < 8544
            ? (c < 8458
              ? (c < 8305
                ? (c < 8160
                  ? (c < 8150
                    ? (c >= 8144 && c <= 8147)
                    : c <= 8155)
                  : (c <= 8172 || (c < 8182
                    ? (c >= 8178 && c <= 8180)
                    : c <= 8188)))
                : (c <= 8305 || (c < 8450
                  ? (c < 8336
                    ? c == 8319
                    : c <= 8348)
                  : (c <= 8450 || c == 8455))))
              : (c <= 8467 || (c < 8488
                ? (c < 8484
                  ? (c < 8472
                    ? c == 8469
                    : c <= 8477)
                  : (c <= 8484 || c == 8486))
                : (c <= 8488 || (c < 8517
                  ? (c < 8508
                    ? (c >= 8490 && c <= 8505)
                    : c <= 8511)
                  : (c <= 8521 || c == 8526))))))
            : (c <= 8584 || (c < 11680
              ? (c < 11559
                ? (c < 11506
                  ? (c < 11499
                    ? (c >= 11264 && c <= 11492)
                    : c <= 11502)
                  : (c <= 11507 || (c >= 11520 && c <= 11557)))
                : (c <= 11559 || (c < 11631
                  ? (c < 11568
                    ? c == 11565
                    : c <= 11623)
                  : (c <= 11631 || (c >= 11648 && c <= 11670)))))
              : (c <= 11686 || (c < 11720
                ? (c < 11704
                  ? (c < 11696
                    ? (c >= 11688 && c <= 11694)
                    : c <= 11702)
                  : (c <= 11710 || (c >= 11712 && c <= 11718)))
                : (c <= 11726 || (c < 12293
                  ? (c < 11736
                    ? (c >= 11728 && c <= 11734)
                    : c <= 11742)
                  : (c <= 12295 || (c >= 12321 && c <= 12329)))))))))
          : (c <= 12341 || (c < 42891
            ? (c < 19968
              ? (c < 12549
                ? (c < 12445
                  ? (c < 12353
                    ? (c >= 12344 && c <= 12348)
                    : c <= 12438)
                  : (c <= 12447 || (c < 12540
                    ? (c >= 12449 && c <= 12538)
                    : c <= 12543)))
                : (c <= 12591 || (c < 12784
                  ? (c < 12704
                    ? (c >= 12593 && c <= 12686)
                    : c <= 12735)
                  : (c <= 12799 || (c >= 13312 && c <= 19903)))))
              : (c <= 42124 || (c < 42560
                ? (c < 42512
                  ? (c < 42240
                    ? (c >= 42192 && c <= 42237)
                    : c <= 42508)
                  : (c <= 42527 || (c >= 42538 && c <= 42539)))
                : (c <= 42606 || (c < 42775
                  ? (c < 42656
                    ? (c >= 42623 && c <= 42653)
                    : c <= 42735)
                  : (c <= 42783 || (c >= 42786 && c <= 42888)))))))
            : (c <= 42954 || (c < 43250
              ? (c < 43011
                ? (c < 42965
                  ? (c < 42963
                    ? (c >= 42960 && c <= 42961)
                    : c <= 42963)
                  : (c <= 42969 || (c >= 42994 && c <= 43009)))
                : (c <= 43013 || (c < 43072
                  ? (c < 43020
                    ? (c >= 43015 && c <= 43018)
                    : c <= 43042)
                  : (c <= 43123 || (c >= 43138 && c <= 43187)))))
              : (c <= 43255 || (c < 43360
                ? (c < 43274
                  ? (c < 43261
                    ? c == 43259
                    : c <= 43262)
                  : (c <= 43301 || (c >= 43312 && c <= 43334)))
                : (c <= 43388 || (c < 43488
                  ? (c < 43471
                    ? (c >= 43396 && c <= 43442)
                    : c <= 43471)
                  : (c <= 43492 || (c >= 43494 && c <= 43503)))))))))))))))
    : (c <= 43518 || (c < 70727
      ? (c < 66956
        ? (c < 64914
          ? (c < 43868
            ? (c < 43714
              ? (c < 43646
                ? (c < 43588
                  ? (c < 43584
                    ? (c >= 43520 && c <= 43560)
                    : c <= 43586)
                  : (c <= 43595 || (c < 43642
                    ? (c >= 43616 && c <= 43638)
                    : c <= 43642)))
                : (c <= 43695 || (c < 43705
                  ? (c < 43701
                    ? c == 43697
                    : c <= 43702)
                  : (c <= 43709 || c == 43712))))
              : (c <= 43714 || (c < 43785
                ? (c < 43762
                  ? (c < 43744
                    ? (c >= 43739 && c <= 43741)
                    : c <= 43754)
                  : (c <= 43764 || (c >= 43777 && c <= 43782)))
                : (c <= 43790 || (c < 43816
                  ? (c < 43808
                    ? (c >= 43793 && c <= 43798)
                    : c <= 43814)
                  : (c <= 43822 || (c >= 43824 && c <= 43866)))))))
            : (c <= 43881 || (c < 64287
              ? (c < 63744
                ? (c < 55216
                  ? (c < 44032
                    ? (c >= 43888 && c <= 44002)
                    : c <= 55203)
                  : (c <= 55238 || (c >= 55243 && c <= 55291)))
                : (c <= 64109 || (c < 64275
                  ? (c < 64256
                    ? (c >= 64112 && c <= 64217)
                    : c <= 64262)
                  : (c <= 64279 || c == 64285))))
              : (c <= 64296 || (c < 64323
                ? (c < 64318
                  ? (c < 64312
                    ? (c >= 64298 && c <= 64310)
                    : c <= 64316)
                  : (c <= 64318 || (c >= 64320 && c <= 64321)))
                : (c <= 64324 || (c < 64612
                  ? (c < 64467
                    ? (c >= 64326 && c <= 64433)
                    : c <= 64605)
                  : (c <= 64829 || (c >= 64848 && c <= 64911)))))))))
          : (c <= 64967 || (c < 65599
            ? (c < 65382
              ? (c < 65147
                ? (c < 65139
                  ? (c < 65137
                    ? (c >= 65008 && c <= 65017)
                    : c <= 65137)
                  : (c <= 65139 || (c < 65145
                    ? c == 65143
                    : c <= 65145)))
                : (c <= 65147 || (c < 65313
                  ? (c < 65151
                    ? c == 65149
                    : c <= 65276)
                  : (c <= 65338 || (c >= 65345 && c <= 65370)))))
              : (c <= 65437 || (c < 65498
                ? (c < 65482
                  ? (c < 65474
                    ? (c >= 65440 && c <= 65470)
                    : c <= 65479)
                  : (c <= 65487 || (c >= 65490 && c <= 65495)))
                : (c <= 65500 || (c < 65576
                  ? (c < 65549
                    ? (c >= 65536 && c <= 65547)
                    : c <= 65574)
                  : (c <= 65594 || (c >= 65596 && c <= 65597)))))))
            : (c <= 65613 || (c < 66464
              ? (c < 66208
                ? (c < 65856
                  ? (c < 65664
                    ? (c >= 65616 && c <= 65629)
                    : c <= 65786)
                  : (c <= 65908 || (c >= 66176 && c <= 66204)))
                : (c <= 66256 || (c < 66384
                  ? (c < 66349
                    ? (c >= 66304 && c <= 66335)
                    : c <= 66378)
                  : (c <= 66421 || (c >= 66432 && c <= 66461)))))
              : (c <= 66499 || (c < 66776
                ? (c < 66560
                  ? (c < 66513
                    ? (c >= 66504 && c <= 66511)
                    : c <= 66517)
                  : (c <= 66717 || (c >= 66736 && c <= 66771)))
                : (c <= 66811 || (c < 66928
                  ? (c < 66864
                    ? (c >= 66816 && c <= 66855)
                    : c <= 66915)
                  : (c <= 66938 || (c >= 66940 && c <= 66954)))))))))))
        : (c <= 66962 || (c < 68864
          ? (c < 67828
            ? (c < 67506
              ? (c < 67072
                ? (c < 66979
                  ? (c < 66967
                    ? (c >= 66964 && c <= 66965)
                    : c <= 66977)
                  : (c <= 66993 || (c < 67003
                    ? (c >= 66995 && c <= 67001)
                    : c <= 67004)))
                : (c <= 67382 || (c < 67456
                  ? (c < 67424
                    ? (c >= 67392 && c <= 67413)
                    : c <= 67431)
                  : (c <= 67461 || (c >= 67463 && c <= 67504)))))
              : (c <= 67514 || (c < 67644
                ? (c < 67594
                  ? (c < 67592
                    ? (c >= 67584 && c <= 67589)
                    : c <= 67592)
                  : (c <= 67637 || (c >= 67639 && c <= 67640)))
                : (c <= 67644 || (c < 67712
                  ? (c < 67680
                    ? (c >= 67647 && c <= 67669)
                    : c <= 67702)
                  : (c <= 67742 || (c >= 67808 && c <= 67826)))))))
            : (c <= 67829 || (c < 68224
              ? (c < 68096
                ? (c < 67968
                  ? (c < 67872
                    ? (c >= 67840 && c <= 67861)
                    : c <= 67897)
                  : (c <= 68023 || (c >= 68030 && c <= 68031)))
                : (c <= 68096 || (c < 68121
                  ? (c < 68117
                    ? (c >= 68112 && c <= 68115)
                    : c <= 68119)
                  : (c <= 68149 || (c >= 68192 && c <= 68220)))))
              : (c <= 68252 || (c < 68448
                ? (c < 68352
                  ? (c < 68297
                    ? (c >= 68288 && c <= 68295)
                    : c <= 68324)
                  : (c <= 68405 || (c >= 68416 && c <= 68437)))
                : (c <= 68466 || (c < 68736
                  ? (c < 68608
                    ? (c >= 68480 && c <= 68497)
                    : c <= 68680)
                  : (c <= 68786 || (c >= 68800 && c <= 68850)))))))))
          : (c <= 68899 || (c < 70106
            ? (c < 69749
              ? (c < 69488
                ? (c < 69376
                  ? (c < 69296
                    ? (c >= 69248 && c <= 69289)
                    : c <= 69297)
                  : (c <= 69404 || (c < 69424
                    ? c == 69415
                    : c <= 69445)))
                : (c <= 69505 || (c < 69635
                  ? (c < 69600
                    ? (c >= 69552 && c <= 69572)
                    : c <= 69622)
                  : (c <= 69687 || (c >= 69745 && c <= 69746)))))
              : (c <= 69749 || (c < 69959
                ? (c < 69891
                  ? (c < 69840
                    ? (c >= 69763 && c <= 69807)
                    : c <= 69864)
                  : (c <= 69926 || c == 69956))
                : (c <= 69959 || (c < 70019
                  ? (c < 70006
                    ? (c >= 69968 && c <= 70002)
                    : c <= 70006)
                  : (c <= 70066 || (c >= 70081 && c <= 70084)))))))
            : (c <= 70106 || (c < 70405
              ? (c < 70280
                ? (c < 70163
                  ? (c < 70144
                    ? c == 70108
                    : c <= 70161)
                  : (c <= 70187 || (c >= 70272 && c <= 70278)))
                : (c <= 70280 || (c < 70303
                  ? (c < 70287
                    ? (c >= 70282 && c <= 70285)
                    : c <= 70301)
                  : (c <= 70312 || (c >= 70320 && c <= 70366)))))
              : (c <= 70412 || (c < 70453
                ? (c < 70442
                  ? (c < 70419
                    ? (c >= 70415 && c <= 70416)
                    : c <= 70440)
                  : (c <= 70448 || (c >= 70450 && c <= 70451)))
                : (c <= 70457 || (c < 70493
                  ? (c < 70480
                    ? c == 70461
                    : c <= 70480)
                  : (c <= 70497 || (c >= 70656 && c <= 70708)))))))))))))
      : (c <= 70730 || (c < 119894
        ? (c < 73056
          ? (c < 72001
            ? (c < 71424
              ? (c < 71128
                ? (c < 70852
                  ? (c < 70784
                    ? (c >= 70751 && c <= 70753)
                    : c <= 70831)
                  : (c <= 70853 || (c < 71040
                    ? c == 70855
                    : c <= 71086)))
                : (c <= 71131 || (c < 71296
                  ? (c < 71236
                    ? (c >= 71168 && c <= 71215)
                    : c <= 71236)
                  : (c <= 71338 || c == 71352))))
              : (c <= 71450 || (c < 71945
                ? (c < 71840
                  ? (c < 71680
                    ? (c >= 71488 && c <= 71494)
                    : c <= 71723)
                  : (c <= 71903 || (c >= 71935 && c <= 71942)))
                : (c <= 71945 || (c < 71960
                  ? (c < 71957
                    ? (c >= 71948 && c <= 71955)
                    : c <= 71958)
                  : (c <= 71983 || c == 71999))))))
            : (c <= 72001 || (c < 72349
              ? (c < 72192
                ? (c < 72161
                  ? (c < 72106
                    ? (c >= 72096 && c <= 72103)
                    : c <= 72144)
                  : (c <= 72161 || c == 72163))
                : (c <= 72192 || (c < 72272
                  ? (c < 72250
                    ? (c >= 72203 && c <= 72242)
                    : c <= 72250)
                  : (c <= 72272 || (c >= 72284 && c <= 72329)))))
              : (c <= 72349 || (c < 72818
                ? (c < 72714
                  ? (c < 72704
                    ? (c >= 72368 && c <= 72440)
                    : c <= 72712)
                  : (c <= 72750 || c == 72768))
                : (c <= 72847 || (c < 72971
                  ? (c < 72968
                    ? (c >= 72960 && c <= 72966)
                    : c <= 72969)
                  : (c <= 73008 || c == 73030))))))))
          : (c <= 73061 || (c < 93952
            ? (c < 82944
              ? (c < 73728
                ? (c < 73112
                  ? (c < 73066
                    ? (c >= 73063 && c <= 73064)
                    : c <= 73097)
                  : (c <= 73112 || (c < 73648
                    ? (c >= 73440 && c <= 73458)
                    : c <= 73648)))
                : (c <= 74649 || (c < 77712
                  ? (c < 74880
                    ? (c >= 74752 && c <= 74862)
                    : c <= 75075)
                  : (c <= 77808 || (c >= 77824 && c <= 78894)))))
              : (c <= 83526 || (c < 92928
                ? (c < 92784
                  ? (c < 92736
                    ? (c >= 92160 && c <= 92728)
                    : c <= 92766)
                  : (c <= 92862 || (c >= 92880 && c <= 92909)))
                : (c <= 92975 || (c < 93053
                  ? (c < 93027
                    ? (c >= 92992 && c <= 92995)
                    : c <= 93047)
                  : (c <= 93071 || (c >= 93760 && c <= 93823)))))))
            : (c <= 94026 || (c < 110589
              ? (c < 94208
                ? (c < 94176
                  ? (c < 94099
                    ? c == 94032
                    : c <= 94111)
                  : (c <= 94177 || c == 94179))
                : (c <= 100343 || (c < 110576
                  ? (c < 101632
                    ? (c >= 100352 && c <= 101589)
                    : c <= 101640)
                  : (c <= 110579 || (c >= 110581 && c <= 110587)))))
              : (c <= 110590 || (c < 113664
                ? (c < 110948
                  ? (c < 110928
                    ? (c >= 110592 && c <= 110882)
                    : c <= 110930)
                  : (c <= 110951 || (c >= 110960 && c <= 111355)))
                : (c <= 113770 || (c < 113808
                  ? (c < 113792
                    ? (c >= 113776 && c <= 113788)
                    : c <= 113800)
                  : (c <= 113817 || (c >= 119808 && c <= 119892)))))))))))
        : (c <= 119964 || (c < 125259
          ? (c < 120572
            ? (c < 120086
              ? (c < 119995
                ? (c < 119973
                  ? (c < 119970
                    ? (c >= 119966 && c <= 119967)
                    : c <= 119970)
                  : (c <= 119974 || (c < 119982
                    ? (c >= 119977 && c <= 119980)
                    : c <= 119993)))
                : (c <= 119995 || (c < 120071
                  ? (c < 120005
                    ? (c >= 119997 && c <= 120003)
                    : c <= 120069)
                  : (c <= 120074 || (c >= 120077 && c <= 120084)))))
              : (c <= 120092 || (c < 120138
                ? (c < 120128
                  ? (c < 120123
                    ? (c >= 120094 && c <= 120121)
                    : c <= 120126)
                  : (c <= 120132 || c == 120134))
                : (c <= 120144 || (c < 120514
                  ? (c < 120488
                    ? (c >= 120146 && c <= 120485)
                    : c <= 120512)
                  : (c <= 120538 || (c >= 120540 && c <= 120570)))))))
            : (c <= 120596 || (c < 123191
              ? (c < 120714
                ? (c < 120656
                  ? (c < 120630
                    ? (c >= 120598 && c <= 120628)
                    : c <= 120654)
                  : (c <= 120686 || (c >= 120688 && c <= 120712)))
                : (c <= 120744 || (c < 122624
                  ? (c < 120772
                    ? (c >= 120746 && c <= 120770)
                    : c <= 120779)
                  : (c <= 122654 || (c >= 123136 && c <= 123180)))))
              : (c <= 123197 || (c < 124904
                ? (c < 123584
                  ? (c < 123536
                    ? c == 123214
                    : c <= 123565)
                  : (c <= 123627 || (c >= 124896 && c <= 124902)))
                : (c <= 124907 || (c < 124928
                  ? (c < 124912
                    ? (c >= 124909 && c <= 124910)
                    : c <= 124926)
                  : (c <= 125124 || (c >= 125184 && c <= 125251)))))))))
          : (c <= 125259 || (c < 126559
            ? (c < 126535
              ? (c < 126505
                ? (c < 126497
                  ? (c < 126469
                    ? (c >= 126464 && c <= 126467)
                    : c <= 126495)
                  : (c <= 126498 || (c < 126503
                    ? c == 126500
                    : c <= 126503)))
                : (c <= 126514 || (c < 126523
                  ? (c < 126521
                    ? (c >= 126516 && c <= 126519)
                    : c <= 126521)
                  : (c <= 126523 || c == 126530))))
              : (c <= 126535 || (c < 126548
                ? (c < 126541
                  ? (c < 126539
                    ? c == 126537
                    : c <= 126539)
                  : (c <= 126543 || (c >= 126545 && c <= 126546)))
                : (c <= 126548 || (c < 126555
                  ? (c < 126553
                    ? c == 126551
                    : c <= 126553)
                  : (c <= 126555 || c == 126557))))))
            : (c <= 126559 || (c < 126625
              ? (c < 126580
                ? (c < 126567
                  ? (c < 126564
                    ? (c >= 126561 && c <= 126562)
                    : c <= 126564)
                  : (c <= 126570 || (c >= 126572 && c <= 126578)))
                : (c <= 126583 || (c < 126592
                  ? (c < 126590
                    ? (c >= 126585 && c <= 126588)
                    : c <= 126590)
                  : (c <= 126601 || (c >= 126603 && c <= 126619)))))
              : (c <= 126627 || (c < 177984
                ? (c < 131072
                  ? (c < 126635
                    ? (c >= 126629 && c <= 126633)
                    : c <= 126651)
                  : (c <= 173791 || (c >= 173824 && c <= 177976)))
                : (c <= 178205 || (c < 194560
                  ? (c < 183984
                    ? (c >= 178208 && c <= 183969)
                    : c <= 191456)
                  : (c <= 195101 || (c >= 196608 && c <= 201546)))))))))))))))));
}

static inline bool sym_identifier_character_set_2(int32_t c) {
  return (c < 43514
    ? (c < 4193
      ? (c < 2707
        ? (c < 1994
          ? (c < 910
            ? (c < 736
              ? (c < 186
                ? (c < 'b'
                  ? (c < '_'
                    ? (c >= 'A' && c <= 'Z')
                    : c <= '_')
                  : (c <= 'z' || (c < 181
                    ? c == 170
                    : c <= 181)))
                : (c <= 186 || (c < 248
                  ? (c < 216
                    ? (c >= 192 && c <= 214)
                    : c <= 246)
                  : (c <= 705 || (c >= 710 && c <= 721)))))
              : (c <= 740 || (c < 891
                ? (c < 880
                  ? (c < 750
                    ? c == 748
                    : c <= 750)
                  : (c <= 884 || (c >= 886 && c <= 887)))
                : (c <= 893 || (c < 904
                  ? (c < 902
                    ? c == 895
                    : c <= 902)
                  : (c <= 906 || c == 908))))))
            : (c <= 929 || (c < 1649
              ? (c < 1376
                ? (c < 1162
                  ? (c < 1015
                    ? (c >= 931 && c <= 1013)
                    : c <= 1153)
                  : (c <= 1327 || (c < 1369
                    ? (c >= 1329 && c <= 1366)
                    : c <= 1369)))
                : (c <= 1416 || (c < 1568
                  ? (c < 1519
                    ? (c >= 1488 && c <= 1514)
                    : c <= 1522)
                  : (c <= 1610 || (c >= 1646 && c <= 1647)))))
              : (c <= 1747 || (c < 1791
                ? (c < 1774
                  ? (c < 1765
                    ? c == 1749
                    : c <= 1766)
                  : (c <= 1775 || (c >= 1786 && c <= 1788)))
                : (c <= 1791 || (c < 1869
                  ? (c < 1810
                    ? c == 1808
                    : c <= 1839)
                  : (c <= 1957 || c == 1969))))))))
          : (c <= 2026 || (c < 2482
            ? (c < 2208
              ? (c < 2088
                ? (c < 2048
                  ? (c < 2042
                    ? (c >= 2036 && c <= 2037)
                    : c <= 2042)
                  : (c <= 2069 || (c < 2084
                    ? c == 2074
                    : c <= 2084)))
                : (c <= 2088 || (c < 2160
                  ? (c < 2144
                    ? (c >= 2112 && c <= 2136)
                    : c <= 2154)
                  : (c <= 2183 || (c >= 2185 && c <= 2190)))))
              : (c <= 2249 || (c < 2417
                ? (c < 2384
                  ? (c < 2365
                    ? (c >= 2308 && c <= 2361)
                    : c <= 2365)
                  : (c <= 2384 || (c >= 2392 && c <= 2401)))
                : (c <= 2432 || (c < 2451
                  ? (c < 2447
                    ? (c >= 2437 && c <= 2444)
                    : c <= 2448)
                  : (c <= 2472 || (c >= 2474 && c <= 2480)))))))
            : (c <= 2482 || (c < 2579
              ? (c < 2527
                ? (c < 2510
                  ? (c < 2493
                    ? (c >= 2486 && c <= 2489)
                    : c <= 2493)
                  : (c <= 2510 || (c >= 2524 && c <= 2525)))
                : (c <= 2529 || (c < 2565
                  ? (c < 2556
                    ? (c >= 2544 && c <= 2545)
                    : c <= 2556)
                  : (c <= 2570 || (c >= 2575 && c <= 2576)))))
              : (c <= 2600 || (c < 2649
                ? (c < 2613
                  ? (c < 2610
                    ? (c >= 2602 && c <= 2608)
                    : c <= 2611)
                  : (c <= 2614 || (c >= 2616 && c <= 2617)))
                : (c <= 2652 || (c < 2693
                  ? (c < 2674
                    ? c == 2654
                    : c <= 2676)
                  : (c <= 2701 || (c >= 2703 && c <= 2705)))))))))))
        : (c <= 2728 || (c < 3242
          ? (c < 2962
            ? (c < 2858
              ? (c < 2784
                ? (c < 2741
                  ? (c < 2738
                    ? (c >= 2730 && c <= 2736)
                    : c <= 2739)
                  : (c <= 2745 || (c < 2768
                    ? c == 2749
                    : c <= 2768)))
                : (c <= 2785 || (c < 2831
                  ? (c < 2821
                    ? c == 2809
                    : c <= 2828)
                  : (c <= 2832 || (c >= 2835 && c <= 2856)))))
              : (c <= 2864 || (c < 2911
                ? (c < 2877
                  ? (c < 2869
                    ? (c >= 2866 && c <= 2867)
                    : c <= 2873)
                  : (c <= 2877 || (c >= 2908 && c <= 2909)))
                : (c <= 2913 || (c < 2949
                  ? (c < 2947
                    ? c == 2929
                    : c <= 2947)
                  : (c <= 2954 || (c >= 2958 && c <= 2960)))))))
            : (c <= 2965 || (c < 3090
              ? (c < 2984
                ? (c < 2974
                  ? (c < 2972
                    ? (c >= 2969 && c <= 2970)
                    : c <= 2972)
                  : (c <= 2975 || (c >= 2979 && c <= 2980)))
                : (c <= 2986 || (c < 3077
                  ? (c < 3024
                    ? (c >= 2990 && c <= 3001)
                    : c <= 3024)
                  : (c <= 3084 || (c >= 3086 && c <= 3088)))))
              : (c <= 3112 || (c < 3168
                ? (c < 3160
                  ? (c < 3133
                    ? (c >= 3114 && c <= 3129)
                    : c <= 3133)
                  : (c <= 3162 || c == 3165))
                : (c <= 3169 || (c < 3214
                  ? (c < 3205
                    ? c == 3200
                    : c <= 3212)
                  : (c <= 3216 || (c >= 3218 && c <= 3240)))))))))
          : (c <= 3251 || (c < 3648
            ? (c < 3412
              ? (c < 3332
                ? (c < 3293
                  ? (c < 3261
                    ? (c >= 3253 && c <= 3257)
                    : c <= 3261)
                  : (c <= 3294 || (c < 3313
                    ? (c >= 3296 && c <= 3297)
                    : c <= 3314)))
                : (c <= 3340 || (c < 3389
                  ? (c < 3346
                    ? (c >= 3342 && c <= 3344)
                    : c <= 3386)
                  : (c <= 3389 || c == 3406))))
              : (c <= 3414 || (c < 3507
                ? (c < 3461
                  ? (c < 3450
                    ? (c >= 3423 && c <= 3425)
                    : c <= 3455)
                  : (c <= 3478 || (c >= 3482 && c <= 3505)))
                : (c <= 3515 || (c < 3585
                  ? (c < 3520
                    ? c == 3517
                    : c <= 3526)
                  : (c <= 3632 || c == 3634))))))
            : (c <= 3654 || (c < 3782
              ? (c < 3749
                ? (c < 3718
                  ? (c < 3716
                    ? (c >= 3713 && c <= 3714)
                    : c <= 3716)
                  : (c <= 3722 || (c >= 3724 && c <= 3747)))
                : (c <= 3749 || (c < 3773
                  ? (c < 3762
                    ? (c >= 3751 && c <= 3760)
                    : c <= 3762)
                  : (c <= 3773 || (c >= 3776 && c <= 3780)))))
              : (c <= 3782 || (c < 3976
                ? (c < 3904
                  ? (c < 3840
                    ? (c >= 3804 && c <= 3807)
                    : c <= 3840)
                  : (c <= 3911 || (c >= 3913 && c <= 3948)))
                : (c <= 3980 || (c < 4176
                  ? (c < 4159
                    ? (c >= 4096 && c <= 4138)
                    : c <= 4159)
                  : (c <= 4181 || (c >= 4186 && c <= 4189)))))))))))))
      : (c <= 4193 || (c < 8134
        ? (c < 6176
          ? (c < 4808
            ? (c < 4688
              ? (c < 4295
                ? (c < 4213
                  ? (c < 4206
                    ? (c >= 4197 && c <= 4198)
                    : c <= 4208)
                  : (c <= 4225 || (c < 4256
                    ? c == 4238
                    : c <= 4293)))
                : (c <= 4295 || (c < 4348
                  ? (c < 4304
                    ? c == 4301
                    : c <= 4346)
                  : (c <= 4680 || (c >= 4682 && c <= 4685)))))
              : (c <= 4694 || (c < 4752
                ? (c < 4704
                  ? (c < 4698
                    ? c == 4696
                    : c <= 4701)
                  : (c <= 4744 || (c >= 4746 && c <= 4749)))
                : (c <= 4784 || (c < 4800
                  ? (c < 4792
                    ? (c >= 4786 && c <= 4789)
                    : c <= 4798)
                  : (c <= 4800 || (c >= 4802 && c <= 4805)))))))
            : (c <= 4822 || (c < 5792
              ? (c < 5024
                ? (c < 4888
                  ? (c < 4882
                    ? (c >= 4824 && c <= 4880)
                    : c <= 4885)
                  : (c <= 4954 || (c >= 4992 && c <= 5007)))
                : (c <= 5109 || (c < 5743
                  ? (c < 5121
                    ? (c >= 5112 && c <= 5117)
                    : c <= 5740)
                  : (c <= 5759 || (c >= 5761 && c <= 5786)))))
              : (c <= 5866 || (c < 5984
                ? (c < 5919
                  ? (c < 5888
                    ? (c >= 5870 && c <= 5880)
                    : c <= 5905)
                  : (c <= 5937 || (c >= 5952 && c <= 5969)))
                : (c <= 5996 || (c < 6103
                  ? (c < 6016
                    ? (c >= 5998 && c <= 6000)
                    : c <= 6067)
                  : (c <= 6103 || c == 6108))))))))
          : (c <= 6264 || (c < 7312
            ? (c < 6823
              ? (c < 6512
                ? (c < 6320
                  ? (c < 6314
                    ? (c >= 6272 && c <= 6312)
                    : c <= 6314)
                  : (c <= 6389 || (c < 6480
                    ? (c >= 6400 && c <= 6430)
                    : c <= 6509)))
                : (c <= 6516 || (c < 6656
                  ? (c < 6576
                    ? (c >= 6528 && c <= 6571)
                    : c <= 6601)
                  : (c <= 6678 || (c >= 6688 && c <= 6740)))))
              : (c <= 6823 || (c < 7098
                ? (c < 7043
                  ? (c < 6981
                    ? (c >= 6917 && c <= 6963)
                    : c <= 6988)
                  : (c <= 7072 || (c >= 7086 && c <= 7087)))
                : (c <= 7141 || (c < 7258
                  ? (c < 7245
                    ? (c >= 7168 && c <= 7203)
                    : c <= 7247)
                  : (c <= 7293 || (c >= 7296 && c <= 7304)))))))
            : (c <= 7354 || (c < 8008
              ? (c < 7418
                ? (c < 7406
                  ? (c < 7401
                    ? (c >= 7357 && c <= 7359)
                    : c <= 7404)
                  : (c <= 7411 || (c >= 7413 && c <= 7414)))
                : (c <= 7418 || (c < 7960
                  ? (c < 7680
                    ? (c >= 7424 && c <= 7615)
                    : c <= 7957)
                  : (c <= 7965 || (c >= 7968 && c <= 8005)))))
              : (c <= 8013 || (c < 8031
                ? (c < 8027
                  ? (c < 8025
                    ? (c >= 8016 && c <= 8023)
                    : c <= 8025)
                  : (c <= 8027 || c == 8029))
                : (c <= 8061 || (c < 8126
                  ? (c < 8118
                    ? (c >= 8064 && c <= 8116)
                    : c <= 8124)
                  : (c <= 8126 || (c >= 8130 && c <= 8132)))))))))))
        : (c <= 8140 || (c < 12337
          ? (c < 8544
            ? (c < 8458
              ? (c < 8305
                ? (c < 8160
                  ? (c < 8150
                    ? (c >= 8144 && c <= 8147)
                    : c <= 8155)
                  : (c <= 8172 || (c < 8182
                    ? (c >= 8178 && c <= 8180)
                    : c <= 8188)))
                : (c <= 8305 || (c < 8450
                  ? (c < 8336
                    ? c == 8319
                    : c <= 8348)
                  : (c <= 8450 || c == 8455))))
              : (c <= 8467 || (c < 8488
                ? (c < 8484
                  ? (c < 8472
                    ? c == 8469
                    : c <= 8477)
                  : (c <= 8484 || c == 8486))
                : (c <= 8488 || (c < 8517
                  ? (c < 8508
                    ? (c >= 8490 && c <= 8505)
                    : c <= 8511)
                  : (c <= 8521 || c == 8526))))))
            : (c <= 8584 || (c < 11680
              ? (c < 11559
                ? (c < 11506
                  ? (c < 11499
                    ? (c >= 11264 && c <= 11492)
                    : c <= 11502)
                  : (c <= 11507 || (c >= 11520 && c <= 11557)))
                : (c <= 11559 || (c < 11631
                  ? (c < 11568
                    ? c == 11565
                    : c <= 11623)
                  : (c <= 11631 || (c >= 11648 && c <= 11670)))))
              : (c <= 11686 || (c < 11720
                ? (c < 11704
                  ? (c < 11696
                    ? (c >= 11688 && c <= 11694)
                    : c <= 11702)
                  : (c <= 11710 || (c >= 11712 && c <= 11718)))
                : (c <= 11726 || (c < 12293
                  ? (c < 11736
                    ? (c >= 11728 && c <= 11734)
                    : c <= 11742)
                  : (c <= 12295 || (c >= 12321 && c <= 12329)))))))))
          : (c <= 12341 || (c < 42891
            ? (c < 19968
              ? (c < 12549
                ? (c < 12445
                  ? (c < 12353
                    ? (c >= 12344 && c <= 12348)
                    : c <= 12438)
                  : (c <= 12447 || (c < 12540
                    ? (c >= 12449 && c <= 12538)
                    : c <= 12543)))
                : (c <= 12591 || (c < 12784
                  ? (c < 12704
                    ? (c >= 12593 && c <= 12686)
                    : c <= 12735)
                  : (c <= 12799 || (c >= 13312 && c <= 19903)))))
              : (c <= 42124 || (c < 42560
                ? (c < 42512
                  ? (c < 42240
                    ? (c >= 42192 && c <= 42237)
                    : c <= 42508)
                  : (c <= 42527 || (c >= 42538 && c <= 42539)))
                : (c <= 42606 || (c < 42775
                  ? (c < 42656
                    ? (c >= 42623 && c <= 42653)
                    : c <= 42735)
                  : (c <= 42783 || (c >= 42786 && c <= 42888)))))))
            : (c <= 42954 || (c < 43250
              ? (c < 43011
                ? (c < 42965
                  ? (c < 42963
                    ? (c >= 42960 && c <= 42961)
                    : c <= 42963)
                  : (c <= 42969 || (c >= 42994 && c <= 43009)))
                : (c <= 43013 || (c < 43072
                  ? (c < 43020
                    ? (c >= 43015 && c <= 43018)
                    : c <= 43042)
                  : (c <= 43123 || (c >= 43138 && c <= 43187)))))
              : (c <= 43255 || (c < 43360
                ? (c < 43274
                  ? (c < 43261
                    ? c == 43259
                    : c <= 43262)
                  : (c <= 43301 || (c >= 43312 && c <= 43334)))
                : (c <= 43388 || (c < 43488
                  ? (c < 43471
                    ? (c >= 43396 && c <= 43442)
                    : c <= 43471)
                  : (c <= 43492 || (c >= 43494 && c <= 43503)))))))))))))))
    : (c <= 43518 || (c < 70727
      ? (c < 66956
        ? (c < 64914
          ? (c < 43868
            ? (c < 43714
              ? (c < 43646
                ? (c < 43588
                  ? (c < 43584
                    ? (c >= 43520 && c <= 43560)
                    : c <= 43586)
                  : (c <= 43595 || (c < 43642
                    ? (c >= 43616 && c <= 43638)
                    : c <= 43642)))
                : (c <= 43695 || (c < 43705
                  ? (c < 43701
                    ? c == 43697
                    : c <= 43702)
                  : (c <= 43709 || c == 43712))))
              : (c <= 43714 || (c < 43785
                ? (c < 43762
                  ? (c < 43744
                    ? (c >= 43739 && c <= 43741)
                    : c <= 43754)
                  : (c <= 43764 || (c >= 43777 && c <= 43782)))
                : (c <= 43790 || (c < 43816
                  ? (c < 43808
                    ? (c >= 43793 && c <= 43798)
                    : c <= 43814)
                  : (c <= 43822 || (c >= 43824 && c <= 43866)))))))
            : (c <= 43881 || (c < 64287
              ? (c < 63744
                ? (c < 55216
                  ? (c < 44032
                    ? (c >= 43888 && c <= 44002)
                    : c <= 55203)
                  : (c <= 55238 || (c >= 55243 && c <= 55291)))
                : (c <= 64109 || (c < 64275
                  ? (c < 64256
                    ? (c >= 64112 && c <= 64217)
                    : c <= 64262)
                  : (c <= 64279 || c == 64285))))
              : (c <= 64296 || (c < 64323
                ? (c < 64318
                  ? (c < 64312
                    ? (c >= 64298 && c <= 64310)
                    : c <= 64316)
                  : (c <= 64318 || (c >= 64320 && c <= 64321)))
                : (c <= 64324 || (c < 64612
                  ? (c < 64467
                    ? (c >= 64326 && c <= 64433)
                    : c <= 64605)
                  : (c <= 64829 || (c >= 64848 && c <= 64911)))))))))
          : (c <= 64967 || (c < 65599
            ? (c < 65382
              ? (c < 65147
                ? (c < 65139
                  ? (c < 65137
                    ? (c >= 65008 && c <= 65017)
                    : c <= 65137)
                  : (c <= 65139 || (c < 65145
                    ? c == 65143
                    : c <= 65145)))
                : (c <= 65147 || (c < 65313
                  ? (c < 65151
                    ? c == 65149
                    : c <= 65276)
                  : (c <= 65338 || (c >= 65345 && c <= 65370)))))
              : (c <= 65437 || (c < 65498
                ? (c < 65482
                  ? (c < 65474
                    ? (c >= 65440 && c <= 65470)
                    : c <= 65479)
                  : (c <= 65487 || (c >= 65490 && c <= 65495)))
                : (c <= 65500 || (c < 65576
                  ? (c < 65549
                    ? (c >= 65536 && c <= 65547)
                    : c <= 65574)
                  : (c <= 65594 || (c >= 65596 && c <= 65597)))))))
            : (c <= 65613 || (c < 66464
              ? (c < 66208
                ? (c < 65856
                  ? (c < 65664
                    ? (c >= 65616 && c <= 65629)
                    : c <= 65786)
                  : (c <= 65908 || (c >= 66176 && c <= 66204)))
                : (c <= 66256 || (c < 66384
                  ? (c < 66349
                    ? (c >= 66304 && c <= 66335)
                    : c <= 66378)
                  : (c <= 66421 || (c >= 66432 && c <= 66461)))))
              : (c <= 66499 || (c < 66776
                ? (c < 66560
                  ? (c < 66513
                    ? (c >= 66504 && c <= 66511)
                    : c <= 66517)
                  : (c <= 66717 || (c >= 66736 && c <= 66771)))
                : (c <= 66811 || (c < 66928
                  ? (c < 66864
                    ? (c >= 66816 && c <= 66855)
                    : c <= 66915)
                  : (c <= 66938 || (c >= 66940 && c <= 66954)))))))))))
        : (c <= 66962 || (c < 68864
          ? (c < 67828
            ? (c < 67506
              ? (c < 67072
                ? (c < 66979
                  ? (c < 66967
                    ? (c >= 66964 && c <= 66965)
                    : c <= 66977)
                  : (c <= 66993 || (c < 67003
                    ? (c >= 66995 && c <= 67001)
                    : c <= 67004)))
                : (c <= 67382 || (c < 67456
                  ? (c < 67424
                    ? (c >= 67392 && c <= 67413)
                    : c <= 67431)
                  : (c <= 67461 || (c >= 67463 && c <= 67504)))))
              : (c <= 67514 || (c < 67644
                ? (c < 67594
                  ? (c < 67592
                    ? (c >= 67584 && c <= 67589)
                    : c <= 67592)
                  : (c <= 67637 || (c >= 67639 && c <= 67640)))
                : (c <= 67644 || (c < 67712
                  ? (c < 67680
                    ? (c >= 67647 && c <= 67669)
                    : c <= 67702)
                  : (c <= 67742 || (c >= 67808 && c <= 67826)))))))
            : (c <= 67829 || (c < 68224
              ? (c < 68096
                ? (c < 67968
                  ? (c < 67872
                    ? (c >= 67840 && c <= 67861)
                    : c <= 67897)
                  : (c <= 68023 || (c >= 68030 && c <= 68031)))
                : (c <= 68096 || (c < 68121
                  ? (c < 68117
                    ? (c >= 68112 && c <= 68115)
                    : c <= 68119)
                  : (c <= 68149 || (c >= 68192 && c <= 68220)))))
              : (c <= 68252 || (c < 68448
                ? (c < 68352
                  ? (c < 68297
                    ? (c >= 68288 && c <= 68295)
                    : c <= 68324)
                  : (c <= 68405 || (c >= 68416 && c <= 68437)))
                : (c <= 68466 || (c < 68736
                  ? (c < 68608
                    ? (c >= 68480 && c <= 68497)
                    : c <= 68680)
                  : (c <= 68786 || (c >= 68800 && c <= 68850)))))))))
          : (c <= 68899 || (c < 70106
            ? (c < 69749
              ? (c < 69488
                ? (c < 69376
                  ? (c < 69296
                    ? (c >= 69248 && c <= 69289)
                    : c <= 69297)
                  : (c <= 69404 || (c < 69424
                    ? c == 69415
                    : c <= 69445)))
                : (c <= 69505 || (c < 69635
                  ? (c < 69600
                    ? (c >= 69552 && c <= 69572)
                    : c <= 69622)
                  : (c <= 69687 || (c >= 69745 && c <= 69746)))))
              : (c <= 69749 || (c < 69959
                ? (c < 69891
                  ? (c < 69840
                    ? (c >= 69763 && c <= 69807)
                    : c <= 69864)
                  : (c <= 69926 || c == 69956))
                : (c <= 69959 || (c < 70019
                  ? (c < 70006
                    ? (c >= 69968 && c <= 70002)
                    : c <= 70006)
                  : (c <= 70066 || (c >= 70081 && c <= 70084)))))))
            : (c <= 70106 || (c < 70405
              ? (c < 70280
                ? (c < 70163
                  ? (c < 70144
                    ? c == 70108
                    : c <= 70161)
                  : (c <= 70187 || (c >= 70272 && c <= 70278)))
                : (c <= 70280 || (c < 70303
                  ? (c < 70287
                    ? (c >= 70282 && c <= 70285)
                    : c <= 70301)
                  : (c <= 70312 || (c >= 70320 && c <= 70366)))))
              : (c <= 70412 || (c < 70453
                ? (c < 70442
                  ? (c < 70419
                    ? (c >= 70415 && c <= 70416)
                    : c <= 70440)
                  : (c <= 70448 || (c >= 70450 && c <= 70451)))
                : (c <= 70457 || (c < 70493
                  ? (c < 70480
                    ? c == 70461
                    : c <= 70480)
                  : (c <= 70497 || (c >= 70656 && c <= 70708)))))))))))))
      : (c <= 70730 || (c < 119894
        ? (c < 73056
          ? (c < 72001
            ? (c < 71424
              ? (c < 71128
                ? (c < 70852
                  ? (c < 70784
                    ? (c >= 70751 && c <= 70753)
                    : c <= 70831)
                  : (c <= 70853 || (c < 71040
                    ? c == 70855
                    : c <= 71086)))
                : (c <= 71131 || (c < 71296
                  ? (c < 71236
                    ? (c >= 71168 && c <= 71215)
                    : c <= 71236)
                  : (c <= 71338 || c == 71352))))
              : (c <= 71450 || (c < 71945
                ? (c < 71840
                  ? (c < 71680
                    ? (c >= 71488 && c <= 71494)
                    : c <= 71723)
                  : (c <= 71903 || (c >= 71935 && c <= 71942)))
                : (c <= 71945 || (c < 71960
                  ? (c < 71957
                    ? (c >= 71948 && c <= 71955)
                    : c <= 71958)
                  : (c <= 71983 || c == 71999))))))
            : (c <= 72001 || (c < 72349
              ? (c < 72192
                ? (c < 72161
                  ? (c < 72106
                    ? (c >= 72096 && c <= 72103)
                    : c <= 72144)
                  : (c <= 72161 || c == 72163))
                : (c <= 72192 || (c < 72272
                  ? (c < 72250
                    ? (c >= 72203 && c <= 72242)
                    : c <= 72250)
                  : (c <= 72272 || (c >= 72284 && c <= 72329)))))
              : (c <= 72349 || (c < 72818
                ? (c < 72714
                  ? (c < 72704
                    ? (c >= 72368 && c <= 72440)
                    : c <= 72712)
                  : (c <= 72750 || c == 72768))
                : (c <= 72847 || (c < 72971
                  ? (c < 72968
                    ? (c >= 72960 && c <= 72966)
                    : c <= 72969)
                  : (c <= 73008 || c == 73030))))))))
          : (c <= 73061 || (c < 93952
            ? (c < 82944
              ? (c < 73728
                ? (c < 73112
                  ? (c < 73066
                    ? (c >= 73063 && c <= 73064)
                    : c <= 73097)
                  : (c <= 73112 || (c < 73648
                    ? (c >= 73440 && c <= 73458)
                    : c <= 73648)))
                : (c <= 74649 || (c < 77712
                  ? (c < 74880
                    ? (c >= 74752 && c <= 74862)
                    : c <= 75075)
                  : (c <= 77808 || (c >= 77824 && c <= 78894)))))
              : (c <= 83526 || (c < 92928
                ? (c < 92784
                  ? (c < 92736
                    ? (c >= 92160 && c <= 92728)
                    : c <= 92766)
                  : (c <= 92862 || (c >= 92880 && c <= 92909)))
                : (c <= 92975 || (c < 93053
                  ? (c < 93027
                    ? (c >= 92992 && c <= 92995)
                    : c <= 93047)
                  : (c <= 93071 || (c >= 93760 && c <= 93823)))))))
            : (c <= 94026 || (c < 110589
              ? (c < 94208
                ? (c < 94176
                  ? (c < 94099
                    ? c == 94032
                    : c <= 94111)
                  : (c <= 94177 || c == 94179))
                : (c <= 100343 || (c < 110576
                  ? (c < 101632
                    ? (c >= 100352 && c <= 101589)
                    : c <= 101640)
                  : (c <= 110579 || (c >= 110581 && c <= 110587)))))
              : (c <= 110590 || (c < 113664
                ? (c < 110948
                  ? (c < 110928
                    ? (c >= 110592 && c <= 110882)
                    : c <= 110930)
                  : (c <= 110951 || (c >= 110960 && c <= 111355)))
                : (c <= 113770 || (c < 113808
                  ? (c < 113792
                    ? (c >= 113776 && c <= 113788)
                    : c <= 113800)
                  : (c <= 113817 || (c >= 119808 && c <= 119892)))))))))))
        : (c <= 119964 || (c < 125259
          ? (c < 120572
            ? (c < 120086
              ? (c < 119995
                ? (c < 119973
                  ? (c < 119970
                    ? (c >= 119966 && c <= 119967)
                    : c <= 119970)
                  : (c <= 119974 || (c < 119982
                    ? (c >= 119977 && c <= 119980)
                    : c <= 119993)))
                : (c <= 119995 || (c < 120071
                  ? (c < 120005
                    ? (c >= 119997 && c <= 120003)
                    : c <= 120069)
                  : (c <= 120074 || (c >= 120077 && c <= 120084)))))
              : (c <= 120092 || (c < 120138
                ? (c < 120128
                  ? (c < 120123
                    ? (c >= 120094 && c <= 120121)
                    : c <= 120126)
                  : (c <= 120132 || c == 120134))
                : (c <= 120144 || (c < 120514
                  ? (c < 120488
                    ? (c >= 120146 && c <= 120485)
                    : c <= 120512)
                  : (c <= 120538 || (c >= 120540 && c <= 120570)))))))
            : (c <= 120596 || (c < 123191
              ? (c < 120714
                ? (c < 120656
                  ? (c < 120630
                    ? (c >= 120598 && c <= 120628)
                    : c <= 120654)
                  : (c <= 120686 || (c >= 120688 && c <= 120712)))
                : (c <= 120744 || (c < 122624
                  ? (c < 120772
                    ? (c >= 120746 && c <= 120770)
                    : c <= 120779)
                  : (c <= 122654 || (c >= 123136 && c <= 123180)))))
              : (c <= 123197 || (c < 124904
                ? (c < 123584
                  ? (c < 123536
                    ? c == 123214
                    : c <= 123565)
                  : (c <= 123627 || (c >= 124896 && c <= 124902)))
                : (c <= 124907 || (c < 124928
                  ? (c < 124912
                    ? (c >= 124909 && c <= 124910)
                    : c <= 124926)
                  : (c <= 125124 || (c >= 125184 && c <= 125251)))))))))
          : (c <= 125259 || (c < 126559
            ? (c < 126535
              ? (c < 126505
                ? (c < 126497
                  ? (c < 126469
                    ? (c >= 126464 && c <= 126467)
                    : c <= 126495)
                  : (c <= 126498 || (c < 126503
                    ? c == 126500
                    : c <= 126503)))
                : (c <= 126514 || (c < 126523
                  ? (c < 126521
                    ? (c >= 126516 && c <= 126519)
                    : c <= 126521)
                  : (c <= 126523 || c == 126530))))
              : (c <= 126535 || (c < 126548
                ? (c < 126541
                  ? (c < 126539
                    ? c == 126537
                    : c <= 126539)
                  : (c <= 126543 || (c >= 126545 && c <= 126546)))
                : (c <= 126548 || (c < 126555
                  ? (c < 126553
                    ? c == 126551
                    : c <= 126553)
                  : (c <= 126555 || c == 126557))))))
            : (c <= 126559 || (c < 126625
              ? (c < 126580
                ? (c < 126567
                  ? (c < 126564
                    ? (c >= 126561 && c <= 126562)
                    : c <= 126564)
                  : (c <= 126570 || (c >= 126572 && c <= 126578)))
                : (c <= 126583 || (c < 126592
                  ? (c < 126590
                    ? (c >= 126585 && c <= 126588)
                    : c <= 126590)
                  : (c <= 126601 || (c >= 126603 && c <= 126619)))))
              : (c <= 126627 || (c < 177984
                ? (c < 131072
                  ? (c < 126635
                    ? (c >= 126629 && c <= 126633)
                    : c <= 126651)
                  : (c <= 173791 || (c >= 173824 && c <= 177976)))
                : (c <= 178205 || (c < 194560
                  ? (c < 183984
                    ? (c >= 178208 && c <= 183969)
                    : c <= 191456)
                  : (c <= 195101 || (c >= 196608 && c <= 201546)))))))))))))))));
}

static inline bool sym_identifier_character_set_3(int32_t c) {
  return (c < 43514
    ? (c < 4193
      ? (c < 2707
        ? (c < 1994
          ? (c < 910
            ? (c < 736
              ? (c < 186
                ? (c < 'd'
                  ? (c < '_'
                    ? (c >= 'A' && c <= 'Z')
                    : c <= '_')
                  : (c <= 'z' || (c < 181
                    ? c == 170
                    : c <= 181)))
                : (c <= 186 || (c < 248
                  ? (c < 216
                    ? (c >= 192 && c <= 214)
                    : c <= 246)
                  : (c <= 705 || (c >= 710 && c <= 721)))))
              : (c <= 740 || (c < 891
                ? (c < 880
                  ? (c < 750
                    ? c == 748
                    : c <= 750)
                  : (c <= 884 || (c >= 886 && c <= 887)))
                : (c <= 893 || (c < 904
                  ? (c < 902
                    ? c == 895
                    : c <= 902)
                  : (c <= 906 || c == 908))))))
            : (c <= 929 || (c < 1649
              ? (c < 1376
                ? (c < 1162
                  ? (c < 1015
                    ? (c >= 931 && c <= 1013)
                    : c <= 1153)
                  : (c <= 1327 || (c < 1369
                    ? (c >= 1329 && c <= 1366)
                    : c <= 1369)))
                : (c <= 1416 || (c < 1568
                  ? (c < 1519
                    ? (c >= 1488 && c <= 1514)
                    : c <= 1522)
                  : (c <= 1610 || (c >= 1646 && c <= 1647)))))
              : (c <= 1747 || (c < 1791
                ? (c < 1774
                  ? (c < 1765
                    ? c == 1749
                    : c <= 1766)
                  : (c <= 1775 || (c >= 1786 && c <= 1788)))
                : (c <= 1791 || (c < 1869
                  ? (c < 1810
                    ? c == 1808
                    : c <= 1839)
                  : (c <= 1957 || c == 1969))))))))
          : (c <= 2026 || (c < 2482
            ? (c < 2208
              ? (c < 2088
                ? (c < 2048
                  ? (c < 2042
                    ? (c >= 2036 && c <= 2037)
                    : c <= 2042)
                  : (c <= 2069 || (c < 2084
                    ? c == 2074
                    : c <= 2084)))
                : (c <= 2088 || (c < 2160
                  ? (c < 2144
                    ? (c >= 2112 && c <= 2136)
                    : c <= 2154)
                  : (c <= 2183 || (c >= 2185 && c <= 2190)))))
              : (c <= 2249 || (c < 2417
                ? (c < 2384
                  ? (c < 2365
                    ? (c >= 2308 && c <= 2361)
                    : c <= 2365)
                  : (c <= 2384 || (c >= 2392 && c <= 2401)))
                : (c <= 2432 || (c < 2451
                  ? (c < 2447
                    ? (c >= 2437 && c <= 2444)
                    : c <= 2448)
                  : (c <= 2472 || (c >= 2474 && c <= 2480)))))))
            : (c <= 2482 || (c < 2579
              ? (c < 2527
                ? (c < 2510
                  ? (c < 2493
                    ? (c >= 2486 && c <= 2489)
                    : c <= 2493)
                  : (c <= 2510 || (c >= 2524 && c <= 2525)))
                : (c <= 2529 || (c < 2565
                  ? (c < 2556
                    ? (c >= 2544 && c <= 2545)
                    : c <= 2556)
                  : (c <= 2570 || (c >= 2575 && c <= 2576)))))
              : (c <= 2600 || (c < 2649
                ? (c < 2613
                  ? (c < 2610
                    ? (c >= 2602 && c <= 2608)
                    : c <= 2611)
                  : (c <= 2614 || (c >= 2616 && c <= 2617)))
                : (c <= 2652 || (c < 2693
                  ? (c < 2674
                    ? c == 2654
                    : c <= 2676)
                  : (c <= 2701 || (c >= 2703 && c <= 2705)))))))))))
        : (c <= 2728 || (c < 3242
          ? (c < 2962
            ? (c < 2858
              ? (c < 2784
                ? (c < 2741
                  ? (c < 2738
                    ? (c >= 2730 && c <= 2736)
                    : c <= 2739)
                  : (c <= 2745 || (c < 2768
                    ? c == 2749
                    : c <= 2768)))
                : (c <= 2785 || (c < 2831
                  ? (c < 2821
                    ? c == 2809
                    : c <= 2828)
                  : (c <= 2832 || (c >= 2835 && c <= 2856)))))
              : (c <= 2864 || (c < 2911
                ? (c < 2877
                  ? (c < 2869
                    ? (c >= 2866 && c <= 2867)
                    : c <= 2873)
                  : (c <= 2877 || (c >= 2908 && c <= 2909)))
                : (c <= 2913 || (c < 2949
                  ? (c < 2947
                    ? c == 2929
                    : c <= 2947)
                  : (c <= 2954 || (c >= 2958 && c <= 2960)))))))
            : (c <= 2965 || (c < 3090
              ? (c < 2984
                ? (c < 2974
                  ? (c < 2972
                    ? (c >= 2969 && c <= 2970)
                    : c <= 2972)
                  : (c <= 2975 || (c >= 2979 && c <= 2980)))
                : (c <= 2986 || (c < 3077
                  ? (c < 3024
                    ? (c >= 2990 && c <= 3001)
                    : c <= 3024)
                  : (c <= 3084 || (c >= 3086 && c <= 3088)))))
              : (c <= 3112 || (c < 3168
                ? (c < 3160
                  ? (c < 3133
                    ? (c >= 3114 && c <= 3129)
                    : c <= 3133)
                  : (c <= 3162 || c == 3165))
                : (c <= 3169 || (c < 3214
                  ? (c < 3205
                    ? c == 3200
                    : c <= 3212)
                  : (c <= 3216 || (c >= 3218 && c <= 3240)))))))))
          : (c <= 3251 || (c < 3648
            ? (c < 3412
              ? (c < 3332
                ? (c < 3293
                  ? (c < 3261
                    ? (c >= 3253 && c <= 3257)
                    : c <= 3261)
                  : (c <= 3294 || (c < 3313
                    ? (c >= 3296 && c <= 3297)
                    : c <= 3314)))
                : (c <= 3340 || (c < 3389
                  ? (c < 3346
                    ? (c >= 3342 && c <= 3344)
                    : c <= 3386)
                  : (c <= 3389 || c == 3406))))
              : (c <= 3414 || (c < 3507
                ? (c < 3461
                  ? (c < 3450
                    ? (c >= 3423 && c <= 3425)
                    : c <= 3455)
                  : (c <= 3478 || (c >= 3482 && c <= 3505)))
                : (c <= 3515 || (c < 3585
                  ? (c < 3520
                    ? c == 3517
                    : c <= 3526)
                  : (c <= 3632 || c == 3634))))))
            : (c <= 3654 || (c < 3782
              ? (c < 3749
                ? (c < 3718
                  ? (c < 3716
                    ? (c >= 3713 && c <= 3714)
                    : c <= 3716)
                  : (c <= 3722 || (c >= 3724 && c <= 3747)))
                : (c <= 3749 || (c < 3773
                  ? (c < 3762
                    ? (c >= 3751 && c <= 3760)
                    : c <= 3762)
                  : (c <= 3773 || (c >= 3776 && c <= 3780)))))
              : (c <= 3782 || (c < 3976
                ? (c < 3904
                  ? (c < 3840
                    ? (c >= 3804 && c <= 3807)
                    : c <= 3840)
                  : (c <= 3911 || (c >= 3913 && c <= 3948)))
                : (c <= 3980 || (c < 4176
                  ? (c < 4159
                    ? (c >= 4096 && c <= 4138)
                    : c <= 4159)
                  : (c <= 4181 || (c >= 4186 && c <= 4189)))))))))))))
      : (c <= 4193 || (c < 8134
        ? (c < 6176
          ? (c < 4808
            ? (c < 4688
              ? (c < 4295
                ? (c < 4213
                  ? (c < 4206
                    ? (c >= 4197 && c <= 4198)
                    : c <= 4208)
                  : (c <= 4225 || (c < 4256
                    ? c == 4238
                    : c <= 4293)))
                : (c <= 4295 || (c < 4348
                  ? (c < 4304
                    ? c == 4301
                    : c <= 4346)
                  : (c <= 4680 || (c >= 4682 && c <= 4685)))))
              : (c <= 4694 || (c < 4752
                ? (c < 4704
                  ? (c < 4698
                    ? c == 4696
                    : c <= 4701)
                  : (c <= 4744 || (c >= 4746 && c <= 4749)))
                : (c <= 4784 || (c < 4800
                  ? (c < 4792
                    ? (c >= 4786 && c <= 4789)
                    : c <= 4798)
                  : (c <= 4800 || (c >= 4802 && c <= 4805)))))))
            : (c <= 4822 || (c < 5792
              ? (c < 5024
                ? (c < 4888
                  ? (c < 4882
                    ? (c >= 4824 && c <= 4880)
                    : c <= 4885)
                  : (c <= 4954 || (c >= 4992 && c <= 5007)))
                : (c <= 5109 || (c < 5743
                  ? (c < 5121
                    ? (c >= 5112 && c <= 5117)
                    : c <= 5740)
                  : (c <= 5759 || (c >= 5761 && c <= 5786)))))
              : (c <= 5866 || (c < 5984
                ? (c < 5919
                  ? (c < 5888
                    ? (c >= 5870 && c <= 5880)
                    : c <= 5905)
                  : (c <= 5937 || (c >= 5952 && c <= 5969)))
                : (c <= 5996 || (c < 6103
                  ? (c < 6016
                    ? (c >= 5998 && c <= 6000)
                    : c <= 6067)
                  : (c <= 6103 || c == 6108))))))))
          : (c <= 6264 || (c < 7312
            ? (c < 6823
              ? (c < 6512
                ? (c < 6320
                  ? (c < 6314
                    ? (c >= 6272 && c <= 6312)
                    : c <= 6314)
                  : (c <= 6389 || (c < 6480
                    ? (c >= 6400 && c <= 6430)
                    : c <= 6509)))
                : (c <= 6516 || (c < 6656
                  ? (c < 6576
                    ? (c >= 6528 && c <= 6571)
                    : c <= 6601)
                  : (c <= 6678 || (c >= 6688 && c <= 6740)))))
              : (c <= 6823 || (c < 7098
                ? (c < 7043
                  ? (c < 6981
                    ? (c >= 6917 && c <= 6963)
                    : c <= 6988)
                  : (c <= 7072 || (c >= 7086 && c <= 7087)))
                : (c <= 7141 || (c < 7258
                  ? (c < 7245
                    ? (c >= 7168 && c <= 7203)
                    : c <= 7247)
                  : (c <= 7293 || (c >= 7296 && c <= 7304)))))))
            : (c <= 7354 || (c < 8008
              ? (c < 7418
                ? (c < 7406
                  ? (c < 7401
                    ? (c >= 7357 && c <= 7359)
                    : c <= 7404)
                  : (c <= 7411 || (c >= 7413 && c <= 7414)))
                : (c <= 7418 || (c < 7960
                  ? (c < 7680
                    ? (c >= 7424 && c <= 7615)
                    : c <= 7957)
                  : (c <= 7965 || (c >= 7968 && c <= 8005)))))
              : (c <= 8013 || (c < 8031
                ? (c < 8027
                  ? (c < 8025
                    ? (c >= 8016 && c <= 8023)
                    : c <= 8025)
                  : (c <= 8027 || c == 8029))
                : (c <= 8061 || (c < 8126
                  ? (c < 8118
                    ? (c >= 8064 && c <= 8116)
                    : c <= 8124)
                  : (c <= 8126 || (c >= 8130 && c <= 8132)))))))))))
        : (c <= 8140 || (c < 12337
          ? (c < 8544
            ? (c < 8458
              ? (c < 8305
                ? (c < 8160
                  ? (c < 8150
                    ? (c >= 8144 && c <= 8147)
                    : c <= 8155)
                  : (c <= 8172 || (c < 8182
                    ? (c >= 8178 && c <= 8180)
                    : c <= 8188)))
                : (c <= 8305 || (c < 8450
                  ? (c < 8336
                    ? c == 8319
                    : c <= 8348)
                  : (c <= 8450 || c == 8455))))
              : (c <= 8467 || (c < 8488
                ? (c < 8484
                  ? (c < 8472
                    ? c == 8469
                    : c <= 8477)
                  : (c <= 8484 || c == 8486))
                : (c <= 8488 || (c < 8517
                  ? (c < 8508
                    ? (c >= 8490 && c <= 8505)
                    : c <= 8511)
                  : (c <= 8521 || c == 8526))))))
            : (c <= 8584 || (c < 11680
              ? (c < 11559
                ? (c < 11506
                  ? (c < 11499
                    ? (c >= 11264 && c <= 11492)
                    : c <= 11502)
                  : (c <= 11507 || (c >= 11520 && c <= 11557)))
                : (c <= 11559 || (c < 11631
                  ? (c < 11568
                    ? c == 11565
                    : c <= 11623)
                  : (c <= 11631 || (c >= 11648 && c <= 11670)))))
              : (c <= 11686 || (c < 11720
                ? (c < 11704
                  ? (c < 11696
                    ? (c >= 11688 && c <= 11694)
                    : c <= 11702)
                  : (c <= 11710 || (c >= 11712 && c <= 11718)))
                : (c <= 11726 || (c < 12293
                  ? (c < 11736
                    ? (c >= 11728 && c <= 11734)
                    : c <= 11742)
                  : (c <= 12295 || (c >= 12321 && c <= 12329)))))))))
          : (c <= 12341 || (c < 42891
            ? (c < 19968
              ? (c < 12549
                ? (c < 12445
                  ? (c < 12353
                    ? (c >= 12344 && c <= 12348)
                    : c <= 12438)
                  : (c <= 12447 || (c < 12540
                    ? (c >= 12449 && c <= 12538)
                    : c <= 12543)))
                : (c <= 12591 || (c < 12784
                  ? (c < 12704
                    ? (c >= 12593 && c <= 12686)
                    : c <= 12735)
                  : (c <= 12799 || (c >= 13312 && c <= 19903)))))
              : (c <= 42124 || (c < 42560
                ? (c < 42512
                  ? (c < 42240
                    ? (c >= 42192 && c <= 42237)
                    : c <= 42508)
                  : (c <= 42527 || (c >= 42538 && c <= 42539)))
                : (c <= 42606 || (c < 42775
                  ? (c < 42656
                    ? (c >= 42623 && c <= 42653)
                    : c <= 42735)
                  : (c <= 42783 || (c >= 42786 && c <= 42888)))))))
            : (c <= 42954 || (c < 43250
              ? (c < 43011
                ? (c < 42965
                  ? (c < 42963
                    ? (c >= 42960 && c <= 42961)
                    : c <= 42963)
                  : (c <= 42969 || (c >= 42994 && c <= 43009)))
                : (c <= 43013 || (c < 43072
                  ? (c < 43020
                    ? (c >= 43015 && c <= 43018)
                    : c <= 43042)
                  : (c <= 43123 || (c >= 43138 && c <= 43187)))))
              : (c <= 43255 || (c < 43360
                ? (c < 43274
                  ? (c < 43261
                    ? c == 43259
                    : c <= 43262)
                  : (c <= 43301 || (c >= 43312 && c <= 43334)))
                : (c <= 43388 || (c < 43488
                  ? (c < 43471
                    ? (c >= 43396 && c <= 43442)
                    : c <= 43471)
                  : (c <= 43492 || (c >= 43494 && c <= 43503)))))))))))))))
    : (c <= 43518 || (c < 70727
      ? (c < 66956
        ? (c < 64914
          ? (c < 43868
            ? (c < 43714
              ? (c < 43646
                ? (c < 43588
                  ? (c < 43584
                    ? (c >= 43520 && c <= 43560)
                    : c <= 43586)
                  : (c <= 43595 || (c < 43642
                    ? (c >= 43616 && c <= 43638)
                    : c <= 43642)))
                : (c <= 43695 || (c < 43705
                  ? (c < 43701
                    ? c == 43697
                    : c <= 43702)
                  : (c <= 43709 || c == 43712))))
              : (c <= 43714 || (c < 43785
                ? (c < 43762
                  ? (c < 43744
                    ? (c >= 43739 && c <= 43741)
                    : c <= 43754)
                  : (c <= 43764 || (c >= 43777 && c <= 43782)))
                : (c <= 43790 || (c < 43816
                  ? (c < 43808
                    ? (c >= 43793 && c <= 43798)
                    : c <= 43814)
                  : (c <= 43822 || (c >= 43824 && c <= 43866)))))))
            : (c <= 43881 || (c < 64287
              ? (c < 63744
                ? (c < 55216
                  ? (c < 44032
                    ? (c >= 43888 && c <= 44002)
                    : c <= 55203)
                  : (c <= 55238 || (c >= 55243 && c <= 55291)))
                : (c <= 64109 || (c < 64275
                  ? (c < 64256
                    ? (c >= 64112 && c <= 64217)
                    : c <= 64262)
                  : (c <= 64279 || c == 64285))))
              : (c <= 64296 || (c < 64323
                ? (c < 64318
                  ? (c < 64312
                    ? (c >= 64298 && c <= 64310)
                    : c <= 64316)
                  : (c <= 64318 || (c >= 64320 && c <= 64321)))
                : (c <= 64324 || (c < 64612
                  ? (c < 64467
                    ? (c >= 64326 && c <= 64433)
                    : c <= 64605)
                  : (c <= 64829 || (c >= 64848 && c <= 64911)))))))))
          : (c <= 64967 || (c < 65599
            ? (c < 65382
              ? (c < 65147
                ? (c < 65139
                  ? (c < 65137
                    ? (c >= 65008 && c <= 65017)
                    : c <= 65137)
                  : (c <= 65139 || (c < 65145
                    ? c == 65143
                    : c <= 65145)))
                : (c <= 65147 || (c < 65313
                  ? (c < 65151
                    ? c == 65149
                    : c <= 65276)
                  : (c <= 65338 || (c >= 65345 && c <= 65370)))))
              : (c <= 65437 || (c < 65498
                ? (c < 65482
                  ? (c < 65474
                    ? (c >= 65440 && c <= 65470)
                    : c <= 65479)
                  : (c <= 65487 || (c >= 65490 && c <= 65495)))
                : (c <= 65500 || (c < 65576
                  ? (c < 65549
                    ? (c >= 65536 && c <= 65547)
                    : c <= 65574)
                  : (c <= 65594 || (c >= 65596 && c <= 65597)))))))
            : (c <= 65613 || (c < 66464
              ? (c < 66208
                ? (c < 65856
                  ? (c < 65664
                    ? (c >= 65616 && c <= 65629)
                    : c <= 65786)
                  : (c <= 65908 || (c >= 66176 && c <= 66204)))
                : (c <= 66256 || (c < 66384
                  ? (c < 66349
                    ? (c >= 66304 && c <= 66335)
                    : c <= 66378)
                  : (c <= 66421 || (c >= 66432 && c <= 66461)))))
              : (c <= 66499 || (c < 66776
                ? (c < 66560
                  ? (c < 66513
                    ? (c >= 66504 && c <= 66511)
                    : c <= 66517)
                  : (c <= 66717 || (c >= 66736 && c <= 66771)))
                : (c <= 66811 || (c < 66928
                  ? (c < 66864
                    ? (c >= 66816 && c <= 66855)
                    : c <= 66915)
                  : (c <= 66938 || (c >= 66940 && c <= 66954)))))))))))
        : (c <= 66962 || (c < 68864
          ? (c < 67828
            ? (c < 67506
              ? (c < 67072
                ? (c < 66979
                  ? (c < 66967
                    ? (c >= 66964 && c <= 66965)
                    : c <= 66977)
                  : (c <= 66993 || (c < 67003
                    ? (c >= 66995 && c <= 67001)
                    : c <= 67004)))
                : (c <= 67382 || (c < 67456
                  ? (c < 67424
                    ? (c >= 67392 && c <= 67413)
                    : c <= 67431)
                  : (c <= 67461 || (c >= 67463 && c <= 67504)))))
              : (c <= 67514 || (c < 67644
                ? (c < 67594
                  ? (c < 67592
                    ? (c >= 67584 && c <= 67589)
                    : c <= 67592)
                  : (c <= 67637 || (c >= 67639 && c <= 67640)))
                : (c <= 67644 || (c < 67712
                  ? (c < 67680
                    ? (c >= 67647 && c <= 67669)
                    : c <= 67702)
                  : (c <= 67742 || (c >= 67808 && c <= 67826)))))))
            : (c <= 67829 || (c < 68224
              ? (c < 68096
                ? (c < 67968
                  ? (c < 67872
                    ? (c >= 67840 && c <= 67861)
                    : c <= 67897)
                  : (c <= 68023 || (c >= 68030 && c <= 68031)))
                : (c <= 68096 || (c < 68121
                  ? (c < 68117
                    ? (c >= 68112 && c <= 68115)
                    : c <= 68119)
                  : (c <= 68149 || (c >= 68192 && c <= 68220)))))
              : (c <= 68252 || (c < 68448
                ? (c < 68352
                  ? (c < 68297
                    ? (c >= 68288 && c <= 68295)
                    : c <= 68324)
                  : (c <= 68405 || (c >= 68416 && c <= 68437)))
                : (c <= 68466 || (c < 68736
                  ? (c < 68608
                    ? (c >= 68480 && c <= 68497)
                    : c <= 68680)
                  : (c <= 68786 || (c >= 68800 && c <= 68850)))))))))
          : (c <= 68899 || (c < 70106
            ? (c < 69749
              ? (c < 69488
                ? (c < 69376
                  ? (c < 69296
                    ? (c >= 69248 && c <= 69289)
                    : c <= 69297)
                  : (c <= 69404 || (c < 69424
                    ? c == 69415
                    : c <= 69445)))
                : (c <= 69505 || (c < 69635
                  ? (c < 69600
                    ? (c >= 69552 && c <= 69572)
                    : c <= 69622)
                  : (c <= 69687 || (c >= 69745 && c <= 69746)))))
              : (c <= 69749 || (c < 69959
                ? (c < 69891
                  ? (c < 69840
                    ? (c >= 69763 && c <= 69807)
                    : c <= 69864)
                  : (c <= 69926 || c == 69956))
                : (c <= 69959 || (c < 70019
                  ? (c < 70006
                    ? (c >= 69968 && c <= 70002)
                    : c <= 70006)
                  : (c <= 70066 || (c >= 70081 && c <= 70084)))))))
            : (c <= 70106 || (c < 70405
              ? (c < 70280
                ? (c < 70163
                  ? (c < 70144
                    ? c == 70108
                    : c <= 70161)
                  : (c <= 70187 || (c >= 70272 && c <= 70278)))
                : (c <= 70280 || (c < 70303
                  ? (c < 70287
                    ? (c >= 70282 && c <= 70285)
                    : c <= 70301)
                  : (c <= 70312 || (c >= 70320 && c <= 70366)))))
              : (c <= 70412 || (c < 70453
                ? (c < 70442
                  ? (c < 70419
                    ? (c >= 70415 && c <= 70416)
                    : c <= 70440)
                  : (c <= 70448 || (c >= 70450 && c <= 70451)))
                : (c <= 70457 || (c < 70493
                  ? (c < 70480
                    ? c == 70461
                    : c <= 70480)
                  : (c <= 70497 || (c >= 70656 && c <= 70708)))))))))))))
      : (c <= 70730 || (c < 119894
        ? (c < 73056
          ? (c < 72001
            ? (c < 71424
              ? (c < 71128
                ? (c < 70852
                  ? (c < 70784
                    ? (c >= 70751 && c <= 70753)
                    : c <= 70831)
                  : (c <= 70853 || (c < 71040
                    ? c == 70855
                    : c <= 71086)))
                : (c <= 71131 || (c < 71296
                  ? (c < 71236
                    ? (c >= 71168 && c <= 71215)
                    : c <= 71236)
                  : (c <= 71338 || c == 71352))))
              : (c <= 71450 || (c < 71945
                ? (c < 71840
                  ? (c < 71680
                    ? (c >= 71488 && c <= 71494)
                    : c <= 71723)
                  : (c <= 71903 || (c >= 71935 && c <= 71942)))
                : (c <= 71945 || (c < 71960
                  ? (c < 71957
                    ? (c >= 71948 && c <= 71955)
                    : c <= 71958)
                  : (c <= 71983 || c == 71999))))))
            : (c <= 72001 || (c < 72349
              ? (c < 72192
                ? (c < 72161
                  ? (c < 72106
                    ? (c >= 72096 && c <= 72103)
                    : c <= 72144)
                  : (c <= 72161 || c == 72163))
                : (c <= 72192 || (c < 72272
                  ? (c < 72250
                    ? (c >= 72203 && c <= 72242)
                    : c <= 72250)
                  : (c <= 72272 || (c >= 72284 && c <= 72329)))))
              : (c <= 72349 || (c < 72818
                ? (c < 72714
                  ? (c < 72704
                    ? (c >= 72368 && c <= 72440)
                    : c <= 72712)
                  : (c <= 72750 || c == 72768))
                : (c <= 72847 || (c < 72971
                  ? (c < 72968
                    ? (c >= 72960 && c <= 72966)
                    : c <= 72969)
                  : (c <= 73008 || c == 73030))))))))
          : (c <= 73061 || (c < 93952
            ? (c < 82944
              ? (c < 73728
                ? (c < 73112
                  ? (c < 73066
                    ? (c >= 73063 && c <= 73064)
                    : c <= 73097)
                  : (c <= 73112 || (c < 73648
                    ? (c >= 73440 && c <= 73458)
                    : c <= 73648)))
                : (c <= 74649 || (c < 77712
                  ? (c < 74880
                    ? (c >= 74752 && c <= 74862)
                    : c <= 75075)
                  : (c <= 77808 || (c >= 77824 && c <= 78894)))))
              : (c <= 83526 || (c < 92928
                ? (c < 92784
                  ? (c < 92736
                    ? (c >= 92160 && c <= 92728)
                    : c <= 92766)
                  : (c <= 92862 || (c >= 92880 && c <= 92909)))
                : (c <= 92975 || (c < 93053
                  ? (c < 93027
                    ? (c >= 92992 && c <= 92995)
                    : c <= 93047)
                  : (c <= 93071 || (c >= 93760 && c <= 93823)))))))
            : (c <= 94026 || (c < 110589
              ? (c < 94208
                ? (c < 94176
                  ? (c < 94099
                    ? c == 94032
                    : c <= 94111)
                  : (c <= 94177 || c == 94179))
                : (c <= 100343 || (c < 110576
                  ? (c < 101632
                    ? (c >= 100352 && c <= 101589)
                    : c <= 101640)
                  : (c <= 110579 || (c >= 110581 && c <= 110587)))))
              : (c <= 110590 || (c < 113664
                ? (c < 110948
                  ? (c < 110928
                    ? (c >= 110592 && c <= 110882)
                    : c <= 110930)
                  : (c <= 110951 || (c >= 110960 && c <= 111355)))
                : (c <= 113770 || (c < 113808
                  ? (c < 113792
                    ? (c >= 113776 && c <= 113788)
                    : c <= 113800)
                  : (c <= 113817 || (c >= 119808 && c <= 119892)))))))))))
        : (c <= 119964 || (c < 125259
          ? (c < 120572
            ? (c < 120086
              ? (c < 119995
                ? (c < 119973
                  ? (c < 119970
                    ? (c >= 119966 && c <= 119967)
                    : c <= 119970)
                  : (c <= 119974 || (c < 119982
                    ? (c >= 119977 && c <= 119980)
                    : c <= 119993)))
                : (c <= 119995 || (c < 120071
                  ? (c < 120005
                    ? (c >= 119997 && c <= 120003)
                    : c <= 120069)
                  : (c <= 120074 || (c >= 120077 && c <= 120084)))))
              : (c <= 120092 || (c < 120138
                ? (c < 120128
                  ? (c < 120123
                    ? (c >= 120094 && c <= 120121)
                    : c <= 120126)
                  : (c <= 120132 || c == 120134))
                : (c <= 120144 || (c < 120514
                  ? (c < 120488
                    ? (c >= 120146 && c <= 120485)
                    : c <= 120512)
                  : (c <= 120538 || (c >= 120540 && c <= 120570)))))))
            : (c <= 120596 || (c < 123191
              ? (c < 120714
                ? (c < 120656
                  ? (c < 120630
                    ? (c >= 120598 && c <= 120628)
                    : c <= 120654)
                  : (c <= 120686 || (c >= 120688 && c <= 120712)))
                : (c <= 120744 || (c < 122624
                  ? (c < 120772
                    ? (c >= 120746 && c <= 120770)
                    : c <= 120779)
                  : (c <= 122654 || (c >= 123136 && c <= 123180)))))
              : (c <= 123197 || (c < 124904
                ? (c < 123584
                  ? (c < 123536
                    ? c == 123214
                    : c <= 123565)
                  : (c <= 123627 || (c >= 124896 && c <= 124902)))
                : (c <= 124907 || (c < 124928
                  ? (c < 124912
                    ? (c >= 124909 && c <= 124910)
                    : c <= 124926)
                  : (c <= 125124 || (c >= 125184 && c <= 125251)))))))))
          : (c <= 125259 || (c < 126559
            ? (c < 126535
              ? (c < 126505
                ? (c < 126497
                  ? (c < 126469
                    ? (c >= 126464 && c <= 126467)
                    : c <= 126495)
                  : (c <= 126498 || (c < 126503
                    ? c == 126500
                    : c <= 126503)))
                : (c <= 126514 || (c < 126523
                  ? (c < 126521
                    ? (c >= 126516 && c <= 126519)
                    : c <= 126521)
                  : (c <= 126523 || c == 126530))))
              : (c <= 126535 || (c < 126548
                ? (c < 126541
                  ? (c < 126539
                    ? c == 126537
                    : c <= 126539)
                  : (c <= 126543 || (c >= 126545 && c <= 126546)))
                : (c <= 126548 || (c < 126555
                  ? (c < 126553
                    ? c == 126551
                    : c <= 126553)
                  : (c <= 126555 || c == 126557))))))
            : (c <= 126559 || (c < 126625
              ? (c < 126580
                ? (c < 126567
                  ? (c < 126564
                    ? (c >= 126561 && c <= 126562)
                    : c <= 126564)
                  : (c <= 126570 || (c >= 126572 && c <= 126578)))
                : (c <= 126583 || (c < 126592
                  ? (c < 126590
                    ? (c >= 126585 && c <= 126588)
                    : c <= 126590)
                  : (c <= 126601 || (c >= 126603 && c <= 126619)))))
              : (c <= 126627 || (c < 177984
                ? (c < 131072
                  ? (c < 126635
                    ? (c >= 126629 && c <= 126633)
                    : c <= 126651)
                  : (c <= 173791 || (c >= 173824 && c <= 177976)))
                : (c <= 178205 || (c < 194560
                  ? (c < 183984
                    ? (c >= 178208 && c <= 183969)
                    : c <= 191456)
                  : (c <= 195101 || (c >= 196608 && c <= 201546)))))))))))))))));
}

static inline bool sym_identifier_character_set_4(int32_t c) {
  return (c < 43514
    ? (c < 4193
      ? (c < 2707
        ? (c < 1994
          ? (c < 910
            ? (c < 736
              ? (c < 186
                ? (c < 'g'
                  ? (c < '_'
                    ? (c >= 'A' && c <= 'Z')
                    : c <= '_')
                  : (c <= 'z' || (c < 181
                    ? c == 170
                    : c <= 181)))
                : (c <= 186 || (c < 248
                  ? (c < 216
                    ? (c >= 192 && c <= 214)
                    : c <= 246)
                  : (c <= 705 || (c >= 710 && c <= 721)))))
              : (c <= 740 || (c < 891
                ? (c < 880
                  ? (c < 750
                    ? c == 748
                    : c <= 750)
                  : (c <= 884 || (c >= 886 && c <= 887)))
                : (c <= 893 || (c < 904
                  ? (c < 902
                    ? c == 895
                    : c <= 902)
                  : (c <= 906 || c == 908))))))
            : (c <= 929 || (c < 1649
              ? (c < 1376
                ? (c < 1162
                  ? (c < 1015
                    ? (c >= 931 && c <= 1013)
                    : c <= 1153)
                  : (c <= 1327 || (c < 1369
                    ? (c >= 1329 && c <= 1366)
                    : c <= 1369)))
                : (c <= 1416 || (c < 1568
                  ? (c < 1519
                    ? (c >= 1488 && c <= 1514)
                    : c <= 1522)
                  : (c <= 1610 || (c >= 1646 && c <= 1647)))))
              : (c <= 1747 || (c < 1791
                ? (c < 1774
                  ? (c < 1765
                    ? c == 1749
                    : c <= 1766)
                  : (c <= 1775 || (c >= 1786 && c <= 1788)))
                : (c <= 1791 || (c < 1869
                  ? (c < 1810
                    ? c == 1808
                    : c <= 1839)
                  : (c <= 1957 || c == 1969))))))))
          : (c <= 2026 || (c < 2482
            ? (c < 2208
              ? (c < 2088
                ? (c < 2048
                  ? (c < 2042
                    ? (c >= 2036 && c <= 2037)
                    : c <= 2042)
                  : (c <= 2069 || (c < 2084
                    ? c == 2074
                    : c <= 2084)))
                : (c <= 2088 || (c < 2160
                  ? (c < 2144
                    ? (c >= 2112 && c <= 2136)
                    : c <= 2154)
                  : (c <= 2183 || (c >= 2185 && c <= 2190)))))
              : (c <= 2249 || (c < 2417
                ? (c < 2384
                  ? (c < 2365
                    ? (c >= 2308 && c <= 2361)
                    : c <= 2365)
                  : (c <= 2384 || (c >= 2392 && c <= 2401)))
                : (c <= 2432 || (c < 2451
                  ? (c < 2447
                    ? (c >= 2437 && c <= 2444)
                    : c <= 2448)
                  : (c <= 2472 || (c >= 2474 && c <= 2480)))))))
            : (c <= 2482 || (c < 2579
              ? (c < 2527
                ? (c < 2510
                  ? (c < 2493
                    ? (c >= 2486 && c <= 2489)
                    : c <= 2493)
                  : (c <= 2510 || (c >= 2524 && c <= 2525)))
                : (c <= 2529 || (c < 2565
                  ? (c < 2556
                    ? (c >= 2544 && c <= 2545)
                    : c <= 2556)
                  : (c <= 2570 || (c >= 2575 && c <= 2576)))))
              : (c <= 2600 || (c < 2649
                ? (c < 2613
                  ? (c < 2610
                    ? (c >= 2602 && c <= 2608)
                    : c <= 2611)
                  : (c <= 2614 || (c >= 2616 && c <= 2617)))
                : (c <= 2652 || (c < 2693
                  ? (c < 2674
                    ? c == 2654
                    : c <= 2676)
                  : (c <= 2701 || (c >= 2703 && c <= 2705)))))))))))
        : (c <= 2728 || (c < 3242
          ? (c < 2962
            ? (c < 2858
              ? (c < 2784
                ? (c < 2741
                  ? (c < 2738
                    ? (c >= 2730 && c <= 2736)
                    : c <= 2739)
                  : (c <= 2745 || (c < 2768
                    ? c == 2749
                    : c <= 2768)))
                : (c <= 2785 || (c < 2831
                  ? (c < 2821
                    ? c == 2809
                    : c <= 2828)
                  : (c <= 2832 || (c >= 2835 && c <= 2856)))))
              : (c <= 2864 || (c < 2911
                ? (c < 2877
                  ? (c < 2869
                    ? (c >= 2866 && c <= 2867)
                    : c <= 2873)
                  : (c <= 2877 || (c >= 2908 && c <= 2909)))
                : (c <= 2913 || (c < 2949
                  ? (c < 2947
                    ? c == 2929
                    : c <= 2947)
                  : (c <= 2954 || (c >= 2958 && c <= 2960)))))))
            : (c <= 2965 || (c < 3090
              ? (c < 2984
                ? (c < 2974
                  ? (c < 2972
                    ? (c >= 2969 && c <= 2970)
                    : c <= 2972)
                  : (c <= 2975 || (c >= 2979 && c <= 2980)))
                : (c <= 2986 || (c < 3077
                  ? (c < 3024
                    ? (c >= 2990 && c <= 3001)
                    : c <= 3024)
                  : (c <= 3084 || (c >= 3086 && c <= 3088)))))
              : (c <= 3112 || (c < 3168
                ? (c < 3160
                  ? (c < 3133
                    ? (c >= 3114 && c <= 3129)
                    : c <= 3133)
                  : (c <= 3162 || c == 3165))
                : (c <= 3169 || (c < 3214
                  ? (c < 3205
                    ? c == 3200
                    : c <= 3212)
                  : (c <= 3216 || (c >= 3218 && c <= 3240)))))))))
          : (c <= 3251 || (c < 3648
            ? (c < 3412
              ? (c < 3332
                ? (c < 3293
                  ? (c < 3261
                    ? (c >= 3253 && c <= 3257)
                    : c <= 3261)
                  : (c <= 3294 || (c < 3313
                    ? (c >= 3296 && c <= 3297)
                    : c <= 3314)))
                : (c <= 3340 || (c < 3389
                  ? (c < 3346
                    ? (c >= 3342 && c <= 3344)
                    : c <= 3386)
                  : (c <= 3389 || c == 3406))))
              : (c <= 3414 || (c < 3507
                ? (c < 3461
                  ? (c < 3450
                    ? (c >= 3423 && c <= 3425)
                    : c <= 3455)
                  : (c <= 3478 || (c >= 3482 && c <= 3505)))
                : (c <= 3515 || (c < 3585
                  ? (c < 3520
                    ? c == 3517
                    : c <= 3526)
                  : (c <= 3632 || c == 3634))))))
            : (c <= 3654 || (c < 3782
              ? (c < 3749
                ? (c < 3718
                  ? (c < 3716
                    ? (c >= 3713 && c <= 3714)
                    : c <= 3716)
                  : (c <= 3722 || (c >= 3724 && c <= 3747)))
                : (c <= 3749 || (c < 3773
                  ? (c < 3762
                    ? (c >= 3751 && c <= 3760)
                    : c <= 3762)
                  : (c <= 3773 || (c >= 3776 && c <= 3780)))))
              : (c <= 3782 || (c < 3976
                ? (c < 3904
                  ? (c < 3840
                    ? (c >= 3804 && c <= 3807)
                    : c <= 3840)
                  : (c <= 3911 || (c >= 3913 && c <= 3948)))
                : (c <= 3980 || (c < 4176
                  ? (c < 4159
                    ? (c >= 4096 && c <= 4138)
                    : c <= 4159)
                  : (c <= 4181 || (c >= 4186 && c <= 4189)))))))))))))
      : (c <= 4193 || (c < 8134
        ? (c < 6176
          ? (c < 4808
            ? (c < 4688
              ? (c < 4295
                ? (c < 4213
                  ? (c < 4206
                    ? (c >= 4197 && c <= 4198)
                    : c <= 4208)
                  : (c <= 4225 || (c < 4256
                    ? c == 4238
                    : c <= 4293)))
                : (c <= 4295 || (c < 4348
                  ? (c < 4304
                    ? c == 4301
                    : c <= 4346)
                  : (c <= 4680 || (c >= 4682 && c <= 4685)))))
              : (c <= 4694 || (c < 4752
                ? (c < 4704
                  ? (c < 4698
                    ? c == 4696
                    : c <= 4701)
                  : (c <= 4744 || (c >= 4746 && c <= 4749)))
                : (c <= 4784 || (c < 4800
                  ? (c < 4792
                    ? (c >= 4786 && c <= 4789)
                    : c <= 4798)
                  : (c <= 4800 || (c >= 4802 && c <= 4805)))))))
            : (c <= 4822 || (c < 5792
              ? (c < 5024
                ? (c < 4888
                  ? (c < 4882
                    ? (c >= 4824 && c <= 4880)
                    : c <= 4885)
                  : (c <= 4954 || (c >= 4992 && c <= 5007)))
                : (c <= 5109 || (c < 5743
                  ? (c < 5121
                    ? (c >= 5112 && c <= 5117)
                    : c <= 5740)
                  : (c <= 5759 || (c >= 5761 && c <= 5786)))))
              : (c <= 5866 || (c < 5984
                ? (c < 5919
                  ? (c < 5888
                    ? (c >= 5870 && c <= 5880)
                    : c <= 5905)
                  : (c <= 5937 || (c >= 5952 && c <= 5969)))
                : (c <= 5996 || (c < 6103
                  ? (c < 6016
                    ? (c >= 5998 && c <= 6000)
                    : c <= 6067)
                  : (c <= 6103 || c == 6108))))))))
          : (c <= 6264 || (c < 7312
            ? (c < 6823
              ? (c < 6512
                ? (c < 6320
                  ? (c < 6314
                    ? (c >= 6272 && c <= 6312)
                    : c <= 6314)
                  : (c <= 6389 || (c < 6480
                    ? (c >= 6400 && c <= 6430)
                    : c <= 6509)))
                : (c <= 6516 || (c < 6656
                  ? (c < 6576
                    ? (c >= 6528 && c <= 6571)
                    : c <= 6601)
                  : (c <= 6678 || (c >= 6688 && c <= 6740)))))
              : (c <= 6823 || (c < 7098
                ? (c < 7043
                  ? (c < 6981
                    ? (c >= 6917 && c <= 6963)
                    : c <= 6988)
                  : (c <= 7072 || (c >= 7086 && c <= 7087)))
                : (c <= 7141 || (c < 7258
                  ? (c < 7245
                    ? (c >= 7168 && c <= 7203)
                    : c <= 7247)
                  : (c <= 7293 || (c >= 7296 && c <= 7304)))))))
            : (c <= 7354 || (c < 8008
              ? (c < 7418
                ? (c < 7406
                  ? (c < 7401
                    ? (c >= 7357 && c <= 7359)
                    : c <= 7404)
                  : (c <= 7411 || (c >= 7413 && c <= 7414)))
                : (c <= 7418 || (c < 7960
                  ? (c < 7680
                    ? (c >= 7424 && c <= 7615)
                    : c <= 7957)
                  : (c <= 7965 || (c >= 7968 && c <= 8005)))))
              : (c <= 8013 || (c < 8031
                ? (c < 8027
                  ? (c < 8025
                    ? (c >= 8016 && c <= 8023)
                    : c <= 8025)
                  : (c <= 8027 || c == 8029))
                : (c <= 8061 || (c < 8126
                  ? (c < 8118
                    ? (c >= 8064 && c <= 8116)
                    : c <= 8124)
                  : (c <= 8126 || (c >= 8130 && c <= 8132)))))))))))
        : (c <= 8140 || (c < 12337
          ? (c < 8544
            ? (c < 8458
              ? (c < 8305
                ? (c < 8160
                  ? (c < 8150
                    ? (c >= 8144 && c <= 8147)
                    : c <= 8155)
                  : (c <= 8172 || (c < 8182
                    ? (c >= 8178 && c <= 8180)
                    : c <= 8188)))
                : (c <= 8305 || (c < 8450
                  ? (c < 8336
                    ? c == 8319
                    : c <= 8348)
                  : (c <= 8450 || c == 8455))))
              : (c <= 8467 || (c < 8488
                ? (c < 8484
                  ? (c < 8472
                    ? c == 8469
                    : c <= 8477)
                  : (c <= 8484 || c == 8486))
                : (c <= 8488 || (c < 8517
                  ? (c < 8508
                    ? (c >= 8490 && c <= 8505)
                    : c <= 8511)
                  : (c <= 8521 || c == 8526))))))
            : (c <= 8584 || (c < 11680
              ? (c < 11559
                ? (c < 11506
                  ? (c < 11499
                    ? (c >= 11264 && c <= 11492)
                    : c <= 11502)
                  : (c <= 11507 || (c >= 11520 && c <= 11557)))
                : (c <= 11559 || (c < 11631
                  ? (c < 11568
                    ? c == 11565
                    : c <= 11623)
                  : (c <= 11631 || (c >= 11648 && c <= 11670)))))
              : (c <= 11686 || (c < 11720
                ? (c < 11704
                  ? (c < 11696
                    ? (c >= 11688 && c <= 11694)
                    : c <= 11702)
                  : (c <= 11710 || (c >= 11712 && c <= 11718)))
                : (c <= 11726 || (c < 12293
                  ? (c < 11736
                    ? (c >= 11728 && c <= 11734)
                    : c <= 11742)
                  : (c <= 12295 || (c >= 12321 && c <= 12329)))))))))
          : (c <= 12341 || (c < 42891
            ? (c < 19968
              ? (c < 12549
                ? (c < 12445
                  ? (c < 12353
                    ? (c >= 12344 && c <= 12348)
                    : c <= 12438)
                  : (c <= 12447 || (c < 12540
                    ? (c >= 12449 && c <= 12538)
                    : c <= 12543)))
                : (c <= 12591 || (c < 12784
                  ? (c < 12704
                    ? (c >= 12593 && c <= 12686)
                    : c <= 12735)
                  : (c <= 12799 || (c >= 13312 && c <= 19903)))))
              : (c <= 42124 || (c < 42560
                ? (c < 42512
                  ? (c < 42240
                    ? (c >= 42192 && c <= 42237)
                    : c <= 42508)
                  : (c <= 42527 || (c >= 42538 && c <= 42539)))
                : (c <= 42606 || (c < 42775
                  ? (c < 42656
                    ? (c >= 42623 && c <= 42653)
                    : c <= 42735)
                  : (c <= 42783 || (c >= 42786 && c <= 42888)))))))
            : (c <= 42954 || (c < 43250
              ? (c < 43011
                ? (c < 42965
                  ? (c < 42963
                    ? (c >= 42960 && c <= 42961)
                    : c <= 42963)
                  : (c <= 42969 || (c >= 42994 && c <= 43009)))
                : (c <= 43013 || (c < 43072
                  ? (c < 43020
                    ? (c >= 43015 && c <= 43018)
                    : c <= 43042)
                  : (c <= 43123 || (c >= 43138 && c <= 43187)))))
              : (c <= 43255 || (c < 43360
                ? (c < 43274
                  ? (c < 43261
                    ? c == 43259
                    : c <= 43262)
                  : (c <= 43301 || (c >= 43312 && c <= 43334)))
                : (c <= 43388 || (c < 43488
                  ? (c < 43471
                    ? (c >= 43396 && c <= 43442)
                    : c <= 43471)
                  : (c <= 43492 || (c >= 43494 && c <= 43503)))))))))))))))
    : (c <= 43518 || (c < 70727
      ? (c < 66956
        ? (c < 64914
          ? (c < 43868
            ? (c < 43714
              ? (c < 43646
                ? (c < 43588
                  ? (c < 43584
                    ? (c >= 43520 && c <= 43560)
                    : c <= 43586)
                  : (c <= 43595 || (c < 43642
                    ? (c >= 43616 && c <= 43638)
                    : c <= 43642)))
                : (c <= 43695 || (c < 43705
                  ? (c < 43701
                    ? c == 43697
                    : c <= 43702)
                  : (c <= 43709 || c == 43712))))
              : (c <= 43714 || (c < 43785
                ? (c < 43762
                  ? (c < 43744
                    ? (c >= 43739 && c <= 43741)
                    : c <= 43754)
                  : (c <= 43764 || (c >= 43777 && c <= 43782)))
                : (c <= 43790 || (c < 43816
                  ? (c < 43808
                    ? (c >= 43793 && c <= 43798)
                    : c <= 43814)
                  : (c <= 43822 || (c >= 43824 && c <= 43866)))))))
            : (c <= 43881 || (c < 64287
              ? (c < 63744
                ? (c < 55216
                  ? (c < 44032
                    ? (c >= 43888 && c <= 44002)
                    : c <= 55203)
                  : (c <= 55238 || (c >= 55243 && c <= 55291)))
                : (c <= 64109 || (c < 64275
                  ? (c < 64256
                    ? (c >= 64112 && c <= 64217)
                    : c <= 64262)
                  : (c <= 64279 || c == 64285))))
              : (c <= 64296 || (c < 64323
                ? (c < 64318
                  ? (c < 64312
                    ? (c >= 64298 && c <= 64310)
                    : c <= 64316)
                  : (c <= 64318 || (c >= 64320 && c <= 64321)))
                : (c <= 64324 || (c < 64612
                  ? (c < 64467
                    ? (c >= 64326 && c <= 64433)
                    : c <= 64605)
                  : (c <= 64829 || (c >= 64848 && c <= 64911)))))))))
          : (c <= 64967 || (c < 65599
            ? (c < 65382
              ? (c < 65147
                ? (c < 65139
                  ? (c < 65137
                    ? (c >= 65008 && c <= 65017)
                    : c <= 65137)
                  : (c <= 65139 || (c < 65145
                    ? c == 65143
                    : c <= 65145)))
                : (c <= 65147 || (c < 65313
                  ? (c < 65151
                    ? c == 65149
                    : c <= 65276)
                  : (c <= 65338 || (c >= 65345 && c <= 65370)))))
              : (c <= 65437 || (c < 65498
                ? (c < 65482
                  ? (c < 65474
                    ? (c >= 65440 && c <= 65470)
                    : c <= 65479)
                  : (c <= 65487 || (c >= 65490 && c <= 65495)))
                : (c <= 65500 || (c < 65576
                  ? (c < 65549
                    ? (c >= 65536 && c <= 65547)
                    : c <= 65574)
                  : (c <= 65594 || (c >= 65596 && c <= 65597)))))))
            : (c <= 65613 || (c < 66464
              ? (c < 66208
                ? (c < 65856
                  ? (c < 65664
                    ? (c >= 65616 && c <= 65629)
                    : c <= 65786)
                  : (c <= 65908 || (c >= 66176 && c <= 66204)))
                : (c <= 66256 || (c < 66384
                  ? (c < 66349
                    ? (c >= 66304 && c <= 66335)
                    : c <= 66378)
                  : (c <= 66421 || (c >= 66432 && c <= 66461)))))
              : (c <= 66499 || (c < 66776
                ? (c < 66560
                  ? (c < 66513
                    ? (c >= 66504 && c <= 66511)
                    : c <= 66517)
                  : (c <= 66717 || (c >= 66736 && c <= 66771)))
                : (c <= 66811 || (c < 66928
                  ? (c < 66864
                    ? (c >= 66816 && c <= 66855)
                    : c <= 66915)
                  : (c <= 66938 || (c >= 66940 && c <= 66954)))))))))))
        : (c <= 66962 || (c < 68864
          ? (c < 67828
            ? (c < 67506
              ? (c < 67072
                ? (c < 66979
                  ? (c < 66967
                    ? (c >= 66964 && c <= 66965)
                    : c <= 66977)
                  : (c <= 66993 || (c < 67003
                    ? (c >= 66995 && c <= 67001)
                    : c <= 67004)))
                : (c <= 67382 || (c < 67456
                  ? (c < 67424
                    ? (c >= 67392 && c <= 67413)
                    : c <= 67431)
                  : (c <= 67461 || (c >= 67463 && c <= 67504)))))
              : (c <= 67514 || (c < 67644
                ? (c < 67594
                  ? (c < 67592
                    ? (c >= 67584 && c <= 67589)
                    : c <= 67592)
                  : (c <= 67637 || (c >= 67639 && c <= 67640)))
                : (c <= 67644 || (c < 67712
                  ? (c < 67680
                    ? (c >= 67647 && c <= 67669)
                    : c <= 67702)
                  : (c <= 67742 || (c >= 67808 && c <= 67826)))))))
            : (c <= 67829 || (c < 68224
              ? (c < 68096
                ? (c < 67968
                  ? (c < 67872
                    ? (c >= 67840 && c <= 67861)
                    : c <= 67897)
                  : (c <= 68023 || (c >= 68030 && c <= 68031)))
                : (c <= 68096 || (c < 68121
                  ? (c < 68117
                    ? (c >= 68112 && c <= 68115)
                    : c <= 68119)
                  : (c <= 68149 || (c >= 68192 && c <= 68220)))))
              : (c <= 68252 || (c < 68448
                ? (c < 68352
                  ? (c < 68297
                    ? (c >= 68288 && c <= 68295)
                    : c <= 68324)
                  : (c <= 68405 || (c >= 68416 && c <= 68437)))
                : (c <= 68466 || (c < 68736
                  ? (c < 68608
                    ? (c >= 68480 && c <= 68497)
                    : c <= 68680)
                  : (c <= 68786 || (c >= 68800 && c <= 68850)))))))))
          : (c <= 68899 || (c < 70106
            ? (c < 69749
              ? (c < 69488
                ? (c < 69376
                  ? (c < 69296
                    ? (c >= 69248 && c <= 69289)
                    : c <= 69297)
                  : (c <= 69404 || (c < 69424
                    ? c == 69415
                    : c <= 69445)))
                : (c <= 69505 || (c < 69635
                  ? (c < 69600
                    ? (c >= 69552 && c <= 69572)
                    : c <= 69622)
                  : (c <= 69687 || (c >= 69745 && c <= 69746)))))
              : (c <= 69749 || (c < 69959
                ? (c < 69891
                  ? (c < 69840
                    ? (c >= 69763 && c <= 69807)
                    : c <= 69864)
                  : (c <= 69926 || c == 69956))
                : (c <= 69959 || (c < 70019
                  ? (c < 70006
                    ? (c >= 69968 && c <= 70002)
                    : c <= 70006)
                  : (c <= 70066 || (c >= 70081 && c <= 70084)))))))
            : (c <= 70106 || (c < 70405
              ? (c < 70280
                ? (c < 70163
                  ? (c < 70144
                    ? c == 70108
                    : c <= 70161)
                  : (c <= 70187 || (c >= 70272 && c <= 70278)))
                : (c <= 70280 || (c < 70303
                  ? (c < 70287
                    ? (c >= 70282 && c <= 70285)
                    : c <= 70301)
                  : (c <= 70312 || (c >= 70320 && c <= 70366)))))
              : (c <= 70412 || (c < 70453
                ? (c < 70442
                  ? (c < 70419
                    ? (c >= 70415 && c <= 70416)
                    : c <= 70440)
                  : (c <= 70448 || (c >= 70450 && c <= 70451)))
                : (c <= 70457 || (c < 70493
                  ? (c < 70480
                    ? c == 70461
                    : c <= 70480)
                  : (c <= 70497 || (c >= 70656 && c <= 70708)))))))))))))
      : (c <= 70730 || (c < 119894
        ? (c < 73056
          ? (c < 72001
            ? (c < 71424
              ? (c < 71128
                ? (c < 70852
                  ? (c < 70784
                    ? (c >= 70751 && c <= 70753)
                    : c <= 70831)
                  : (c <= 70853 || (c < 71040
                    ? c == 70855
                    : c <= 71086)))
                : (c <= 71131 || (c < 71296
                  ? (c < 71236
                    ? (c >= 71168 && c <= 71215)
                    : c <= 71236)
                  : (c <= 71338 || c == 71352))))
              : (c <= 71450 || (c < 71945
                ? (c < 71840
                  ? (c < 71680
                    ? (c >= 71488 && c <= 71494)
                    : c <= 71723)
                  : (c <= 71903 || (c >= 71935 && c <= 71942)))
                : (c <= 71945 || (c < 71960
                  ? (c < 71957
                    ? (c >= 71948 && c <= 71955)
                    : c <= 71958)
                  : (c <= 71983 || c == 71999))))))
            : (c <= 72001 || (c < 72349
              ? (c < 72192
                ? (c < 72161
                  ? (c < 72106
                    ? (c >= 72096 && c <= 72103)
                    : c <= 72144)
                  : (c <= 72161 || c == 72163))
                : (c <= 72192 || (c < 72272
                  ? (c < 72250
                    ? (c >= 72203 && c <= 72242)
                    : c <= 72250)
                  : (c <= 72272 || (c >= 72284 && c <= 72329)))))
              : (c <= 72349 || (c < 72818
                ? (c < 72714
                  ? (c < 72704
                    ? (c >= 72368 && c <= 72440)
                    : c <= 72712)
                  : (c <= 72750 || c == 72768))
                : (c <= 72847 || (c < 72971
                  ? (c < 72968
                    ? (c >= 72960 && c <= 72966)
                    : c <= 72969)
                  : (c <= 73008 || c == 73030))))))))
          : (c <= 73061 || (c < 93952
            ? (c < 82944
              ? (c < 73728
                ? (c < 73112
                  ? (c < 73066
                    ? (c >= 73063 && c <= 73064)
                    : c <= 73097)
                  : (c <= 73112 || (c < 73648
                    ? (c >= 73440 && c <= 73458)
                    : c <= 73648)))
                : (c <= 74649 || (c < 77712
                  ? (c < 74880
                    ? (c >= 74752 && c <= 74862)
                    : c <= 75075)
                  : (c <= 77808 || (c >= 77824 && c <= 78894)))))
              : (c <= 83526 || (c < 92928
                ? (c < 92784
                  ? (c < 92736
                    ? (c >= 92160 && c <= 92728)
                    : c <= 92766)
                  : (c <= 92862 || (c >= 92880 && c <= 92909)))
                : (c <= 92975 || (c < 93053
                  ? (c < 93027
                    ? (c >= 92992 && c <= 92995)
                    : c <= 93047)
                  : (c <= 93071 || (c >= 93760 && c <= 93823)))))))
            : (c <= 94026 || (c < 110589
              ? (c < 94208
                ? (c < 94176
                  ? (c < 94099
                    ? c == 94032
                    : c <= 94111)
                  : (c <= 94177 || c == 94179))
                : (c <= 100343 || (c < 110576
                  ? (c < 101632
                    ? (c >= 100352 && c <= 101589)
                    : c <= 101640)
                  : (c <= 110579 || (c >= 110581 && c <= 110587)))))
              : (c <= 110590 || (c < 113664
                ? (c < 110948
                  ? (c < 110928
                    ? (c >= 110592 && c <= 110882)
                    : c <= 110930)
                  : (c <= 110951 || (c >= 110960 && c <= 111355)))
                : (c <= 113770 || (c < 113808
                  ? (c < 113792
                    ? (c >= 113776 && c <= 113788)
                    : c <= 113800)
                  : (c <= 113817 || (c >= 119808 && c <= 119892)))))))))))
        : (c <= 119964 || (c < 125259
          ? (c < 120572
            ? (c < 120086
              ? (c < 119995
                ? (c < 119973
                  ? (c < 119970
                    ? (c >= 119966 && c <= 119967)
                    : c <= 119970)
                  : (c <= 119974 || (c < 119982
                    ? (c >= 119977 && c <= 119980)
                    : c <= 119993)))
                : (c <= 119995 || (c < 120071
                  ? (c < 120005
                    ? (c >= 119997 && c <= 120003)
                    : c <= 120069)
                  : (c <= 120074 || (c >= 120077 && c <= 120084)))))
              : (c <= 120092 || (c < 120138
                ? (c < 120128
                  ? (c < 120123
                    ? (c >= 120094 && c <= 120121)
                    : c <= 120126)
                  : (c <= 120132 || c == 120134))
                : (c <= 120144 || (c < 120514
                  ? (c < 120488
                    ? (c >= 120146 && c <= 120485)
                    : c <= 120512)
                  : (c <= 120538 || (c >= 120540 && c <= 120570)))))))
            : (c <= 120596 || (c < 123191
              ? (c < 120714
                ? (c < 120656
                  ? (c < 120630
                    ? (c >= 120598 && c <= 120628)
                    : c <= 120654)
                  : (c <= 120686 || (c >= 120688 && c <= 120712)))
                : (c <= 120744 || (c < 122624
                  ? (c < 120772
                    ? (c >= 120746 && c <= 120770)
                    : c <= 120779)
                  : (c <= 122654 || (c >= 123136 && c <= 123180)))))
              : (c <= 123197 || (c < 124904
                ? (c < 123584
                  ? (c < 123536
                    ? c == 123214
                    : c <= 123565)
                  : (c <= 123627 || (c >= 124896 && c <= 124902)))
                : (c <= 124907 || (c < 124928
                  ? (c < 124912
                    ? (c >= 124909 && c <= 124910)
                    : c <= 124926)
                  : (c <= 125124 || (c >= 125184 && c <= 125251)))))))))
          : (c <= 125259 || (c < 126559
            ? (c < 126535
              ? (c < 126505
                ? (c < 126497
                  ? (c < 126469
                    ? (c >= 126464 && c <= 126467)
                    : c <= 126495)
                  : (c <= 126498 || (c < 126503
                    ? c == 126500
                    : c <= 126503)))
                : (c <= 126514 || (c < 126523
                  ? (c < 126521
                    ? (c >= 126516 && c <= 126519)
                    : c <= 126521)
                  : (c <= 126523 || c == 126530))))
              : (c <= 126535 || (c < 126548
                ? (c < 126541
                  ? (c < 126539
                    ? c == 126537
                    : c <= 126539)
                  : (c <= 126543 || (c >= 126545 && c <= 126546)))
                : (c <= 126548 || (c < 126555
                  ? (c < 126553
                    ? c == 126551
                    : c <= 126553)
                  : (c <= 126555 || c == 126557))))))
            : (c <= 126559 || (c < 126625
              ? (c < 126580
                ? (c < 126567
                  ? (c < 126564
                    ? (c >= 126561 && c <= 126562)
                    : c <= 126564)
                  : (c <= 126570 || (c >= 126572 && c <= 126578)))
                : (c <= 126583 || (c < 126592
                  ? (c < 126590
                    ? (c >= 126585 && c <= 126588)
                    : c <= 126590)
                  : (c <= 126601 || (c >= 126603 && c <= 126619)))))
              : (c <= 126627 || (c < 177984
                ? (c < 131072
                  ? (c < 126635
                    ? (c >= 126629 && c <= 126633)
                    : c <= 126651)
                  : (c <= 173791 || (c >= 173824 && c <= 177976)))
                : (c <= 178205 || (c < 194560
                  ? (c < 183984
                    ? (c >= 178208 && c <= 183969)
                    : c <= 191456)
                  : (c <= 195101 || (c >= 196608 && c <= 201546)))))))))))))))));
}

static inline bool sym_identifier_character_set_5(int32_t c) {
  return (c < 43514
    ? (c < 4193
      ? (c < 2707
        ? (c < 1994
          ? (c < 910
            ? (c < 736
              ? (c < 186
                ? (c < 'a'
                  ? (c < '_'
                    ? (c >= 'A' && c <= 'Z')
                    : c <= '_')
                  : (c <= 'z' || (c < 181
                    ? c == 170
                    : c <= 181)))
                : (c <= 186 || (c < 248
                  ? (c < 216
                    ? (c >= 192 && c <= 214)
                    : c <= 246)
                  : (c <= 705 || (c >= 710 && c <= 721)))))
              : (c <= 740 || (c < 891
                ? (c < 880
                  ? (c < 750
                    ? c == 748
                    : c <= 750)
                  : (c <= 884 || (c >= 886 && c <= 887)))
                : (c <= 893 || (c < 904
                  ? (c < 902
                    ? c == 895
                    : c <= 902)
                  : (c <= 906 || c == 908))))))
            : (c <= 929 || (c < 1649
              ? (c < 1376
                ? (c < 1162
                  ? (c < 1015
                    ? (c >= 931 && c <= 1013)
                    : c <= 1153)
                  : (c <= 1327 || (c < 1369
                    ? (c >= 1329 && c <= 1366)
                    : c <= 1369)))
                : (c <= 1416 || (c < 1568
                  ? (c < 1519
                    ? (c >= 1488 && c <= 1514)
                    : c <= 1522)
                  : (c <= 1610 || (c >= 1646 && c <= 1647)))))
              : (c <= 1747 || (c < 1791
                ? (c < 1774
                  ? (c < 1765
                    ? c == 1749
                    : c <= 1766)
                  : (c <= 1775 || (c >= 1786 && c <= 1788)))
                : (c <= 1791 || (c < 1869
                  ? (c < 1810
                    ? c == 1808
                    : c <= 1839)
                  : (c <= 1957 || c == 1969))))))))
          : (c <= 2026 || (c < 2482
            ? (c < 2208
              ? (c < 2088
                ? (c < 2048
                  ? (c < 2042
                    ? (c >= 2036 && c <= 2037)
                    : c <= 2042)
                  : (c <= 2069 || (c < 2084
                    ? c == 2074
                    : c <= 2084)))
                : (c <= 2088 || (c < 2160
                  ? (c < 2144
                    ? (c >= 2112 && c <= 2136)
                    : c <= 2154)
                  : (c <= 2183 || (c >= 2185 && c <= 2190)))))
              : (c <= 2249 || (c < 2417
                ? (c < 2384
                  ? (c < 2365
                    ? (c >= 2308 && c <= 2361)
                    : c <= 2365)
                  : (c <= 2384 || (c >= 2392 && c <= 2401)))
                : (c <= 2432 || (c < 2451
                  ? (c < 2447
                    ? (c >= 2437 && c <= 2444)
                    : c <= 2448)
                  : (c <= 2472 || (c >= 2474 && c <= 2480)))))))
            : (c <= 2482 || (c < 2579
              ? (c < 2527
                ? (c < 2510
                  ? (c < 2493
                    ? (c >= 2486 && c <= 2489)
                    : c <= 2493)
                  : (c <= 2510 || (c >= 2524 && c <= 2525)))
                : (c <= 2529 || (c < 2565
                  ? (c < 2556
                    ? (c >= 2544 && c <= 2545)
                    : c <= 2556)
                  : (c <= 2570 || (c >= 2575 && c <= 2576)))))
              : (c <= 2600 || (c < 2649
                ? (c < 2613
                  ? (c < 2610
                    ? (c >= 2602 && c <= 2608)
                    : c <= 2611)
                  : (c <= 2614 || (c >= 2616 && c <= 2617)))
                : (c <= 2652 || (c < 2693
                  ? (c < 2674
                    ? c == 2654
                    : c <= 2676)
                  : (c <= 2701 || (c >= 2703 && c <= 2705)))))))))))
        : (c <= 2728 || (c < 3242
          ? (c < 2962
            ? (c < 2858
              ? (c < 2784
                ? (c < 2741
                  ? (c < 2738
                    ? (c >= 2730 && c <= 2736)
                    : c <= 2739)
                  : (c <= 2745 || (c < 2768
                    ? c == 2749
                    : c <= 2768)))
                : (c <= 2785 || (c < 2831
                  ? (c < 2821
                    ? c == 2809
                    : c <= 2828)
                  : (c <= 2832 || (c >= 2835 && c <= 2856)))))
              : (c <= 2864 || (c < 2911
                ? (c < 2877
                  ? (c < 2869
                    ? (c >= 2866 && c <= 2867)
                    : c <= 2873)
                  : (c <= 2877 || (c >= 2908 && c <= 2909)))
                : (c <= 2913 || (c < 2949
                  ? (c < 2947
                    ? c == 2929
                    : c <= 2947)
                  : (c <= 2954 || (c >= 2958 && c <= 2960)))))))
            : (c <= 2965 || (c < 3090
              ? (c < 2984
                ? (c < 2974
                  ? (c < 2972
                    ? (c >= 2969 && c <= 2970)
                    : c <= 2972)
                  : (c <= 2975 || (c >= 2979 && c <= 2980)))
                : (c <= 2986 || (c < 3077
                  ? (c < 3024
                    ? (c >= 2990 && c <= 3001)
                    : c <= 3024)
                  : (c <= 3084 || (c >= 3086 && c <= 3088)))))
              : (c <= 3112 || (c < 3168
                ? (c < 3160
                  ? (c < 3133
                    ? (c >= 3114 && c <= 3129)
                    : c <= 3133)
                  : (c <= 3162 || c == 3165))
                : (c <= 3169 || (c < 3214
                  ? (c < 3205
                    ? c == 3200
                    : c <= 3212)
                  : (c <= 3216 || (c >= 3218 && c <= 3240)))))))))
          : (c <= 3251 || (c < 3648
            ? (c < 3412
              ? (c < 3332
                ? (c < 3293
                  ? (c < 3261
                    ? (c >= 3253 && c <= 3257)
                    : c <= 3261)
                  : (c <= 3294 || (c < 3313
                    ? (c >= 3296 && c <= 3297)
                    : c <= 3314)))
                : (c <= 3340 || (c < 3389
                  ? (c < 3346
                    ? (c >= 3342 && c <= 3344)
                    : c <= 3386)
                  : (c <= 3389 || c == 3406))))
              : (c <= 3414 || (c < 3507
                ? (c < 3461
                  ? (c < 3450
                    ? (c >= 3423 && c <= 3425)
                    : c <= 3455)
                  : (c <= 3478 || (c >= 3482 && c <= 3505)))
                : (c <= 3515 || (c < 3585
                  ? (c < 3520
                    ? c == 3517
                    : c <= 3526)
                  : (c <= 3632 || c == 3634))))))
            : (c <= 3654 || (c < 3782
              ? (c < 3749
                ? (c < 3718
                  ? (c < 3716
                    ? (c >= 3713 && c <= 3714)
                    : c <= 3716)
                  : (c <= 3722 || (c >= 3724 && c <= 3747)))
                : (c <= 3749 || (c < 3773
                  ? (c < 3762
                    ? (c >= 3751 && c <= 3760)
                    : c <= 3762)
                  : (c <= 3773 || (c >= 3776 && c <= 3780)))))
              : (c <= 3782 || (c < 3976
                ? (c < 3904
                  ? (c < 3840
                    ? (c >= 3804 && c <= 3807)
                    : c <= 3840)
                  : (c <= 3911 || (c >= 3913 && c <= 3948)))
                : (c <= 3980 || (c < 4176
                  ? (c < 4159
                    ? (c >= 4096 && c <= 4138)
                    : c <= 4159)
                  : (c <= 4181 || (c >= 4186 && c <= 4189)))))))))))))
      : (c <= 4193 || (c < 8134
        ? (c < 6176
          ? (c < 4808
            ? (c < 4688
              ? (c < 4295
                ? (c < 4213
                  ? (c < 4206
                    ? (c >= 4197 && c <= 4198)
                    : c <= 4208)
                  : (c <= 4225 || (c < 4256
                    ? c == 4238
                    : c <= 4293)))
                : (c <= 4295 || (c < 4348
                  ? (c < 4304
                    ? c == 4301
                    : c <= 4346)
                  : (c <= 4680 || (c >= 4682 && c <= 4685)))))
              : (c <= 4694 || (c < 4752
                ? (c < 4704
                  ? (c < 4698
                    ? c == 4696
                    : c <= 4701)
                  : (c <= 4744 || (c >= 4746 && c <= 4749)))
                : (c <= 4784 || (c < 4800
                  ? (c < 4792
                    ? (c >= 4786 && c <= 4789)
                    : c <= 4798)
                  : (c <= 4800 || (c >= 4802 && c <= 4805)))))))
            : (c <= 4822 || (c < 5792
              ? (c < 5024
                ? (c < 4888
                  ? (c < 4882
                    ? (c >= 4824 && c <= 4880)
                    : c <= 4885)
                  : (c <= 4954 || (c >= 4992 && c <= 5007)))
                : (c <= 5109 || (c < 5743
                  ? (c < 5121
                    ? (c >= 5112 && c <= 5117)
                    : c <= 5740)
                  : (c <= 5759 || (c >= 5761 && c <= 5786)))))
              : (c <= 5866 || (c < 5984
                ? (c < 5919
                  ? (c < 5888
                    ? (c >= 5870 && c <= 5880)
                    : c <= 5905)
                  : (c <= 5937 || (c >= 5952 && c <= 5969)))
                : (c <= 5996 || (c < 6103
                  ? (c < 6016
                    ? (c >= 5998 && c <= 6000)
                    : c <= 6067)
                  : (c <= 6103 || c == 6108))))))))
          : (c <= 6264 || (c < 7312
            ? (c < 6823
              ? (c < 6512
                ? (c < 6320
                  ? (c < 6314
                    ? (c >= 6272 && c <= 6312)
                    : c <= 6314)
                  : (c <= 6389 || (c < 6480
                    ? (c >= 6400 && c <= 6430)
                    : c <= 6509)))
                : (c <= 6516 || (c < 6656
                  ? (c < 6576
                    ? (c >= 6528 && c <= 6571)
                    : c <= 6601)
                  : (c <= 6678 || (c >= 6688 && c <= 6740)))))
              : (c <= 6823 || (c < 7098
                ? (c < 7043
                  ? (c < 6981
                    ? (c >= 6917 && c <= 6963)
                    : c <= 6988)
                  : (c <= 7072 || (c >= 7086 && c <= 7087)))
                : (c <= 7141 || (c < 7258
                  ? (c < 7245
                    ? (c >= 7168 && c <= 7203)
                    : c <= 7247)
                  : (c <= 7293 || (c >= 7296 && c <= 7304)))))))
            : (c <= 7354 || (c < 8008
              ? (c < 7418
                ? (c < 7406
                  ? (c < 7401
                    ? (c >= 7357 && c <= 7359)
                    : c <= 7404)
                  : (c <= 7411 || (c >= 7413 && c <= 7414)))
                : (c <= 7418 || (c < 7960
                  ? (c < 7680
                    ? (c >= 7424 && c <= 7615)
                    : c <= 7957)
                  : (c <= 7965 || (c >= 7968 && c <= 8005)))))
              : (c <= 8013 || (c < 8031
                ? (c < 8027
                  ? (c < 8025
                    ? (c >= 8016 && c <= 8023)
                    : c <= 8025)
                  : (c <= 8027 || c == 8029))
                : (c <= 8061 || (c < 8126
                  ? (c < 8118
                    ? (c >= 8064 && c <= 8116)
                    : c <= 8124)
                  : (c <= 8126 || (c >= 8130 && c <= 8132)))))))))))
        : (c <= 8140 || (c < 12337
          ? (c < 8544
            ? (c < 8458
              ? (c < 8305
                ? (c < 8160
                  ? (c < 8150
                    ? (c >= 8144 && c <= 8147)
                    : c <= 8155)
                  : (c <= 8172 || (c < 8182
                    ? (c >= 8178 && c <= 8180)
                    : c <= 8188)))
                : (c <= 8305 || (c < 8450
                  ? (c < 8336
                    ? c == 8319
                    : c <= 8348)
                  : (c <= 8450 || c == 8455))))
              : (c <= 8467 || (c < 8488
                ? (c < 8484
                  ? (c < 8472
                    ? c == 8469
                    : c <= 8477)
                  : (c <= 8484 || c == 8486))
                : (c <= 8488 || (c < 8517
                  ? (c < 8508
                    ? (c >= 8490 && c <= 8505)
                    : c <= 8511)
                  : (c <= 8521 || c == 8526))))))
            : (c <= 8584 || (c < 11680
              ? (c < 11559
                ? (c < 11506
                  ? (c < 11499
                    ? (c >= 11264 && c <= 11492)
                    : c <= 11502)
                  : (c <= 11507 || (c >= 11520 && c <= 11557)))
                : (c <= 11559 || (c < 11631
                  ? (c < 11568
                    ? c == 11565
                    : c <= 11623)
                  : (c <= 11631 || (c >= 11648 && c <= 11670)))))
              : (c <= 11686 || (c < 11720
                ? (c < 11704
                  ? (c < 11696
                    ? (c >= 11688 && c <= 11694)
                    : c <= 11702)
                  : (c <= 11710 || (c >= 11712 && c <= 11718)))
                : (c <= 11726 || (c < 12293
                  ? (c < 11736
                    ? (c >= 11728 && c <= 11734)
                    : c <= 11742)
                  : (c <= 12295 || (c >= 12321 && c <= 12329)))))))))
          : (c <= 12341 || (c < 42891
            ? (c < 19968
              ? (c < 12549
                ? (c < 12445
                  ? (c < 12353
                    ? (c >= 12344 && c <= 12348)
                    : c <= 12438)
                  : (c <= 12447 || (c < 12540
                    ? (c >= 12449 && c <= 12538)
                    : c <= 12543)))
                : (c <= 12591 || (c < 12784
                  ? (c < 12704
                    ? (c >= 12593 && c <= 12686)
                    : c <= 12735)
                  : (c <= 12799 || (c >= 13312 && c <= 19903)))))
              : (c <= 42124 || (c < 42560
                ? (c < 42512
                  ? (c < 42240
                    ? (c >= 42192 && c <= 42237)
                    : c <= 42508)
                  : (c <= 42527 || (c >= 42538 && c <= 42539)))
                : (c <= 42606 || (c < 42775
                  ? (c < 42656
                    ? (c >= 42623 && c <= 42653)
                    : c <= 42735)
                  : (c <= 42783 || (c >= 42786 && c <= 42888)))))))
            : (c <= 42954 || (c < 43250
              ? (c < 43011
                ? (c < 42965
                  ? (c < 42963
                    ? (c >= 42960 && c <= 42961)
                    : c <= 42963)
                  : (c <= 42969 || (c >= 42994 && c <= 43009)))
                : (c <= 43013 || (c < 43072
                  ? (c < 43020
                    ? (c >= 43015 && c <= 43018)
                    : c <= 43042)
                  : (c <= 43123 || (c >= 43138 && c <= 43187)))))
              : (c <= 43255 || (c < 43360
                ? (c < 43274
                  ? (c < 43261
                    ? c == 43259
                    : c <= 43262)
                  : (c <= 43301 || (c >= 43312 && c <= 43334)))
                : (c <= 43388 || (c < 43488
                  ? (c < 43471
                    ? (c >= 43396 && c <= 43442)
                    : c <= 43471)
                  : (c <= 43492 || (c >= 43494 && c <= 43503)))))))))))))))
    : (c <= 43518 || (c < 70727
      ? (c < 66956
        ? (c < 64914
          ? (c < 43868
            ? (c < 43714
              ? (c < 43646
                ? (c < 43588
                  ? (c < 43584
                    ? (c >= 43520 && c <= 43560)
                    : c <= 43586)
                  : (c <= 43595 || (c < 43642
                    ? (c >= 43616 && c <= 43638)
                    : c <= 43642)))
                : (c <= 43695 || (c < 43705
                  ? (c < 43701
                    ? c == 43697
                    : c <= 43702)
                  : (c <= 43709 || c == 43712))))
              : (c <= 43714 || (c < 43785
                ? (c < 43762
                  ? (c < 43744
                    ? (c >= 43739 && c <= 43741)
                    : c <= 43754)
                  : (c <= 43764 || (c >= 43777 && c <= 43782)))
                : (c <= 43790 || (c < 43816
                  ? (c < 43808
                    ? (c >= 43793 && c <= 43798)
                    : c <= 43814)
                  : (c <= 43822 || (c >= 43824 && c <= 43866)))))))
            : (c <= 43881 || (c < 64287
              ? (c < 63744
                ? (c < 55216
                  ? (c < 44032
                    ? (c >= 43888 && c <= 44002)
                    : c <= 55203)
                  : (c <= 55238 || (c >= 55243 && c <= 55291)))
                : (c <= 64109 || (c < 64275
                  ? (c < 64256
                    ? (c >= 64112 && c <= 64217)
                    : c <= 64262)
                  : (c <= 64279 || c == 64285))))
              : (c <= 64296 || (c < 64323
                ? (c < 64318
                  ? (c < 64312
                    ? (c >= 64298 && c <= 64310)
                    : c <= 64316)
                  : (c <= 64318 || (c >= 64320 && c <= 64321)))
                : (c <= 64324 || (c < 64612
                  ? (c < 64467
                    ? (c >= 64326 && c <= 64433)
                    : c <= 64605)
                  : (c <= 64829 || (c >= 64848 && c <= 64911)))))))))
          : (c <= 64967 || (c < 65599
            ? (c < 65382
              ? (c < 65147
                ? (c < 65139
                  ? (c < 65137
                    ? (c >= 65008 && c <= 65017)
                    : c <= 65137)
                  : (c <= 65139 || (c < 65145
                    ? c == 65143
                    : c <= 65145)))
                : (c <= 65147 || (c < 65313
                  ? (c < 65151
                    ? c == 65149
                    : c <= 65276)
                  : (c <= 65338 || (c >= 65345 && c <= 65370)))))
              : (c <= 65437 || (c < 65498
                ? (c < 65482
                  ? (c < 65474
                    ? (c >= 65440 && c <= 65470)
                    : c <= 65479)
                  : (c <= 65487 || (c >= 65490 && c <= 65495)))
                : (c <= 65500 || (c < 65576
                  ? (c < 65549
                    ? (c >= 65536 && c <= 65547)
                    : c <= 65574)
                  : (c <= 65594 || (c >= 65596 && c <= 65597)))))))
            : (c <= 65613 || (c < 66464
              ? (c < 66208
                ? (c < 65856
                  ? (c < 65664
                    ? (c >= 65616 && c <= 65629)
                    : c <= 65786)
                  : (c <= 65908 || (c >= 66176 && c <= 66204)))
                : (c <= 66256 || (c < 66384
                  ? (c < 66349
                    ? (c >= 66304 && c <= 66335)
                    : c <= 66378)
                  : (c <= 66421 || (c >= 66432 && c <= 66461)))))
              : (c <= 66499 || (c < 66776
                ? (c < 66560
                  ? (c < 66513
                    ? (c >= 66504 && c <= 66511)
                    : c <= 66517)
                  : (c <= 66717 || (c >= 66736 && c <= 66771)))
                : (c <= 66811 || (c < 66928
                  ? (c < 66864
                    ? (c >= 66816 && c <= 66855)
                    : c <= 66915)
                  : (c <= 66938 || (c >= 66940 && c <= 66954)))))))))))
        : (c <= 66962 || (c < 68864
          ? (c < 67828
            ? (c < 67506
              ? (c < 67072
                ? (c < 66979
                  ? (c < 66967
                    ? (c >= 66964 && c <= 66965)
                    : c <= 66977)
                  : (c <= 66993 || (c < 67003
                    ? (c >= 66995 && c <= 67001)
                    : c <= 67004)))
                : (c <= 67382 || (c < 67456
                  ? (c < 67424
                    ? (c >= 67392 && c <= 67413)
                    : c <= 67431)
                  : (c <= 67461 || (c >= 67463 && c <= 67504)))))
              : (c <= 67514 || (c < 67644
                ? (c < 67594
                  ? (c < 67592
                    ? (c >= 67584 && c <= 67589)
                    : c <= 67592)
                  : (c <= 67637 || (c >= 67639 && c <= 67640)))
                : (c <= 67644 || (c < 67712
                  ? (c < 67680
                    ? (c >= 67647 && c <= 67669)
                    : c <= 67702)
                  : (c <= 67742 || (c >= 67808 && c <= 67826)))))))
            : (c <= 67829 || (c < 68224
              ? (c < 68096
                ? (c < 67968
                  ? (c < 67872
                    ? (c >= 67840 && c <= 67861)
                    : c <= 67897)
                  : (c <= 68023 || (c >= 68030 && c <= 68031)))
                : (c <= 68096 || (c < 68121
                  ? (c < 68117
                    ? (c >= 68112 && c <= 68115)
                    : c <= 68119)
                  : (c <= 68149 || (c >= 68192 && c <= 68220)))))
              : (c <= 68252 || (c < 68448
                ? (c < 68352
                  ? (c < 68297
                    ? (c >= 68288 && c <= 68295)
                    : c <= 68324)
                  : (c <= 68405 || (c >= 68416 && c <= 68437)))
                : (c <= 68466 || (c < 68736
                  ? (c < 68608
                    ? (c >= 68480 && c <= 68497)
                    : c <= 68680)
                  : (c <= 68786 || (c >= 68800 && c <= 68850)))))))))
          : (c <= 68899 || (c < 70106
            ? (c < 69749
              ? (c < 69488
                ? (c < 69376
                  ? (c < 69296
                    ? (c >= 69248 && c <= 69289)
                    : c <= 69297)
                  : (c <= 69404 || (c < 69424
                    ? c == 69415
                    : c <= 69445)))
                : (c <= 69505 || (c < 69635
                  ? (c < 69600
                    ? (c >= 69552 && c <= 69572)
                    : c <= 69622)
                  : (c <= 69687 || (c >= 69745 && c <= 69746)))))
              : (c <= 69749 || (c < 69959
                ? (c < 69891
                  ? (c < 69840
                    ? (c >= 69763 && c <= 69807)
                    : c <= 69864)
                  : (c <= 69926 || c == 69956))
                : (c <= 69959 || (c < 70019
                  ? (c < 70006
                    ? (c >= 69968 && c <= 70002)
                    : c <= 70006)
                  : (c <= 70066 || (c >= 70081 && c <= 70084)))))))
            : (c <= 70106 || (c < 70405
              ? (c < 70280
                ? (c < 70163
                  ? (c < 70144
                    ? c == 70108
                    : c <= 70161)
                  : (c <= 70187 || (c >= 70272 && c <= 70278)))
                : (c <= 70280 || (c < 70303
                  ? (c < 70287
                    ? (c >= 70282 && c <= 70285)
                    : c <= 70301)
                  : (c <= 70312 || (c >= 70320 && c <= 70366)))))
              : (c <= 70412 || (c < 70453
                ? (c < 70442
                  ? (c < 70419
                    ? (c >= 70415 && c <= 70416)
                    : c <= 70440)
                  : (c <= 70448 || (c >= 70450 && c <= 70451)))
                : (c <= 70457 || (c < 70493
                  ? (c < 70480
                    ? c == 70461
                    : c <= 70480)
                  : (c <= 70497 || (c >= 70656 && c <= 70708)))))))))))))
      : (c <= 70730 || (c < 119894
        ? (c < 73056
          ? (c < 72001
            ? (c < 71424
              ? (c < 71128
                ? (c < 70852
                  ? (c < 70784
                    ? (c >= 70751 && c <= 70753)
                    : c <= 70831)
                  : (c <= 70853 || (c < 71040
                    ? c == 70855
                    : c <= 71086)))
                : (c <= 71131 || (c < 71296
                  ? (c < 71236
                    ? (c >= 71168 && c <= 71215)
                    : c <= 71236)
                  : (c <= 71338 || c == 71352))))
              : (c <= 71450 || (c < 71945
                ? (c < 71840
                  ? (c < 71680
                    ? (c >= 71488 && c <= 71494)
                    : c <= 71723)
                  : (c <= 71903 || (c >= 71935 && c <= 71942)))
                : (c <= 71945 || (c < 71960
                  ? (c < 71957
                    ? (c >= 71948 && c <= 71955)
                    : c <= 71958)
                  : (c <= 71983 || c == 71999))))))
            : (c <= 72001 || (c < 72349
              ? (c < 72192
                ? (c < 72161
                  ? (c < 72106
                    ? (c >= 72096 && c <= 72103)
                    : c <= 72144)
                  : (c <= 72161 || c == 72163))
                : (c <= 72192 || (c < 72272
                  ? (c < 72250
                    ? (c >= 72203 && c <= 72242)
                    : c <= 72250)
                  : (c <= 72272 || (c >= 72284 && c <= 72329)))))
              : (c <= 72349 || (c < 72818
                ? (c < 72714
                  ? (c < 72704
                    ? (c >= 72368 && c <= 72440)
                    : c <= 72712)
                  : (c <= 72750 || c == 72768))
                : (c <= 72847 || (c < 72971
                  ? (c < 72968
                    ? (c >= 72960 && c <= 72966)
                    : c <= 72969)
                  : (c <= 73008 || c == 73030))))))))
          : (c <= 73061 || (c < 93952
            ? (c < 82944
              ? (c < 73728
                ? (c < 73112
                  ? (c < 73066
                    ? (c >= 73063 && c <= 73064)
                    : c <= 73097)
                  : (c <= 73112 || (c < 73648
                    ? (c >= 73440 && c <= 73458)
                    : c <= 73648)))
                : (c <= 74649 || (c < 77712
                  ? (c < 74880
                    ? (c >= 74752 && c <= 74862)
                    : c <= 75075)
                  : (c <= 77808 || (c >= 77824 && c <= 78894)))))
              : (c <= 83526 || (c < 92928
                ? (c < 92784
                  ? (c < 92736
                    ? (c >= 92160 && c <= 92728)
                    : c <= 92766)
                  : (c <= 92862 || (c >= 92880 && c <= 92909)))
                : (c <= 92975 || (c < 93053
                  ? (c < 93027
                    ? (c >= 92992 && c <= 92995)
                    : c <= 93047)
                  : (c <= 93071 || (c >= 93760 && c <= 93823)))))))
            : (c <= 94026 || (c < 110589
              ? (c < 94208
                ? (c < 94176
                  ? (c < 94099
                    ? c == 94032
                    : c <= 94111)
                  : (c <= 94177 || c == 94179))
                : (c <= 100343 || (c < 110576
                  ? (c < 101632
                    ? (c >= 100352 && c <= 101589)
                    : c <= 101640)
                  : (c <= 110579 || (c >= 110581 && c <= 110587)))))
              : (c <= 110590 || (c < 113664
                ? (c < 110948
                  ? (c < 110928
                    ? (c >= 110592 && c <= 110882)
                    : c <= 110930)
                  : (c <= 110951 || (c >= 110960 && c <= 111355)))
                : (c <= 113770 || (c < 113808
                  ? (c < 113792
                    ? (c >= 113776 && c <= 113788)
                    : c <= 113800)
                  : (c <= 113817 || (c >= 119808 && c <= 119892)))))))))))
        : (c <= 119964 || (c < 125259
          ? (c < 120572
            ? (c < 120086
              ? (c < 119995
                ? (c < 119973
                  ? (c < 119970
                    ? (c >= 119966 && c <= 119967)
                    : c <= 119970)
                  : (c <= 119974 || (c < 119982
                    ? (c >= 119977 && c <= 119980)
                    : c <= 119993)))
                : (c <= 119995 || (c < 120071
                  ? (c < 120005
                    ? (c >= 119997 && c <= 120003)
                    : c <= 120069)
                  : (c <= 120074 || (c >= 120077 && c <= 120084)))))
              : (c <= 120092 || (c < 120138
                ? (c < 120128
                  ? (c < 120123
                    ? (c >= 120094 && c <= 120121)
                    : c <= 120126)
                  : (c <= 120132 || c == 120134))
                : (c <= 120144 || (c < 120514
                  ? (c < 120488
                    ? (c >= 120146 && c <= 120485)
                    : c <= 120512)
                  : (c <= 120538 || (c >= 120540 && c <= 120570)))))))
            : (c <= 120596 || (c < 123191
              ? (c < 120714
                ? (c < 120656
                  ? (c < 120630
                    ? (c >= 120598 && c <= 120628)
                    : c <= 120654)
                  : (c <= 120686 || (c >= 120688 && c <= 120712)))
                : (c <= 120744 || (c < 122624
                  ? (c < 120772
                    ? (c >= 120746 && c <= 120770)
                    : c <= 120779)
                  : (c <= 122654 || (c >= 123136 && c <= 123180)))))
              : (c <= 123197 || (c < 124904
                ? (c < 123584
                  ? (c < 123536
                    ? c == 123214
                    : c <= 123565)
                  : (c <= 123627 || (c >= 124896 && c <= 124902)))
                : (c <= 124907 || (c < 124928
                  ? (c < 124912
                    ? (c >= 124909 && c <= 124910)
                    : c <= 124926)
                  : (c <= 125124 || (c >= 125184 && c <= 125251)))))))))
          : (c <= 125259 || (c < 126559
            ? (c < 126535
              ? (c < 126505
                ? (c < 126497
                  ? (c < 126469
                    ? (c >= 126464 && c <= 126467)
                    : c <= 126495)
                  : (c <= 126498 || (c < 126503
                    ? c == 126500
                    : c <= 126503)))
                : (c <= 126514 || (c < 126523
                  ? (c < 126521
                    ? (c >= 126516 && c <= 126519)
                    : c <= 126521)
                  : (c <= 126523 || c == 126530))))
              : (c <= 126535 || (c < 126548
                ? (c < 126541
                  ? (c < 126539
                    ? c == 126537
                    : c <= 126539)
                  : (c <= 126543 || (c >= 126545 && c <= 126546)))
                : (c <= 126548 || (c < 126555
                  ? (c < 126553
                    ? c == 126551
                    : c <= 126553)
                  : (c <= 126555 || c == 126557))))))
            : (c <= 126559 || (c < 126625
              ? (c < 126580
                ? (c < 126567
                  ? (c < 126564
                    ? (c >= 126561 && c <= 126562)
                    : c <= 126564)
                  : (c <= 126570 || (c >= 126572 && c <= 126578)))
                : (c <= 126583 || (c < 126592
                  ? (c < 126590
                    ? (c >= 126585 && c <= 126588)
                    : c <= 126590)
                  : (c <= 126601 || (c >= 126603 && c <= 126619)))))
              : (c <= 126627 || (c < 177984
                ? (c < 131072
                  ? (c < 126635
                    ? (c >= 126629 && c <= 126633)
                    : c <= 126651)
                  : (c <= 173791 || (c >= 173824 && c <= 177976)))
                : (c <= 178205 || (c < 194560
                  ? (c < 183984
                    ? (c >= 178208 && c <= 183969)
                    : c <= 191456)
                  : (c <= 195101 || (c >= 196608 && c <= 201546)))))))))))))))));
}

static inline bool sym_identifier_character_set_6(int32_t c) {
  return (c < 43520
    ? (c < 4206
      ? (c < 2738
        ? (c < 2042
          ? (c < 1162
            ? (c < 880
              ? (c < 248
                ? (c < 186
                  ? (c < 181
                    ? c == 170
                    : c <= 181)
                  : (c <= 186 || (c < 216
                    ? (c >= 192 && c <= 214)
                    : c <= 246)))
                : (c <= 705 || (c < 748
                  ? (c < 736
                    ? (c >= 710 && c <= 721)
                    : c <= 740)
                  : (c <= 748 || c == 750))))
              : (c <= 884 || (c < 904
                ? (c < 895
                  ? (c < 891
                    ? (c >= 886 && c <= 887)
                    : c <= 893)
                  : (c <= 895 || c == 902))
                : (c <= 906 || (c < 931
                  ? (c < 910
                    ? c == 908
                    : c <= 929)
                  : (c <= 1013 || (c >= 1015 && c <= 1153)))))))
            : (c <= 1327 || (c < 1765
              ? (c < 1519
                ? (c < 1376
                  ? (c < 1369
                    ? (c >= 1329 && c <= 1366)
                    : c <= 1369)
                  : (c <= 1416 || (c >= 1488 && c <= 1514)))
                : (c <= 1522 || (c < 1649
                  ? (c < 1646
                    ? (c >= 1568 && c <= 1610)
                    : c <= 1647)
                  : (c <= 1747 || c == 1749))))
              : (c <= 1766 || (c < 1810
                ? (c < 1791
                  ? (c < 1786
                    ? (c >= 1774 && c <= 1775)
                    : c <= 1788)
                  : (c <= 1791 || c == 1808))
                : (c <= 1839 || (c < 1994
                  ? (c < 1969
                    ? (c >= 1869 && c <= 1957)
                    : c <= 1969)
                  : (c <= 2026 || (c >= 2036 && c <= 2037)))))))))
          : (c <= 2042 || (c < 2493
            ? (c < 2365
              ? (c < 2144
                ? (c < 2084
                  ? (c < 2074
                    ? (c >= 2048 && c <= 2069)
                    : c <= 2074)
                  : (c <= 2084 || (c < 2112
                    ? c == 2088
                    : c <= 2136)))
                : (c <= 2154 || (c < 2208
                  ? (c < 2185
                    ? (c >= 2160 && c <= 2183)
                    : c <= 2190)
                  : (c <= 2249 || (c >= 2308 && c <= 2361)))))
              : (c <= 2365 || (c < 2447
                ? (c < 2417
                  ? (c < 2392
                    ? c == 2384
                    : c <= 2401)
                  : (c <= 2432 || (c >= 2437 && c <= 2444)))
                : (c <= 2448 || (c < 2482
                  ? (c < 2474
                    ? (c >= 2451 && c <= 2472)
                    : c <= 2480)
                  : (c <= 2482 || (c >= 2486 && c <= 2489)))))))
            : (c <= 2493 || (c < 2610
              ? (c < 2556
                ? (c < 2527
                  ? (c < 2524
                    ? c == 2510
                    : c <= 2525)
                  : (c <= 2529 || (c >= 2544 && c <= 2545)))
                : (c <= 2556 || (c < 2579
                  ? (c < 2575
                    ? (c >= 2565 && c <= 2570)
                    : c <= 2576)
                  : (c <= 2600 || (c >= 2602 && c <= 2608)))))
              : (c <= 2611 || (c < 2674
                ? (c < 2649
                  ? (c < 2616
                    ? (c >= 2613 && c <= 2614)
                    : c <= 2617)
                  : (c <= 2652 || c == 2654))
                : (c <= 2676 || (c < 2707
                  ? (c < 2703
                    ? (c >= 2693 && c <= 2701)
                    : c <= 2705)
                  : (c <= 2728 || (c >= 2730 && c <= 2736)))))))))))
        : (c <= 2739 || (c < 3261
          ? (c < 2972
            ? (c < 2869
              ? (c < 2821
                ? (c < 2768
                  ? (c < 2749
                    ? (c >= 2741 && c <= 2745)
                    : c <= 2749)
                  : (c <= 2768 || (c < 2809
                    ? (c >= 2784 && c <= 2785)
                    : c <= 2809)))
                : (c <= 2828 || (c < 2858
                  ? (c < 2835
                    ? (c >= 2831 && c <= 2832)
                    : c <= 2856)
                  : (c <= 2864 || (c >= 2866 && c <= 2867)))))
              : (c <= 2873 || (c < 2947
                ? (c < 2911
                  ? (c < 2908
                    ? c == 2877
                    : c <= 2909)
                  : (c <= 2913 || c == 2929))
                : (c <= 2947 || (c < 2962
                  ? (c < 2958
                    ? (c >= 2949 && c <= 2954)
                    : c <= 2960)
                  : (c <= 2965 || (c >= 2969 && c <= 2970)))))))
            : (c <= 2972 || (c < 3133
              ? (c < 3024
                ? (c < 2984
                  ? (c < 2979
                    ? (c >= 2974 && c <= 2975)
                    : c <= 2980)
                  : (c <= 2986 || (c >= 2990 && c <= 3001)))
                : (c <= 3024 || (c < 3090
                  ? (c < 3086
                    ? (c >= 3077 && c <= 3084)
                    : c <= 3088)
                  : (c <= 3112 || (c >= 3114 && c <= 3129)))))
              : (c <= 3133 || (c < 3205
                ? (c < 3168
                  ? (c < 3165
                    ? (c >= 3160 && c <= 3162)
                    : c <= 3165)
                  : (c <= 3169 || c == 3200))
                : (c <= 3212 || (c < 3242
                  ? (c < 3218
                    ? (c >= 3214 && c <= 3216)
                    : c <= 3240)
                  : (c <= 3251 || (c >= 3253 && c <= 3257)))))))))
          : (c <= 3261 || (c < 3716
            ? (c < 3450
              ? (c < 3346
                ? (c < 3313
                  ? (c < 3296
                    ? (c >= 3293 && c <= 3294)
                    : c <= 3297)
                  : (c <= 3314 || (c < 3342
                    ? (c >= 3332 && c <= 3340)
                    : c <= 3344)))
                : (c <= 3386 || (c < 3412
                  ? (c < 3406
                    ? c == 3389
                    : c <= 3406)
                  : (c <= 3414 || (c >= 3423 && c <= 3425)))))
              : (c <= 3455 || (c < 3520
                ? (c < 3507
                  ? (c < 3482
                    ? (c >= 3461 && c <= 3478)
                    : c <= 3505)
                  : (c <= 3515 || c == 3517))
                : (c <= 3526 || (c < 3648
                  ? (c < 3634
                    ? (c >= 3585 && c <= 3632)
                    : c <= 3634)
                  : (c <= 3654 || (c >= 3713 && c <= 3714)))))))
            : (c <= 3716 || (c < 3840
              ? (c < 3762
                ? (c < 3749
                  ? (c < 3724
                    ? (c >= 3718 && c <= 3722)
                    : c <= 3747)
                  : (c <= 3749 || (c >= 3751 && c <= 3760)))
                : (c <= 3762 || (c < 3782
                  ? (c < 3776
                    ? c == 3773
                    : c <= 3780)
                  : (c <= 3782 || (c >= 3804 && c <= 3807)))))
              : (c <= 3840 || (c < 4159
                ? (c < 3976
                  ? (c < 3913
                    ? (c >= 3904 && c <= 3911)
                    : c <= 3948)
                  : (c <= 3980 || (c >= 4096 && c <= 4138)))
                : (c <= 4159 || (c < 4193
                  ? (c < 4186
                    ? (c >= 4176 && c <= 4181)
                    : c <= 4189)
                  : (c <= 4193 || (c >= 4197 && c <= 4198)))))))))))))
      : (c <= 4208 || (c < 8150
        ? (c < 6314
          ? (c < 4882
            ? (c < 4698
              ? (c < 4304
                ? (c < 4256
                  ? (c < 4238
                    ? (c >= 4213 && c <= 4225)
                    : c <= 4238)
                  : (c <= 4293 || (c < 4301
                    ? c == 4295
                    : c <= 4301)))
                : (c <= 4346 || (c < 4688
                  ? (c < 4682
                    ? (c >= 4348 && c <= 4680)
                    : c <= 4685)
                  : (c <= 4694 || c == 4696))))
              : (c <= 4701 || (c < 4792
                ? (c < 4752
                  ? (c < 4746
                    ? (c >= 4704 && c <= 4744)
                    : c <= 4749)
                  : (c <= 4784 || (c >= 4786 && c <= 4789)))
                : (c <= 4798 || (c < 4808
                  ? (c < 4802
                    ? c == 4800
                    : c <= 4805)
                  : (c <= 4822 || (c >= 4824 && c <= 4880)))))))
            : (c <= 4885 || (c < 5888
              ? (c < 5121
                ? (c < 5024
                  ? (c < 4992
                    ? (c >= 4888 && c <= 4954)
                    : c <= 5007)
                  : (c <= 5109 || (c >= 5112 && c <= 5117)))
                : (c <= 5740 || (c < 5792
                  ? (c < 5761
                    ? (c >= 5743 && c <= 5759)
                    : c <= 5786)
                  : (c <= 5866 || (c >= 5870 && c <= 5880)))))
              : (c <= 5905 || (c < 6016
                ? (c < 5984
                  ? (c < 5952
                    ? (c >= 5919 && c <= 5937)
                    : c <= 5969)
                  : (c <= 5996 || (c >= 5998 && c <= 6000)))
                : (c <= 6067 || (c < 6176
                  ? (c < 6108
                    ? c == 6103
                    : c <= 6108)
                  : (c <= 6264 || (c >= 6272 && c <= 6312)))))))))
          : (c <= 6314 || (c < 7401
            ? (c < 6981
              ? (c < 6576
                ? (c < 6480
                  ? (c < 6400
                    ? (c >= 6320 && c <= 6389)
                    : c <= 6430)
                  : (c <= 6509 || (c < 6528
                    ? (c >= 6512 && c <= 6516)
                    : c <= 6571)))
                : (c <= 6601 || (c < 6823
                  ? (c < 6688
                    ? (c >= 6656 && c <= 6678)
                    : c <= 6740)
                  : (c <= 6823 || (c >= 6917 && c <= 6963)))))
              : (c <= 6988 || (c < 7245
                ? (c < 7098
                  ? (c < 7086
                    ? (c >= 7043 && c <= 7072)
                    : c <= 7087)
                  : (c <= 7141 || (c >= 7168 && c <= 7203)))
                : (c <= 7247 || (c < 7312
                  ? (c < 7296
                    ? (c >= 7258 && c <= 7293)
                    : c <= 7304)
                  : (c <= 7354 || (c >= 7357 && c <= 7359)))))))
            : (c <= 7404 || (c < 8025
              ? (c < 7680
                ? (c < 7418
                  ? (c < 7413
                    ? (c >= 7406 && c <= 7411)
                    : c <= 7414)
                  : (c <= 7418 || (c >= 7424 && c <= 7615)))
                : (c <= 7957 || (c < 8008
                  ? (c < 7968
                    ? (c >= 7960 && c <= 7965)
                    : c <= 8005)
                  : (c <= 8013 || (c >= 8016 && c <= 8023)))))
              : (c <= 8025 || (c < 8118
                ? (c < 8031
                  ? (c < 8029
                    ? c == 8027
                    : c <= 8029)
                  : (c <= 8061 || (c >= 8064 && c <= 8116)))
                : (c <= 8124 || (c < 8134
                  ? (c < 8130
                    ? c == 8126
                    : c <= 8132)
                  : (c <= 8140 || (c >= 8144 && c <= 8147)))))))))))
        : (c <= 8155 || (c < 12353
          ? (c < 11499
            ? (c < 8472
              ? (c < 8336
                ? (c < 8182
                  ? (c < 8178
                    ? (c >= 8160 && c <= 8172)
                    : c <= 8180)
                  : (c <= 8188 || (c < 8319
                    ? c == 8305
                    : c <= 8319)))
                : (c <= 8348 || (c < 8458
                  ? (c < 8455
                    ? c == 8450
                    : c <= 8455)
                  : (c <= 8467 || c == 8469))))
              : (c <= 8477 || (c < 8508
                ? (c < 8488
                  ? (c < 8486
                    ? c == 8484
                    : c <= 8486)
                  : (c <= 8488 || (c >= 8490 && c <= 8505)))
                : (c <= 8511 || (c < 8544
                  ? (c < 8526
                    ? (c >= 8517 && c <= 8521)
                    : c <= 8526)
                  : (c <= 8584 || (c >= 11264 && c <= 11492)))))))
            : (c <= 11502 || (c < 11696
              ? (c < 11568
                ? (c < 11559
                  ? (c < 11520
                    ? (c >= 11506 && c <= 11507)
                    : c <= 11557)
                  : (c <= 11559 || c == 11565))
                : (c <= 11623 || (c < 11680
                  ? (c < 11648
                    ? c == 11631
                    : c <= 11670)
                  : (c <= 11686 || (c >= 11688 && c <= 11694)))))
              : (c <= 11702 || (c < 11736
                ? (c < 11720
                  ? (c < 11712
                    ? (c >= 11704 && c <= 11710)
                    : c <= 11718)
                  : (c <= 11726 || (c >= 11728 && c <= 11734)))
                : (c <= 11742 || (c < 12337
                  ? (c < 12321
                    ? (c >= 12293 && c <= 12295)
                    : c <= 12329)
                  : (c <= 12341 || (c >= 12344 && c <= 12348)))))))))
          : (c <= 12438 || (c < 42960
            ? (c < 42192
              ? (c < 12593
                ? (c < 12540
                  ? (c < 12449
                    ? (c >= 12445 && c <= 12447)
                    : c <= 12538)
                  : (c <= 12543 || (c >= 12549 && c <= 12591)))
                : (c <= 12686 || (c < 13312
                  ? (c < 12784
                    ? (c >= 12704 && c <= 12735)
                    : c <= 12799)
                  : (c <= 19903 || (c >= 19968 && c <= 42124)))))
              : (c <= 42237 || (c < 42623
                ? (c < 42538
                  ? (c < 42512
                    ? (c >= 42240 && c <= 42508)
                    : c <= 42527)
                  : (c <= 42539 || (c >= 42560 && c <= 42606)))
                : (c <= 42653 || (c < 42786
                  ? (c < 42775
                    ? (c >= 42656 && c <= 42735)
                    : c <= 42783)
                  : (c <= 42888 || (c >= 42891 && c <= 42954)))))))
            : (c <= 42961 || (c < 43259
              ? (c < 43015
                ? (c < 42994
                  ? (c < 42965
                    ? c == 42963
                    : c <= 42969)
                  : (c <= 43009 || (c >= 43011 && c <= 43013)))
                : (c <= 43018 || (c < 43138
                  ? (c < 43072
                    ? (c >= 43020 && c <= 43042)
                    : c <= 43123)
                  : (c <= 43187 || (c >= 43250 && c <= 43255)))))
              : (c <= 43259 || (c < 43396
                ? (c < 43312
                  ? (c < 43274
                    ? (c >= 43261 && c <= 43262)
                    : c <= 43301)
                  : (c <= 43334 || (c >= 43360 && c <= 43388)))
                : (c <= 43442 || (c < 43494
                  ? (c < 43488
                    ? c == 43471
                    : c <= 43492)
                  : (c <= 43503 || (c >= 43514 && c <= 43518)))))))))))))))
    : (c <= 43560 || (c < 70751
      ? (c < 66964
        ? (c < 65008
          ? (c < 43888
            ? (c < 43739
              ? (c < 43697
                ? (c < 43616
                  ? (c < 43588
                    ? (c >= 43584 && c <= 43586)
                    : c <= 43595)
                  : (c <= 43638 || (c < 43646
                    ? c == 43642
                    : c <= 43695)))
                : (c <= 43697 || (c < 43712
                  ? (c < 43705
                    ? (c >= 43701 && c <= 43702)
                    : c <= 43709)
                  : (c <= 43712 || c == 43714))))
              : (c <= 43741 || (c < 43793
                ? (c < 43777
                  ? (c < 43762
                    ? (c >= 43744 && c <= 43754)
                    : c <= 43764)
                  : (c <= 43782 || (c >= 43785 && c <= 43790)))
                : (c <= 43798 || (c < 43824
                  ? (c < 43816
                    ? (c >= 43808 && c <= 43814)
                    : c <= 43822)
                  : (c <= 43866 || (c >= 43868 && c <= 43881)))))))
            : (c <= 44002 || (c < 64298
              ? (c < 64112
                ? (c < 55243
                  ? (c < 55216
                    ? (c >= 44032 && c <= 55203)
                    : c <= 55238)
                  : (c <= 55291 || (c >= 63744 && c <= 64109)))
                : (c <= 64217 || (c < 64285
                  ? (c < 64275
                    ? (c >= 64256 && c <= 64262)
                    : c <= 64279)
                  : (c <= 64285 || (c >= 64287 && c <= 64296)))))
              : (c <= 64310 || (c < 64326
                ? (c < 64320
                  ? (c < 64318
                    ? (c >= 64312 && c <= 64316)
                    : c <= 64318)
                  : (c <= 64321 || (c >= 64323 && c <= 64324)))
                : (c <= 64433 || (c < 64848
                  ? (c < 64612
                    ? (c >= 64467 && c <= 64605)
                    : c <= 64829)
                  : (c <= 64911 || (c >= 64914 && c <= 64967)))))))))
          : (c <= 65017 || (c < 65616
            ? (c < 65440
              ? (c < 65149
                ? (c < 65143
                  ? (c < 65139
                    ? c == 65137
                    : c <= 65139)
                  : (c <= 65143 || (c < 65147
                    ? c == 65145
                    : c <= 65147)))
                : (c <= 65149 || (c < 65345
                  ? (c < 65313
                    ? (c >= 65151 && c <= 65276)
                    : c <= 65338)
                  : (c <= 65370 || (c >= 65382 && c <= 65437)))))
              : (c <= 65470 || (c < 65536
                ? (c < 65490
                  ? (c < 65482
                    ? (c >= 65474 && c <= 65479)
                    : c <= 65487)
                  : (c <= 65495 || (c >= 65498 && c <= 65500)))
                : (c <= 65547 || (c < 65596
                  ? (c < 65576
                    ? (c >= 65549 && c <= 65574)
                    : c <= 65594)
                  : (c <= 65597 || (c >= 65599 && c <= 65613)))))))
            : (c <= 65629 || (c < 66504
              ? (c < 66304
                ? (c < 66176
                  ? (c < 65856
                    ? (c >= 65664 && c <= 65786)
                    : c <= 65908)
                  : (c <= 66204 || (c >= 66208 && c <= 66256)))
                : (c <= 66335 || (c < 66432
                  ? (c < 66384
                    ? (c >= 66349 && c <= 66378)
                    : c <= 66421)
                  : (c <= 66461 || (c >= 66464 && c <= 66499)))))
              : (c <= 66511 || (c < 66816
                ? (c < 66736
                  ? (c < 66560
                    ? (c >= 66513 && c <= 66517)
                    : c <= 66717)
                  : (c <= 66771 || (c >= 66776 && c <= 66811)))
                : (c <= 66855 || (c < 66940
                  ? (c < 66928
                    ? (c >= 66864 && c <= 66915)
                    : c <= 66938)
                  : (c <= 66954 || (c >= 66956 && c <= 66962)))))))))))
        : (c <= 66965 || (c < 69248
          ? (c < 67840
            ? (c < 67584
              ? (c < 67392
                ? (c < 66995
                  ? (c < 66979
                    ? (c >= 66967 && c <= 66977)
                    : c <= 66993)
                  : (c <= 67001 || (c < 67072
                    ? (c >= 67003 && c <= 67004)
                    : c <= 67382)))
                : (c <= 67413 || (c < 67463
                  ? (c < 67456
                    ? (c >= 67424 && c <= 67431)
                    : c <= 67461)
                  : (c <= 67504 || (c >= 67506 && c <= 67514)))))
              : (c <= 67589 || (c < 67647
                ? (c < 67639
                  ? (c < 67594
                    ? c == 67592
                    : c <= 67637)
                  : (c <= 67640 || c == 67644))
                : (c <= 67669 || (c < 67808
                  ? (c < 67712
                    ? (c >= 67680 && c <= 67702)
                    : c <= 67742)
                  : (c <= 67826 || (c >= 67828 && c <= 67829)))))))
            : (c <= 67861 || (c < 68288
              ? (c < 68112
                ? (c < 68030
                  ? (c < 67968
                    ? (c >= 67872 && c <= 67897)
                    : c <= 68023)
                  : (c <= 68031 || c == 68096))
                : (c <= 68115 || (c < 68192
                  ? (c < 68121
                    ? (c >= 68117 && c <= 68119)
                    : c <= 68149)
                  : (c <= 68220 || (c >= 68224 && c <= 68252)))))
              : (c <= 68295 || (c < 68480
                ? (c < 68416
                  ? (c < 68352
                    ? (c >= 68297 && c <= 68324)
                    : c <= 68405)
                  : (c <= 68437 || (c >= 68448 && c <= 68466)))
                : (c <= 68497 || (c < 68800
                  ? (c < 68736
                    ? (c >= 68608 && c <= 68680)
                    : c <= 68786)
                  : (c <= 68850 || (c >= 68864 && c <= 68899)))))))))
          : (c <= 69289 || (c < 70108
            ? (c < 69763
              ? (c < 69552
                ? (c < 69415
                  ? (c < 69376
                    ? (c >= 69296 && c <= 69297)
                    : c <= 69404)
                  : (c <= 69415 || (c < 69488
                    ? (c >= 69424 && c <= 69445)
                    : c <= 69505)))
                : (c <= 69572 || (c < 69745
                  ? (c < 69635
                    ? (c >= 69600 && c <= 69622)
                    : c <= 69687)
                  : (c <= 69746 || c == 69749))))
              : (c <= 69807 || (c < 69968
                ? (c < 69956
                  ? (c < 69891
                    ? (c >= 69840 && c <= 69864)
                    : c <= 69926)
                  : (c <= 69956 || c == 69959))
                : (c <= 70002 || (c < 70081
                  ? (c < 70019
                    ? c == 70006
                    : c <= 70066)
                  : (c <= 70084 || c == 70106))))))
            : (c <= 70108 || (c < 70415
              ? (c < 70282
                ? (c < 70272
                  ? (c < 70163
                    ? (c >= 70144 && c <= 70161)
                    : c <= 70187)
                  : (c <= 70278 || c == 70280))
                : (c <= 70285 || (c < 70320
                  ? (c < 70303
                    ? (c >= 70287 && c <= 70301)
                    : c <= 70312)
                  : (c <= 70366 || (c >= 70405 && c <= 70412)))))
              : (c <= 70416 || (c < 70461
                ? (c < 70450
                  ? (c < 70442
                    ? (c >= 70419 && c <= 70440)
                    : c <= 70448)
                  : (c <= 70451 || (c >= 70453 && c <= 70457)))
                : (c <= 70461 || (c < 70656
                  ? (c < 70493
                    ? c == 70480
                    : c <= 70497)
                  : (c <= 70708 || (c >= 70727 && c <= 70730)))))))))))))
      : (c <= 70753 || (c < 119966
        ? (c < 73063
          ? (c < 72096
            ? (c < 71488
              ? (c < 71168
                ? (c < 70855
                  ? (c < 70852
                    ? (c >= 70784 && c <= 70831)
                    : c <= 70853)
                  : (c <= 70855 || (c < 71128
                    ? (c >= 71040 && c <= 71086)
                    : c <= 71131)))
                : (c <= 71215 || (c < 71352
                  ? (c < 71296
                    ? c == 71236
                    : c <= 71338)
                  : (c <= 71352 || (c >= 71424 && c <= 71450)))))
              : (c <= 71494 || (c < 71948
                ? (c < 71935
                  ? (c < 71840
                    ? (c >= 71680 && c <= 71723)
                    : c <= 71903)
                  : (c <= 71942 || c == 71945))
                : (c <= 71955 || (c < 71999
                  ? (c < 71960
                    ? (c >= 71957 && c <= 71958)
                    : c <= 71983)
                  : (c <= 71999 || c == 72001))))))
            : (c <= 72103 || (c < 72368
              ? (c < 72203
                ? (c < 72163
                  ? (c < 72161
                    ? (c >= 72106 && c <= 72144)
                    : c <= 72161)
                  : (c <= 72163 || c == 72192))
                : (c <= 72242 || (c < 72284
                  ? (c < 72272
                    ? c == 72250
                    : c <= 72272)
                  : (c <= 72329 || c == 72349))))
              : (c <= 72440 || (c < 72960
                ? (c < 72768
                  ? (c < 72714
                    ? (c >= 72704 && c <= 72712)
                    : c <= 72750)
                  : (c <= 72768 || (c >= 72818 && c <= 72847)))
                : (c <= 72966 || (c < 73030
                  ? (c < 72971
                    ? (c >= 72968 && c <= 72969)
                    : c <= 73008)
                  : (c <= 73030 || (c >= 73056 && c <= 73061)))))))))
          : (c <= 73064 || (c < 94032
            ? (c < 92160
              ? (c < 74752
                ? (c < 73440
                  ? (c < 73112
                    ? (c >= 73066 && c <= 73097)
                    : c <= 73112)
                  : (c <= 73458 || (c < 73728
                    ? c == 73648
                    : c <= 74649)))
                : (c <= 74862 || (c < 77824
                  ? (c < 77712
                    ? (c >= 74880 && c <= 75075)
                    : c <= 77808)
                  : (c <= 78894 || (c >= 82944 && c <= 83526)))))
              : (c <= 92728 || (c < 92992
                ? (c < 92880
                  ? (c < 92784
                    ? (c >= 92736 && c <= 92766)
                    : c <= 92862)
                  : (c <= 92909 || (c >= 92928 && c <= 92975)))
                : (c <= 92995 || (c < 93760
                  ? (c < 93053
                    ? (c >= 93027 && c <= 93047)
                    : c <= 93071)
                  : (c <= 93823 || (c >= 93952 && c <= 94026)))))))
            : (c <= 94032 || (c < 110592
              ? (c < 100352
                ? (c < 94179
                  ? (c < 94176
                    ? (c >= 94099 && c <= 94111)
                    : c <= 94177)
                  : (c <= 94179 || (c >= 94208 && c <= 100343)))
                : (c <= 101589 || (c < 110581
                  ? (c < 110576
                    ? (c >= 101632 && c <= 101640)
                    : c <= 110579)
                  : (c <= 110587 || (c >= 110589 && c <= 110590)))))
              : (c <= 110882 || (c < 113776
                ? (c < 110960
                  ? (c < 110948
                    ? (c >= 110928 && c <= 110930)
                    : c <= 110951)
                  : (c <= 111355 || (c >= 113664 && c <= 113770)))
                : (c <= 113788 || (c < 119808
                  ? (c < 113808
                    ? (c >= 113792 && c <= 113800)
                    : c <= 113817)
                  : (c <= 119892 || (c >= 119894 && c <= 119964)))))))))))
        : (c <= 119967 || (c < 126464
          ? (c < 120598
            ? (c < 120094
              ? (c < 119997
                ? (c < 119977
                  ? (c < 119973
                    ? c == 119970
                    : c <= 119974)
                  : (c <= 119980 || (c < 119995
                    ? (c >= 119982 && c <= 119993)
                    : c <= 119995)))
                : (c <= 120003 || (c < 120077
                  ? (c < 120071
                    ? (c >= 120005 && c <= 120069)
                    : c <= 120074)
                  : (c <= 120084 || (c >= 120086 && c <= 120092)))))
              : (c <= 120121 || (c < 120146
                ? (c < 120134
                  ? (c < 120128
                    ? (c >= 120123 && c <= 120126)
                    : c <= 120132)
                  : (c <= 120134 || (c >= 120138 && c <= 120144)))
                : (c <= 120485 || (c < 120540
                  ? (c < 120514
                    ? (c >= 120488 && c <= 120512)
                    : c <= 120538)
                  : (c <= 120570 || (c >= 120572 && c <= 120596)))))))
            : (c <= 120628 || (c < 123214
              ? (c < 120746
                ? (c < 120688
                  ? (c < 120656
                    ? (c >= 120630 && c <= 120654)
                    : c <= 120686)
                  : (c <= 120712 || (c >= 120714 && c <= 120744)))
                : (c <= 120770 || (c < 123136
                  ? (c < 122624
                    ? (c >= 120772 && c <= 120779)
                    : c <= 122654)
                  : (c <= 123180 || (c >= 123191 && c <= 123197)))))
              : (c <= 123214 || (c < 124909
                ? (c < 124896
                  ? (c < 123584
                    ? (c >= 123536 && c <= 123565)
                    : c <= 123627)
                  : (c <= 124902 || (c >= 124904 && c <= 124907)))
                : (c <= 124910 || (c < 125184
                  ? (c < 124928
                    ? (c >= 124912 && c <= 124926)
                    : c <= 125124)
                  : (c <= 125251 || c == 125259))))))))
          : (c <= 126467 || (c < 126559
            ? (c < 126535
              ? (c < 126505
                ? (c < 126500
                  ? (c < 126497
                    ? (c >= 126469 && c <= 126495)
                    : c <= 126498)
                  : (c <= 126500 || c == 126503))
                : (c <= 126514 || (c < 126523
                  ? (c < 126521
                    ? (c >= 126516 && c <= 126519)
                    : c <= 126521)
                  : (c <= 126523 || c == 126530))))
              : (c <= 126535 || (c < 126548
                ? (c < 126541
                  ? (c < 126539
                    ? c == 126537
                    : c <= 126539)
                  : (c <= 126543 || (c >= 126545 && c <= 126546)))
                : (c <= 126548 || (c < 126555
                  ? (c < 126553
                    ? c == 126551
                    : c <= 126553)
                  : (c <= 126555 || c == 126557))))))
            : (c <= 126559 || (c < 126625
              ? (c < 126580
                ? (c < 126567
                  ? (c < 126564
                    ? (c >= 126561 && c <= 126562)
                    : c <= 126564)
                  : (c <= 126570 || (c >= 126572 && c <= 126578)))
                : (c <= 126583 || (c < 126592
                  ? (c < 126590
                    ? (c >= 126585 && c <= 126588)
                    : c <= 126590)
                  : (c <= 126601 || (c >= 126603 && c <= 126619)))))
              : (c <= 126627 || (c < 177984
                ? (c < 131072
                  ? (c < 126635
                    ? (c >= 126629 && c <= 126633)
                    : c <= 126651)
                  : (c <= 173791 || (c >= 173824 && c <= 177976)))
                : (c <= 178205 || (c < 194560
                  ? (c < 183984
                    ? (c >= 178208 && c <= 183969)
                    : c <= 191456)
                  : (c <= 195101 || (c >= 196608 && c <= 201546)))))))))))))))));
}

static inline bool sym_identifier_character_set_7(int32_t c) {
  return (c < 43616
    ? (c < 3782
      ? (c < 2748
        ? (c < 2045
          ? (c < 1015
            ? (c < 710
              ? (c < 181
                ? (c < '_'
                  ? (c < 'A'
                    ? (c >= '0' && c <= '9')
                    : c <= 'Z')
                  : (c <= '_' || (c < 170
                    ? (c >= 'b' && c <= 'z')
                    : c <= 170)))
                : (c <= 181 || (c < 192
                  ? (c < 186
                    ? c == 183
                    : c <= 186)
                  : (c <= 214 || (c < 248
                    ? (c >= 216 && c <= 246)
                    : c <= 705)))))
              : (c <= 721 || (c < 891
                ? (c < 750
                  ? (c < 748
                    ? (c >= 736 && c <= 740)
                    : c <= 748)
                  : (c <= 750 || (c < 886
                    ? (c >= 768 && c <= 884)
                    : c <= 887)))
                : (c <= 893 || (c < 908
                  ? (c < 902
                    ? c == 895
                    : c <= 906)
                  : (c <= 908 || (c < 931
                    ? (c >= 910 && c <= 929)
                    : c <= 1013)))))))
            : (c <= 1153 || (c < 1519
              ? (c < 1425
                ? (c < 1329
                  ? (c < 1162
                    ? (c >= 1155 && c <= 1159)
                    : c <= 1327)
                  : (c <= 1366 || (c < 1376
                    ? c == 1369
                    : c <= 1416)))
                : (c <= 1469 || (c < 1476
                  ? (c < 1473
                    ? c == 1471
                    : c <= 1474)
                  : (c <= 1477 || (c < 1488
                    ? c == 1479
                    : c <= 1514)))))
              : (c <= 1522 || (c < 1770
                ? (c < 1646
                  ? (c < 1568
                    ? (c >= 1552 && c <= 1562)
                    : c <= 1641)
                  : (c <= 1747 || (c < 1759
                    ? (c >= 1749 && c <= 1756)
                    : c <= 1768)))
                : (c <= 1788 || (c < 1869
                  ? (c < 1808
                    ? c == 1791
                    : c <= 1866)
                  : (c <= 1969 || (c < 2042
                    ? (c >= 1984 && c <= 2037)
                    : c <= 2042)))))))))
          : (c <= 2045 || (c < 2558
            ? (c < 2451
              ? (c < 2200
                ? (c < 2144
                  ? (c < 2112
                    ? (c >= 2048 && c <= 2093)
                    : c <= 2139)
                  : (c <= 2154 || (c < 2185
                    ? (c >= 2160 && c <= 2183)
                    : c <= 2190)))
                : (c <= 2273 || (c < 2417
                  ? (c < 2406
                    ? (c >= 2275 && c <= 2403)
                    : c <= 2415)
                  : (c <= 2435 || (c < 2447
                    ? (c >= 2437 && c <= 2444)
                    : c <= 2448)))))
              : (c <= 2472 || (c < 2507
                ? (c < 2486
                  ? (c < 2482
                    ? (c >= 2474 && c <= 2480)
                    : c <= 2482)
                  : (c <= 2489 || (c < 2503
                    ? (c >= 2492 && c <= 2500)
                    : c <= 2504)))
                : (c <= 2510 || (c < 2527
                  ? (c < 2524
                    ? c == 2519
                    : c <= 2525)
                  : (c <= 2531 || (c < 2556
                    ? (c >= 2534 && c <= 2545)
                    : c <= 2556)))))))
            : (c <= 2558 || (c < 2635
              ? (c < 2610
                ? (c < 2575
                  ? (c < 2565
                    ? (c >= 2561 && c <= 2563)
                    : c <= 2570)
                  : (c <= 2576 || (c < 2602
                    ? (c >= 2579 && c <= 2600)
                    : c <= 2608)))
                : (c <= 2611 || (c < 2620
                  ? (c < 2616
                    ? (c >= 2613 && c <= 2614)
                    : c <= 2617)
                  : (c <= 2620 || (c < 2631
                    ? (c >= 2622 && c <= 2626)
                    : c <= 2632)))))
              : (c <= 2637 || (c < 2693
                ? (c < 2654
                  ? (c < 2649
                    ? c == 2641
                    : c <= 2652)
                  : (c <= 2654 || (c < 2689
                    ? (c >= 2662 && c <= 2677)
                    : c <= 2691)))
                : (c <= 2701 || (c < 2730
                  ? (c < 2707
                    ? (c >= 2703 && c <= 2705)
                    : c <= 2728)
                  : (c <= 2736 || (c < 2741
                    ? (c >= 2738 && c <= 2739)
                    : c <= 2745)))))))))))
        : (c <= 2757 || (c < 3168
          ? (c < 2958
            ? (c < 2866
              ? (c < 2809
                ? (c < 2768
                  ? (c < 2763
                    ? (c >= 2759 && c <= 2761)
                    : c <= 2765)
                  : (c <= 2768 || (c < 2790
                    ? (c >= 2784 && c <= 2787)
                    : c <= 2799)))
                : (c <= 2815 || (c < 2831
                  ? (c < 2821
                    ? (c >= 2817 && c <= 2819)
                    : c <= 2828)
                  : (c <= 2832 || (c < 2858
                    ? (c >= 2835 && c <= 2856)
                    : c <= 2864)))))
              : (c <= 2867 || (c < 2908
                ? (c < 2887
                  ? (c < 2876
                    ? (c >= 2869 && c <= 2873)
                    : c <= 2884)
                  : (c <= 2888 || (c < 2901
                    ? (c >= 2891 && c <= 2893)
                    : c <= 2903)))
                : (c <= 2909 || (c < 2929
                  ? (c < 2918
                    ? (c >= 2911 && c <= 2915)
                    : c <= 2927)
                  : (c <= 2929 || (c < 2949
                    ? (c >= 2946 && c <= 2947)
                    : c <= 2954)))))))
            : (c <= 2960 || (c < 3031
              ? (c < 2984
                ? (c < 2972
                  ? (c < 2969
                    ? (c >= 2962 && c <= 2965)
                    : c <= 2970)
                  : (c <= 2972 || (c < 2979
                    ? (c >= 2974 && c <= 2975)
                    : c <= 2980)))
                : (c <= 2986 || (c < 3014
                  ? (c < 3006
                    ? (c >= 2990 && c <= 3001)
                    : c <= 3010)
                  : (c <= 3016 || (c < 3024
                    ? (c >= 3018 && c <= 3021)
                    : c <= 3024)))))
              : (c <= 3031 || (c < 3132
                ? (c < 3086
                  ? (c < 3072
                    ? (c >= 3046 && c <= 3055)
                    : c <= 3084)
                  : (c <= 3088 || (c < 3114
                    ? (c >= 3090 && c <= 3112)
                    : c <= 3129)))
                : (c <= 3140 || (c < 3157
                  ? (c < 3146
                    ? (c >= 3142 && c <= 3144)
                    : c <= 3149)
                  : (c <= 3158 || (c < 3165
                    ? (c >= 3160 && c <= 3162)
                    : c <= 3165)))))))))
          : (c <= 3171 || (c < 3450
            ? (c < 3293
              ? (c < 3242
                ? (c < 3205
                  ? (c < 3200
                    ? (c >= 3174 && c <= 3183)
                    : c <= 3203)
                  : (c <= 3212 || (c < 3218
                    ? (c >= 3214 && c <= 3216)
                    : c <= 3240)))
                : (c <= 3251 || (c < 3270
                  ? (c < 3260
                    ? (c >= 3253 && c <= 3257)
                    : c <= 3268)
                  : (c <= 3272 || (c < 3285
                    ? (c >= 3274 && c <= 3277)
                    : c <= 3286)))))
              : (c <= 3294 || (c < 3346
                ? (c < 3313
                  ? (c < 3302
                    ? (c >= 3296 && c <= 3299)
                    : c <= 3311)
                  : (c <= 3314 || (c < 3342
                    ? (c >= 3328 && c <= 3340)
                    : c <= 3344)))
                : (c <= 3396 || (c < 3412
                  ? (c < 3402
                    ? (c >= 3398 && c <= 3400)
                    : c <= 3406)
                  : (c <= 3415 || (c < 3430
                    ? (c >= 3423 && c <= 3427)
                    : c <= 3439)))))))
            : (c <= 3455 || (c < 3570
              ? (c < 3520
                ? (c < 3482
                  ? (c < 3461
                    ? (c >= 3457 && c <= 3459)
                    : c <= 3478)
                  : (c <= 3505 || (c < 3517
                    ? (c >= 3507 && c <= 3515)
                    : c <= 3517)))
                : (c <= 3526 || (c < 3542
                  ? (c < 3535
                    ? c == 3530
                    : c <= 3540)
                  : (c <= 3542 || (c < 3558
                    ? (c >= 3544 && c <= 3551)
                    : c <= 3567)))))
              : (c <= 3571 || (c < 3718
                ? (c < 3664
                  ? (c < 3648
                    ? (c >= 3585 && c <= 3642)
                    : c <= 3662)
                  : (c <= 3673 || (c < 3716
                    ? (c >= 3713 && c <= 3714)
                    : c <= 3716)))
                : (c <= 3722 || (c < 3751
                  ? (c < 3749
                    ? (c >= 3724 && c <= 3747)
                    : c <= 3749)
                  : (c <= 3773 || (c >= 3776 && c <= 3780)))))))))))))
      : (c <= 3782 || (c < 8025
        ? (c < 5888
          ? (c < 4688
            ? (c < 3953
              ? (c < 3872
                ? (c < 3804
                  ? (c < 3792
                    ? (c >= 3784 && c <= 3789)
                    : c <= 3801)
                  : (c <= 3807 || (c < 3864
                    ? c == 3840
                    : c <= 3865)))
                : (c <= 3881 || (c < 3897
                  ? (c < 3895
                    ? c == 3893
                    : c <= 3895)
                  : (c <= 3897 || (c < 3913
                    ? (c >= 3902 && c <= 3911)
                    : c <= 3948)))))
              : (c <= 3972 || (c < 4256
                ? (c < 4038
                  ? (c < 3993
                    ? (c >= 3974 && c <= 3991)
                    : c <= 4028)
                  : (c <= 4038 || (c < 4176
                    ? (c >= 4096 && c <= 4169)
                    : c <= 4253)))
                : (c <= 4293 || (c < 4304
                  ? (c < 4301
                    ? c == 4295
                    : c <= 4301)
                  : (c <= 4346 || (c < 4682
                    ? (c >= 4348 && c <= 4680)
                    : c <= 4685)))))))
            : (c <= 4694 || (c < 4882
              ? (c < 4786
                ? (c < 4704
                  ? (c < 4698
                    ? c == 4696
                    : c <= 4701)
                  : (c <= 4744 || (c < 4752
                    ? (c >= 4746 && c <= 4749)
                    : c <= 4784)))
                : (c <= 4789 || (c < 4802
                  ? (c < 4800
                    ? (c >= 4792 && c <= 4798)
                    : c <= 4800)
                  : (c <= 4805 || (c < 4824
                    ? (c >= 4808 && c <= 4822)
                    : c <= 4880)))))
              : (c <= 4885 || (c < 5112
                ? (c < 4969
                  ? (c < 4957
                    ? (c >= 4888 && c <= 4954)
                    : c <= 4959)
                  : (c <= 4977 || (c < 5024
                    ? (c >= 4992 && c <= 5007)
                    : c <= 5109)))
                : (c <= 5117 || (c < 5761
                  ? (c < 5743
                    ? (c >= 5121 && c <= 5740)
                    : c <= 5759)
                  : (c <= 5786 || (c < 5870
                    ? (c >= 5792 && c <= 5866)
                    : c <= 5880)))))))))
          : (c <= 5909 || (c < 6688
            ? (c < 6176
              ? (c < 6016
                ? (c < 5984
                  ? (c < 5952
                    ? (c >= 5919 && c <= 5940)
                    : c <= 5971)
                  : (c <= 5996 || (c < 6002
                    ? (c >= 5998 && c <= 6000)
                    : c <= 6003)))
                : (c <= 6099 || (c < 6112
                  ? (c < 6108
                    ? c == 6103
                    : c <= 6109)
                  : (c <= 6121 || (c < 6159
                    ? (c >= 6155 && c <= 6157)
                    : c <= 6169)))))
              : (c <= 6264 || (c < 6470
                ? (c < 6400
                  ? (c < 6320
                    ? (c >= 6272 && c <= 6314)
                    : c <= 6389)
                  : (c <= 6430 || (c < 6448
                    ? (c >= 6432 && c <= 6443)
                    : c <= 6459)))
                : (c <= 6509 || (c < 6576
                  ? (c < 6528
                    ? (c >= 6512 && c <= 6516)
                    : c <= 6571)
                  : (c <= 6601 || (c < 6656
                    ? (c >= 6608 && c <= 6618)
                    : c <= 6683)))))))
            : (c <= 6750 || (c < 7232
              ? (c < 6847
                ? (c < 6800
                  ? (c < 6783
                    ? (c >= 6752 && c <= 6780)
                    : c <= 6793)
                  : (c <= 6809 || (c < 6832
                    ? c == 6823
                    : c <= 6845)))
                : (c <= 6862 || (c < 7019
                  ? (c < 6992
                    ? (c >= 6912 && c <= 6988)
                    : c <= 7001)
                  : (c <= 7027 || (c < 7168
                    ? (c >= 7040 && c <= 7155)
                    : c <= 7223)))))
              : (c <= 7241 || (c < 7380
                ? (c < 7312
                  ? (c < 7296
                    ? (c >= 7245 && c <= 7293)
                    : c <= 7304)
                  : (c <= 7354 || (c < 7376
                    ? (c >= 7357 && c <= 7359)
                    : c <= 7378)))
                : (c <= 7418 || (c < 7968
                  ? (c < 7960
                    ? (c >= 7424 && c <= 7957)
                    : c <= 7965)
                  : (c <= 8005 || (c < 8016
                    ? (c >= 8008 && c <= 8013)
                    : c <= 8023)))))))))))
        : (c <= 8025 || (c < 11720
          ? (c < 8458
            ? (c < 8178
              ? (c < 8126
                ? (c < 8031
                  ? (c < 8029
                    ? c == 8027
                    : c <= 8029)
                  : (c <= 8061 || (c < 8118
                    ? (c >= 8064 && c <= 8116)
                    : c <= 8124)))
                : (c <= 8126 || (c < 8144
                  ? (c < 8134
                    ? (c >= 8130 && c <= 8132)
                    : c <= 8140)
                  : (c <= 8147 || (c < 8160
                    ? (c >= 8150 && c <= 8155)
                    : c <= 8172)))))
              : (c <= 8180 || (c < 8336
                ? (c < 8276
                  ? (c < 8255
                    ? (c >= 8182 && c <= 8188)
                    : c <= 8256)
                  : (c <= 8276 || (c < 8319
                    ? c == 8305
                    : c <= 8319)))
                : (c <= 8348 || (c < 8421
                  ? (c < 8417
                    ? (c >= 8400 && c <= 8412)
                    : c <= 8417)
                  : (c <= 8432 || (c < 8455
                    ? c == 8450
                    : c <= 8455)))))))
            : (c <= 8467 || (c < 11499
              ? (c < 8490
                ? (c < 8484
                  ? (c < 8472
                    ? c == 8469
                    : c <= 8477)
                  : (c <= 8484 || (c < 8488
                    ? c == 8486
                    : c <= 8488)))
                : (c <= 8505 || (c < 8526
                  ? (c < 8517
                    ? (c >= 8508 && c <= 8511)
                    : c <= 8521)
                  : (c <= 8526 || (c < 11264
                    ? (c >= 8544 && c <= 8584)
                    : c <= 11492)))))
              : (c <= 11507 || (c < 11647
                ? (c < 11565
                  ? (c < 11559
                    ? (c >= 11520 && c <= 11557)
                    : c <= 11559)
                  : (c <= 11565 || (c < 11631
                    ? (c >= 11568 && c <= 11623)
                    : c <= 11631)))
                : (c <= 11670 || (c < 11696
                  ? (c < 11688
                    ? (c >= 11680 && c <= 11686)
                    : c <= 11694)
                  : (c <= 11702 || (c < 11712
                    ? (c >= 11704 && c <= 11710)
                    : c <= 11718)))))))))
          : (c <= 11726 || (c < 42623
            ? (c < 12540
              ? (c < 12337
                ? (c < 11744
                  ? (c < 11736
                    ? (c >= 11728 && c <= 11734)
                    : c <= 11742)
                  : (c <= 11775 || (c < 12321
                    ? (c >= 12293 && c <= 12295)
                    : c <= 12335)))
                : (c <= 12341 || (c < 12441
                  ? (c < 12353
                    ? (c >= 12344 && c <= 12348)
                    : c <= 12438)
                  : (c <= 12442 || (c < 12449
                    ? (c >= 12445 && c <= 12447)
                    : c <= 12538)))))
              : (c <= 12543 || (c < 19968
                ? (c < 12704
                  ? (c < 12593
                    ? (c >= 12549 && c <= 12591)
                    : c <= 12686)
                  : (c <= 12735 || (c < 13312
                    ? (c >= 12784 && c <= 12799)
                    : c <= 19903)))
                : (c <= 42124 || (c < 42512
                  ? (c < 42240
                    ? (c >= 42192 && c <= 42237)
                    : c <= 42508)
                  : (c <= 42539 || (c < 42612
                    ? (c >= 42560 && c <= 42607)
                    : c <= 42621)))))))
            : (c <= 42737 || (c < 43232
              ? (c < 42965
                ? (c < 42891
                  ? (c < 42786
                    ? (c >= 42775 && c <= 42783)
                    : c <= 42888)
                  : (c <= 42954 || (c < 42963
                    ? (c >= 42960 && c <= 42961)
                    : c <= 42963)))
                : (c <= 42969 || (c < 43072
                  ? (c < 43052
                    ? (c >= 42994 && c <= 43047)
                    : c <= 43052)
                  : (c <= 43123 || (c < 43216
                    ? (c >= 43136 && c <= 43205)
                    : c <= 43225)))))
              : (c <= 43255 || (c < 43471
                ? (c < 43312
                  ? (c < 43261
                    ? c == 43259
                    : c <= 43309)
                  : (c <= 43347 || (c < 43392
                    ? (c >= 43360 && c <= 43388)
                    : c <= 43456)))
                : (c <= 43481 || (c < 43584
                  ? (c < 43520
                    ? (c >= 43488 && c <= 43518)
                    : c <= 43574)
                  : (c <= 43597 || (c >= 43600 && c <= 43609)))))))))))))))
    : (c <= 43638 || (c < 71453
      ? (c < 67639
        ? (c < 65345
          ? (c < 64312
            ? (c < 43888
              ? (c < 43785
                ? (c < 43744
                  ? (c < 43739
                    ? (c >= 43642 && c <= 43714)
                    : c <= 43741)
                  : (c <= 43759 || (c < 43777
                    ? (c >= 43762 && c <= 43766)
                    : c <= 43782)))
                : (c <= 43790 || (c < 43816
                  ? (c < 43808
                    ? (c >= 43793 && c <= 43798)
                    : c <= 43814)
                  : (c <= 43822 || (c < 43868
                    ? (c >= 43824 && c <= 43866)
                    : c <= 43881)))))
              : (c <= 44010 || (c < 63744
                ? (c < 44032
                  ? (c < 44016
                    ? (c >= 44012 && c <= 44013)
                    : c <= 44025)
                  : (c <= 55203 || (c < 55243
                    ? (c >= 55216 && c <= 55238)
                    : c <= 55291)))
                : (c <= 64109 || (c < 64275
                  ? (c < 64256
                    ? (c >= 64112 && c <= 64217)
                    : c <= 64262)
                  : (c <= 64279 || (c < 64298
                    ? (c >= 64285 && c <= 64296)
                    : c <= 64310)))))))
            : (c <= 64316 || (c < 65075
              ? (c < 64612
                ? (c < 64323
                  ? (c < 64320
                    ? c == 64318
                    : c <= 64321)
                  : (c <= 64324 || (c < 64467
                    ? (c >= 64326 && c <= 64433)
                    : c <= 64605)))
                : (c <= 64829 || (c < 65008
                  ? (c < 64914
                    ? (c >= 64848 && c <= 64911)
                    : c <= 64967)
                  : (c <= 65017 || (c < 65056
                    ? (c >= 65024 && c <= 65039)
                    : c <= 65071)))))
              : (c <= 65076 || (c < 65147
                ? (c < 65139
                  ? (c < 65137
                    ? (c >= 65101 && c <= 65103)
                    : c <= 65137)
                  : (c <= 65139 || (c < 65145
                    ? c == 65143
                    : c <= 65145)))
                : (c <= 65147 || (c < 65296
                  ? (c < 65151
                    ? c == 65149
                    : c <= 65276)
                  : (c <= 65305 || (c < 65343
                    ? (c >= 65313 && c <= 65338)
                    : c <= 65343)))))))))
          : (c <= 65370 || (c < 66513
            ? (c < 65664
              ? (c < 65536
                ? (c < 65482
                  ? (c < 65474
                    ? (c >= 65382 && c <= 65470)
                    : c <= 65479)
                  : (c <= 65487 || (c < 65498
                    ? (c >= 65490 && c <= 65495)
                    : c <= 65500)))
                : (c <= 65547 || (c < 65596
                  ? (c < 65576
                    ? (c >= 65549 && c <= 65574)
                    : c <= 65594)
                  : (c <= 65597 || (c < 65616
                    ? (c >= 65599 && c <= 65613)
                    : c <= 65629)))))
              : (c <= 65786 || (c < 66304
                ? (c < 66176
                  ? (c < 66045
                    ? (c >= 65856 && c <= 65908)
                    : c <= 66045)
                  : (c <= 66204 || (c < 66272
                    ? (c >= 66208 && c <= 66256)
                    : c <= 66272)))
                : (c <= 66335 || (c < 66432
                  ? (c < 66384
                    ? (c >= 66349 && c <= 66378)
                    : c <= 66426)
                  : (c <= 66461 || (c < 66504
                    ? (c >= 66464 && c <= 66499)
                    : c <= 66511)))))))
            : (c <= 66517 || (c < 66979
              ? (c < 66864
                ? (c < 66736
                  ? (c < 66720
                    ? (c >= 66560 && c <= 66717)
                    : c <= 66729)
                  : (c <= 66771 || (c < 66816
                    ? (c >= 66776 && c <= 66811)
                    : c <= 66855)))
                : (c <= 66915 || (c < 66956
                  ? (c < 66940
                    ? (c >= 66928 && c <= 66938)
                    : c <= 66954)
                  : (c <= 66962 || (c < 66967
                    ? (c >= 66964 && c <= 66965)
                    : c <= 66977)))))
              : (c <= 66993 || (c < 67456
                ? (c < 67072
                  ? (c < 67003
                    ? (c >= 66995 && c <= 67001)
                    : c <= 67004)
                  : (c <= 67382 || (c < 67424
                    ? (c >= 67392 && c <= 67413)
                    : c <= 67431)))
                : (c <= 67461 || (c < 67584
                  ? (c < 67506
                    ? (c >= 67463 && c <= 67504)
                    : c <= 67514)
                  : (c <= 67589 || (c < 67594
                    ? c == 67592
                    : c <= 67637)))))))))))
        : (c <= 67640 || (c < 69956
          ? (c < 68448
            ? (c < 68101
              ? (c < 67828
                ? (c < 67680
                  ? (c < 67647
                    ? c == 67644
                    : c <= 67669)
                  : (c <= 67702 || (c < 67808
                    ? (c >= 67712 && c <= 67742)
                    : c <= 67826)))
                : (c <= 67829 || (c < 67968
                  ? (c < 67872
                    ? (c >= 67840 && c <= 67861)
                    : c <= 67897)
                  : (c <= 68023 || (c < 68096
                    ? (c >= 68030 && c <= 68031)
                    : c <= 68099)))))
              : (c <= 68102 || (c < 68192
                ? (c < 68121
                  ? (c < 68117
                    ? (c >= 68108 && c <= 68115)
                    : c <= 68119)
                  : (c <= 68149 || (c < 68159
                    ? (c >= 68152 && c <= 68154)
                    : c <= 68159)))
                : (c <= 68220 || (c < 68297
                  ? (c < 68288
                    ? (c >= 68224 && c <= 68252)
                    : c <= 68295)
                  : (c <= 68326 || (c < 68416
                    ? (c >= 68352 && c <= 68405)
                    : c <= 68437)))))))
            : (c <= 68466 || (c < 69424
              ? (c < 68912
                ? (c < 68736
                  ? (c < 68608
                    ? (c >= 68480 && c <= 68497)
                    : c <= 68680)
                  : (c <= 68786 || (c < 68864
                    ? (c >= 68800 && c <= 68850)
                    : c <= 68903)))
                : (c <= 68921 || (c < 69296
                  ? (c < 69291
                    ? (c >= 69248 && c <= 69289)
                    : c <= 69292)
                  : (c <= 69297 || (c < 69415
                    ? (c >= 69376 && c <= 69404)
                    : c <= 69415)))))
              : (c <= 69456 || (c < 69759
                ? (c < 69600
                  ? (c < 69552
                    ? (c >= 69488 && c <= 69509)
                    : c <= 69572)
                  : (c <= 69622 || (c < 69734
                    ? (c >= 69632 && c <= 69702)
                    : c <= 69749)))
                : (c <= 69818 || (c < 69872
                  ? (c < 69840
                    ? c == 69826
                    : c <= 69864)
                  : (c <= 69881 || (c < 69942
                    ? (c >= 69888 && c <= 69940)
                    : c <= 69951)))))))))
          : (c <= 69959 || (c < 70459
            ? (c < 70282
              ? (c < 70108
                ? (c < 70016
                  ? (c < 70006
                    ? (c >= 69968 && c <= 70003)
                    : c <= 70006)
                  : (c <= 70084 || (c < 70094
                    ? (c >= 70089 && c <= 70092)
                    : c <= 70106)))
                : (c <= 70108 || (c < 70206
                  ? (c < 70163
                    ? (c >= 70144 && c <= 70161)
                    : c <= 70199)
                  : (c <= 70206 || (c < 70280
                    ? (c >= 70272 && c <= 70278)
                    : c <= 70280)))))
              : (c <= 70285 || (c < 70405
                ? (c < 70320
                  ? (c < 70303
                    ? (c >= 70287 && c <= 70301)
                    : c <= 70312)
                  : (c <= 70378 || (c < 70400
                    ? (c >= 70384 && c <= 70393)
                    : c <= 70403)))
                : (c <= 70412 || (c < 70442
                  ? (c < 70419
                    ? (c >= 70415 && c <= 70416)
                    : c <= 70440)
                  : (c <= 70448 || (c < 70453
                    ? (c >= 70450 && c <= 70451)
                    : c <= 70457)))))))
            : (c <= 70468 || (c < 70855
              ? (c < 70502
                ? (c < 70480
                  ? (c < 70475
                    ? (c >= 70471 && c <= 70472)
                    : c <= 70477)
                  : (c <= 70480 || (c < 70493
                    ? c == 70487
                    : c <= 70499)))
                : (c <= 70508 || (c < 70736
                  ? (c < 70656
                    ? (c >= 70512 && c <= 70516)
                    : c <= 70730)
                  : (c <= 70745 || (c < 70784
                    ? (c >= 70750 && c <= 70753)
                    : c <= 70853)))))
              : (c <= 70855 || (c < 71236
                ? (c < 71096
                  ? (c < 71040
                    ? (c >= 70864 && c <= 70873)
                    : c <= 71093)
                  : (c <= 71104 || (c < 71168
                    ? (c >= 71128 && c <= 71133)
                    : c <= 71232)))
                : (c <= 71236 || (c < 71360
                  ? (c < 71296
                    ? (c >= 71248 && c <= 71257)
                    : c <= 71352)
                  : (c <= 71369 || (c >= 71424 && c <= 71450)))))))))))))
      : (c <= 71467 || (c < 119973
        ? (c < 77824
          ? (c < 72760
            ? (c < 72016
              ? (c < 71945
                ? (c < 71680
                  ? (c < 71488
                    ? (c >= 71472 && c <= 71481)
                    : c <= 71494)
                  : (c <= 71738 || (c < 71935
                    ? (c >= 71840 && c <= 71913)
                    : c <= 71942)))
                : (c <= 71945 || (c < 71960
                  ? (c < 71957
                    ? (c >= 71948 && c <= 71955)
                    : c <= 71958)
                  : (c <= 71989 || (c < 71995
                    ? (c >= 71991 && c <= 71992)
                    : c <= 72003)))))
              : (c <= 72025 || (c < 72263
                ? (c < 72154
                  ? (c < 72106
                    ? (c >= 72096 && c <= 72103)
                    : c <= 72151)
                  : (c <= 72161 || (c < 72192
                    ? (c >= 72163 && c <= 72164)
                    : c <= 72254)))
                : (c <= 72263 || (c < 72368
                  ? (c < 72349
                    ? (c >= 72272 && c <= 72345)
                    : c <= 72349)
                  : (c <= 72440 || (c < 72714
                    ? (c >= 72704 && c <= 72712)
                    : c <= 72758)))))))
            : (c <= 72768 || (c < 73056
              ? (c < 72968
                ? (c < 72850
                  ? (c < 72818
                    ? (c >= 72784 && c <= 72793)
                    : c <= 72847)
                  : (c <= 72871 || (c < 72960
                    ? (c >= 72873 && c <= 72886)
                    : c <= 72966)))
                : (c <= 72969 || (c < 73020
                  ? (c < 73018
                    ? (c >= 72971 && c <= 73014)
                    : c <= 73018)
                  : (c <= 73021 || (c < 73040
                    ? (c >= 73023 && c <= 73031)
                    : c <= 73049)))))
              : (c <= 73061 || (c < 73440
                ? (c < 73104
                  ? (c < 73066
                    ? (c >= 73063 && c <= 73064)
                    : c <= 73102)
                  : (c <= 73105 || (c < 73120
                    ? (c >= 73107 && c <= 73112)
                    : c <= 73129)))
                : (c <= 73462 || (c < 74752
                  ? (c < 73728
                    ? c == 73648
                    : c <= 74649)
                  : (c <= 74862 || (c < 77712
                    ? (c >= 74880 && c <= 75075)
                    : c <= 77808)))))))))
          : (c <= 78894 || (c < 110576
            ? (c < 93027
              ? (c < 92864
                ? (c < 92736
                  ? (c < 92160
                    ? (c >= 82944 && c <= 83526)
                    : c <= 92728)
                  : (c <= 92766 || (c < 92784
                    ? (c >= 92768 && c <= 92777)
                    : c <= 92862)))
                : (c <= 92873 || (c < 92928
                  ? (c < 92912
                    ? (c >= 92880 && c <= 92909)
                    : c <= 92916)
                  : (c <= 92982 || (c < 93008
                    ? (c >= 92992 && c <= 92995)
                    : c <= 93017)))))
              : (c <= 93047 || (c < 94176
                ? (c < 93952
                  ? (c < 93760
                    ? (c >= 93053 && c <= 93071)
                    : c <= 93823)
                  : (c <= 94026 || (c < 94095
                    ? (c >= 94031 && c <= 94087)
                    : c <= 94111)))
                : (c <= 94177 || (c < 94208
                  ? (c < 94192
                    ? (c >= 94179 && c <= 94180)
                    : c <= 94193)
                  : (c <= 100343 || (c < 101632
                    ? (c >= 100352 && c <= 101589)
                    : c <= 101640)))))))
            : (c <= 110579 || (c < 118528
              ? (c < 110960
                ? (c < 110592
                  ? (c < 110589
                    ? (c >= 110581 && c <= 110587)
                    : c <= 110590)
                  : (c <= 110882 || (c < 110948
                    ? (c >= 110928 && c <= 110930)
                    : c <= 110951)))
                : (c <= 111355 || (c < 113792
                  ? (c < 113776
                    ? (c >= 113664 && c <= 113770)
                    : c <= 113788)
                  : (c <= 113800 || (c < 113821
                    ? (c >= 113808 && c <= 113817)
                    : c <= 113822)))))
              : (c <= 118573 || (c < 119210
                ? (c < 119149
                  ? (c < 119141
                    ? (c >= 118576 && c <= 118598)
                    : c <= 119145)
                  : (c <= 119154 || (c < 119173
                    ? (c >= 119163 && c <= 119170)
                    : c <= 119179)))
                : (c <= 119213 || (c < 119894
                  ? (c < 119808
                    ? (c >= 119362 && c <= 119364)
                    : c <= 119892)
                  : (c <= 119964 || (c < 119970
                    ? (c >= 119966 && c <= 119967)
                    : c <= 119970)))))))))))
        : (c <= 119974 || (c < 124912
          ? (c < 120746
            ? (c < 120134
              ? (c < 120071
                ? (c < 119995
                  ? (c < 119982
                    ? (c >= 119977 && c <= 119980)
                    : c <= 119993)
                  : (c <= 119995 || (c < 120005
                    ? (c >= 119997 && c <= 120003)
                    : c <= 120069)))
                : (c <= 120074 || (c < 120094
                  ? (c < 120086
                    ? (c >= 120077 && c <= 120084)
                    : c <= 120092)
                  : (c <= 120121 || (c < 120128
                    ? (c >= 120123 && c <= 120126)
                    : c <= 120132)))))
              : (c <= 120134 || (c < 120572
                ? (c < 120488
                  ? (c < 120146
                    ? (c >= 120138 && c <= 120144)
                    : c <= 120485)
                  : (c <= 120512 || (c < 120540
                    ? (c >= 120514 && c <= 120538)
                    : c <= 120570)))
                : (c <= 120596 || (c < 120656
                  ? (c < 120630
                    ? (c >= 120598 && c <= 120628)
                    : c <= 120654)
                  : (c <= 120686 || (c < 120714
                    ? (c >= 120688 && c <= 120712)
                    : c <= 120744)))))))
            : (c <= 120770 || (c < 122907
              ? (c < 121476
                ? (c < 121344
                  ? (c < 120782
                    ? (c >= 120772 && c <= 120779)
                    : c <= 120831)
                  : (c <= 121398 || (c < 121461
                    ? (c >= 121403 && c <= 121452)
                    : c <= 121461)))
                : (c <= 121476 || (c < 122624
                  ? (c < 121505
                    ? (c >= 121499 && c <= 121503)
                    : c <= 121519)
                  : (c <= 122654 || (c < 122888
                    ? (c >= 122880 && c <= 122886)
                    : c <= 122904)))))
              : (c <= 122913 || (c < 123214
                ? (c < 123136
                  ? (c < 122918
                    ? (c >= 122915 && c <= 122916)
                    : c <= 122922)
                  : (c <= 123180 || (c < 123200
                    ? (c >= 123184 && c <= 123197)
                    : c <= 123209)))
                : (c <= 123214 || (c < 124896
                  ? (c < 123584
                    ? (c >= 123536 && c <= 123566)
                    : c <= 123641)
                  : (c <= 124902 || (c < 124909
                    ? (c >= 124904 && c <= 124907)
                    : c <= 124910)))))))))
          : (c <= 124926 || (c < 126557
            ? (c < 126521
              ? (c < 126469
                ? (c < 125184
                  ? (c < 125136
                    ? (c >= 124928 && c <= 125124)
                    : c <= 125142)
                  : (c <= 125259 || (c < 126464
                    ? (c >= 125264 && c <= 125273)
                    : c <= 126467)))
                : (c <= 126495 || (c < 126503
                  ? (c < 126500
                    ? (c >= 126497 && c <= 126498)
                    : c <= 126500)
                  : (c <= 126503 || (c < 126516
                    ? (c >= 126505 && c <= 126514)
                    : c <= 126519)))))
              : (c <= 126521 || (c < 126541
                ? (c < 126535
                  ? (c < 126530
                    ? c == 126523
                    : c <= 126530)
                  : (c <= 126535 || (c < 126539
                    ? c == 126537
                    : c <= 126539)))
                : (c <= 126543 || (c < 126551
                  ? (c < 126548
                    ? (c >= 126545 && c <= 126546)
                    : c <= 126548)
                  : (c <= 126551 || (c < 126555
                    ? c == 126553
                    : c <= 126555)))))))
            : (c <= 126557 || (c < 126629
              ? (c < 126580
                ? (c < 126564
                  ? (c < 126561
                    ? c == 126559
                    : c <= 126562)
                  : (c <= 126564 || (c < 126572
                    ? (c >= 126567 && c <= 126570)
                    : c <= 126578)))
                : (c <= 126583 || (c < 126592
                  ? (c < 126590
                    ? (c >= 126585 && c <= 126588)
                    : c <= 126590)
                  : (c <= 126601 || (c < 126625
                    ? (c >= 126603 && c <= 126619)
                    : c <= 126627)))))
              : (c <= 126633 || (c < 178208
                ? (c < 131072
                  ? (c < 130032
                    ? (c >= 126635 && c <= 126651)
                    : c <= 130041)
                  : (c <= 173791 || (c < 177984
                    ? (c >= 173824 && c <= 177976)
                    : c <= 178205)))
                : (c <= 183969 || (c < 196608
                  ? (c < 194560
                    ? (c >= 183984 && c <= 191456)
                    : c <= 195101)
                  : (c <= 201546 || (c >= 917760 && c <= 917999)))))))))))))))));
}

static inline bool sym_identifier_character_set_8(int32_t c) {
  return (c < 43616
    ? (c < 3782
      ? (c < 2748
        ? (c < 2045
          ? (c < 1015
            ? (c < 710
              ? (c < 181
                ? (c < '_'
                  ? (c < 'A'
                    ? (c >= '0' && c <= '9')
                    : c <= 'Z')
                  : (c <= '_' || (c < 170
                    ? (c >= 'a' && c <= 'z')
                    : c <= 170)))
                : (c <= 181 || (c < 192
                  ? (c < 186
                    ? c == 183
                    : c <= 186)
                  : (c <= 214 || (c < 248
                    ? (c >= 216 && c <= 246)
                    : c <= 705)))))
              : (c <= 721 || (c < 891
                ? (c < 750
                  ? (c < 748
                    ? (c >= 736 && c <= 740)
                    : c <= 748)
                  : (c <= 750 || (c < 886
                    ? (c >= 768 && c <= 884)
                    : c <= 887)))
                : (c <= 893 || (c < 908
                  ? (c < 902
                    ? c == 895
                    : c <= 906)
                  : (c <= 908 || (c < 931
                    ? (c >= 910 && c <= 929)
                    : c <= 1013)))))))
            : (c <= 1153 || (c < 1519
              ? (c < 1425
                ? (c < 1329
                  ? (c < 1162
                    ? (c >= 1155 && c <= 1159)
                    : c <= 1327)
                  : (c <= 1366 || (c < 1376
                    ? c == 1369
                    : c <= 1416)))
                : (c <= 1469 || (c < 1476
                  ? (c < 1473
                    ? c == 1471
                    : c <= 1474)
                  : (c <= 1477 || (c < 1488
                    ? c == 1479
                    : c <= 1514)))))
              : (c <= 1522 || (c < 1770
                ? (c < 1646
                  ? (c < 1568
                    ? (c >= 1552 && c <= 1562)
                    : c <= 1641)
                  : (c <= 1747 || (c < 1759
                    ? (c >= 1749 && c <= 1756)
                    : c <= 1768)))
                : (c <= 1788 || (c < 1869
                  ? (c < 1808
                    ? c == 1791
                    : c <= 1866)
                  : (c <= 1969 || (c < 2042
                    ? (c >= 1984 && c <= 2037)
                    : c <= 2042)))))))))
          : (c <= 2045 || (c < 2558
            ? (c < 2451
              ? (c < 2200
                ? (c < 2144
                  ? (c < 2112
                    ? (c >= 2048 && c <= 2093)
                    : c <= 2139)
                  : (c <= 2154 || (c < 2185
                    ? (c >= 2160 && c <= 2183)
                    : c <= 2190)))
                : (c <= 2273 || (c < 2417
                  ? (c < 2406
                    ? (c >= 2275 && c <= 2403)
                    : c <= 2415)
                  : (c <= 2435 || (c < 2447
                    ? (c >= 2437 && c <= 2444)
                    : c <= 2448)))))
              : (c <= 2472 || (c < 2507
                ? (c < 2486
                  ? (c < 2482
                    ? (c >= 2474 && c <= 2480)
                    : c <= 2482)
                  : (c <= 2489 || (c < 2503
                    ? (c >= 2492 && c <= 2500)
                    : c <= 2504)))
                : (c <= 2510 || (c < 2527
                  ? (c < 2524
                    ? c == 2519
                    : c <= 2525)
                  : (c <= 2531 || (c < 2556
                    ? (c >= 2534 && c <= 2545)
                    : c <= 2556)))))))
            : (c <= 2558 || (c < 2635
              ? (c < 2610
                ? (c < 2575
                  ? (c < 2565
                    ? (c >= 2561 && c <= 2563)
                    : c <= 2570)
                  : (c <= 2576 || (c < 2602
                    ? (c >= 2579 && c <= 2600)
                    : c <= 2608)))
                : (c <= 2611 || (c < 2620
                  ? (c < 2616
                    ? (c >= 2613 && c <= 2614)
                    : c <= 2617)
                  : (c <= 2620 || (c < 2631
                    ? (c >= 2622 && c <= 2626)
                    : c <= 2632)))))
              : (c <= 2637 || (c < 2693
                ? (c < 2654
                  ? (c < 2649
                    ? c == 2641
                    : c <= 2652)
                  : (c <= 2654 || (c < 2689
                    ? (c >= 2662 && c <= 2677)
                    : c <= 2691)))
                : (c <= 2701 || (c < 2730
                  ? (c < 2707
                    ? (c >= 2703 && c <= 2705)
                    : c <= 2728)
                  : (c <= 2736 || (c < 2741
                    ? (c >= 2738 && c <= 2739)
                    : c <= 2745)))))))))))
        : (c <= 2757 || (c < 3168
          ? (c < 2958
            ? (c < 2866
              ? (c < 2809
                ? (c < 2768
                  ? (c < 2763
                    ? (c >= 2759 && c <= 2761)
                    : c <= 2765)
                  : (c <= 2768 || (c < 2790
                    ? (c >= 2784 && c <= 2787)
                    : c <= 2799)))
                : (c <= 2815 || (c < 2831
                  ? (c < 2821
                    ? (c >= 2817 && c <= 2819)
                    : c <= 2828)
                  : (c <= 2832 || (c < 2858
                    ? (c >= 2835 && c <= 2856)
                    : c <= 2864)))))
              : (c <= 2867 || (c < 2908
                ? (c < 2887
                  ? (c < 2876
                    ? (c >= 2869 && c <= 2873)
                    : c <= 2884)
                  : (c <= 2888 || (c < 2901
                    ? (c >= 2891 && c <= 2893)
                    : c <= 2903)))
                : (c <= 2909 || (c < 2929
                  ? (c < 2918
                    ? (c >= 2911 && c <= 2915)
                    : c <= 2927)
                  : (c <= 2929 || (c < 2949
                    ? (c >= 2946 && c <= 2947)
                    : c <= 2954)))))))
            : (c <= 2960 || (c < 3031
              ? (c < 2984
                ? (c < 2972
                  ? (c < 2969
                    ? (c >= 2962 && c <= 2965)
                    : c <= 2970)
                  : (c <= 2972 || (c < 2979
                    ? (c >= 2974 && c <= 2975)
                    : c <= 2980)))
                : (c <= 2986 || (c < 3014
                  ? (c < 3006
                    ? (c >= 2990 && c <= 3001)
                    : c <= 3010)
                  : (c <= 3016 || (c < 3024
                    ? (c >= 3018 && c <= 3021)
                    : c <= 3024)))))
              : (c <= 3031 || (c < 3132
                ? (c < 3086
                  ? (c < 3072
                    ? (c >= 3046 && c <= 3055)
                    : c <= 3084)
                  : (c <= 3088 || (c < 3114
                    ? (c >= 3090 && c <= 3112)
                    : c <= 3129)))
                : (c <= 3140 || (c < 3157
                  ? (c < 3146
                    ? (c >= 3142 && c <= 3144)
                    : c <= 3149)
                  : (c <= 3158 || (c < 3165
                    ? (c >= 3160 && c <= 3162)
                    : c <= 3165)))))))))
          : (c <= 3171 || (c < 3450
            ? (c < 3293
              ? (c < 3242
                ? (c < 3205
                  ? (c < 3200
                    ? (c >= 3174 && c <= 3183)
                    : c <= 3203)
                  : (c <= 3212 || (c < 3218
                    ? (c >= 3214 && c <= 3216)
                    : c <= 3240)))
                : (c <= 3251 || (c < 3270
                  ? (c < 3260
                    ? (c >= 3253 && c <= 3257)
                    : c <= 3268)
                  : (c <= 3272 || (c < 3285
                    ? (c >= 3274 && c <= 3277)
                    : c <= 3286)))))
              : (c <= 3294 || (c < 3346
                ? (c < 3313
                  ? (c < 3302
                    ? (c >= 3296 && c <= 3299)
                    : c <= 3311)
                  : (c <= 3314 || (c < 3342
                    ? (c >= 3328 && c <= 3340)
                    : c <= 3344)))
                : (c <= 3396 || (c < 3412
                  ? (c < 3402
                    ? (c >= 3398 && c <= 3400)
                    : c <= 3406)
                  : (c <= 3415 || (c < 3430
                    ? (c >= 3423 && c <= 3427)
                    : c <= 3439)))))))
            : (c <= 3455 || (c < 3570
              ? (c < 3520
                ? (c < 3482
                  ? (c < 3461
                    ? (c >= 3457 && c <= 3459)
                    : c <= 3478)
                  : (c <= 3505 || (c < 3517
                    ? (c >= 3507 && c <= 3515)
                    : c <= 3517)))
                : (c <= 3526 || (c < 3542
                  ? (c < 3535
                    ? c == 3530
                    : c <= 3540)
                  : (c <= 3542 || (c < 3558
                    ? (c >= 3544 && c <= 3551)
                    : c <= 3567)))))
              : (c <= 3571 || (c < 3718
                ? (c < 3664
                  ? (c < 3648
                    ? (c >= 3585 && c <= 3642)
                    : c <= 3662)
                  : (c <= 3673 || (c < 3716
                    ? (c >= 3713 && c <= 3714)
                    : c <= 3716)))
                : (c <= 3722 || (c < 3751
                  ? (c < 3749
                    ? (c >= 3724 && c <= 3747)
                    : c <= 3749)
                  : (c <= 3773 || (c >= 3776 && c <= 3780)))))))))))))
      : (c <= 3782 || (c < 8025
        ? (c < 5888
          ? (c < 4688
            ? (c < 3953
              ? (c < 3872
                ? (c < 3804
                  ? (c < 3792
                    ? (c >= 3784 && c <= 3789)
                    : c <= 3801)
                  : (c <= 3807 || (c < 3864
                    ? c == 3840
                    : c <= 3865)))
                : (c <= 3881 || (c < 3897
                  ? (c < 3895
                    ? c == 3893
                    : c <= 3895)
                  : (c <= 3897 || (c < 3913
                    ? (c >= 3902 && c <= 3911)
                    : c <= 3948)))))
              : (c <= 3972 || (c < 4256
                ? (c < 4038
                  ? (c < 3993
                    ? (c >= 3974 && c <= 3991)
                    : c <= 4028)
                  : (c <= 4038 || (c < 4176
                    ? (c >= 4096 && c <= 4169)
                    : c <= 4253)))
                : (c <= 4293 || (c < 4304
                  ? (c < 4301
                    ? c == 4295
                    : c <= 4301)
                  : (c <= 4346 || (c < 4682
                    ? (c >= 4348 && c <= 4680)
                    : c <= 4685)))))))
            : (c <= 4694 || (c < 4882
              ? (c < 4786
                ? (c < 4704
                  ? (c < 4698
                    ? c == 4696
                    : c <= 4701)
                  : (c <= 4744 || (c < 4752
                    ? (c >= 4746 && c <= 4749)
                    : c <= 4784)))
                : (c <= 4789 || (c < 4802
                  ? (c < 4800
                    ? (c >= 4792 && c <= 4798)
                    : c <= 4800)
                  : (c <= 4805 || (c < 4824
                    ? (c >= 4808 && c <= 4822)
                    : c <= 4880)))))
              : (c <= 4885 || (c < 5112
                ? (c < 4969
                  ? (c < 4957
                    ? (c >= 4888 && c <= 4954)
                    : c <= 4959)
                  : (c <= 4977 || (c < 5024
                    ? (c >= 4992 && c <= 5007)
                    : c <= 5109)))
                : (c <= 5117 || (c < 5761
                  ? (c < 5743
                    ? (c >= 5121 && c <= 5740)
                    : c <= 5759)
                  : (c <= 5786 || (c < 5870
                    ? (c >= 5792 && c <= 5866)
                    : c <= 5880)))))))))
          : (c <= 5909 || (c < 6688
            ? (c < 6176
              ? (c < 6016
                ? (c < 5984
                  ? (c < 5952
                    ? (c >= 5919 && c <= 5940)
                    : c <= 5971)
                  : (c <= 5996 || (c < 6002
                    ? (c >= 5998 && c <= 6000)
                    : c <= 6003)))
                : (c <= 6099 || (c < 6112
                  ? (c < 6108
                    ? c == 6103
                    : c <= 6109)
                  : (c <= 6121 || (c < 6159
                    ? (c >= 6155 && c <= 6157)
                    : c <= 6169)))))
              : (c <= 6264 || (c < 6470
                ? (c < 6400
                  ? (c < 6320
                    ? (c >= 6272 && c <= 6314)
                    : c <= 6389)
                  : (c <= 6430 || (c < 6448
                    ? (c >= 6432 && c <= 6443)
                    : c <= 6459)))
                : (c <= 6509 || (c < 6576
                  ? (c < 6528
                    ? (c >= 6512 && c <= 6516)
                    : c <= 6571)
                  : (c <= 6601 || (c < 6656
                    ? (c >= 6608 && c <= 6618)
                    : c <= 6683)))))))
            : (c <= 6750 || (c < 7232
              ? (c < 6847
                ? (c < 6800
                  ? (c < 6783
                    ? (c >= 6752 && c <= 6780)
                    : c <= 6793)
                  : (c <= 6809 || (c < 6832
                    ? c == 6823
                    : c <= 6845)))
                : (c <= 6862 || (c < 7019
                  ? (c < 6992
                    ? (c >= 6912 && c <= 6988)
                    : c <= 7001)
                  : (c <= 7027 || (c < 7168
                    ? (c >= 7040 && c <= 7155)
                    : c <= 7223)))))
              : (c <= 7241 || (c < 7380
                ? (c < 7312
                  ? (c < 7296
                    ? (c >= 7245 && c <= 7293)
                    : c <= 7304)
                  : (c <= 7354 || (c < 7376
                    ? (c >= 7357 && c <= 7359)
                    : c <= 7378)))
                : (c <= 7418 || (c < 7968
                  ? (c < 7960
                    ? (c >= 7424 && c <= 7957)
                    : c <= 7965)
                  : (c <= 8005 || (c < 8016
                    ? (c >= 8008 && c <= 8013)
                    : c <= 8023)))))))))))
        : (c <= 8025 || (c < 11720
          ? (c < 8458
            ? (c < 8178
              ? (c < 8126
                ? (c < 8031
                  ? (c < 8029
                    ? c == 8027
                    : c <= 8029)
                  : (c <= 8061 || (c < 8118
                    ? (c >= 8064 && c <= 8116)
                    : c <= 8124)))
                : (c <= 8126 || (c < 8144
                  ? (c < 8134
                    ? (c >= 8130 && c <= 8132)
                    : c <= 8140)
                  : (c <= 8147 || (c < 8160
                    ? (c >= 8150 && c <= 8155)
                    : c <= 8172)))))
              : (c <= 8180 || (c < 8336
                ? (c < 8276
                  ? (c < 8255
                    ? (c >= 8182 && c <= 8188)
                    : c <= 8256)
                  : (c <= 8276 || (c < 8319
                    ? c == 8305
                    : c <= 8319)))
                : (c <= 8348 || (c < 8421
                  ? (c < 8417
                    ? (c >= 8400 && c <= 8412)
                    : c <= 8417)
                  : (c <= 8432 || (c < 8455
                    ? c == 8450
                    : c <= 8455)))))))
            : (c <= 8467 || (c < 11499
              ? (c < 8490
                ? (c < 8484
                  ? (c < 8472
                    ? c == 8469
                    : c <= 8477)
                  : (c <= 8484 || (c < 8488
                    ? c == 8486
                    : c <= 8488)))
                : (c <= 8505 || (c < 8526
                  ? (c < 8517
                    ? (c >= 8508 && c <= 8511)
                    : c <= 8521)
                  : (c <= 8526 || (c < 11264
                    ? (c >= 8544 && c <= 8584)
                    : c <= 11492)))))
              : (c <= 11507 || (c < 11647
                ? (c < 11565
                  ? (c < 11559
                    ? (c >= 11520 && c <= 11557)
                    : c <= 11559)
                  : (c <= 11565 || (c < 11631
                    ? (c >= 11568 && c <= 11623)
                    : c <= 11631)))
                : (c <= 11670 || (c < 11696
                  ? (c < 11688
                    ? (c >= 11680 && c <= 11686)
                    : c <= 11694)
                  : (c <= 11702 || (c < 11712
                    ? (c >= 11704 && c <= 11710)
                    : c <= 11718)))))))))
          : (c <= 11726 || (c < 42623
            ? (c < 12540
              ? (c < 12337
                ? (c < 11744
                  ? (c < 11736
                    ? (c >= 11728 && c <= 11734)
                    : c <= 11742)
                  : (c <= 11775 || (c < 12321
                    ? (c >= 12293 && c <= 12295)
                    : c <= 12335)))
                : (c <= 12341 || (c < 12441
                  ? (c < 12353
                    ? (c >= 12344 && c <= 12348)
                    : c <= 12438)
                  : (c <= 12442 || (c < 12449
                    ? (c >= 12445 && c <= 12447)
                    : c <= 12538)))))
              : (c <= 12543 || (c < 19968
                ? (c < 12704
                  ? (c < 12593
                    ? (c >= 12549 && c <= 12591)
                    : c <= 12686)
                  : (c <= 12735 || (c < 13312
                    ? (c >= 12784 && c <= 12799)
                    : c <= 19903)))
                : (c <= 42124 || (c < 42512
                  ? (c < 42240
                    ? (c >= 42192 && c <= 42237)
                    : c <= 42508)
                  : (c <= 42539 || (c < 42612
                    ? (c >= 42560 && c <= 42607)
                    : c <= 42621)))))))
            : (c <= 42737 || (c < 43232
              ? (c < 42965
                ? (c < 42891
                  ? (c < 42786
                    ? (c >= 42775 && c <= 42783)
                    : c <= 42888)
                  : (c <= 42954 || (c < 42963
                    ? (c >= 42960 && c <= 42961)
                    : c <= 42963)))
                : (c <= 42969 || (c < 43072
                  ? (c < 43052
                    ? (c >= 42994 && c <= 43047)
                    : c <= 43052)
                  : (c <= 43123 || (c < 43216
                    ? (c >= 43136 && c <= 43205)
                    : c <= 43225)))))
              : (c <= 43255 || (c < 43471
                ? (c < 43312
                  ? (c < 43261
                    ? c == 43259
                    : c <= 43309)
                  : (c <= 43347 || (c < 43392
                    ? (c >= 43360 && c <= 43388)
                    : c <= 43456)))
                : (c <= 43481 || (c < 43584
                  ? (c < 43520
                    ? (c >= 43488 && c <= 43518)
                    : c <= 43574)
                  : (c <= 43597 || (c >= 43600 && c <= 43609)))))))))))))))
    : (c <= 43638 || (c < 71453
      ? (c < 67639
        ? (c < 65345
          ? (c < 64312
            ? (c < 43888
              ? (c < 43785
                ? (c < 43744
                  ? (c < 43739
                    ? (c >= 43642 && c <= 43714)
                    : c <= 43741)
                  : (c <= 43759 || (c < 43777
                    ? (c >= 43762 && c <= 43766)
                    : c <= 43782)))
                : (c <= 43790 || (c < 43816
                  ? (c < 43808
                    ? (c >= 43793 && c <= 43798)
                    : c <= 43814)
                  : (c <= 43822 || (c < 43868
                    ? (c >= 43824 && c <= 43866)
                    : c <= 43881)))))
              : (c <= 44010 || (c < 63744
                ? (c < 44032
                  ? (c < 44016
                    ? (c >= 44012 && c <= 44013)
                    : c <= 44025)
                  : (c <= 55203 || (c < 55243
                    ? (c >= 55216 && c <= 55238)
                    : c <= 55291)))
                : (c <= 64109 || (c < 64275
                  ? (c < 64256
                    ? (c >= 64112 && c <= 64217)
                    : c <= 64262)
                  : (c <= 64279 || (c < 64298
                    ? (c >= 64285 && c <= 64296)
                    : c <= 64310)))))))
            : (c <= 64316 || (c < 65075
              ? (c < 64612
                ? (c < 64323
                  ? (c < 64320
                    ? c == 64318
                    : c <= 64321)
                  : (c <= 64324 || (c < 64467
                    ? (c >= 64326 && c <= 64433)
                    : c <= 64605)))
                : (c <= 64829 || (c < 65008
                  ? (c < 64914
                    ? (c >= 64848 && c <= 64911)
                    : c <= 64967)
                  : (c <= 65017 || (c < 65056
                    ? (c >= 65024 && c <= 65039)
                    : c <= 65071)))))
              : (c <= 65076 || (c < 65147
                ? (c < 65139
                  ? (c < 65137
                    ? (c >= 65101 && c <= 65103)
                    : c <= 65137)
                  : (c <= 65139 || (c < 65145
                    ? c == 65143
                    : c <= 65145)))
                : (c <= 65147 || (c < 65296
                  ? (c < 65151
                    ? c == 65149
                    : c <= 65276)
                  : (c <= 65305 || (c < 65343
                    ? (c >= 65313 && c <= 65338)
                    : c <= 65343)))))))))
          : (c <= 65370 || (c < 66513
            ? (c < 65664
              ? (c < 65536
                ? (c < 65482
                  ? (c < 65474
                    ? (c >= 65382 && c <= 65470)
                    : c <= 65479)
                  : (c <= 65487 || (c < 65498
                    ? (c >= 65490 && c <= 65495)
                    : c <= 65500)))
                : (c <= 65547 || (c < 65596
                  ? (c < 65576
                    ? (c >= 65549 && c <= 65574)
                    : c <= 65594)
                  : (c <= 65597 || (c < 65616
                    ? (c >= 65599 && c <= 65613)
                    : c <= 65629)))))
              : (c <= 65786 || (c < 66304
                ? (c < 66176
                  ? (c < 66045
                    ? (c >= 65856 && c <= 65908)
                    : c <= 66045)
                  : (c <= 66204 || (c < 66272
                    ? (c >= 66208 && c <= 66256)
                    : c <= 66272)))
                : (c <= 66335 || (c < 66432
                  ? (c < 66384
                    ? (c >= 66349 && c <= 66378)
                    : c <= 66426)
                  : (c <= 66461 || (c < 66504
                    ? (c >= 66464 && c <= 66499)
                    : c <= 66511)))))))
            : (c <= 66517 || (c < 66979
              ? (c < 66864
                ? (c < 66736
                  ? (c < 66720
                    ? (c >= 66560 && c <= 66717)
                    : c <= 66729)
                  : (c <= 66771 || (c < 66816
                    ? (c >= 66776 && c <= 66811)
                    : c <= 66855)))
                : (c <= 66915 || (c < 66956
                  ? (c < 66940
                    ? (c >= 66928 && c <= 66938)
                    : c <= 66954)
                  : (c <= 66962 || (c < 66967
                    ? (c >= 66964 && c <= 66965)
                    : c <= 66977)))))
              : (c <= 66993 || (c < 67456
                ? (c < 67072
                  ? (c < 67003
                    ? (c >= 66995 && c <= 67001)
                    : c <= 67004)
                  : (c <= 67382 || (c < 67424
                    ? (c >= 67392 && c <= 67413)
                    : c <= 67431)))
                : (c <= 67461 || (c < 67584
                  ? (c < 67506
                    ? (c >= 67463 && c <= 67504)
                    : c <= 67514)
                  : (c <= 67589 || (c < 67594
                    ? c == 67592
                    : c <= 67637)))))))))))
        : (c <= 67640 || (c < 69956
          ? (c < 68448
            ? (c < 68101
              ? (c < 67828
                ? (c < 67680
                  ? (c < 67647
                    ? c == 67644
                    : c <= 67669)
                  : (c <= 67702 || (c < 67808
                    ? (c >= 67712 && c <= 67742)
                    : c <= 67826)))
                : (c <= 67829 || (c < 67968
                  ? (c < 67872
                    ? (c >= 67840 && c <= 67861)
                    : c <= 67897)
                  : (c <= 68023 || (c < 68096
                    ? (c >= 68030 && c <= 68031)
                    : c <= 68099)))))
              : (c <= 68102 || (c < 68192
                ? (c < 68121
                  ? (c < 68117
                    ? (c >= 68108 && c <= 68115)
                    : c <= 68119)
                  : (c <= 68149 || (c < 68159
                    ? (c >= 68152 && c <= 68154)
                    : c <= 68159)))
                : (c <= 68220 || (c < 68297
                  ? (c < 68288
                    ? (c >= 68224 && c <= 68252)
                    : c <= 68295)
                  : (c <= 68326 || (c < 68416
                    ? (c >= 68352 && c <= 68405)
                    : c <= 68437)))))))
            : (c <= 68466 || (c < 69424
              ? (c < 68912
                ? (c < 68736
                  ? (c < 68608
                    ? (c >= 68480 && c <= 68497)
                    : c <= 68680)
                  : (c <= 68786 || (c < 68864
                    ? (c >= 68800 && c <= 68850)
                    : c <= 68903)))
                : (c <= 68921 || (c < 69296
                  ? (c < 69291
                    ? (c >= 69248 && c <= 69289)
                    : c <= 69292)
                  : (c <= 69297 || (c < 69415
                    ? (c >= 69376 && c <= 69404)
                    : c <= 69415)))))
              : (c <= 69456 || (c < 69759
                ? (c < 69600
                  ? (c < 69552
                    ? (c >= 69488 && c <= 69509)
                    : c <= 69572)
                  : (c <= 69622 || (c < 69734
                    ? (c >= 69632 && c <= 69702)
                    : c <= 69749)))
                : (c <= 69818 || (c < 69872
                  ? (c < 69840
                    ? c == 69826
                    : c <= 69864)
                  : (c <= 69881 || (c < 69942
                    ? (c >= 69888 && c <= 69940)
                    : c <= 69951)))))))))
          : (c <= 69959 || (c < 70459
            ? (c < 70282
              ? (c < 70108
                ? (c < 70016
                  ? (c < 70006
                    ? (c >= 69968 && c <= 70003)
                    : c <= 70006)
                  : (c <= 70084 || (c < 70094
                    ? (c >= 70089 && c <= 70092)
                    : c <= 70106)))
                : (c <= 70108 || (c < 70206
                  ? (c < 70163
                    ? (c >= 70144 && c <= 70161)
                    : c <= 70199)
                  : (c <= 70206 || (c < 70280
                    ? (c >= 70272 && c <= 70278)
                    : c <= 70280)))))
              : (c <= 70285 || (c < 70405
                ? (c < 70320
                  ? (c < 70303
                    ? (c >= 70287 && c <= 70301)
                    : c <= 70312)
                  : (c <= 70378 || (c < 70400
                    ? (c >= 70384 && c <= 70393)
                    : c <= 70403)))
                : (c <= 70412 || (c < 70442
                  ? (c < 70419
                    ? (c >= 70415 && c <= 70416)
                    : c <= 70440)
                  : (c <= 70448 || (c < 70453
                    ? (c >= 70450 && c <= 70451)
                    : c <= 70457)))))))
            : (c <= 70468 || (c < 70855
              ? (c < 70502
                ? (c < 70480
                  ? (c < 70475
                    ? (c >= 70471 && c <= 70472)
                    : c <= 70477)
                  : (c <= 70480 || (c < 70493
                    ? c == 70487
                    : c <= 70499)))
                : (c <= 70508 || (c < 70736
                  ? (c < 70656
                    ? (c >= 70512 && c <= 70516)
                    : c <= 70730)
                  : (c <= 70745 || (c < 70784
                    ? (c >= 70750 && c <= 70753)
                    : c <= 70853)))))
              : (c <= 70855 || (c < 71236
                ? (c < 71096
                  ? (c < 71040
                    ? (c >= 70864 && c <= 70873)
                    : c <= 71093)
                  : (c <= 71104 || (c < 71168
                    ? (c >= 71128 && c <= 71133)
                    : c <= 71232)))
                : (c <= 71236 || (c < 71360
                  ? (c < 71296
                    ? (c >= 71248 && c <= 71257)
                    : c <= 71352)
                  : (c <= 71369 || (c >= 71424 && c <= 71450)))))))))))))
      : (c <= 71467 || (c < 119973
        ? (c < 77824
          ? (c < 72760
            ? (c < 72016
              ? (c < 71945
                ? (c < 71680
                  ? (c < 71488
                    ? (c >= 71472 && c <= 71481)
                    : c <= 71494)
                  : (c <= 71738 || (c < 71935
                    ? (c >= 71840 && c <= 71913)
                    : c <= 71942)))
                : (c <= 71945 || (c < 71960
                  ? (c < 71957
                    ? (c >= 71948 && c <= 71955)
                    : c <= 71958)
                  : (c <= 71989 || (c < 71995
                    ? (c >= 71991 && c <= 71992)
                    : c <= 72003)))))
              : (c <= 72025 || (c < 72263
                ? (c < 72154
                  ? (c < 72106
                    ? (c >= 72096 && c <= 72103)
                    : c <= 72151)
                  : (c <= 72161 || (c < 72192
                    ? (c >= 72163 && c <= 72164)
                    : c <= 72254)))
                : (c <= 72263 || (c < 72368
                  ? (c < 72349
                    ? (c >= 72272 && c <= 72345)
                    : c <= 72349)
                  : (c <= 72440 || (c < 72714
                    ? (c >= 72704 && c <= 72712)
                    : c <= 72758)))))))
            : (c <= 72768 || (c < 73056
              ? (c < 72968
                ? (c < 72850
                  ? (c < 72818
                    ? (c >= 72784 && c <= 72793)
                    : c <= 72847)
                  : (c <= 72871 || (c < 72960
                    ? (c >= 72873 && c <= 72886)
                    : c <= 72966)))
                : (c <= 72969 || (c < 73020
                  ? (c < 73018
                    ? (c >= 72971 && c <= 73014)
                    : c <= 73018)
                  : (c <= 73021 || (c < 73040
                    ? (c >= 73023 && c <= 73031)
                    : c <= 73049)))))
              : (c <= 73061 || (c < 73440
                ? (c < 73104
                  ? (c < 73066
                    ? (c >= 73063 && c <= 73064)
                    : c <= 73102)
                  : (c <= 73105 || (c < 73120
                    ? (c >= 73107 && c <= 73112)
                    : c <= 73129)))
                : (c <= 73462 || (c < 74752
                  ? (c < 73728
                    ? c == 73648
                    : c <= 74649)
                  : (c <= 74862 || (c < 77712
                    ? (c >= 74880 && c <= 75075)
                    : c <= 77808)))))))))
          : (c <= 78894 || (c < 110576
            ? (c < 93027
              ? (c < 92864
                ? (c < 92736
                  ? (c < 92160
                    ? (c >= 82944 && c <= 83526)
                    : c <= 92728)
                  : (c <= 92766 || (c < 92784
                    ? (c >= 92768 && c <= 92777)
                    : c <= 92862)))
                : (c <= 92873 || (c < 92928
                  ? (c < 92912
                    ? (c >= 92880 && c <= 92909)
                    : c <= 92916)
                  : (c <= 92982 || (c < 93008
                    ? (c >= 92992 && c <= 92995)
                    : c <= 93017)))))
              : (c <= 93047 || (c < 94176
                ? (c < 93952
                  ? (c < 93760
                    ? (c >= 93053 && c <= 93071)
                    : c <= 93823)
                  : (c <= 94026 || (c < 94095
                    ? (c >= 94031 && c <= 94087)
                    : c <= 94111)))
                : (c <= 94177 || (c < 94208
                  ? (c < 94192
                    ? (c >= 94179 && c <= 94180)
                    : c <= 94193)
                  : (c <= 100343 || (c < 101632
                    ? (c >= 100352 && c <= 101589)
                    : c <= 101640)))))))
            : (c <= 110579 || (c < 118528
              ? (c < 110960
                ? (c < 110592
                  ? (c < 110589
                    ? (c >= 110581 && c <= 110587)
                    : c <= 110590)
                  : (c <= 110882 || (c < 110948
                    ? (c >= 110928 && c <= 110930)
                    : c <= 110951)))
                : (c <= 111355 || (c < 113792
                  ? (c < 113776
                    ? (c >= 113664 && c <= 113770)
                    : c <= 113788)
                  : (c <= 113800 || (c < 113821
                    ? (c >= 113808 && c <= 113817)
                    : c <= 113822)))))
              : (c <= 118573 || (c < 119210
                ? (c < 119149
                  ? (c < 119141
                    ? (c >= 118576 && c <= 118598)
                    : c <= 119145)
                  : (c <= 119154 || (c < 119173
                    ? (c >= 119163 && c <= 119170)
                    : c <= 119179)))
                : (c <= 119213 || (c < 119894
                  ? (c < 119808
                    ? (c >= 119362 && c <= 119364)
                    : c <= 119892)
                  : (c <= 119964 || (c < 119970
                    ? (c >= 119966 && c <= 119967)
                    : c <= 119970)))))))))))
        : (c <= 119974 || (c < 124912
          ? (c < 120746
            ? (c < 120134
              ? (c < 120071
                ? (c < 119995
                  ? (c < 119982
                    ? (c >= 119977 && c <= 119980)
                    : c <= 119993)
                  : (c <= 119995 || (c < 120005
                    ? (c >= 119997 && c <= 120003)
                    : c <= 120069)))
                : (c <= 120074 || (c < 120094
                  ? (c < 120086
                    ? (c >= 120077 && c <= 120084)
                    : c <= 120092)
                  : (c <= 120121 || (c < 120128
                    ? (c >= 120123 && c <= 120126)
                    : c <= 120132)))))
              : (c <= 120134 || (c < 120572
                ? (c < 120488
                  ? (c < 120146
                    ? (c >= 120138 && c <= 120144)
                    : c <= 120485)
                  : (c <= 120512 || (c < 120540
                    ? (c >= 120514 && c <= 120538)
                    : c <= 120570)))
                : (c <= 120596 || (c < 120656
                  ? (c < 120630
                    ? (c >= 120598 && c <= 120628)
                    : c <= 120654)
                  : (c <= 120686 || (c < 120714
                    ? (c >= 120688 && c <= 120712)
                    : c <= 120744)))))))
            : (c <= 120770 || (c < 122907
              ? (c < 121476
                ? (c < 121344
                  ? (c < 120782
                    ? (c >= 120772 && c <= 120779)
                    : c <= 120831)
                  : (c <= 121398 || (c < 121461
                    ? (c >= 121403 && c <= 121452)
                    : c <= 121461)))
                : (c <= 121476 || (c < 122624
                  ? (c < 121505
                    ? (c >= 121499 && c <= 121503)
                    : c <= 121519)
                  : (c <= 122654 || (c < 122888
                    ? (c >= 122880 && c <= 122886)
                    : c <= 122904)))))
              : (c <= 122913 || (c < 123214
                ? (c < 123136
                  ? (c < 122918
                    ? (c >= 122915 && c <= 122916)
                    : c <= 122922)
                  : (c <= 123180 || (c < 123200
                    ? (c >= 123184 && c <= 123197)
                    : c <= 123209)))
                : (c <= 123214 || (c < 124896
                  ? (c < 123584
                    ? (c >= 123536 && c <= 123566)
                    : c <= 123641)
                  : (c <= 124902 || (c < 124909
                    ? (c >= 124904 && c <= 124907)
                    : c <= 124910)))))))))
          : (c <= 124926 || (c < 126557
            ? (c < 126521
              ? (c < 126469
                ? (c < 125184
                  ? (c < 125136
                    ? (c >= 124928 && c <= 125124)
                    : c <= 125142)
                  : (c <= 125259 || (c < 126464
                    ? (c >= 125264 && c <= 125273)
                    : c <= 126467)))
                : (c <= 126495 || (c < 126503
                  ? (c < 126500
                    ? (c >= 126497 && c <= 126498)
                    : c <= 126500)
                  : (c <= 126503 || (c < 126516
                    ? (c >= 126505 && c <= 126514)
                    : c <= 126519)))))
              : (c <= 126521 || (c < 126541
                ? (c < 126535
                  ? (c < 126530
                    ? c == 126523
                    : c <= 126530)
                  : (c <= 126535 || (c < 126539
                    ? c == 126537
                    : c <= 126539)))
                : (c <= 126543 || (c < 126551
                  ? (c < 126548
                    ? (c >= 126545 && c <= 126546)
                    : c <= 126548)
                  : (c <= 126551 || (c < 126555
                    ? c == 126553
                    : c <= 126555)))))))
            : (c <= 126557 || (c < 126629
              ? (c < 126580
                ? (c < 126564
                  ? (c < 126561
                    ? c == 126559
                    : c <= 126562)
                  : (c <= 126564 || (c < 126572
                    ? (c >= 126567 && c <= 126570)
                    : c <= 126578)))
                : (c <= 126583 || (c < 126592
                  ? (c < 126590
                    ? (c >= 126585 && c <= 126588)
                    : c <= 126590)
                  : (c <= 126601 || (c < 126625
                    ? (c >= 126603 && c <= 126619)
                    : c <= 126627)))))
              : (c <= 126633 || (c < 178208
                ? (c < 131072
                  ? (c < 130032
                    ? (c >= 126635 && c <= 126651)
                    : c <= 130041)
                  : (c <= 173791 || (c < 177984
                    ? (c >= 173824 && c <= 177976)
                    : c <= 178205)))
                : (c <= 183969 || (c < 196608
                  ? (c < 194560
                    ? (c >= 183984 && c <= 191456)
                    : c <= 195101)
                  : (c <= 201546 || (c >= 917760 && c <= 917999)))))))))))))))));
}

static inline bool sym_identifier_character_set_9(int32_t c) {
  return (c < 43739
    ? (c < 3804
      ? (c < 2768
        ? (c < 2160
          ? (c < 1369
            ? (c < 768
              ? (c < 216
                ? (c < 183
                  ? (c < 181
                    ? c == 170
                    : c <= 181)
                  : (c <= 183 || (c < 192
                    ? c == 186
                    : c <= 214)))
                : (c <= 246 || (c < 736
                  ? (c < 710
                    ? (c >= 248 && c <= 705)
                    : c <= 721)
                  : (c <= 740 || (c < 750
                    ? c == 748
                    : c <= 750)))))
              : (c <= 884 || (c < 910
                ? (c < 895
                  ? (c < 891
                    ? (c >= 886 && c <= 887)
                    : c <= 893)
                  : (c <= 895 || (c < 908
                    ? (c >= 902 && c <= 906)
                    : c <= 908)))
                : (c <= 929 || (c < 1155
                  ? (c < 1015
                    ? (c >= 931 && c <= 1013)
                    : c <= 1153)
                  : (c <= 1159 || (c < 1329
                    ? (c >= 1162 && c <= 1327)
                    : c <= 1366)))))))
            : (c <= 1369 || (c < 1749
              ? (c < 1479
                ? (c < 1471
                  ? (c < 1425
                    ? (c >= 1376 && c <= 1416)
                    : c <= 1469)
                  : (c <= 1471 || (c < 1476
                    ? (c >= 1473 && c <= 1474)
                    : c <= 1477)))
                : (c <= 1479 || (c < 1552
                  ? (c < 1519
                    ? (c >= 1488 && c <= 1514)
                    : c <= 1522)
                  : (c <= 1562 || (c < 1646
                    ? (c >= 1568 && c <= 1641)
                    : c <= 1747)))))
              : (c <= 1756 || (c < 1984
                ? (c < 1791
                  ? (c < 1770
                    ? (c >= 1759 && c <= 1768)
                    : c <= 1788)
                  : (c <= 1791 || (c < 1869
                    ? (c >= 1808 && c <= 1866)
                    : c <= 1969)))
                : (c <= 2037 || (c < 2048
                  ? (c < 2045
                    ? c == 2042
                    : c <= 2045)
                  : (c <= 2093 || (c < 2144
                    ? (c >= 2112 && c <= 2139)
                    : c <= 2154)))))))))
          : (c <= 2183 || (c < 2579
            ? (c < 2492
              ? (c < 2437
                ? (c < 2275
                  ? (c < 2200
                    ? (c >= 2185 && c <= 2190)
                    : c <= 2273)
                  : (c <= 2403 || (c < 2417
                    ? (c >= 2406 && c <= 2415)
                    : c <= 2435)))
                : (c <= 2444 || (c < 2474
                  ? (c < 2451
                    ? (c >= 2447 && c <= 2448)
                    : c <= 2472)
                  : (c <= 2480 || (c < 2486
                    ? c == 2482
                    : c <= 2489)))))
              : (c <= 2500 || (c < 2534
                ? (c < 2519
                  ? (c < 2507
                    ? (c >= 2503 && c <= 2504)
                    : c <= 2510)
                  : (c <= 2519 || (c < 2527
                    ? (c >= 2524 && c <= 2525)
                    : c <= 2531)))
                : (c <= 2545 || (c < 2561
                  ? (c < 2558
                    ? c == 2556
                    : c <= 2558)
                  : (c <= 2563 || (c < 2575
                    ? (c >= 2565 && c <= 2570)
                    : c <= 2576)))))))
            : (c <= 2600 || (c < 2662
              ? (c < 2622
                ? (c < 2613
                  ? (c < 2610
                    ? (c >= 2602 && c <= 2608)
                    : c <= 2611)
                  : (c <= 2614 || (c < 2620
                    ? (c >= 2616 && c <= 2617)
                    : c <= 2620)))
                : (c <= 2626 || (c < 2641
                  ? (c < 2635
                    ? (c >= 2631 && c <= 2632)
                    : c <= 2637)
                  : (c <= 2641 || (c < 2654
                    ? (c >= 2649 && c <= 2652)
                    : c <= 2654)))))
              : (c <= 2677 || (c < 2738
                ? (c < 2703
                  ? (c < 2693
                    ? (c >= 2689 && c <= 2691)
                    : c <= 2701)
                  : (c <= 2705 || (c < 2730
                    ? (c >= 2707 && c <= 2728)
                    : c <= 2736)))
                : (c <= 2739 || (c < 2759
                  ? (c < 2748
                    ? (c >= 2741 && c <= 2745)
                    : c <= 2757)
                  : (c <= 2761 || (c >= 2763 && c <= 2765)))))))))))
        : (c <= 2768 || (c < 3205
          ? (c < 2972
            ? (c < 2887
              ? (c < 2831
                ? (c < 2809
                  ? (c < 2790
                    ? (c >= 2784 && c <= 2787)
                    : c <= 2799)
                  : (c <= 2815 || (c < 2821
                    ? (c >= 2817 && c <= 2819)
                    : c <= 2828)))
                : (c <= 2832 || (c < 2866
                  ? (c < 2858
                    ? (c >= 2835 && c <= 2856)
                    : c <= 2864)
                  : (c <= 2867 || (c < 2876
                    ? (c >= 2869 && c <= 2873)
                    : c <= 2884)))))
              : (c <= 2888 || (c < 2929
                ? (c < 2908
                  ? (c < 2901
                    ? (c >= 2891 && c <= 2893)
                    : c <= 2903)
                  : (c <= 2909 || (c < 2918
                    ? (c >= 2911 && c <= 2915)
                    : c <= 2927)))
                : (c <= 2929 || (c < 2958
                  ? (c < 2949
                    ? (c >= 2946 && c <= 2947)
                    : c <= 2954)
                  : (c <= 2960 || (c < 2969
                    ? (c >= 2962 && c <= 2965)
                    : c <= 2970)))))))
            : (c <= 2972 || (c < 3086
              ? (c < 3014
                ? (c < 2984
                  ? (c < 2979
                    ? (c >= 2974 && c <= 2975)
                    : c <= 2980)
                  : (c <= 2986 || (c < 3006
                    ? (c >= 2990 && c <= 3001)
                    : c <= 3010)))
                : (c <= 3016 || (c < 3031
                  ? (c < 3024
                    ? (c >= 3018 && c <= 3021)
                    : c <= 3024)
                  : (c <= 3031 || (c < 3072
                    ? (c >= 3046 && c <= 3055)
                    : c <= 3084)))))
              : (c <= 3088 || (c < 3157
                ? (c < 3132
                  ? (c < 3114
                    ? (c >= 3090 && c <= 3112)
                    : c <= 3129)
                  : (c <= 3140 || (c < 3146
                    ? (c >= 3142 && c <= 3144)
                    : c <= 3149)))
                : (c <= 3158 || (c < 3168
                  ? (c < 3165
                    ? (c >= 3160 && c <= 3162)
                    : c <= 3165)
                  : (c <= 3171 || (c < 3200
                    ? (c >= 3174 && c <= 3183)
                    : c <= 3203)))))))))
          : (c <= 3212 || (c < 3482
            ? (c < 3313
              ? (c < 3270
                ? (c < 3242
                  ? (c < 3218
                    ? (c >= 3214 && c <= 3216)
                    : c <= 3240)
                  : (c <= 3251 || (c < 3260
                    ? (c >= 3253 && c <= 3257)
                    : c <= 3268)))
                : (c <= 3272 || (c < 3293
                  ? (c < 3285
                    ? (c >= 3274 && c <= 3277)
                    : c <= 3286)
                  : (c <= 3294 || (c < 3302
                    ? (c >= 3296 && c <= 3299)
                    : c <= 3311)))))
              : (c <= 3314 || (c < 3412
                ? (c < 3346
                  ? (c < 3342
                    ? (c >= 3328 && c <= 3340)
                    : c <= 3344)
                  : (c <= 3396 || (c < 3402
                    ? (c >= 3398 && c <= 3400)
                    : c <= 3406)))
                : (c <= 3415 || (c < 3450
                  ? (c < 3430
                    ? (c >= 3423 && c <= 3427)
                    : c <= 3439)
                  : (c <= 3455 || (c < 3461
                    ? (c >= 3457 && c <= 3459)
                    : c <= 3478)))))))
            : (c <= 3505 || (c < 3664
              ? (c < 3542
                ? (c < 3520
                  ? (c < 3517
                    ? (c >= 3507 && c <= 3515)
                    : c <= 3517)
                  : (c <= 3526 || (c < 3535
                    ? c == 3530
                    : c <= 3540)))
                : (c <= 3542 || (c < 3570
                  ? (c < 3558
                    ? (c >= 3544 && c <= 3551)
                    : c <= 3567)
                  : (c <= 3571 || (c < 3648
                    ? (c >= 3585 && c <= 3642)
                    : c <= 3662)))))
              : (c <= 3673 || (c < 3751
                ? (c < 3718
                  ? (c < 3716
                    ? (c >= 3713 && c <= 3714)
                    : c <= 3716)
                  : (c <= 3722 || (c < 3749
                    ? (c >= 3724 && c <= 3747)
                    : c <= 3749)))
                : (c <= 3773 || (c < 3784
                  ? (c < 3782
                    ? (c >= 3776 && c <= 3780)
                    : c <= 3782)
                  : (c <= 3789 || (c >= 3792 && c <= 3801)))))))))))))
      : (c <= 3807 || (c < 8029
        ? (c < 5984
          ? (c < 4704
            ? (c < 4038
              ? (c < 3897
                ? (c < 3872
                  ? (c < 3864
                    ? c == 3840
                    : c <= 3865)
                  : (c <= 3881 || (c < 3895
                    ? c == 3893
                    : c <= 3895)))
                : (c <= 3897 || (c < 3953
                  ? (c < 3913
                    ? (c >= 3902 && c <= 3911)
                    : c <= 3948)
                  : (c <= 3972 || (c < 3993
                    ? (c >= 3974 && c <= 3991)
                    : c <= 4028)))))
              : (c <= 4038 || (c < 4304
                ? (c < 4256
                  ? (c < 4176
                    ? (c >= 4096 && c <= 4169)
                    : c <= 4253)
                  : (c <= 4293 || (c < 4301
                    ? c == 4295
                    : c <= 4301)))
                : (c <= 4346 || (c < 4688
                  ? (c < 4682
                    ? (c >= 4348 && c <= 4680)
                    : c <= 4685)
                  : (c <= 4694 || (c < 4698
                    ? c == 4696
                    : c <= 4701)))))))
            : (c <= 4744 || (c < 4969
              ? (c < 4802
                ? (c < 4786
                  ? (c < 4752
                    ? (c >= 4746 && c <= 4749)
                    : c <= 4784)
                  : (c <= 4789 || (c < 4800
                    ? (c >= 4792 && c <= 4798)
                    : c <= 4800)))
                : (c <= 4805 || (c < 4882
                  ? (c < 4824
                    ? (c >= 4808 && c <= 4822)
                    : c <= 4880)
                  : (c <= 4885 || (c < 4957
                    ? (c >= 4888 && c <= 4954)
                    : c <= 4959)))))
              : (c <= 4977 || (c < 5761
                ? (c < 5112
                  ? (c < 5024
                    ? (c >= 4992 && c <= 5007)
                    : c <= 5109)
                  : (c <= 5117 || (c < 5743
                    ? (c >= 5121 && c <= 5740)
                    : c <= 5759)))
                : (c <= 5786 || (c < 5888
                  ? (c < 5870
                    ? (c >= 5792 && c <= 5866)
                    : c <= 5880)
                  : (c <= 5909 || (c < 5952
                    ? (c >= 5919 && c <= 5940)
                    : c <= 5971)))))))))
          : (c <= 5996 || (c < 6800
            ? (c < 6400
              ? (c < 6112
                ? (c < 6016
                  ? (c < 6002
                    ? (c >= 5998 && c <= 6000)
                    : c <= 6003)
                  : (c <= 6099 || (c < 6108
                    ? c == 6103
                    : c <= 6109)))
                : (c <= 6121 || (c < 6176
                  ? (c < 6159
                    ? (c >= 6155 && c <= 6157)
                    : c <= 6169)
                  : (c <= 6264 || (c < 6320
                    ? (c >= 6272 && c <= 6314)
                    : c <= 6389)))))
              : (c <= 6430 || (c < 6576
                ? (c < 6470
                  ? (c < 6448
                    ? (c >= 6432 && c <= 6443)
                    : c <= 6459)
                  : (c <= 6509 || (c < 6528
                    ? (c >= 6512 && c <= 6516)
                    : c <= 6571)))
                : (c <= 6601 || (c < 6688
                  ? (c < 6656
                    ? (c >= 6608 && c <= 6618)
                    : c <= 6683)
                  : (c <= 6750 || (c < 6783
                    ? (c >= 6752 && c <= 6780)
                    : c <= 6793)))))))
            : (c <= 6809 || (c < 7312
              ? (c < 7019
                ? (c < 6847
                  ? (c < 6832
                    ? c == 6823
                    : c <= 6845)
                  : (c <= 6862 || (c < 6992
                    ? (c >= 6912 && c <= 6988)
                    : c <= 7001)))
                : (c <= 7027 || (c < 7232
                  ? (c < 7168
                    ? (c >= 7040 && c <= 7155)
                    : c <= 7223)
                  : (c <= 7241 || (c < 7296
                    ? (c >= 7245 && c <= 7293)
                    : c <= 7304)))))
              : (c <= 7354 || (c < 7968
                ? (c < 7380
                  ? (c < 7376
                    ? (c >= 7357 && c <= 7359)
                    : c <= 7378)
                  : (c <= 7418 || (c < 7960
                    ? (c >= 7424 && c <= 7957)
                    : c <= 7965)))
                : (c <= 8005 || (c < 8025
                  ? (c < 8016
                    ? (c >= 8008 && c <= 8013)
                    : c <= 8023)
                  : (c <= 8025 || c == 8027))))))))))
        : (c <= 8029 || (c < 11736
          ? (c < 8472
            ? (c < 8255
              ? (c < 8134
                ? (c < 8118
                  ? (c < 8064
                    ? (c >= 8031 && c <= 8061)
                    : c <= 8116)
                  : (c <= 8124 || (c < 8130
                    ? c == 8126
                    : c <= 8132)))
                : (c <= 8140 || (c < 8160
                  ? (c < 8150
                    ? (c >= 8144 && c <= 8147)
                    : c <= 8155)
                  : (c <= 8172 || (c < 8182
                    ? (c >= 8178 && c <= 8180)
                    : c <= 8188)))))
              : (c <= 8256 || (c < 8417
                ? (c < 8319
                  ? (c < 8305
                    ? c == 8276
                    : c <= 8305)
                  : (c <= 8319 || (c < 8400
                    ? (c >= 8336 && c <= 8348)
                    : c <= 8412)))
                : (c <= 8417 || (c < 8455
                  ? (c < 8450
                    ? (c >= 8421 && c <= 8432)
                    : c <= 8450)
                  : (c <= 8455 || (c < 8469
                    ? (c >= 8458 && c <= 8467)
                    : c <= 8469)))))))
            : (c <= 8477 || (c < 11559
              ? (c < 8517
                ? (c < 8488
                  ? (c < 8486
                    ? c == 8484
                    : c <= 8486)
                  : (c <= 8488 || (c < 8508
                    ? (c >= 8490 && c <= 8505)
                    : c <= 8511)))
                : (c <= 8521 || (c < 11264
                  ? (c < 8544
                    ? c == 8526
                    : c <= 8584)
                  : (c <= 11492 || (c < 11520
                    ? (c >= 11499 && c <= 11507)
                    : c <= 11557)))))
              : (c <= 11559 || (c < 11688
                ? (c < 11631
                  ? (c < 11568
                    ? c == 11565
                    : c <= 11623)
                  : (c <= 11631 || (c < 11680
                    ? (c >= 11647 && c <= 11670)
                    : c <= 11686)))
                : (c <= 11694 || (c < 11712
                  ? (c < 11704
                    ? (c >= 11696 && c <= 11702)
                    : c <= 11710)
                  : (c <= 11718 || (c < 11728
                    ? (c >= 11720 && c <= 11726)
                    : c <= 11734)))))))))
          : (c <= 11742 || (c < 42786
            ? (c < 12593
              ? (c < 12353
                ? (c < 12321
                  ? (c < 12293
                    ? (c >= 11744 && c <= 11775)
                    : c <= 12295)
                  : (c <= 12335 || (c < 12344
                    ? (c >= 12337 && c <= 12341)
                    : c <= 12348)))
                : (c <= 12438 || (c < 12449
                  ? (c < 12445
                    ? (c >= 12441 && c <= 12442)
                    : c <= 12447)
                  : (c <= 12538 || (c < 12549
                    ? (c >= 12540 && c <= 12543)
                    : c <= 12591)))))
              : (c <= 12686 || (c < 42240
                ? (c < 13312
                  ? (c < 12784
                    ? (c >= 12704 && c <= 12735)
                    : c <= 12799)
                  : (c <= 19903 || (c < 42192
                    ? (c >= 19968 && c <= 42124)
                    : c <= 42237)))
                : (c <= 42508 || (c < 42612
                  ? (c < 42560
                    ? (c >= 42512 && c <= 42539)
                    : c <= 42607)
                  : (c <= 42621 || (c < 42775
                    ? (c >= 42623 && c <= 42737)
                    : c <= 42783)))))))
            : (c <= 42888 || (c < 43261
              ? (c < 43052
                ? (c < 42963
                  ? (c < 42960
                    ? (c >= 42891 && c <= 42954)
                    : c <= 42961)
                  : (c <= 42963 || (c < 42994
                    ? (c >= 42965 && c <= 42969)
                    : c <= 43047)))
                : (c <= 43052 || (c < 43216
                  ? (c < 43136
                    ? (c >= 43072 && c <= 43123)
                    : c <= 43205)
                  : (c <= 43225 || (c < 43259
                    ? (c >= 43232 && c <= 43255)
                    : c <= 43259)))))
              : (c <= 43309 || (c < 43520
                ? (c < 43392
                  ? (c < 43360
                    ? (c >= 43312 && c <= 43347)
                    : c <= 43388)
                  : (c <= 43456 || (c < 43488
                    ? (c >= 43471 && c <= 43481)
                    : c <= 43518)))
                : (c <= 43574 || (c < 43616
                  ? (c < 43600
                    ? (c >= 43584 && c <= 43597)
                    : c <= 43609)
                  : (c <= 43638 || (c >= 43642 && c <= 43714)))))))))))))))
    : (c <= 43741 || (c < 71472
      ? (c < 67644
        ? (c < 65474
          ? (c < 64320
            ? (c < 44016
              ? (c < 43808
                ? (c < 43777
                  ? (c < 43762
                    ? (c >= 43744 && c <= 43759)
                    : c <= 43766)
                  : (c <= 43782 || (c < 43793
                    ? (c >= 43785 && c <= 43790)
                    : c <= 43798)))
                : (c <= 43814 || (c < 43868
                  ? (c < 43824
                    ? (c >= 43816 && c <= 43822)
                    : c <= 43866)
                  : (c <= 43881 || (c < 44012
                    ? (c >= 43888 && c <= 44010)
                    : c <= 44013)))))
              : (c <= 44025 || (c < 64256
                ? (c < 55243
                  ? (c < 55216
                    ? (c >= 44032 && c <= 55203)
                    : c <= 55238)
                  : (c <= 55291 || (c < 64112
                    ? (c >= 63744 && c <= 64109)
                    : c <= 64217)))
                : (c <= 64262 || (c < 64298
                  ? (c < 64285
                    ? (c >= 64275 && c <= 64279)
                    : c <= 64296)
                  : (c <= 64310 || (c < 64318
                    ? (c >= 64312 && c <= 64316)
                    : c <= 64318)))))))
            : (c <= 64321 || (c < 65137
              ? (c < 64914
                ? (c < 64467
                  ? (c < 64326
                    ? (c >= 64323 && c <= 64324)
                    : c <= 64433)
                  : (c <= 64605 || (c < 64848
                    ? (c >= 64612 && c <= 64829)
                    : c <= 64911)))
                : (c <= 64967 || (c < 65056
                  ? (c < 65024
                    ? (c >= 65008 && c <= 65017)
                    : c <= 65039)
                  : (c <= 65071 || (c < 65101
                    ? (c >= 65075 && c <= 65076)
                    : c <= 65103)))))
              : (c <= 65137 || (c < 65151
                ? (c < 65145
                  ? (c < 65143
                    ? c == 65139
                    : c <= 65143)
                  : (c <= 65145 || (c < 65149
                    ? c == 65147
                    : c <= 65149)))
                : (c <= 65276 || (c < 65343
                  ? (c < 65313
                    ? (c >= 65296 && c <= 65305)
                    : c <= 65338)
                  : (c <= 65343 || (c < 65382
                    ? (c >= 65345 && c <= 65370)
                    : c <= 65470)))))))))
          : (c <= 65479 || (c < 66720
            ? (c < 66045
              ? (c < 65576
                ? (c < 65498
                  ? (c < 65490
                    ? (c >= 65482 && c <= 65487)
                    : c <= 65495)
                  : (c <= 65500 || (c < 65549
                    ? (c >= 65536 && c <= 65547)
                    : c <= 65574)))
                : (c <= 65594 || (c < 65616
                  ? (c < 65599
                    ? (c >= 65596 && c <= 65597)
                    : c <= 65613)
                  : (c <= 65629 || (c < 65856
                    ? (c >= 65664 && c <= 65786)
                    : c <= 65908)))))
              : (c <= 66045 || (c < 66384
                ? (c < 66272
                  ? (c < 66208
                    ? (c >= 66176 && c <= 66204)
                    : c <= 66256)
                  : (c <= 66272 || (c < 66349
                    ? (c >= 66304 && c <= 66335)
                    : c <= 66378)))
                : (c <= 66426 || (c < 66504
                  ? (c < 66464
                    ? (c >= 66432 && c <= 66461)
                    : c <= 66499)
                  : (c <= 66511 || (c < 66560
                    ? (c >= 66513 && c <= 66517)
                    : c <= 66717)))))))
            : (c <= 66729 || (c < 67003
              ? (c < 66940
                ? (c < 66816
                  ? (c < 66776
                    ? (c >= 66736 && c <= 66771)
                    : c <= 66811)
                  : (c <= 66855 || (c < 66928
                    ? (c >= 66864 && c <= 66915)
                    : c <= 66938)))
                : (c <= 66954 || (c < 66967
                  ? (c < 66964
                    ? (c >= 66956 && c <= 66962)
                    : c <= 66965)
                  : (c <= 66977 || (c < 66995
                    ? (c >= 66979 && c <= 66993)
                    : c <= 67001)))))
              : (c <= 67004 || (c < 67506
                ? (c < 67424
                  ? (c < 67392
                    ? (c >= 67072 && c <= 67382)
                    : c <= 67413)
                  : (c <= 67431 || (c < 67463
                    ? (c >= 67456 && c <= 67461)
                    : c <= 67504)))
                : (c <= 67514 || (c < 67594
                  ? (c < 67592
                    ? (c >= 67584 && c <= 67589)
                    : c <= 67592)
                  : (c <= 67637 || (c >= 67639 && c <= 67640)))))))))))
        : (c <= 67644 || (c < 69968
          ? (c < 68480
            ? (c < 68108
              ? (c < 67840
                ? (c < 67712
                  ? (c < 67680
                    ? (c >= 67647 && c <= 67669)
                    : c <= 67702)
                  : (c <= 67742 || (c < 67828
                    ? (c >= 67808 && c <= 67826)
                    : c <= 67829)))
                : (c <= 67861 || (c < 68030
                  ? (c < 67968
                    ? (c >= 67872 && c <= 67897)
                    : c <= 68023)
                  : (c <= 68031 || (c < 68101
                    ? (c >= 68096 && c <= 68099)
                    : c <= 68102)))))
              : (c <= 68115 || (c < 68224
                ? (c < 68152
                  ? (c < 68121
                    ? (c >= 68117 && c <= 68119)
                    : c <= 68149)
                  : (c <= 68154 || (c < 68192
                    ? c == 68159
                    : c <= 68220)))
                : (c <= 68252 || (c < 68352
                  ? (c < 68297
                    ? (c >= 68288 && c <= 68295)
                    : c <= 68326)
                  : (c <= 68405 || (c < 68448
                    ? (c >= 68416 && c <= 68437)
                    : c <= 68466)))))))
            : (c <= 68497 || (c < 69488
              ? (c < 69248
                ? (c < 68800
                  ? (c < 68736
                    ? (c >= 68608 && c <= 68680)
                    : c <= 68786)
                  : (c <= 68850 || (c < 68912
                    ? (c >= 68864 && c <= 68903)
                    : c <= 68921)))
                : (c <= 69289 || (c < 69376
                  ? (c < 69296
                    ? (c >= 69291 && c <= 69292)
                    : c <= 69297)
                  : (c <= 69404 || (c < 69424
                    ? c == 69415
                    : c <= 69456)))))
              : (c <= 69509 || (c < 69826
                ? (c < 69632
                  ? (c < 69600
                    ? (c >= 69552 && c <= 69572)
                    : c <= 69622)
                  : (c <= 69702 || (c < 69759
                    ? (c >= 69734 && c <= 69749)
                    : c <= 69818)))
                : (c <= 69826 || (c < 69888
                  ? (c < 69872
                    ? (c >= 69840 && c <= 69864)
                    : c <= 69881)
                  : (c <= 69940 || (c < 69956
                    ? (c >= 69942 && c <= 69951)
                    : c <= 69959)))))))))
          : (c <= 70003 || (c < 70471
            ? (c < 70287
              ? (c < 70144
                ? (c < 70089
                  ? (c < 70016
                    ? c == 70006
                    : c <= 70084)
                  : (c <= 70092 || (c < 70108
                    ? (c >= 70094 && c <= 70106)
                    : c <= 70108)))
                : (c <= 70161 || (c < 70272
                  ? (c < 70206
                    ? (c >= 70163 && c <= 70199)
                    : c <= 70206)
                  : (c <= 70278 || (c < 70282
                    ? c == 70280
                    : c <= 70285)))))
              : (c <= 70301 || (c < 70415
                ? (c < 70384
                  ? (c < 70320
                    ? (c >= 70303 && c <= 70312)
                    : c <= 70378)
                  : (c <= 70393 || (c < 70405
                    ? (c >= 70400 && c <= 70403)
                    : c <= 70412)))
                : (c <= 70416 || (c < 70450
                  ? (c < 70442
                    ? (c >= 70419 && c <= 70440)
                    : c <= 70448)
                  : (c <= 70451 || (c < 70459
                    ? (c >= 70453 && c <= 70457)
                    : c <= 70468)))))))
            : (c <= 70472 || (c < 70864
              ? (c < 70512
                ? (c < 70487
                  ? (c < 70480
                    ? (c >= 70475 && c <= 70477)
                    : c <= 70480)
                  : (c <= 70487 || (c < 70502
                    ? (c >= 70493 && c <= 70499)
                    : c <= 70508)))
                : (c <= 70516 || (c < 70750
                  ? (c < 70736
                    ? (c >= 70656 && c <= 70730)
                    : c <= 70745)
                  : (c <= 70753 || (c < 70855
                    ? (c >= 70784 && c <= 70853)
                    : c <= 70855)))))
              : (c <= 70873 || (c < 71248
                ? (c < 71128
                  ? (c < 71096
                    ? (c >= 71040 && c <= 71093)
                    : c <= 71104)
                  : (c <= 71133 || (c < 71236
                    ? (c >= 71168 && c <= 71232)
                    : c <= 71236)))
                : (c <= 71257 || (c < 71424
                  ? (c < 71360
                    ? (c >= 71296 && c <= 71352)
                    : c <= 71369)
                  : (c <= 71450 || (c >= 71453 && c <= 71467)))))))))))))
      : (c <= 71481 || (c < 119973
        ? (c < 82944
          ? (c < 72784
            ? (c < 72096
              ? (c < 71948
                ? (c < 71840
                  ? (c < 71680
                    ? (c >= 71488 && c <= 71494)
                    : c <= 71738)
                  : (c <= 71913 || (c < 71945
                    ? (c >= 71935 && c <= 71942)
                    : c <= 71945)))
                : (c <= 71955 || (c < 71991
                  ? (c < 71960
                    ? (c >= 71957 && c <= 71958)
                    : c <= 71989)
                  : (c <= 71992 || (c < 72016
                    ? (c >= 71995 && c <= 72003)
                    : c <= 72025)))))
              : (c <= 72103 || (c < 72272
                ? (c < 72163
                  ? (c < 72154
                    ? (c >= 72106 && c <= 72151)
                    : c <= 72161)
                  : (c <= 72164 || (c < 72263
                    ? (c >= 72192 && c <= 72254)
                    : c <= 72263)))
                : (c <= 72345 || (c < 72704
                  ? (c < 72368
                    ? c == 72349
                    : c <= 72440)
                  : (c <= 72712 || (c < 72760
                    ? (c >= 72714 && c <= 72758)
                    : c <= 72768)))))))
            : (c <= 72793 || (c < 73063
              ? (c < 72971
                ? (c < 72873
                  ? (c < 72850
                    ? (c >= 72818 && c <= 72847)
                    : c <= 72871)
                  : (c <= 72886 || (c < 72968
                    ? (c >= 72960 && c <= 72966)
                    : c <= 72969)))
                : (c <= 73014 || (c < 73023
                  ? (c < 73020
                    ? c == 73018
                    : c <= 73021)
                  : (c <= 73031 || (c < 73056
                    ? (c >= 73040 && c <= 73049)
                    : c <= 73061)))))
              : (c <= 73064 || (c < 73648
                ? (c < 73107
                  ? (c < 73104
                    ? (c >= 73066 && c <= 73102)
                    : c <= 73105)
                  : (c <= 73112 || (c < 73440
                    ? (c >= 73120 && c <= 73129)
                    : c <= 73462)))
                : (c <= 73648 || (c < 74880
                  ? (c < 74752
                    ? (c >= 73728 && c <= 74649)
                    : c <= 74862)
                  : (c <= 75075 || (c < 77824
                    ? (c >= 77712 && c <= 77808)
                    : c <= 78894)))))))))
          : (c <= 83526 || (c < 110581
            ? (c < 93053
              ? (c < 92880
                ? (c < 92768
                  ? (c < 92736
                    ? (c >= 92160 && c <= 92728)
                    : c <= 92766)
                  : (c <= 92777 || (c < 92864
                    ? (c >= 92784 && c <= 92862)
                    : c <= 92873)))
                : (c <= 92909 || (c < 92992
                  ? (c < 92928
                    ? (c >= 92912 && c <= 92916)
                    : c <= 92982)
                  : (c <= 92995 || (c < 93027
                    ? (c >= 93008 && c <= 93017)
                    : c <= 93047)))))
              : (c <= 93071 || (c < 94179
                ? (c < 94031
                  ? (c < 93952
                    ? (c >= 93760 && c <= 93823)
                    : c <= 94026)
                  : (c <= 94087 || (c < 94176
                    ? (c >= 94095 && c <= 94111)
                    : c <= 94177)))
                : (c <= 94180 || (c < 100352
                  ? (c < 94208
                    ? (c >= 94192 && c <= 94193)
                    : c <= 100343)
                  : (c <= 101589 || (c < 110576
                    ? (c >= 101632 && c <= 101640)
                    : c <= 110579)))))))
            : (c <= 110587 || (c < 118576
              ? (c < 113664
                ? (c < 110928
                  ? (c < 110592
                    ? (c >= 110589 && c <= 110590)
                    : c <= 110882)
                  : (c <= 110930 || (c < 110960
                    ? (c >= 110948 && c <= 110951)
                    : c <= 111355)))
                : (c <= 113770 || (c < 113808
                  ? (c < 113792
                    ? (c >= 113776 && c <= 113788)
                    : c <= 113800)
                  : (c <= 113817 || (c < 118528
                    ? (c >= 113821 && c <= 113822)
                    : c <= 118573)))))
              : (c <= 118598 || (c < 119362
                ? (c < 119163
                  ? (c < 119149
                    ? (c >= 119141 && c <= 119145)
                    : c <= 119154)
                  : (c <= 119170 || (c < 119210
                    ? (c >= 119173 && c <= 119179)
                    : c <= 119213)))
                : (c <= 119364 || (c < 119966
                  ? (c < 119894
                    ? (c >= 119808 && c <= 119892)
                    : c <= 119964)
                  : (c <= 119967 || c == 119970))))))))))
        : (c <= 119974 || (c < 124912
          ? (c < 120746
            ? (c < 120134
              ? (c < 120071
                ? (c < 119995
                  ? (c < 119982
                    ? (c >= 119977 && c <= 119980)
                    : c <= 119993)
                  : (c <= 119995 || (c < 120005
                    ? (c >= 119997 && c <= 120003)
                    : c <= 120069)))
                : (c <= 120074 || (c < 120094
                  ? (c < 120086
                    ? (c >= 120077 && c <= 120084)
                    : c <= 120092)
                  : (c <= 120121 || (c < 120128
                    ? (c >= 120123 && c <= 120126)
                    : c <= 120132)))))
              : (c <= 120134 || (c < 120572
                ? (c < 120488
                  ? (c < 120146
                    ? (c >= 120138 && c <= 120144)
                    : c <= 120485)
                  : (c <= 120512 || (c < 120540
                    ? (c >= 120514 && c <= 120538)
                    : c <= 120570)))
                : (c <= 120596 || (c < 120656
                  ? (c < 120630
                    ? (c >= 120598 && c <= 120628)
                    : c <= 120654)
                  : (c <= 120686 || (c < 120714
                    ? (c >= 120688 && c <= 120712)
                    : c <= 120744)))))))
            : (c <= 120770 || (c < 122907
              ? (c < 121476
                ? (c < 121344
                  ? (c < 120782
                    ? (c >= 120772 && c <= 120779)
                    : c <= 120831)
                  : (c <= 121398 || (c < 121461
                    ? (c >= 121403 && c <= 121452)
                    : c <= 121461)))
                : (c <= 121476 || (c < 122624
                  ? (c < 121505
                    ? (c >= 121499 && c <= 121503)
                    : c <= 121519)
                  : (c <= 122654 || (c < 122888
                    ? (c >= 122880 && c <= 122886)
                    : c <= 122904)))))
              : (c <= 122913 || (c < 123214
                ? (c < 123136
                  ? (c < 122918
                    ? (c >= 122915 && c <= 122916)
                    : c <= 122922)
                  : (c <= 123180 || (c < 123200
                    ? (c >= 123184 && c <= 123197)
                    : c <= 123209)))
                : (c <= 123214 || (c < 124896
                  ? (c < 123584
                    ? (c >= 123536 && c <= 123566)
                    : c <= 123641)
                  : (c <= 124902 || (c < 124909
                    ? (c >= 124904 && c <= 124907)
                    : c <= 124910)))))))))
          : (c <= 124926 || (c < 126557
            ? (c < 126521
              ? (c < 126469
                ? (c < 125184
                  ? (c < 125136
                    ? (c >= 124928 && c <= 125124)
                    : c <= 125142)
                  : (c <= 125259 || (c < 126464
                    ? (c >= 125264 && c <= 125273)
                    : c <= 126467)))
                : (c <= 126495 || (c < 126503
                  ? (c < 126500
                    ? (c >= 126497 && c <= 126498)
                    : c <= 126500)
                  : (c <= 126503 || (c < 126516
                    ? (c >= 126505 && c <= 126514)
                    : c <= 126519)))))
              : (c <= 126521 || (c < 126541
                ? (c < 126535
                  ? (c < 126530
                    ? c == 126523
                    : c <= 126530)
                  : (c <= 126535 || (c < 126539
                    ? c == 126537
                    : c <= 126539)))
                : (c <= 126543 || (c < 126551
                  ? (c < 126548
                    ? (c >= 126545 && c <= 126546)
                    : c <= 126548)
                  : (c <= 126551 || (c < 126555
                    ? c == 126553
                    : c <= 126555)))))))
            : (c <= 126557 || (c < 126629
              ? (c < 126580
                ? (c < 126564
                  ? (c < 126561
                    ? c == 126559
                    : c <= 126562)
                  : (c <= 126564 || (c < 126572
                    ? (c >= 126567 && c <= 126570)
                    : c <= 126578)))
                : (c <= 126583 || (c < 126592
                  ? (c < 126590
                    ? (c >= 126585 && c <= 126588)
                    : c <= 126590)
                  : (c <= 126601 || (c < 126625
                    ? (c >= 126603 && c <= 126619)
                    : c <= 126627)))))
              : (c <= 126633 || (c < 178208
                ? (c < 131072
                  ? (c < 130032
                    ? (c >= 126635 && c <= 126651)
                    : c <= 130041)
                  : (c <= 173791 || (c < 177984
                    ? (c >= 173824 && c <= 177976)
                    : c <= 178205)))
                : (c <= 183969 || (c < 196608
                  ? (c < 194560
                    ? (c >= 183984 && c <= 191456)
                    : c <= 195101)
                  : (c <= 201546 || (c >= 917760 && c <= 917999)))))))))))))))));
}

static inline bool sym_escape_sequence_character_set_1(int32_t c) {
  return (c < '@'
    ? (c < ','
      ? (c < '*'
        ? c == '$'
        : c <= '*')
      : (c <= '-' || (c < ':'
        ? c == '/'
        : c <= '>')))
    : (c <= '@' || (c < 'r'
      ? (c < 'n'
        ? (c >= '_' && c <= '`')
        : c <= 'n')
      : (c <= 'r' || (c < '~'
        ? c == 't'
        : c <= '~')))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(54);
      if (lookahead == '!') ADVANCE(196);
      if (lookahead == '"') ADVANCE(116);
      if (lookahead == '#') ADVANCE(169);
      if (lookahead == '$') ADVANCE(154);
      if (lookahead == '%') ADVANCE(168);
      if (lookahead == '\'') ADVANCE(194);
      if (lookahead == '(') ADVANCE(190);
      if (lookahead == ')') ADVANCE(144);
      if (lookahead == '*') ADVANCE(149);
      if (lookahead == '+') ADVANCE(142);
      if (lookahead == ',') ADVANCE(174);
      if (lookahead == '-') ADVANCE(140);
      if (lookahead == '.') ADVANCE(192);
      if (lookahead == '/') ADVANCE(137);
      if (lookahead == ':') ADVANCE(147);
      if (lookahead == ';') ADVANCE(175);
      if (lookahead == '<') ADVANCE(159);
      if (lookahead == '=') ADVANCE(157);
      if (lookahead == '>') ADVANCE(161);
      if (lookahead == '?') ADVANCE(195);
      if (lookahead == '@') ADVANCE(162);
      if (lookahead == '[') ADVANCE(172);
      if (lookahead == '\\') ADVANCE(226);
      if (lookahead == ']') ADVANCE(173);
      if (lookahead == '_') ADVANCE(152);
      if (lookahead == '`') ADVANCE(153);
      if (lookahead == 'a') ADVANCE(86);
      if (lookahead == 'b') ADVANCE(101);
      if (lookahead == 'c') ADVANCE(83);
      if (lookahead == 'd') ADVANCE(63);
      if (lookahead == 'e') ADVANCE(79);
      if (lookahead == 'f') ADVANCE(55);
      if (lookahead == 'i') ADVANCE(72);
      if (lookahead == 'l') ADVANCE(70);
      if (lookahead == 'm') ADVANCE(85);
      if (lookahead == 'n') ADVANCE(93);
      if (lookahead == 'o') ADVANCE(97);
      if (lookahead == 'p') ADVANCE(104);
      if (lookahead == 'r') ADVANCE(59);
      if (lookahead == 't') ADVANCE(98);
      if (lookahead == 'w') ADVANCE(75);
      if (lookahead == '{') ADVANCE(170);
      if (lookahead == '}') ADVANCE(171);
      if (lookahead == '~') ADVANCE(138);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(201);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(112);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(196);
      if (lookahead == '"') ADVANCE(116);
      if (lookahead == '\'') ADVANCE(194);
      if (lookahead == '(') ADVANCE(190);
      if (lookahead == ')') ADVANCE(144);
      if (lookahead == '*') ADVANCE(149);
      if (lookahead == '+') ADVANCE(142);
      if (lookahead == ',') ADVANCE(174);
      if (lookahead == '-') ADVANCE(140);
      if (lookahead == '.') ADVANCE(192);
      if (lookahead == '/') ADVANCE(137);
      if (lookahead == ':') ADVANCE(147);
      if (lookahead == '<') ADVANCE(159);
      if (lookahead == '=') ADVANCE(157);
      if (lookahead == '>') ADVANCE(161);
      if (lookahead == '?') ADVANCE(195);
      if (lookahead == '\\') ADVANCE(226);
      if (lookahead == 'a') ADVANCE(86);
      if (lookahead == 'i') ADVANCE(87);
      if (lookahead == 'n') ADVANCE(96);
      if (lookahead == 'o') ADVANCE(97);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(113);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(112);
      END_STATE();
    case 2:
      if (lookahead == '!') ADVANCE(196);
      if (lookahead == '"') ADVANCE(225);
      if (lookahead == '\'') ADVANCE(194);
      if (lookahead == '(') ADVANCE(190);
      if (lookahead == '*') ADVANCE(149);
      if (lookahead == '+') ADVANCE(142);
      if (lookahead == '-') ADVANCE(140);
      if (lookahead == '.') ADVANCE(193);
      if (lookahead == '/') ADVANCE(137);
      if (lookahead == ';') ADVANCE(175);
      if (lookahead == '<') ADVANCE(159);
      if (lookahead == '=') ADVANCE(157);
      if (lookahead == '>') ADVANCE(161);
      if (lookahead == '?') ADVANCE(195);
      if (lookahead == '[') ADVANCE(172);
      if (lookahead == 'a') ADVANCE(86);
      if (lookahead == 'b') ADVANCE(101);
      if (lookahead == 'c') ADVANCE(95);
      if (lookahead == 'f') ADVANCE(56);
      if (lookahead == 'i') ADVANCE(72);
      if (lookahead == 'l') ADVANCE(70);
      if (lookahead == 'n') ADVANCE(93);
      if (lookahead == 'o') ADVANCE(97);
      if (lookahead == 't') ADVANCE(98);
      if (lookahead == 'w') ADVANCE(75);
      if (lookahead == '{') ADVANCE(170);
      if (lookahead == '}') ADVANCE(171);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(200);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(112);
      END_STATE();
    case 3:
      if (lookahead == '!') ADVANCE(196);
      if (lookahead == '"') ADVANCE(225);
      if (lookahead == '\'') ADVANCE(194);
      if (lookahead == '(') ADVANCE(190);
      if (lookahead == '*') ADVANCE(148);
      if (lookahead == '+') ADVANCE(141);
      if (lookahead == '-') ADVANCE(139);
      if (lookahead == '.') ADVANCE(193);
      if (lookahead == '/') ADVANCE(136);
      if (lookahead == ';') ADVANCE(175);
      if (lookahead == '<') ADVANCE(159);
      if (lookahead == '=') ADVANCE(17);
      if (lookahead == '>') ADVANCE(161);
      if (lookahead == '?') ADVANCE(195);
      if (lookahead == '[') ADVANCE(172);
      if (lookahead == 'a') ADVANCE(86);
      if (lookahead == 'b') ADVANCE(101);
      if (lookahead == 'c') ADVANCE(95);
      if (lookahead == 'f') ADVANCE(56);
      if (lookahead == 'i') ADVANCE(72);
      if (lookahead == 'l') ADVANCE(70);
      if (lookahead == 'n') ADVANCE(93);
      if (lookahead == 'o') ADVANCE(97);
      if (lookahead == 't') ADVANCE(98);
      if (lookahead == 'w') ADVANCE(75);
      if (lookahead == '{') ADVANCE(170);
      if (lookahead == '}') ADVANCE(171);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(200);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(112);
      END_STATE();
    case 4:
      if (lookahead == '!') ADVANCE(196);
      if (lookahead == '"') ADVANCE(225);
      if (lookahead == '\'') ADVANCE(194);
      if (lookahead == '(') ADVANCE(143);
      if (lookahead == '*') ADVANCE(148);
      if (lookahead == '+') ADVANCE(141);
      if (lookahead == '-') ADVANCE(139);
      if (lookahead == '.') ADVANCE(193);
      if (lookahead == '/') ADVANCE(136);
      if (lookahead == ';') ADVANCE(175);
      if (lookahead == '<') ADVANCE(159);
      if (lookahead == '=') ADVANCE(18);
      if (lookahead == '>') ADVANCE(161);
      if (lookahead == '?') ADVANCE(195);
      if (lookahead == '[') ADVANCE(172);
      if (lookahead == 'a') ADVANCE(86);
      if (lookahead == 'b') ADVANCE(101);
      if (lookahead == 'c') ADVANCE(95);
      if (lookahead == 'f') ADVANCE(56);
      if (lookahead == 'i') ADVANCE(72);
      if (lookahead == 'l') ADVANCE(70);
      if (lookahead == 'n') ADVANCE(93);
      if (lookahead == 'o') ADVANCE(97);
      if (lookahead == 't') ADVANCE(98);
      if (lookahead == 'w') ADVANCE(75);
      if (lookahead == '{') ADVANCE(170);
      if (lookahead == '}') ADVANCE(171);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(200);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(112);
      END_STATE();
    case 5:
      if (lookahead == '!') ADVANCE(196);
      if (lookahead == '%') ADVANCE(168);
      if (lookahead == '\'') ADVANCE(194);
      if (lookahead == '(') ADVANCE(190);
      if (lookahead == ')') ADVANCE(144);
      if (lookahead == '*') ADVANCE(148);
      if (lookahead == '+') ADVANCE(141);
      if (lookahead == ',') ADVANCE(163);
      if (lookahead == '-') ADVANCE(139);
      if (lookahead == '.') ADVANCE(192);
      if (lookahead == '/') ADVANCE(136);
      if (lookahead == '<') ADVANCE(159);
      if (lookahead == '=') ADVANCE(18);
      if (lookahead == '>') ADVANCE(161);
      if (lookahead == '?') ADVANCE(195);
      if (lookahead == '[') ADVANCE(172);
      if (lookahead == 'a') ADVANCE(28);
      if (lookahead == 'c') ADVANCE(25);
      if (lookahead == 'd') ADVANCE(22);
      if (lookahead == 'e') ADVANCE(26);
      if (lookahead == 'f') ADVANCE(32);
      if (lookahead == 'i') ADVANCE(29);
      if (lookahead == 'm') ADVANCE(27);
      if (lookahead == 'n') ADVANCE(30);
      if (lookahead == 'o') ADVANCE(31);
      if (lookahead == 'p') ADVANCE(34);
      if (lookahead == 'r') ADVANCE(19);
      if (lookahead == '{') ADVANCE(170);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(113);
      END_STATE();
    case 6:
      if (lookahead == '!') ADVANCE(196);
      if (lookahead == '\'') ADVANCE(194);
      if (lookahead == '(') ADVANCE(190);
      if (lookahead == ')') ADVANCE(144);
      if (lookahead == '*') ADVANCE(149);
      if (lookahead == '+') ADVANCE(142);
      if (lookahead == ',') ADVANCE(163);
      if (lookahead == '-') ADVANCE(140);
      if (lookahead == '.') ADVANCE(192);
      if (lookahead == '/') ADVANCE(137);
      if (lookahead == ':') ADVANCE(147);
      if (lookahead == '<') ADVANCE(159);
      if (lookahead == '=') ADVANCE(157);
      if (lookahead == '>') ADVANCE(161);
      if (lookahead == '?') ADVANCE(195);
      if (lookahead == '[') ADVANCE(172);
      if (lookahead == 'a') ADVANCE(28);
      if (lookahead == 'i') ADVANCE(23);
      if (lookahead == 'n') ADVANCE(30);
      if (lookahead == 'o') ADVANCE(31);
      if (lookahead == '{') ADVANCE(170);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(113);
      END_STATE();
    case 7:
      if (lookahead == '!') ADVANCE(196);
      if (lookahead == '\'') ADVANCE(194);
      if (lookahead == ')') ADVANCE(144);
      if (lookahead == '*') ADVANCE(148);
      if (lookahead == '+') ADVANCE(141);
      if (lookahead == ',') ADVANCE(163);
      if (lookahead == '-') ADVANCE(139);
      if (lookahead == '.') ADVANCE(192);
      if (lookahead == '/') ADVANCE(136);
      if (lookahead == '<') ADVANCE(159);
      if (lookahead == '=') ADVANCE(17);
      if (lookahead == '>') ADVANCE(161);
      if (lookahead == '?') ADVANCE(195);
      if (lookahead == '[') ADVANCE(172);
      if (lookahead == 'a') ADVANCE(86);
      if (lookahead == 'i') ADVANCE(87);
      if (lookahead == 'n') ADVANCE(96);
      if (lookahead == 'o') ADVANCE(97);
      if (lookahead == '{') ADVANCE(170);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(113);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(112);
      END_STATE();
    case 8:
      if (lookahead == '!') ADVANCE(16);
      if (lookahead == '"') ADVANCE(225);
      if (lookahead == '%') ADVANCE(168);
      if (lookahead == '(') ADVANCE(143);
      if (lookahead == '*') ADVANCE(148);
      if (lookahead == '+') ADVANCE(141);
      if (lookahead == '-') ADVANCE(139);
      if (lookahead == '.') ADVANCE(38);
      if (lookahead == '/') ADVANCE(136);
      if (lookahead == ';') ADVANCE(175);
      if (lookahead == '<') ADVANCE(159);
      if (lookahead == '=') ADVANCE(17);
      if (lookahead == '>') ADVANCE(161);
      if (lookahead == '[') ADVANCE(172);
      if (lookahead == 'a') ADVANCE(86);
      if (lookahead == 'b') ADVANCE(101);
      if (lookahead == 'c') ADVANCE(83);
      if (lookahead == 'd') ADVANCE(63);
      if (lookahead == 'e') ADVANCE(84);
      if (lookahead == 'f') ADVANCE(55);
      if (lookahead == 'i') ADVANCE(72);
      if (lookahead == 'l') ADVANCE(70);
      if (lookahead == 'm') ADVANCE(85);
      if (lookahead == 'n') ADVANCE(93);
      if (lookahead == 'o') ADVANCE(97);
      if (lookahead == 'p') ADVANCE(104);
      if (lookahead == 'r') ADVANCE(59);
      if (lookahead == 't') ADVANCE(98);
      if (lookahead == 'w') ADVANCE(75);
      if (lookahead == '{') ADVANCE(170);
      if (lookahead == '}') ADVANCE(171);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(200);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(112);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(225);
      if (lookahead == '(') ADVANCE(143);
      if (lookahead == ')') ADVANCE(144);
      if (lookahead == '+') ADVANCE(141);
      if (lookahead == '-') ADVANCE(139);
      if (lookahead == '.') ADVANCE(13);
      if (lookahead == '/') ADVANCE(14);
      if (lookahead == '[') ADVANCE(172);
      if (lookahead == 'f') ADVANCE(57);
      if (lookahead == 'n') ADVANCE(93);
      if (lookahead == 't') ADVANCE(98);
      if (lookahead == '{') ADVANCE(170);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(200);
      if (sym_identifier_character_set_5(lookahead)) ADVANCE(112);
      END_STATE();
    case 10:
      if (lookahead == '"') ADVANCE(225);
      if (lookahead == '(') ADVANCE(143);
      if (lookahead == '+') ADVANCE(141);
      if (lookahead == '-') ADVANCE(139);
      if (lookahead == '.') ADVANCE(38);
      if (lookahead == '/') ADVANCE(14);
      if (lookahead == ';') ADVANCE(175);
      if (lookahead == '[') ADVANCE(172);
      if (lookahead == 'b') ADVANCE(101);
      if (lookahead == 'c') ADVANCE(95);
      if (lookahead == 'e') ADVANCE(80);
      if (lookahead == 'f') ADVANCE(56);
      if (lookahead == 'i') ADVANCE(73);
      if (lookahead == 'l') ADVANCE(70);
      if (lookahead == 'n') ADVANCE(93);
      if (lookahead == 't') ADVANCE(98);
      if (lookahead == 'w') ADVANCE(75);
      if (lookahead == '{') ADVANCE(170);
      if (lookahead == '}') ADVANCE(171);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(200);
      if (sym_identifier_character_set_5(lookahead)) ADVANCE(112);
      END_STATE();
    case 11:
      if (lookahead == '"') ADVANCE(225);
      if (lookahead == '(') ADVANCE(143);
      if (lookahead == '+') ADVANCE(141);
      if (lookahead == '-') ADVANCE(139);
      if (lookahead == '.') ADVANCE(38);
      if (lookahead == '/') ADVANCE(14);
      if (lookahead == ';') ADVANCE(175);
      if (lookahead == '[') ADVANCE(172);
      if (lookahead == 'b') ADVANCE(101);
      if (lookahead == 'c') ADVANCE(95);
      if (lookahead == 'f') ADVANCE(56);
      if (lookahead == 'i') ADVANCE(73);
      if (lookahead == 'l') ADVANCE(70);
      if (lookahead == 'n') ADVANCE(93);
      if (lookahead == 't') ADVANCE(98);
      if (lookahead == 'w') ADVANCE(75);
      if (lookahead == '{') ADVANCE(170);
      if (lookahead == '}') ADVANCE(171);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(200);
      if (sym_identifier_character_set_5(lookahead)) ADVANCE(112);
      END_STATE();
    case 12:
      if (lookahead == '(') ADVANCE(190);
      if (lookahead == ')') ADVANCE(144);
      if (lookahead == ',') ADVANCE(174);
      if (lookahead == '/') ADVANCE(14);
      if (lookahead == '=') ADVANCE(155);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(113);
      if (sym_identifier_character_set_5(lookahead)) ADVANCE(112);
      END_STATE();
    case 13:
      if (lookahead == '.') ADVANCE(191);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(202);
      END_STATE();
    case 14:
      if (lookahead == '/') ADVANCE(114);
      END_STATE();
    case 15:
      if (lookahead == '/') ADVANCE(14);
      if (lookahead == 'i') ADVANCE(87);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(113);
      if (sym_identifier_character_set_5(lookahead)) ADVANCE(112);
      END_STATE();
    case 16:
      if (lookahead == '=') ADVANCE(242);
      END_STATE();
    case 17:
      if (lookahead == '=') ADVANCE(241);
      END_STATE();
    case 18:
      if (lookahead == '=') ADVANCE(241);
      if (lookahead == '>') ADVANCE(189);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(21);
      END_STATE();
    case 20:
      if (lookahead == 'd') ADVANCE(232);
      END_STATE();
    case 21:
      if (lookahead == 'd') ADVANCE(216);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(24);
      END_STATE();
    case 23:
      if (lookahead == 'f') ADVANCE(179);
      if (lookahead == 'n') ADVANCE(185);
      END_STATE();
    case 24:
      if (lookahead == 'g') ADVANCE(213);
      END_STATE();
    case 25:
      if (lookahead == 'm') ADVANCE(210);
      END_STATE();
    case 26:
      if (lookahead == 'm') ADVANCE(219);
      END_STATE();
    case 27:
      if (lookahead == 'm') ADVANCE(207);
      END_STATE();
    case 28:
      if (lookahead == 'n') ADVANCE(20);
      END_STATE();
    case 29:
      if (lookahead == 'n') ADVANCE(185);
      END_STATE();
    case 30:
      if (lookahead == 'o') ADVANCE(33);
      END_STATE();
    case 31:
      if (lookahead == 'r') ADVANCE(236);
      END_STATE();
    case 32:
      if (lookahead == 'r') ADVANCE(222);
      END_STATE();
    case 33:
      if (lookahead == 't') ADVANCE(228);
      END_STATE();
    case 34:
      if (lookahead == 't') ADVANCE(204);
      END_STATE();
    case 35:
      if (lookahead == '{') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(41);
      END_STATE();
    case 36:
      if (lookahead == '}') ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(36);
      END_STATE();
    case 37:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(203);
      END_STATE();
    case 38:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(202);
      END_STATE();
    case 39:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(203);
      END_STATE();
    case 40:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(227);
      END_STATE();
    case 41:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(43);
      END_STATE();
    case 42:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(36);
      END_STATE();
    case 43:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(40);
      END_STATE();
    case 44:
      if (eof) ADVANCE(54);
      if (lookahead == '!') ADVANCE(196);
      if (lookahead == '"') ADVANCE(116);
      if (lookahead == '#') ADVANCE(169);
      if (lookahead == '$') ADVANCE(154);
      if (lookahead == '%') ADVANCE(168);
      if (lookahead == '\'') ADVANCE(194);
      if (lookahead == '(') ADVANCE(190);
      if (lookahead == ')') ADVANCE(144);
      if (lookahead == '*') ADVANCE(149);
      if (lookahead == '+') ADVANCE(142);
      if (lookahead == ',') ADVANCE(163);
      if (lookahead == '-') ADVANCE(140);
      if (lookahead == '.') ADVANCE(192);
      if (lookahead == '/') ADVANCE(137);
      if (lookahead == ':') ADVANCE(147);
      if (lookahead == ';') ADVANCE(164);
      if (lookahead == '<') ADVANCE(159);
      if (lookahead == '=') ADVANCE(157);
      if (lookahead == '>') ADVANCE(161);
      if (lookahead == '?') ADVANCE(195);
      if (lookahead == '@') ADVANCE(162);
      if (lookahead == '[') ADVANCE(172);
      if (lookahead == '\\') ADVANCE(115);
      if (lookahead == ']') ADVANCE(173);
      if (lookahead == '_') ADVANCE(150);
      if (lookahead == '`') ADVANCE(153);
      if (lookahead == 'a') ADVANCE(127);
      if (lookahead == 'i') ADVANCE(128);
      if (lookahead == 'n') ADVANCE(129);
      if (lookahead == 'o') ADVANCE(130);
      if (lookahead == '~') ADVANCE(138);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 45:
      if (eof) ADVANCE(54);
      if (lookahead == '!') ADVANCE(196);
      if (lookahead == '"') ADVANCE(116);
      if (lookahead == '#') ADVANCE(169);
      if (lookahead == '$') ADVANCE(154);
      if (lookahead == '%') ADVANCE(168);
      if (lookahead == '\'') ADVANCE(194);
      if (lookahead == '(') ADVANCE(190);
      if (lookahead == ')') ADVANCE(144);
      if (lookahead == '*') ADVANCE(148);
      if (lookahead == '+') ADVANCE(141);
      if (lookahead == ',') ADVANCE(163);
      if (lookahead == '-') ADVANCE(139);
      if (lookahead == '.') ADVANCE(192);
      if (lookahead == '/') ADVANCE(136);
      if (lookahead == ':') ADVANCE(147);
      if (lookahead == ';') ADVANCE(164);
      if (lookahead == '<') ADVANCE(159);
      if (lookahead == '=') ADVANCE(156);
      if (lookahead == '>') ADVANCE(161);
      if (lookahead == '?') ADVANCE(195);
      if (lookahead == '@') ADVANCE(162);
      if (lookahead == '[') ADVANCE(172);
      if (lookahead == '\\') ADVANCE(115);
      if (lookahead == ']') ADVANCE(173);
      if (lookahead == '_') ADVANCE(150);
      if (lookahead == '`') ADVANCE(153);
      if (lookahead == 'a') ADVANCE(127);
      if (lookahead == 'i') ADVANCE(128);
      if (lookahead == 'n') ADVANCE(129);
      if (lookahead == 'o') ADVANCE(130);
      if (lookahead == '~') ADVANCE(138);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 46:
      if (eof) ADVANCE(54);
      if (lookahead == '!') ADVANCE(196);
      if (lookahead == '"') ADVANCE(116);
      if (lookahead == '#') ADVANCE(169);
      if (lookahead == '$') ADVANCE(154);
      if (lookahead == '%') ADVANCE(168);
      if (lookahead == '\'') ADVANCE(194);
      if (lookahead == '(') ADVANCE(143);
      if (lookahead == ')') ADVANCE(144);
      if (lookahead == '*') ADVANCE(148);
      if (lookahead == '+') ADVANCE(141);
      if (lookahead == ',') ADVANCE(163);
      if (lookahead == '-') ADVANCE(139);
      if (lookahead == '.') ADVANCE(192);
      if (lookahead == '/') ADVANCE(136);
      if (lookahead == ':') ADVANCE(147);
      if (lookahead == ';') ADVANCE(164);
      if (lookahead == '<') ADVANCE(159);
      if (lookahead == '=') ADVANCE(156);
      if (lookahead == '>') ADVANCE(161);
      if (lookahead == '?') ADVANCE(195);
      if (lookahead == '@') ADVANCE(162);
      if (lookahead == '[') ADVANCE(172);
      if (lookahead == '\\') ADVANCE(115);
      if (lookahead == ']') ADVANCE(173);
      if (lookahead == '_') ADVANCE(150);
      if (lookahead == '`') ADVANCE(153);
      if (lookahead == 'a') ADVANCE(127);
      if (lookahead == 'i') ADVANCE(128);
      if (lookahead == 'n') ADVANCE(129);
      if (lookahead == 'o') ADVANCE(130);
      if (lookahead == '~') ADVANCE(138);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 47:
      if (eof) ADVANCE(54);
      if (lookahead == '!') ADVANCE(196);
      if (lookahead == '"') ADVANCE(116);
      if (lookahead == '#') ADVANCE(169);
      if (lookahead == '$') ADVANCE(154);
      if (lookahead == '%') ADVANCE(168);
      if (lookahead == '\'') ADVANCE(194);
      if (lookahead == '(') ADVANCE(143);
      if (lookahead == ')') ADVANCE(144);
      if (lookahead == '*') ADVANCE(148);
      if (lookahead == '+') ADVANCE(141);
      if (lookahead == ',') ADVANCE(163);
      if (lookahead == '-') ADVANCE(139);
      if (lookahead == '.') ADVANCE(192);
      if (lookahead == '/') ADVANCE(136);
      if (lookahead == ':') ADVANCE(147);
      if (lookahead == ';') ADVANCE(164);
      if (lookahead == '<') ADVANCE(159);
      if (lookahead == '=') ADVANCE(156);
      if (lookahead == '>') ADVANCE(161);
      if (lookahead == '?') ADVANCE(195);
      if (lookahead == '@') ADVANCE(162);
      if (lookahead == '[') ADVANCE(172);
      if (lookahead == '\\') ADVANCE(115);
      if (lookahead == ']') ADVANCE(173);
      if (lookahead == '_') ADVANCE(151);
      if (lookahead == '`') ADVANCE(153);
      if (lookahead == 'a') ADVANCE(88);
      if (lookahead == 'i') ADVANCE(89);
      if (lookahead == 'n') ADVANCE(94);
      if (lookahead == 'o') ADVANCE(100);
      if (lookahead == '~') ADVANCE(138);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(135);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      if (sym_identifier_character_set_6(lookahead)) ADVANCE(112);
      END_STATE();
    case 48:
      if (eof) ADVANCE(54);
      if (lookahead == '!') ADVANCE(166);
      if (lookahead == '"') ADVANCE(116);
      if (lookahead == '#') ADVANCE(169);
      if (lookahead == '$') ADVANCE(154);
      if (lookahead == '%') ADVANCE(168);
      if (lookahead == '\'') ADVANCE(145);
      if (lookahead == '(') ADVANCE(143);
      if (lookahead == ')') ADVANCE(144);
      if (lookahead == '*') ADVANCE(148);
      if (lookahead == '+') ADVANCE(141);
      if (lookahead == ',') ADVANCE(163);
      if (lookahead == '-') ADVANCE(139);
      if (lookahead == '.') ADVANCE(146);
      if (lookahead == '/') ADVANCE(136);
      if (lookahead == ':') ADVANCE(147);
      if (lookahead == ';') ADVANCE(164);
      if (lookahead == '<') ADVANCE(158);
      if (lookahead == '=') ADVANCE(155);
      if (lookahead == '>') ADVANCE(160);
      if (lookahead == '?') ADVANCE(165);
      if (lookahead == '@') ADVANCE(162);
      if (lookahead == '[') ADVANCE(172);
      if (lookahead == '\\') ADVANCE(115);
      if (lookahead == ']') ADVANCE(173);
      if (lookahead == '_') ADVANCE(150);
      if (lookahead == '`') ADVANCE(153);
      if (lookahead == 'e') ADVANCE(123);
      if (lookahead == '~') ADVANCE(138);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 49:
      if (eof) ADVANCE(54);
      if (lookahead == '!') ADVANCE(166);
      if (lookahead == '"') ADVANCE(116);
      if (lookahead == '#') ADVANCE(169);
      if (lookahead == '$') ADVANCE(154);
      if (lookahead == '%') ADVANCE(168);
      if (lookahead == '\'') ADVANCE(145);
      if (lookahead == '(') ADVANCE(143);
      if (lookahead == ')') ADVANCE(144);
      if (lookahead == '*') ADVANCE(148);
      if (lookahead == '+') ADVANCE(141);
      if (lookahead == ',') ADVANCE(163);
      if (lookahead == '-') ADVANCE(139);
      if (lookahead == '.') ADVANCE(146);
      if (lookahead == '/') ADVANCE(136);
      if (lookahead == ':') ADVANCE(147);
      if (lookahead == ';') ADVANCE(164);
      if (lookahead == '<') ADVANCE(158);
      if (lookahead == '=') ADVANCE(155);
      if (lookahead == '>') ADVANCE(160);
      if (lookahead == '?') ADVANCE(165);
      if (lookahead == '@') ADVANCE(162);
      if (lookahead == '[') ADVANCE(172);
      if (lookahead == '\\') ADVANCE(115);
      if (lookahead == ']') ADVANCE(173);
      if (lookahead == '_') ADVANCE(150);
      if (lookahead == '`') ADVANCE(153);
      if (lookahead == '~') ADVANCE(138);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 50:
      if (eof) ADVANCE(54);
      if (lookahead == '!') ADVANCE(167);
      if (lookahead == '"') ADVANCE(116);
      if (lookahead == '#') ADVANCE(169);
      if (lookahead == '$') ADVANCE(154);
      if (lookahead == '%') ADVANCE(168);
      if (lookahead == '\'') ADVANCE(145);
      if (lookahead == '(') ADVANCE(143);
      if (lookahead == ')') ADVANCE(144);
      if (lookahead == '*') ADVANCE(148);
      if (lookahead == '+') ADVANCE(141);
      if (lookahead == ',') ADVANCE(163);
      if (lookahead == '-') ADVANCE(139);
      if (lookahead == '.') ADVANCE(146);
      if (lookahead == '/') ADVANCE(136);
      if (lookahead == ':') ADVANCE(147);
      if (lookahead == ';') ADVANCE(164);
      if (lookahead == '<') ADVANCE(159);
      if (lookahead == '=') ADVANCE(157);
      if (lookahead == '>') ADVANCE(161);
      if (lookahead == '?') ADVANCE(165);
      if (lookahead == '@') ADVANCE(162);
      if (lookahead == '[') ADVANCE(172);
      if (lookahead == '\\') ADVANCE(115);
      if (lookahead == ']') ADVANCE(173);
      if (lookahead == '_') ADVANCE(150);
      if (lookahead == '`') ADVANCE(153);
      if (lookahead == 'a') ADVANCE(127);
      if (lookahead == 'i') ADVANCE(128);
      if (lookahead == 'n') ADVANCE(129);
      if (lookahead == 'o') ADVANCE(130);
      if (lookahead == '~') ADVANCE(138);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 51:
      if (eof) ADVANCE(54);
      if (lookahead == '!') ADVANCE(167);
      if (lookahead == '"') ADVANCE(116);
      if (lookahead == '#') ADVANCE(169);
      if (lookahead == '$') ADVANCE(154);
      if (lookahead == '%') ADVANCE(168);
      if (lookahead == '\'') ADVANCE(145);
      if (lookahead == '(') ADVANCE(143);
      if (lookahead == ')') ADVANCE(144);
      if (lookahead == '*') ADVANCE(148);
      if (lookahead == '+') ADVANCE(141);
      if (lookahead == ',') ADVANCE(163);
      if (lookahead == '-') ADVANCE(139);
      if (lookahead == '.') ADVANCE(146);
      if (lookahead == '/') ADVANCE(136);
      if (lookahead == ':') ADVANCE(147);
      if (lookahead == ';') ADVANCE(164);
      if (lookahead == '<') ADVANCE(159);
      if (lookahead == '=') ADVANCE(156);
      if (lookahead == '>') ADVANCE(161);
      if (lookahead == '?') ADVANCE(165);
      if (lookahead == '@') ADVANCE(162);
      if (lookahead == '[') ADVANCE(172);
      if (lookahead == '\\') ADVANCE(115);
      if (lookahead == ']') ADVANCE(173);
      if (lookahead == '_') ADVANCE(150);
      if (lookahead == '`') ADVANCE(153);
      if (lookahead == 'a') ADVANCE(127);
      if (lookahead == 'c') ADVANCE(124);
      if (lookahead == 'd') ADVANCE(120);
      if (lookahead == 'e') ADVANCE(125);
      if (lookahead == 'f') ADVANCE(131);
      if (lookahead == 'i') ADVANCE(128);
      if (lookahead == 'm') ADVANCE(126);
      if (lookahead == 'n') ADVANCE(129);
      if (lookahead == 'o') ADVANCE(130);
      if (lookahead == 'p') ADVANCE(134);
      if (lookahead == 'r') ADVANCE(117);
      if (lookahead == '~') ADVANCE(138);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 52:
      if (eof) ADVANCE(54);
      if (lookahead == '!') ADVANCE(167);
      if (lookahead == '"') ADVANCE(116);
      if (lookahead == '#') ADVANCE(169);
      if (lookahead == '$') ADVANCE(154);
      if (lookahead == '%') ADVANCE(168);
      if (lookahead == '\'') ADVANCE(145);
      if (lookahead == '(') ADVANCE(143);
      if (lookahead == ')') ADVANCE(144);
      if (lookahead == '*') ADVANCE(148);
      if (lookahead == '+') ADVANCE(141);
      if (lookahead == ',') ADVANCE(163);
      if (lookahead == '-') ADVANCE(139);
      if (lookahead == '.') ADVANCE(146);
      if (lookahead == '/') ADVANCE(136);
      if (lookahead == ':') ADVANCE(147);
      if (lookahead == ';') ADVANCE(164);
      if (lookahead == '<') ADVANCE(159);
      if (lookahead == '=') ADVANCE(156);
      if (lookahead == '>') ADVANCE(161);
      if (lookahead == '?') ADVANCE(165);
      if (lookahead == '@') ADVANCE(162);
      if (lookahead == '[') ADVANCE(172);
      if (lookahead == '\\') ADVANCE(115);
      if (lookahead == ']') ADVANCE(173);
      if (lookahead == '_') ADVANCE(150);
      if (lookahead == '`') ADVANCE(153);
      if (lookahead == 'a') ADVANCE(127);
      if (lookahead == 'i') ADVANCE(128);
      if (lookahead == 'n') ADVANCE(129);
      if (lookahead == 'o') ADVANCE(130);
      if (lookahead == '~') ADVANCE(138);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 53:
      if (eof) ADVANCE(54);
      if (lookahead == '!') ADVANCE(167);
      if (lookahead == '"') ADVANCE(116);
      if (lookahead == '#') ADVANCE(169);
      if (lookahead == '$') ADVANCE(154);
      if (lookahead == '%') ADVANCE(168);
      if (lookahead == '\'') ADVANCE(145);
      if (lookahead == '(') ADVANCE(143);
      if (lookahead == ')') ADVANCE(144);
      if (lookahead == '*') ADVANCE(148);
      if (lookahead == '+') ADVANCE(141);
      if (lookahead == ',') ADVANCE(163);
      if (lookahead == '-') ADVANCE(139);
      if (lookahead == '.') ADVANCE(146);
      if (lookahead == '/') ADVANCE(136);
      if (lookahead == ':') ADVANCE(147);
      if (lookahead == ';') ADVANCE(164);
      if (lookahead == '<') ADVANCE(159);
      if (lookahead == '=') ADVANCE(156);
      if (lookahead == '>') ADVANCE(161);
      if (lookahead == '?') ADVANCE(165);
      if (lookahead == '@') ADVANCE(162);
      if (lookahead == '[') ADVANCE(172);
      if (lookahead == '\\') ADVANCE(115);
      if (lookahead == ']') ADVANCE(173);
      if (lookahead == '_') ADVANCE(151);
      if (lookahead == '`') ADVANCE(153);
      if (lookahead == 'a') ADVANCE(88);
      if (lookahead == 'i') ADVANCE(89);
      if (lookahead == 'n') ADVANCE(94);
      if (lookahead == 'o') ADVANCE(100);
      if (lookahead == '~') ADVANCE(138);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(135);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      if (sym_identifier_character_set_6(lookahead)) ADVANCE(112);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(82);
      if (lookahead == 'o') ADVANCE(99);
      if (lookahead == 'r') ADVANCE(224);
      if (sym_identifier_character_set_7(lookahead)) ADVANCE(112);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(82);
      if (lookahead == 'o') ADVANCE(99);
      if (sym_identifier_character_set_7(lookahead)) ADVANCE(112);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(82);
      if (sym_identifier_character_set_7(lookahead)) ADVANCE(112);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(78);
      if (sym_identifier_character_set_7(lookahead)) ADVANCE(112);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(61);
      if (sym_identifier_character_set_7(lookahead)) ADVANCE(112);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(235);
      if (sym_identifier_character_set_8(lookahead)) ADVANCE(112);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(218);
      if (sym_identifier_character_set_8(lookahead)) ADVANCE(112);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      if (sym_identifier_character_set_9(lookahead)) ADVANCE(112);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(74);
      if (sym_identifier_character_set_8(lookahead)) ADVANCE(112);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(182);
      if (sym_identifier_character_set_8(lookahead)) ADVANCE(112);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(197);
      if (sym_identifier_character_set_8(lookahead)) ADVANCE(112);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(198);
      if (sym_identifier_character_set_8(lookahead)) ADVANCE(112);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(199);
      if (sym_identifier_character_set_8(lookahead)) ADVANCE(112);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(183);
      if (sym_identifier_character_set_8(lookahead)) ADVANCE(112);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(177);
      if (sym_identifier_character_set_8(lookahead)) ADVANCE(112);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(105);
      if (sym_identifier_character_set_8(lookahead)) ADVANCE(112);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(58);
      if (sym_identifier_character_set_8(lookahead)) ADVANCE(112);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(180);
      if (lookahead == 'n') ADVANCE(188);
      if (sym_identifier_character_set_8(lookahead)) ADVANCE(112);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(180);
      if (sym_identifier_character_set_8(lookahead)) ADVANCE(112);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(215);
      if (sym_identifier_character_set_8(lookahead)) ADVANCE(112);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(76);
      if (sym_identifier_character_set_8(lookahead)) ADVANCE(112);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(81);
      if (sym_identifier_character_set_8(lookahead)) ADVANCE(112);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(92);
      if (sym_identifier_character_set_8(lookahead)) ADVANCE(112);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'k') ADVANCE(176);
      if (sym_identifier_character_set_8(lookahead)) ADVANCE(112);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(102);
      if (lookahead == 'm') ADVANCE(221);
      if (sym_identifier_character_set_8(lookahead)) ADVANCE(112);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(102);
      if (sym_identifier_character_set_8(lookahead)) ADVANCE(112);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(68);
      if (sym_identifier_character_set_8(lookahead)) ADVANCE(112);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(103);
      if (sym_identifier_character_set_8(lookahead)) ADVANCE(112);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(212);
      if (lookahead == 'o') ADVANCE(90);
      if (sym_identifier_character_set_8(lookahead)) ADVANCE(112);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(221);
      if (sym_identifier_character_set_8(lookahead)) ADVANCE(112);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(209);
      if (sym_identifier_character_set_8(lookahead)) ADVANCE(112);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(60);
      if (sym_identifier_character_set_8(lookahead)) ADVANCE(112);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(188);
      if (sym_identifier_character_set_8(lookahead)) ADVANCE(112);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      if (sym_identifier_character_set_9(lookahead)) ADVANCE(112);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      if (sym_identifier_character_set_9(lookahead)) ADVANCE(112);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(108);
      if (sym_identifier_character_set_8(lookahead)) ADVANCE(112);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(65);
      if (lookahead == 't') ADVANCE(231);
      if (sym_identifier_character_set_8(lookahead)) ADVANCE(112);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(110);
      if (sym_identifier_character_set_8(lookahead)) ADVANCE(112);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(91);
      if (sym_identifier_character_set_8(lookahead)) ADVANCE(112);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      if (sym_identifier_character_set_9(lookahead)) ADVANCE(112);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(90);
      if (sym_identifier_character_set_8(lookahead)) ADVANCE(112);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(106);
      if (sym_identifier_character_set_8(lookahead)) ADVANCE(112);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(239);
      if (sym_identifier_character_set_8(lookahead)) ADVANCE(112);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(109);
      if (sym_identifier_character_set_8(lookahead)) ADVANCE(112);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(184);
      if (sym_identifier_character_set_8(lookahead)) ADVANCE(112);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(238);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      if (sym_identifier_character_set_9(lookahead)) ADVANCE(112);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(71);
      if (sym_identifier_character_set_8(lookahead)) ADVANCE(112);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(64);
      if (sym_identifier_character_set_8(lookahead)) ADVANCE(112);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(67);
      if (sym_identifier_character_set_8(lookahead)) ADVANCE(112);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(206);
      if (sym_identifier_character_set_8(lookahead)) ADVANCE(112);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(178);
      if (sym_identifier_character_set_8(lookahead)) ADVANCE(112);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(231);
      if (sym_identifier_character_set_8(lookahead)) ADVANCE(112);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      if (sym_identifier_character_set_9(lookahead)) ADVANCE(112);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(77);
      if (sym_identifier_character_set_8(lookahead)) ADVANCE(112);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(66);
      if (sym_identifier_character_set_8(lookahead)) ADVANCE(112);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(69);
      if (sym_identifier_character_set_8(lookahead)) ADVANCE(112);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      if (sym_identifier_character_set_9(lookahead)) ADVANCE(112);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_8(lookahead)) ADVANCE(112);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(113);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(114);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_line_break);
      if (sym_escape_sequence_character_set_1(lookahead)) ADVANCE(227);
      if (lookahead == 'u') ADVANCE(35);
      if (lookahead == 'x') ADVANCE(43);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == 'a') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == 'd') ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == 'd') ADVANCE(217);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == 'e') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == 'e') ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == 'g') ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == 'l') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == 'm') ADVANCE(211);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == 'm') ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == 'm') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == 'n') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == 'n') ADVANCE(186);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == 'o') ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == 'r') ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == 'r') ADVANCE(223);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == 's') ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == 't') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == 't') ADVANCE(205);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '/') ADVANCE(114);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '/') ADVANCE(114);
      if (lookahead == '=') ADVANCE(247);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '=') ADVANCE(245);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '=') ADVANCE(244);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '=') ADVANCE(246);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym__);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym__);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      if (sym_identifier_character_set_9(lookahead)) ADVANCE(112);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym__);
      if (sym_identifier_character_set_8(lookahead)) ADVANCE(112);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(241);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(241);
      if (lookahead == '>') ADVANCE(189);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(240);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(243);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '=') ADVANCE(242);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_COMMA2);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_SEMI2);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_break);
      if (sym_identifier_character_set_8(lookahead)) ADVANCE(112);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_continue);
      if (sym_identifier_character_set_8(lookahead)) ADVANCE(112);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_let);
      if (sym_identifier_character_set_8(lookahead)) ADVANCE(112);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_if);
      if (sym_identifier_character_set_8(lookahead)) ADVANCE(112);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_else);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_else);
      if (sym_identifier_character_set_8(lookahead)) ADVANCE(112);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_while);
      if (sym_identifier_character_set_8(lookahead)) ADVANCE(112);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_for);
      if (sym_identifier_character_set_8(lookahead)) ADVANCE(112);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_in);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_in);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      if (sym_identifier_character_set_9(lookahead)) ADVANCE(112);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_in);
      if (sym_identifier_character_set_8(lookahead)) ADVANCE(112);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_LPAREN2);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_DOT2);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_DOT2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(202);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_SQUOTE2);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_QMARK2);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_BANG2);
      if (lookahead == '=') ADVANCE(242);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_none);
      if (sym_identifier_character_set_8(lookahead)) ADVANCE(112);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_true);
      if (sym_identifier_character_set_8(lookahead)) ADVANCE(112);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_false);
      if (sym_identifier_character_set_8(lookahead)) ADVANCE(112);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_int_literal);
      if (lookahead == '.') ADVANCE(202);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(200);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_int_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(201);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_float_literal);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(202);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_float_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(203);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_pt);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_pt);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_pt);
      if (sym_identifier_character_set_8(lookahead)) ADVANCE(112);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_mm);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_mm);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_mm);
      if (sym_identifier_character_set_8(lookahead)) ADVANCE(112);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_cm);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_cm);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_cm);
      if (sym_identifier_character_set_8(lookahead)) ADVANCE(112);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_deg);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_deg);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_deg);
      if (sym_identifier_character_set_8(lookahead)) ADVANCE(112);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_rad);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_rad);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_rad);
      if (sym_identifier_character_set_8(lookahead)) ADVANCE(112);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_em);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_em);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_em);
      if (sym_identifier_character_set_8(lookahead)) ADVANCE(112);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_fr);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_fr);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_fr);
      if (sym_identifier_character_set_8(lookahead)) ADVANCE(112);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym__not_an_escape_sequence);
      if (sym_escape_sequence_character_set_1(lookahead)) ADVANCE(227);
      if (lookahead == 'u') ADVANCE(35);
      if (lookahead == 'x') ADVANCE(43);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_not);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_not);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      if (sym_identifier_character_set_9(lookahead)) ADVANCE(112);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_not);
      if (sym_identifier_character_set_8(lookahead)) ADVANCE(112);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_and);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_and);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      if (sym_identifier_character_set_9(lookahead)) ADVANCE(112);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_and);
      if (sym_identifier_character_set_8(lookahead)) ADVANCE(112);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_or);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_or);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      if (sym_identifier_character_set_9(lookahead)) ADVANCE(112);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_or);
      if (sym_identifier_character_set_8(lookahead)) ADVANCE(112);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_PLUS_EQ);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_DASH_EQ);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_STAR_EQ);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_SLASH_EQ);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 49, .external_lex_state = 2},
  [2] = {.lex_state = 11, .external_lex_state = 2},
  [3] = {.lex_state = 11, .external_lex_state = 2},
  [4] = {.lex_state = 11, .external_lex_state = 2},
  [5] = {.lex_state = 11, .external_lex_state = 2},
  [6] = {.lex_state = 11, .external_lex_state = 2},
  [7] = {.lex_state = 11, .external_lex_state = 2},
  [8] = {.lex_state = 11, .external_lex_state = 2},
  [9] = {.lex_state = 11, .external_lex_state = 2},
  [10] = {.lex_state = 11, .external_lex_state = 2},
  [11] = {.lex_state = 11, .external_lex_state = 2},
  [12] = {.lex_state = 11, .external_lex_state = 2},
  [13] = {.lex_state = 44, .external_lex_state = 2},
  [14] = {.lex_state = 44, .external_lex_state = 2},
  [15] = {.lex_state = 11, .external_lex_state = 2},
  [16] = {.lex_state = 11, .external_lex_state = 2},
  [17] = {.lex_state = 11, .external_lex_state = 2},
  [18] = {.lex_state = 51, .external_lex_state = 2},
  [19] = {.lex_state = 51, .external_lex_state = 2},
  [20] = {.lex_state = 2, .external_lex_state = 2},
  [21] = {.lex_state = 47, .external_lex_state = 2},
  [22] = {.lex_state = 45, .external_lex_state = 2},
  [23] = {.lex_state = 47, .external_lex_state = 2},
  [24] = {.lex_state = 45, .external_lex_state = 2},
  [25] = {.lex_state = 47, .external_lex_state = 2},
  [26] = {.lex_state = 47, .external_lex_state = 2},
  [27] = {.lex_state = 46, .external_lex_state = 2},
  [28] = {.lex_state = 46, .external_lex_state = 2},
  [29] = {.lex_state = 46, .external_lex_state = 2},
  [30] = {.lex_state = 46, .external_lex_state = 2},
  [31] = {.lex_state = 46, .external_lex_state = 2},
  [32] = {.lex_state = 46, .external_lex_state = 2},
  [33] = {.lex_state = 8, .external_lex_state = 2},
  [34] = {.lex_state = 46, .external_lex_state = 2},
  [35] = {.lex_state = 46, .external_lex_state = 2},
  [36] = {.lex_state = 46, .external_lex_state = 2},
  [37] = {.lex_state = 46, .external_lex_state = 2},
  [38] = {.lex_state = 46, .external_lex_state = 2},
  [39] = {.lex_state = 46, .external_lex_state = 2},
  [40] = {.lex_state = 46, .external_lex_state = 2},
  [41] = {.lex_state = 46, .external_lex_state = 2},
  [42] = {.lex_state = 46, .external_lex_state = 2},
  [43] = {.lex_state = 46, .external_lex_state = 2},
  [44] = {.lex_state = 46, .external_lex_state = 2},
  [45] = {.lex_state = 46, .external_lex_state = 2},
  [46] = {.lex_state = 46, .external_lex_state = 2},
  [47] = {.lex_state = 46, .external_lex_state = 2},
  [48] = {.lex_state = 46, .external_lex_state = 2},
  [49] = {.lex_state = 46, .external_lex_state = 2},
  [50] = {.lex_state = 46, .external_lex_state = 2},
  [51] = {.lex_state = 46, .external_lex_state = 2},
  [52] = {.lex_state = 53, .external_lex_state = 2},
  [53] = {.lex_state = 53, .external_lex_state = 2},
  [54] = {.lex_state = 53, .external_lex_state = 2},
  [55] = {.lex_state = 53, .external_lex_state = 2},
  [56] = {.lex_state = 50, .external_lex_state = 2},
  [57] = {.lex_state = 3, .external_lex_state = 2},
  [58] = {.lex_state = 9, .external_lex_state = 2},
  [59] = {.lex_state = 50, .external_lex_state = 2},
  [60] = {.lex_state = 9, .external_lex_state = 2},
  [61] = {.lex_state = 9, .external_lex_state = 2},
  [62] = {.lex_state = 9, .external_lex_state = 2},
  [63] = {.lex_state = 52, .external_lex_state = 2},
  [64] = {.lex_state = 52, .external_lex_state = 2},
  [65] = {.lex_state = 52, .external_lex_state = 2},
  [66] = {.lex_state = 9, .external_lex_state = 2},
  [67] = {.lex_state = 52, .external_lex_state = 2},
  [68] = {.lex_state = 52, .external_lex_state = 2},
  [69] = {.lex_state = 52, .external_lex_state = 2},
  [70] = {.lex_state = 4, .external_lex_state = 2},
  [71] = {.lex_state = 4, .external_lex_state = 2},
  [72] = {.lex_state = 9, .external_lex_state = 2},
  [73] = {.lex_state = 52, .external_lex_state = 2},
  [74] = {.lex_state = 52, .external_lex_state = 2},
  [75] = {.lex_state = 52, .external_lex_state = 2},
  [76] = {.lex_state = 52, .external_lex_state = 2},
  [77] = {.lex_state = 52, .external_lex_state = 2},
  [78] = {.lex_state = 52, .external_lex_state = 2},
  [79] = {.lex_state = 52, .external_lex_state = 2},
  [80] = {.lex_state = 9, .external_lex_state = 2},
  [81] = {.lex_state = 52, .external_lex_state = 2},
  [82] = {.lex_state = 52, .external_lex_state = 2},
  [83] = {.lex_state = 52, .external_lex_state = 2},
  [84] = {.lex_state = 52, .external_lex_state = 2},
  [85] = {.lex_state = 52, .external_lex_state = 2},
  [86] = {.lex_state = 52, .external_lex_state = 2},
  [87] = {.lex_state = 52, .external_lex_state = 2},
  [88] = {.lex_state = 52, .external_lex_state = 2},
  [89] = {.lex_state = 52, .external_lex_state = 2},
  [90] = {.lex_state = 52, .external_lex_state = 2},
  [91] = {.lex_state = 52, .external_lex_state = 2},
  [92] = {.lex_state = 9, .external_lex_state = 2},
  [93] = {.lex_state = 52, .external_lex_state = 2},
  [94] = {.lex_state = 52, .external_lex_state = 2},
  [95] = {.lex_state = 52, .external_lex_state = 2},
  [96] = {.lex_state = 52, .external_lex_state = 2},
  [97] = {.lex_state = 52, .external_lex_state = 2},
  [98] = {.lex_state = 52, .external_lex_state = 2},
  [99] = {.lex_state = 52, .external_lex_state = 2},
  [100] = {.lex_state = 52, .external_lex_state = 2},
  [101] = {.lex_state = 52, .external_lex_state = 2},
  [102] = {.lex_state = 52, .external_lex_state = 2},
  [103] = {.lex_state = 52, .external_lex_state = 2},
  [104] = {.lex_state = 52, .external_lex_state = 2},
  [105] = {.lex_state = 52, .external_lex_state = 2},
  [106] = {.lex_state = 52, .external_lex_state = 2},
  [107] = {.lex_state = 52, .external_lex_state = 2},
  [108] = {.lex_state = 52, .external_lex_state = 2},
  [109] = {.lex_state = 52, .external_lex_state = 2},
  [110] = {.lex_state = 52, .external_lex_state = 2},
  [111] = {.lex_state = 52, .external_lex_state = 2},
  [112] = {.lex_state = 52, .external_lex_state = 2},
  [113] = {.lex_state = 9, .external_lex_state = 2},
  [114] = {.lex_state = 52, .external_lex_state = 2},
  [115] = {.lex_state = 52, .external_lex_state = 2},
  [116] = {.lex_state = 52, .external_lex_state = 2},
  [117] = {.lex_state = 52, .external_lex_state = 2},
  [118] = {.lex_state = 52, .external_lex_state = 2},
  [119] = {.lex_state = 52, .external_lex_state = 2},
  [120] = {.lex_state = 52, .external_lex_state = 2},
  [121] = {.lex_state = 52, .external_lex_state = 2},
  [122] = {.lex_state = 52, .external_lex_state = 2},
  [123] = {.lex_state = 52, .external_lex_state = 2},
  [124] = {.lex_state = 52, .external_lex_state = 2},
  [125] = {.lex_state = 52, .external_lex_state = 2},
  [126] = {.lex_state = 52, .external_lex_state = 2},
  [127] = {.lex_state = 52, .external_lex_state = 2},
  [128] = {.lex_state = 52, .external_lex_state = 2},
  [129] = {.lex_state = 52, .external_lex_state = 2},
  [130] = {.lex_state = 52, .external_lex_state = 2},
  [131] = {.lex_state = 52, .external_lex_state = 2},
  [132] = {.lex_state = 52, .external_lex_state = 2},
  [133] = {.lex_state = 52, .external_lex_state = 2},
  [134] = {.lex_state = 49, .external_lex_state = 2},
  [135] = {.lex_state = 49, .external_lex_state = 2},
  [136] = {.lex_state = 49, .external_lex_state = 2},
  [137] = {.lex_state = 49, .external_lex_state = 2},
  [138] = {.lex_state = 9, .external_lex_state = 2},
  [139] = {.lex_state = 49, .external_lex_state = 2},
  [140] = {.lex_state = 49, .external_lex_state = 2},
  [141] = {.lex_state = 49, .external_lex_state = 2},
  [142] = {.lex_state = 49, .external_lex_state = 2},
  [143] = {.lex_state = 49, .external_lex_state = 2},
  [144] = {.lex_state = 9, .external_lex_state = 2},
  [145] = {.lex_state = 49, .external_lex_state = 2},
  [146] = {.lex_state = 49, .external_lex_state = 2},
  [147] = {.lex_state = 49, .external_lex_state = 2},
  [148] = {.lex_state = 49, .external_lex_state = 2},
  [149] = {.lex_state = 4, .external_lex_state = 2},
  [150] = {.lex_state = 49, .external_lex_state = 2},
  [151] = {.lex_state = 9, .external_lex_state = 2},
  [152] = {.lex_state = 49, .external_lex_state = 2},
  [153] = {.lex_state = 49, .external_lex_state = 2},
  [154] = {.lex_state = 4, .external_lex_state = 2},
  [155] = {.lex_state = 9, .external_lex_state = 2},
  [156] = {.lex_state = 49, .external_lex_state = 2},
  [157] = {.lex_state = 4, .external_lex_state = 2},
  [158] = {.lex_state = 49, .external_lex_state = 2},
  [159] = {.lex_state = 49, .external_lex_state = 2},
  [160] = {.lex_state = 4, .external_lex_state = 2},
  [161] = {.lex_state = 49, .external_lex_state = 2},
  [162] = {.lex_state = 4, .external_lex_state = 2},
  [163] = {.lex_state = 4, .external_lex_state = 2},
  [164] = {.lex_state = 49, .external_lex_state = 2},
  [165] = {.lex_state = 4, .external_lex_state = 2},
  [166] = {.lex_state = 49, .external_lex_state = 2},
  [167] = {.lex_state = 4, .external_lex_state = 2},
  [168] = {.lex_state = 49, .external_lex_state = 2},
  [169] = {.lex_state = 4, .external_lex_state = 2},
  [170] = {.lex_state = 9, .external_lex_state = 2},
  [171] = {.lex_state = 9, .external_lex_state = 2},
  [172] = {.lex_state = 4, .external_lex_state = 2},
  [173] = {.lex_state = 9, .external_lex_state = 2},
  [174] = {.lex_state = 9, .external_lex_state = 2},
  [175] = {.lex_state = 9, .external_lex_state = 2},
  [176] = {.lex_state = 4, .external_lex_state = 2},
  [177] = {.lex_state = 9, .external_lex_state = 2},
  [178] = {.lex_state = 9, .external_lex_state = 2},
  [179] = {.lex_state = 9, .external_lex_state = 2},
  [180] = {.lex_state = 9, .external_lex_state = 2},
  [181] = {.lex_state = 9, .external_lex_state = 2},
  [182] = {.lex_state = 9, .external_lex_state = 2},
  [183] = {.lex_state = 4, .external_lex_state = 2},
  [184] = {.lex_state = 9, .external_lex_state = 2},
  [185] = {.lex_state = 4, .external_lex_state = 2},
  [186] = {.lex_state = 9, .external_lex_state = 2},
  [187] = {.lex_state = 9, .external_lex_state = 2},
  [188] = {.lex_state = 9, .external_lex_state = 2},
  [189] = {.lex_state = 9, .external_lex_state = 2},
  [190] = {.lex_state = 9, .external_lex_state = 2},
  [191] = {.lex_state = 9, .external_lex_state = 2},
  [192] = {.lex_state = 9, .external_lex_state = 2},
  [193] = {.lex_state = 9, .external_lex_state = 2},
  [194] = {.lex_state = 9, .external_lex_state = 2},
  [195] = {.lex_state = 9, .external_lex_state = 2},
  [196] = {.lex_state = 9, .external_lex_state = 2},
  [197] = {.lex_state = 9, .external_lex_state = 2},
  [198] = {.lex_state = 9, .external_lex_state = 2},
  [199] = {.lex_state = 9, .external_lex_state = 2},
  [200] = {.lex_state = 9, .external_lex_state = 2},
  [201] = {.lex_state = 9, .external_lex_state = 2},
  [202] = {.lex_state = 9, .external_lex_state = 2},
  [203] = {.lex_state = 9, .external_lex_state = 2},
  [204] = {.lex_state = 9, .external_lex_state = 2},
  [205] = {.lex_state = 9, .external_lex_state = 2},
  [206] = {.lex_state = 9, .external_lex_state = 2},
  [207] = {.lex_state = 4, .external_lex_state = 2},
  [208] = {.lex_state = 9, .external_lex_state = 2},
  [209] = {.lex_state = 9, .external_lex_state = 2},
  [210] = {.lex_state = 9, .external_lex_state = 2},
  [211] = {.lex_state = 9, .external_lex_state = 2},
  [212] = {.lex_state = 9, .external_lex_state = 2},
  [213] = {.lex_state = 9, .external_lex_state = 2},
  [214] = {.lex_state = 9, .external_lex_state = 2},
  [215] = {.lex_state = 9, .external_lex_state = 2},
  [216] = {.lex_state = 9, .external_lex_state = 2},
  [217] = {.lex_state = 4, .external_lex_state = 2},
  [218] = {.lex_state = 4, .external_lex_state = 2},
  [219] = {.lex_state = 9, .external_lex_state = 2},
  [220] = {.lex_state = 9, .external_lex_state = 2},
  [221] = {.lex_state = 4, .external_lex_state = 2},
  [222] = {.lex_state = 9, .external_lex_state = 2},
  [223] = {.lex_state = 9, .external_lex_state = 2},
  [224] = {.lex_state = 9, .external_lex_state = 2},
  [225] = {.lex_state = 4, .external_lex_state = 2},
  [226] = {.lex_state = 4, .external_lex_state = 2},
  [227] = {.lex_state = 9, .external_lex_state = 2},
  [228] = {.lex_state = 9, .external_lex_state = 2},
  [229] = {.lex_state = 4, .external_lex_state = 2},
  [230] = {.lex_state = 9, .external_lex_state = 2},
  [231] = {.lex_state = 4, .external_lex_state = 2},
  [232] = {.lex_state = 4, .external_lex_state = 2},
  [233] = {.lex_state = 4, .external_lex_state = 2},
  [234] = {.lex_state = 4, .external_lex_state = 2},
  [235] = {.lex_state = 4, .external_lex_state = 2},
  [236] = {.lex_state = 9, .external_lex_state = 2},
  [237] = {.lex_state = 9, .external_lex_state = 2},
  [238] = {.lex_state = 9, .external_lex_state = 2},
  [239] = {.lex_state = 9, .external_lex_state = 2},
  [240] = {.lex_state = 9, .external_lex_state = 2},
  [241] = {.lex_state = 9, .external_lex_state = 2},
  [242] = {.lex_state = 4, .external_lex_state = 2},
  [243] = {.lex_state = 4, .external_lex_state = 2},
  [244] = {.lex_state = 4, .external_lex_state = 2},
  [245] = {.lex_state = 9, .external_lex_state = 2},
  [246] = {.lex_state = 9, .external_lex_state = 2},
  [247] = {.lex_state = 4, .external_lex_state = 2},
  [248] = {.lex_state = 4, .external_lex_state = 2},
  [249] = {.lex_state = 9, .external_lex_state = 2},
  [250] = {.lex_state = 4, .external_lex_state = 2},
  [251] = {.lex_state = 4, .external_lex_state = 2},
  [252] = {.lex_state = 4, .external_lex_state = 2},
  [253] = {.lex_state = 4, .external_lex_state = 2},
  [254] = {.lex_state = 9, .external_lex_state = 2},
  [255] = {.lex_state = 4, .external_lex_state = 2},
  [256] = {.lex_state = 4, .external_lex_state = 2},
  [257] = {.lex_state = 4, .external_lex_state = 2},
  [258] = {.lex_state = 48, .external_lex_state = 2},
  [259] = {.lex_state = 48, .external_lex_state = 2},
  [260] = {.lex_state = 1, .external_lex_state = 2},
  [261] = {.lex_state = 6, .external_lex_state = 2},
  [262] = {.lex_state = 48, .external_lex_state = 2},
  [263] = {.lex_state = 48, .external_lex_state = 2},
  [264] = {.lex_state = 48, .external_lex_state = 2},
  [265] = {.lex_state = 48, .external_lex_state = 2},
  [266] = {.lex_state = 48, .external_lex_state = 2},
  [267] = {.lex_state = 48, .external_lex_state = 2},
  [268] = {.lex_state = 49, .external_lex_state = 2},
  [269] = {.lex_state = 48, .external_lex_state = 2},
  [270] = {.lex_state = 49, .external_lex_state = 2},
  [271] = {.lex_state = 48, .external_lex_state = 2},
  [272] = {.lex_state = 49, .external_lex_state = 2},
  [273] = {.lex_state = 49, .external_lex_state = 2},
  [274] = {.lex_state = 49, .external_lex_state = 2},
  [275] = {.lex_state = 49, .external_lex_state = 2},
  [276] = {.lex_state = 49, .external_lex_state = 2},
  [277] = {.lex_state = 49, .external_lex_state = 2},
  [278] = {.lex_state = 49, .external_lex_state = 2},
  [279] = {.lex_state = 6, .external_lex_state = 2},
  [280] = {.lex_state = 49, .external_lex_state = 2},
  [281] = {.lex_state = 49, .external_lex_state = 2},
  [282] = {.lex_state = 49, .external_lex_state = 2},
  [283] = {.lex_state = 49, .external_lex_state = 2},
  [284] = {.lex_state = 6, .external_lex_state = 2},
  [285] = {.lex_state = 49, .external_lex_state = 2},
  [286] = {.lex_state = 49, .external_lex_state = 2},
  [287] = {.lex_state = 49, .external_lex_state = 2},
  [288] = {.lex_state = 49, .external_lex_state = 2},
  [289] = {.lex_state = 49, .external_lex_state = 2},
  [290] = {.lex_state = 49, .external_lex_state = 2},
  [291] = {.lex_state = 49, .external_lex_state = 2},
  [292] = {.lex_state = 49, .external_lex_state = 2},
  [293] = {.lex_state = 49, .external_lex_state = 2},
  [294] = {.lex_state = 49, .external_lex_state = 2},
  [295] = {.lex_state = 49, .external_lex_state = 2},
  [296] = {.lex_state = 49, .external_lex_state = 2},
  [297] = {.lex_state = 49, .external_lex_state = 2},
  [298] = {.lex_state = 49, .external_lex_state = 2},
  [299] = {.lex_state = 49, .external_lex_state = 2},
  [300] = {.lex_state = 5, .external_lex_state = 2},
  [301] = {.lex_state = 5, .external_lex_state = 2},
  [302] = {.lex_state = 7, .external_lex_state = 2},
  [303] = {.lex_state = 7, .external_lex_state = 2},
  [304] = {.lex_state = 10, .external_lex_state = 2},
  [305] = {.lex_state = 5, .external_lex_state = 2},
  [306] = {.lex_state = 5, .external_lex_state = 2},
  [307] = {.lex_state = 5, .external_lex_state = 2},
  [308] = {.lex_state = 5, .external_lex_state = 2},
  [309] = {.lex_state = 5, .external_lex_state = 2},
  [310] = {.lex_state = 5, .external_lex_state = 2},
  [311] = {.lex_state = 5, .external_lex_state = 2},
  [312] = {.lex_state = 10, .external_lex_state = 2},
  [313] = {.lex_state = 10, .external_lex_state = 2},
  [314] = {.lex_state = 10, .external_lex_state = 2},
  [315] = {.lex_state = 5, .external_lex_state = 2},
  [316] = {.lex_state = 5, .external_lex_state = 2},
  [317] = {.lex_state = 10, .external_lex_state = 2},
  [318] = {.lex_state = 11, .external_lex_state = 2},
  [319] = {.lex_state = 11, .external_lex_state = 2},
  [320] = {.lex_state = 11, .external_lex_state = 2},
  [321] = {.lex_state = 11, .external_lex_state = 2},
  [322] = {.lex_state = 11, .external_lex_state = 2},
  [323] = {.lex_state = 11, .external_lex_state = 2},
  [324] = {.lex_state = 11, .external_lex_state = 2},
  [325] = {.lex_state = 11, .external_lex_state = 2},
  [326] = {.lex_state = 11, .external_lex_state = 2},
  [327] = {.lex_state = 11, .external_lex_state = 2},
  [328] = {.lex_state = 11, .external_lex_state = 2},
  [329] = {.lex_state = 11, .external_lex_state = 2},
  [330] = {.lex_state = 5, .external_lex_state = 2},
  [331] = {.lex_state = 5, .external_lex_state = 2},
  [332] = {.lex_state = 5, .external_lex_state = 2},
  [333] = {.lex_state = 5, .external_lex_state = 2},
  [334] = {.lex_state = 5, .external_lex_state = 2},
  [335] = {.lex_state = 5, .external_lex_state = 2},
  [336] = {.lex_state = 5, .external_lex_state = 2},
  [337] = {.lex_state = 5, .external_lex_state = 2},
  [338] = {.lex_state = 5, .external_lex_state = 2},
  [339] = {.lex_state = 5, .external_lex_state = 2},
  [340] = {.lex_state = 5, .external_lex_state = 2},
  [341] = {.lex_state = 5, .external_lex_state = 2},
  [342] = {.lex_state = 5, .external_lex_state = 2},
  [343] = {.lex_state = 5, .external_lex_state = 2},
  [344] = {.lex_state = 5, .external_lex_state = 2},
  [345] = {.lex_state = 5, .external_lex_state = 2},
  [346] = {.lex_state = 5, .external_lex_state = 2},
  [347] = {.lex_state = 5, .external_lex_state = 2},
  [348] = {.lex_state = 5, .external_lex_state = 2},
  [349] = {.lex_state = 5, .external_lex_state = 2},
  [350] = {.lex_state = 5, .external_lex_state = 2},
  [351] = {.lex_state = 5, .external_lex_state = 2},
  [352] = {.lex_state = 5, .external_lex_state = 2},
  [353] = {.lex_state = 5, .external_lex_state = 2},
  [354] = {.lex_state = 5, .external_lex_state = 2},
  [355] = {.lex_state = 5, .external_lex_state = 2},
  [356] = {.lex_state = 5, .external_lex_state = 2},
  [357] = {.lex_state = 5, .external_lex_state = 2},
  [358] = {.lex_state = 5, .external_lex_state = 2},
  [359] = {.lex_state = 5, .external_lex_state = 2},
  [360] = {.lex_state = 5, .external_lex_state = 2},
  [361] = {.lex_state = 5, .external_lex_state = 2},
  [362] = {.lex_state = 5, .external_lex_state = 2},
  [363] = {.lex_state = 5, .external_lex_state = 2},
  [364] = {.lex_state = 5, .external_lex_state = 2},
  [365] = {.lex_state = 5, .external_lex_state = 2},
  [366] = {.lex_state = 5, .external_lex_state = 2},
  [367] = {.lex_state = 5, .external_lex_state = 2},
  [368] = {.lex_state = 5, .external_lex_state = 2},
  [369] = {.lex_state = 5, .external_lex_state = 2},
  [370] = {.lex_state = 5, .external_lex_state = 2},
  [371] = {.lex_state = 5, .external_lex_state = 2},
  [372] = {.lex_state = 6, .external_lex_state = 2},
  [373] = {.lex_state = 6, .external_lex_state = 2},
  [374] = {.lex_state = 6, .external_lex_state = 2},
  [375] = {.lex_state = 1, .external_lex_state = 1},
  [376] = {.lex_state = 1, .external_lex_state = 1},
  [377] = {.lex_state = 1, .external_lex_state = 1},
  [378] = {.lex_state = 1, .external_lex_state = 1},
  [379] = {.lex_state = 1, .external_lex_state = 1},
  [380] = {.lex_state = 1, .external_lex_state = 1},
  [381] = {.lex_state = 1, .external_lex_state = 1},
  [382] = {.lex_state = 1, .external_lex_state = 1},
  [383] = {.lex_state = 1, .external_lex_state = 1},
  [384] = {.lex_state = 49, .external_lex_state = 1},
  [385] = {.lex_state = 49, .external_lex_state = 1},
  [386] = {.lex_state = 49, .external_lex_state = 1},
  [387] = {.lex_state = 49, .external_lex_state = 1},
  [388] = {.lex_state = 49, .external_lex_state = 1},
  [389] = {.lex_state = 12, .external_lex_state = 2},
  [390] = {.lex_state = 12, .external_lex_state = 2},
  [391] = {.lex_state = 6, .external_lex_state = 2},
  [392] = {.lex_state = 12, .external_lex_state = 2},
  [393] = {.lex_state = 6, .external_lex_state = 2},
  [394] = {.lex_state = 49, .external_lex_state = 2},
  [395] = {.lex_state = 12, .external_lex_state = 2},
  [396] = {.lex_state = 49, .external_lex_state = 2},
  [397] = {.lex_state = 12, .external_lex_state = 2},
  [398] = {.lex_state = 49, .external_lex_state = 2},
  [399] = {.lex_state = 12, .external_lex_state = 2},
  [400] = {.lex_state = 12, .external_lex_state = 2},
  [401] = {.lex_state = 49, .external_lex_state = 2},
  [402] = {.lex_state = 12, .external_lex_state = 2},
  [403] = {.lex_state = 12, .external_lex_state = 2},
  [404] = {.lex_state = 49, .external_lex_state = 2},
  [405] = {.lex_state = 12, .external_lex_state = 2},
  [406] = {.lex_state = 6, .external_lex_state = 2},
  [407] = {.lex_state = 12, .external_lex_state = 2},
  [408] = {.lex_state = 49, .external_lex_state = 2},
  [409] = {.lex_state = 12, .external_lex_state = 2},
  [410] = {.lex_state = 49, .external_lex_state = 2},
  [411] = {.lex_state = 49, .external_lex_state = 2},
  [412] = {.lex_state = 49, .external_lex_state = 2},
  [413] = {.lex_state = 49, .external_lex_state = 2},
  [414] = {.lex_state = 12, .external_lex_state = 2},
  [415] = {.lex_state = 15, .external_lex_state = 2},
  [416] = {.lex_state = 12, .external_lex_state = 2},
  [417] = {.lex_state = 15, .external_lex_state = 2},
  [418] = {.lex_state = 6, .external_lex_state = 2},
  [419] = {.lex_state = 12, .external_lex_state = 2},
  [420] = {.lex_state = 12, .external_lex_state = 2},
  [421] = {.lex_state = 0, .external_lex_state = 2},
  [422] = {.lex_state = 0, .external_lex_state = 2},
  [423] = {.lex_state = 6, .external_lex_state = 2},
  [424] = {.lex_state = 0, .external_lex_state = 2},
  [425] = {.lex_state = 49, .external_lex_state = 2},
  [426] = {.lex_state = 0, .external_lex_state = 2},
  [427] = {.lex_state = 49, .external_lex_state = 2},
  [428] = {.lex_state = 49, .external_lex_state = 2},
  [429] = {.lex_state = 0, .external_lex_state = 2},
  [430] = {.lex_state = 0, .external_lex_state = 2},
  [431] = {.lex_state = 0, .external_lex_state = 2},
  [432] = {.lex_state = 0, .external_lex_state = 2},
  [433] = {.lex_state = 0, .external_lex_state = 2},
  [434] = {.lex_state = 0, .external_lex_state = 2},
  [435] = {.lex_state = 6, .external_lex_state = 2},
  [436] = {.lex_state = 0, .external_lex_state = 2},
  [437] = {.lex_state = 0, .external_lex_state = 2},
  [438] = {.lex_state = 0, .external_lex_state = 2},
  [439] = {.lex_state = 6, .external_lex_state = 2},
  [440] = {.lex_state = 49, .external_lex_state = 2},
  [441] = {.lex_state = 0, .external_lex_state = 2},
  [442] = {.lex_state = 0, .external_lex_state = 2},
  [443] = {.lex_state = 12, .external_lex_state = 2},
  [444] = {.lex_state = 0, .external_lex_state = 2},
  [445] = {.lex_state = 49, .external_lex_state = 2},
  [446] = {.lex_state = 0, .external_lex_state = 2},
  [447] = {.lex_state = 0, .external_lex_state = 2},
  [448] = {.lex_state = 0, .external_lex_state = 2},
  [449] = {.lex_state = 0, .external_lex_state = 2},
  [450] = {.lex_state = 0, .external_lex_state = 2},
  [451] = {.lex_state = 0, .external_lex_state = 2},
  [452] = {.lex_state = 0, .external_lex_state = 2},
  [453] = {.lex_state = 0, .external_lex_state = 2},
  [454] = {.lex_state = 0, .external_lex_state = 2},
  [455] = {.lex_state = 49, .external_lex_state = 2},
  [456] = {.lex_state = 6, .external_lex_state = 2},
  [457] = {.lex_state = 0, .external_lex_state = 2},
  [458] = {.lex_state = 6, .external_lex_state = 2},
  [459] = {.lex_state = 6, .external_lex_state = 2},
  [460] = {.lex_state = 6, .external_lex_state = 2},
  [461] = {.lex_state = 0, .external_lex_state = 2},
  [462] = {.lex_state = 6, .external_lex_state = 2},
};

enum {
  ts_external_token__string_content = 0,
  ts_external_token_block_comment = 1,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__string_content] = sym__string_content,
  [ts_external_token_block_comment] = sym_block_comment,
};

static const bool ts_external_scanner_states[3][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__string_content] = true,
    [ts_external_token_block_comment] = true,
  },
  [2] = {
    [ts_external_token_block_comment] = true,
  },
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [sym__whitespace] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(3),
    [sym_line_break] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym__] = ACTIONS(1),
    [anon_sym_BQUOTE] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_COMMA2] = ACTIONS(1),
    [anon_sym_SEMI2] = ACTIONS(1),
    [anon_sym_break] = ACTIONS(1),
    [anon_sym_continue] = ACTIONS(1),
    [anon_sym_let] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_else] = ACTIONS(1),
    [anon_sym_while] = ACTIONS(1),
    [anon_sym_for] = ACTIONS(1),
    [anon_sym_in] = ACTIONS(1),
    [anon_sym_EQ_GT] = ACTIONS(1),
    [anon_sym_LPAREN2] = ACTIONS(1),
    [anon_sym_DOT2] = ACTIONS(1),
    [anon_sym_SQUOTE2] = ACTIONS(1),
    [anon_sym_QMARK2] = ACTIONS(1),
    [anon_sym_BANG2] = ACTIONS(1),
    [sym_none] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [sym_int_literal] = ACTIONS(1),
    [anon_sym_pt] = ACTIONS(1),
    [anon_sym_mm] = ACTIONS(1),
    [anon_sym_cm] = ACTIONS(1),
    [anon_sym_deg] = ACTIONS(1),
    [anon_sym_rad] = ACTIONS(1),
    [anon_sym_em] = ACTIONS(1),
    [anon_sym_fr] = ACTIONS(1),
    [aux_sym_string_literal_token1] = ACTIONS(1),
    [sym__not_an_escape_sequence] = ACTIONS(1),
    [sym_escape_sequence] = ACTIONS(1),
    [anon_sym_not] = ACTIONS(1),
    [anon_sym_and] = ACTIONS(1),
    [anon_sym_or] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_PLUS_EQ] = ACTIONS(1),
    [anon_sym_DASH_EQ] = ACTIONS(1),
    [anon_sym_STAR_EQ] = ACTIONS(1),
    [anon_sym_SLASH_EQ] = ACTIONS(1),
    [sym__string_content] = ACTIONS(1),
    [sym_block_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(449),
    [sym__markup] = STATE(164),
    [sym_quote] = STATE(164),
    [aux_sym__text] = STATE(164),
    [sym__code_mode] = STATE(164),
    [sym__code_block] = STATE(164),
    [sym_content_block] = STATE(164),
    [aux_sym_source_file_repeat1] = STATE(164),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym__whitespace] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(3),
    [sym_line_break] = ACTIONS(7),
    [anon_sym_DQUOTE] = ACTIONS(9),
    [aux_sym__text_token1] = ACTIONS(7),
    [anon_sym_SLASH] = ACTIONS(7),
    [anon_sym_TILDE] = ACTIONS(11),
    [anon_sym_DASH] = ACTIONS(11),
    [anon_sym_PLUS] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(11),
    [anon_sym_RPAREN] = ACTIONS(11),
    [anon_sym_SQUOTE] = ACTIONS(11),
    [anon_sym_DOT] = ACTIONS(11),
    [anon_sym_COLON] = ACTIONS(11),
    [anon_sym_STAR] = ACTIONS(11),
    [anon_sym__] = ACTIONS(7),
    [anon_sym_BQUOTE] = ACTIONS(11),
    [anon_sym_DOLLAR] = ACTIONS(11),
    [anon_sym_EQ] = ACTIONS(11),
    [anon_sym_LT] = ACTIONS(11),
    [anon_sym_GT] = ACTIONS(11),
    [anon_sym_AT] = ACTIONS(11),
    [anon_sym_COMMA] = ACTIONS(11),
    [anon_sym_SEMI] = ACTIONS(11),
    [anon_sym_QMARK] = ACTIONS(11),
    [anon_sym_BANG] = ACTIONS(11),
    [anon_sym_PERCENT] = ACTIONS(11),
    [anon_sym_POUND] = ACTIONS(13),
    [anon_sym_LBRACK] = ACTIONS(15),
    [sym_escape_sequence] = ACTIONS(11),
    [sym_block_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 26,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_LBRACE,
    ACTIONS(25), 1,
      anon_sym_RBRACE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_break,
    ACTIONS(31), 1,
      anon_sym_continue,
    ACTIONS(33), 1,
      anon_sym_let,
    ACTIONS(35), 1,
      anon_sym_if,
    ACTIONS(37), 1,
      anon_sym_while,
    ACTIONS(39), 1,
      anon_sym_for,
    ACTIONS(41), 1,
      sym_none,
    ACTIONS(45), 1,
      sym_int_literal,
    ACTIONS(47), 1,
      sym_float_literal,
    ACTIONS(49), 1,
      aux_sym_string_literal_token1,
    ACTIONS(51), 1,
      anon_sym_not,
    STATE(12), 1,
      aux_sym__statements_repeat1,
    STATE(225), 1,
      sym_expression,
    STATE(446), 1,
      sym__statements,
    STATE(453), 1,
      sym__unnamed_arguments,
    ACTIONS(19), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(43), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    STATE(217), 3,
      sym_boolean_literal,
      sym_numeric,
      sym_string_literal,
    STATE(321), 8,
      sym__expression_statement,
      sym__control_flow,
      sym_break_statement,
      sym_continue_statement,
      sym_let_declaration,
      sym_if_expression,
      sym_while_expression,
      sym_for_expression,
    STATE(221), 14,
      sym_code_block,
      sym_content_block,
      sym_parenthesized_expression,
      sym_array,
      sym_unnamed_function,
      sym__literal,
      sym_assignment,
      sym_function_call,
      sym_unary_operator,
      sym_not_operator,
      sym_boolean_operator,
      sym_binary_operator,
      sym_comparison_operator,
      sym_augmented_assignment,
  [105] = 26,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_break,
    ACTIONS(31), 1,
      anon_sym_continue,
    ACTIONS(33), 1,
      anon_sym_let,
    ACTIONS(35), 1,
      anon_sym_if,
    ACTIONS(37), 1,
      anon_sym_while,
    ACTIONS(39), 1,
      anon_sym_for,
    ACTIONS(41), 1,
      sym_none,
    ACTIONS(45), 1,
      sym_int_literal,
    ACTIONS(47), 1,
      sym_float_literal,
    ACTIONS(49), 1,
      aux_sym_string_literal_token1,
    ACTIONS(51), 1,
      anon_sym_not,
    ACTIONS(53), 1,
      anon_sym_RBRACE,
    STATE(12), 1,
      aux_sym__statements_repeat1,
    STATE(225), 1,
      sym_expression,
    STATE(450), 1,
      sym__statements,
    STATE(453), 1,
      sym__unnamed_arguments,
    ACTIONS(19), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(43), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    STATE(217), 3,
      sym_boolean_literal,
      sym_numeric,
      sym_string_literal,
    STATE(321), 8,
      sym__expression_statement,
      sym__control_flow,
      sym_break_statement,
      sym_continue_statement,
      sym_let_declaration,
      sym_if_expression,
      sym_while_expression,
      sym_for_expression,
    STATE(221), 14,
      sym_code_block,
      sym_content_block,
      sym_parenthesized_expression,
      sym_array,
      sym_unnamed_function,
      sym__literal,
      sym_assignment,
      sym_function_call,
      sym_unary_operator,
      sym_not_operator,
      sym_boolean_operator,
      sym_binary_operator,
      sym_comparison_operator,
      sym_augmented_assignment,
  [210] = 26,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_break,
    ACTIONS(31), 1,
      anon_sym_continue,
    ACTIONS(33), 1,
      anon_sym_let,
    ACTIONS(35), 1,
      anon_sym_if,
    ACTIONS(37), 1,
      anon_sym_while,
    ACTIONS(39), 1,
      anon_sym_for,
    ACTIONS(41), 1,
      sym_none,
    ACTIONS(45), 1,
      sym_int_literal,
    ACTIONS(47), 1,
      sym_float_literal,
    ACTIONS(49), 1,
      aux_sym_string_literal_token1,
    ACTIONS(51), 1,
      anon_sym_not,
    ACTIONS(55), 1,
      anon_sym_RBRACE,
    STATE(12), 1,
      aux_sym__statements_repeat1,
    STATE(225), 1,
      sym_expression,
    STATE(447), 1,
      sym__statements,
    STATE(453), 1,
      sym__unnamed_arguments,
    ACTIONS(19), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(43), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    STATE(217), 3,
      sym_boolean_literal,
      sym_numeric,
      sym_string_literal,
    STATE(321), 8,
      sym__expression_statement,
      sym__control_flow,
      sym_break_statement,
      sym_continue_statement,
      sym_let_declaration,
      sym_if_expression,
      sym_while_expression,
      sym_for_expression,
    STATE(221), 14,
      sym_code_block,
      sym_content_block,
      sym_parenthesized_expression,
      sym_array,
      sym_unnamed_function,
      sym__literal,
      sym_assignment,
      sym_function_call,
      sym_unary_operator,
      sym_not_operator,
      sym_boolean_operator,
      sym_binary_operator,
      sym_comparison_operator,
      sym_augmented_assignment,
  [315] = 26,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_break,
    ACTIONS(31), 1,
      anon_sym_continue,
    ACTIONS(33), 1,
      anon_sym_let,
    ACTIONS(35), 1,
      anon_sym_if,
    ACTIONS(37), 1,
      anon_sym_while,
    ACTIONS(39), 1,
      anon_sym_for,
    ACTIONS(41), 1,
      sym_none,
    ACTIONS(45), 1,
      sym_int_literal,
    ACTIONS(47), 1,
      sym_float_literal,
    ACTIONS(49), 1,
      aux_sym_string_literal_token1,
    ACTIONS(51), 1,
      anon_sym_not,
    ACTIONS(57), 1,
      anon_sym_RBRACE,
    STATE(12), 1,
      aux_sym__statements_repeat1,
    STATE(225), 1,
      sym_expression,
    STATE(451), 1,
      sym__statements,
    STATE(453), 1,
      sym__unnamed_arguments,
    ACTIONS(19), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(43), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    STATE(217), 3,
      sym_boolean_literal,
      sym_numeric,
      sym_string_literal,
    STATE(321), 8,
      sym__expression_statement,
      sym__control_flow,
      sym_break_statement,
      sym_continue_statement,
      sym_let_declaration,
      sym_if_expression,
      sym_while_expression,
      sym_for_expression,
    STATE(221), 14,
      sym_code_block,
      sym_content_block,
      sym_parenthesized_expression,
      sym_array,
      sym_unnamed_function,
      sym__literal,
      sym_assignment,
      sym_function_call,
      sym_unary_operator,
      sym_not_operator,
      sym_boolean_operator,
      sym_binary_operator,
      sym_comparison_operator,
      sym_augmented_assignment,
  [420] = 26,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_break,
    ACTIONS(31), 1,
      anon_sym_continue,
    ACTIONS(33), 1,
      anon_sym_let,
    ACTIONS(35), 1,
      anon_sym_if,
    ACTIONS(37), 1,
      anon_sym_while,
    ACTIONS(39), 1,
      anon_sym_for,
    ACTIONS(41), 1,
      sym_none,
    ACTIONS(45), 1,
      sym_int_literal,
    ACTIONS(47), 1,
      sym_float_literal,
    ACTIONS(49), 1,
      aux_sym_string_literal_token1,
    ACTIONS(51), 1,
      anon_sym_not,
    ACTIONS(59), 1,
      anon_sym_RBRACE,
    STATE(12), 1,
      aux_sym__statements_repeat1,
    STATE(225), 1,
      sym_expression,
    STATE(444), 1,
      sym__statements,
    STATE(453), 1,
      sym__unnamed_arguments,
    ACTIONS(19), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(43), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    STATE(217), 3,
      sym_boolean_literal,
      sym_numeric,
      sym_string_literal,
    STATE(321), 8,
      sym__expression_statement,
      sym__control_flow,
      sym_break_statement,
      sym_continue_statement,
      sym_let_declaration,
      sym_if_expression,
      sym_while_expression,
      sym_for_expression,
    STATE(221), 14,
      sym_code_block,
      sym_content_block,
      sym_parenthesized_expression,
      sym_array,
      sym_unnamed_function,
      sym__literal,
      sym_assignment,
      sym_function_call,
      sym_unary_operator,
      sym_not_operator,
      sym_boolean_operator,
      sym_binary_operator,
      sym_comparison_operator,
      sym_augmented_assignment,
  [525] = 26,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_break,
    ACTIONS(31), 1,
      anon_sym_continue,
    ACTIONS(33), 1,
      anon_sym_let,
    ACTIONS(35), 1,
      anon_sym_if,
    ACTIONS(37), 1,
      anon_sym_while,
    ACTIONS(39), 1,
      anon_sym_for,
    ACTIONS(41), 1,
      sym_none,
    ACTIONS(45), 1,
      sym_int_literal,
    ACTIONS(47), 1,
      sym_float_literal,
    ACTIONS(49), 1,
      aux_sym_string_literal_token1,
    ACTIONS(51), 1,
      anon_sym_not,
    ACTIONS(61), 1,
      anon_sym_RBRACE,
    STATE(12), 1,
      aux_sym__statements_repeat1,
    STATE(225), 1,
      sym_expression,
    STATE(422), 1,
      sym__statements,
    STATE(453), 1,
      sym__unnamed_arguments,
    ACTIONS(19), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(43), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    STATE(217), 3,
      sym_boolean_literal,
      sym_numeric,
      sym_string_literal,
    STATE(321), 8,
      sym__expression_statement,
      sym__control_flow,
      sym_break_statement,
      sym_continue_statement,
      sym_let_declaration,
      sym_if_expression,
      sym_while_expression,
      sym_for_expression,
    STATE(221), 14,
      sym_code_block,
      sym_content_block,
      sym_parenthesized_expression,
      sym_array,
      sym_unnamed_function,
      sym__literal,
      sym_assignment,
      sym_function_call,
      sym_unary_operator,
      sym_not_operator,
      sym_boolean_operator,
      sym_binary_operator,
      sym_comparison_operator,
      sym_augmented_assignment,
  [630] = 26,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_break,
    ACTIONS(31), 1,
      anon_sym_continue,
    ACTIONS(33), 1,
      anon_sym_let,
    ACTIONS(35), 1,
      anon_sym_if,
    ACTIONS(37), 1,
      anon_sym_while,
    ACTIONS(39), 1,
      anon_sym_for,
    ACTIONS(41), 1,
      sym_none,
    ACTIONS(45), 1,
      sym_int_literal,
    ACTIONS(47), 1,
      sym_float_literal,
    ACTIONS(49), 1,
      aux_sym_string_literal_token1,
    ACTIONS(51), 1,
      anon_sym_not,
    ACTIONS(63), 1,
      anon_sym_RBRACE,
    STATE(12), 1,
      aux_sym__statements_repeat1,
    STATE(225), 1,
      sym_expression,
    STATE(442), 1,
      sym__statements,
    STATE(453), 1,
      sym__unnamed_arguments,
    ACTIONS(19), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(43), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    STATE(217), 3,
      sym_boolean_literal,
      sym_numeric,
      sym_string_literal,
    STATE(321), 8,
      sym__expression_statement,
      sym__control_flow,
      sym_break_statement,
      sym_continue_statement,
      sym_let_declaration,
      sym_if_expression,
      sym_while_expression,
      sym_for_expression,
    STATE(221), 14,
      sym_code_block,
      sym_content_block,
      sym_parenthesized_expression,
      sym_array,
      sym_unnamed_function,
      sym__literal,
      sym_assignment,
      sym_function_call,
      sym_unary_operator,
      sym_not_operator,
      sym_boolean_operator,
      sym_binary_operator,
      sym_comparison_operator,
      sym_augmented_assignment,
  [735] = 26,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_break,
    ACTIONS(31), 1,
      anon_sym_continue,
    ACTIONS(33), 1,
      anon_sym_let,
    ACTIONS(35), 1,
      anon_sym_if,
    ACTIONS(37), 1,
      anon_sym_while,
    ACTIONS(39), 1,
      anon_sym_for,
    ACTIONS(41), 1,
      sym_none,
    ACTIONS(45), 1,
      sym_int_literal,
    ACTIONS(47), 1,
      sym_float_literal,
    ACTIONS(49), 1,
      aux_sym_string_literal_token1,
    ACTIONS(51), 1,
      anon_sym_not,
    ACTIONS(65), 1,
      anon_sym_RBRACE,
    STATE(12), 1,
      aux_sym__statements_repeat1,
    STATE(225), 1,
      sym_expression,
    STATE(429), 1,
      sym__statements,
    STATE(453), 1,
      sym__unnamed_arguments,
    ACTIONS(19), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(43), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    STATE(217), 3,
      sym_boolean_literal,
      sym_numeric,
      sym_string_literal,
    STATE(321), 8,
      sym__expression_statement,
      sym__control_flow,
      sym_break_statement,
      sym_continue_statement,
      sym_let_declaration,
      sym_if_expression,
      sym_while_expression,
      sym_for_expression,
    STATE(221), 14,
      sym_code_block,
      sym_content_block,
      sym_parenthesized_expression,
      sym_array,
      sym_unnamed_function,
      sym__literal,
      sym_assignment,
      sym_function_call,
      sym_unary_operator,
      sym_not_operator,
      sym_boolean_operator,
      sym_binary_operator,
      sym_comparison_operator,
      sym_augmented_assignment,
  [840] = 26,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_break,
    ACTIONS(31), 1,
      anon_sym_continue,
    ACTIONS(33), 1,
      anon_sym_let,
    ACTIONS(35), 1,
      anon_sym_if,
    ACTIONS(37), 1,
      anon_sym_while,
    ACTIONS(39), 1,
      anon_sym_for,
    ACTIONS(41), 1,
      sym_none,
    ACTIONS(45), 1,
      sym_int_literal,
    ACTIONS(47), 1,
      sym_float_literal,
    ACTIONS(49), 1,
      aux_sym_string_literal_token1,
    ACTIONS(51), 1,
      anon_sym_not,
    ACTIONS(67), 1,
      anon_sym_RBRACE,
    STATE(12), 1,
      aux_sym__statements_repeat1,
    STATE(225), 1,
      sym_expression,
    STATE(438), 1,
      sym__statements,
    STATE(453), 1,
      sym__unnamed_arguments,
    ACTIONS(19), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(43), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    STATE(217), 3,
      sym_boolean_literal,
      sym_numeric,
      sym_string_literal,
    STATE(321), 8,
      sym__expression_statement,
      sym__control_flow,
      sym_break_statement,
      sym_continue_statement,
      sym_let_declaration,
      sym_if_expression,
      sym_while_expression,
      sym_for_expression,
    STATE(221), 14,
      sym_code_block,
      sym_content_block,
      sym_parenthesized_expression,
      sym_array,
      sym_unnamed_function,
      sym__literal,
      sym_assignment,
      sym_function_call,
      sym_unary_operator,
      sym_not_operator,
      sym_boolean_operator,
      sym_binary_operator,
      sym_comparison_operator,
      sym_augmented_assignment,
  [945] = 26,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_break,
    ACTIONS(31), 1,
      anon_sym_continue,
    ACTIONS(33), 1,
      anon_sym_let,
    ACTIONS(35), 1,
      anon_sym_if,
    ACTIONS(37), 1,
      anon_sym_while,
    ACTIONS(39), 1,
      anon_sym_for,
    ACTIONS(41), 1,
      sym_none,
    ACTIONS(45), 1,
      sym_int_literal,
    ACTIONS(47), 1,
      sym_float_literal,
    ACTIONS(49), 1,
      aux_sym_string_literal_token1,
    ACTIONS(51), 1,
      anon_sym_not,
    ACTIONS(69), 1,
      anon_sym_RBRACE,
    STATE(12), 1,
      aux_sym__statements_repeat1,
    STATE(225), 1,
      sym_expression,
    STATE(434), 1,
      sym__statements,
    STATE(453), 1,
      sym__unnamed_arguments,
    ACTIONS(19), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(43), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    STATE(217), 3,
      sym_boolean_literal,
      sym_numeric,
      sym_string_literal,
    STATE(321), 8,
      sym__expression_statement,
      sym__control_flow,
      sym_break_statement,
      sym_continue_statement,
      sym_let_declaration,
      sym_if_expression,
      sym_while_expression,
      sym_for_expression,
    STATE(221), 14,
      sym_code_block,
      sym_content_block,
      sym_parenthesized_expression,
      sym_array,
      sym_unnamed_function,
      sym__literal,
      sym_assignment,
      sym_function_call,
      sym_unary_operator,
      sym_not_operator,
      sym_boolean_operator,
      sym_binary_operator,
      sym_comparison_operator,
      sym_augmented_assignment,
  [1050] = 25,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_break,
    ACTIONS(31), 1,
      anon_sym_continue,
    ACTIONS(33), 1,
      anon_sym_let,
    ACTIONS(35), 1,
      anon_sym_if,
    ACTIONS(37), 1,
      anon_sym_while,
    ACTIONS(39), 1,
      anon_sym_for,
    ACTIONS(41), 1,
      sym_none,
    ACTIONS(45), 1,
      sym_int_literal,
    ACTIONS(47), 1,
      sym_float_literal,
    ACTIONS(49), 1,
      aux_sym_string_literal_token1,
    ACTIONS(51), 1,
      anon_sym_not,
    ACTIONS(71), 1,
      anon_sym_RBRACE,
    STATE(15), 1,
      aux_sym__statements_repeat1,
    STATE(225), 1,
      sym_expression,
    STATE(453), 1,
      sym__unnamed_arguments,
    ACTIONS(19), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(43), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    STATE(217), 3,
      sym_boolean_literal,
      sym_numeric,
      sym_string_literal,
    STATE(321), 8,
      sym__expression_statement,
      sym__control_flow,
      sym_break_statement,
      sym_continue_statement,
      sym_let_declaration,
      sym_if_expression,
      sym_while_expression,
      sym_for_expression,
    STATE(221), 14,
      sym_code_block,
      sym_content_block,
      sym_parenthesized_expression,
      sym_array,
      sym_unnamed_function,
      sym__literal,
      sym_assignment,
      sym_function_call,
      sym_unary_operator,
      sym_not_operator,
      sym_boolean_operator,
      sym_binary_operator,
      sym_comparison_operator,
      sym_augmented_assignment,
  [1152] = 10,
    ACTIONS(77), 1,
      anon_sym_EQ_GT,
    ACTIONS(79), 1,
      anon_sym_LPAREN2,
    ACTIONS(81), 1,
      anon_sym_DOT2,
    ACTIONS(85), 1,
      anon_sym_BANG2,
    STATE(51), 1,
      sym_parameters,
    ACTIONS(83), 2,
      anon_sym_SQUOTE2,
      anon_sym_QMARK2,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(87), 4,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
    ACTIONS(75), 18,
      anon_sym_DQUOTE,
      anon_sym_TILDE,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_PERCENT,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_escape_sequence,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(73), 19,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_SQUOTE,
      anon_sym_DOT,
      anon_sym_STAR,
      anon_sym__,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_in,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
  [1224] = 10,
    ACTIONS(77), 1,
      anon_sym_EQ_GT,
    ACTIONS(89), 1,
      anon_sym_LPAREN2,
    ACTIONS(91), 1,
      anon_sym_DOT2,
    ACTIONS(95), 1,
      anon_sym_BANG2,
    STATE(27), 1,
      sym_parameters,
    ACTIONS(93), 2,
      anon_sym_SQUOTE2,
      anon_sym_QMARK2,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(97), 4,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
    ACTIONS(75), 18,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
      anon_sym_TILDE,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_PERCENT,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_escape_sequence,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(73), 19,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_SQUOTE,
      anon_sym_DOT,
      anon_sym_STAR,
      anon_sym__,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_in,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
  [1296] = 25,
    ACTIONS(99), 1,
      sym_identifier,
    ACTIONS(105), 1,
      anon_sym_LPAREN,
    ACTIONS(108), 1,
      anon_sym_LBRACE,
    ACTIONS(111), 1,
      anon_sym_RBRACE,
    ACTIONS(113), 1,
      anon_sym_LBRACK,
    ACTIONS(116), 1,
      anon_sym_break,
    ACTIONS(119), 1,
      anon_sym_continue,
    ACTIONS(122), 1,
      anon_sym_let,
    ACTIONS(125), 1,
      anon_sym_if,
    ACTIONS(128), 1,
      anon_sym_while,
    ACTIONS(131), 1,
      anon_sym_for,
    ACTIONS(134), 1,
      sym_none,
    ACTIONS(140), 1,
      sym_int_literal,
    ACTIONS(143), 1,
      sym_float_literal,
    ACTIONS(146), 1,
      aux_sym_string_literal_token1,
    ACTIONS(149), 1,
      anon_sym_not,
    STATE(15), 1,
      aux_sym__statements_repeat1,
    STATE(225), 1,
      sym_expression,
    STATE(453), 1,
      sym__unnamed_arguments,
    ACTIONS(102), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(137), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    STATE(217), 3,
      sym_boolean_literal,
      sym_numeric,
      sym_string_literal,
    STATE(321), 8,
      sym__expression_statement,
      sym__control_flow,
      sym_break_statement,
      sym_continue_statement,
      sym_let_declaration,
      sym_if_expression,
      sym_while_expression,
      sym_for_expression,
    STATE(221), 14,
      sym_code_block,
      sym_content_block,
      sym_parenthesized_expression,
      sym_array,
      sym_unnamed_function,
      sym__literal,
      sym_assignment,
      sym_function_call,
      sym_unary_operator,
      sym_not_operator,
      sym_boolean_operator,
      sym_binary_operator,
      sym_comparison_operator,
      sym_augmented_assignment,
  [1398] = 24,
    ACTIONS(152), 1,
      sym_identifier,
    ACTIONS(156), 1,
      anon_sym_LPAREN,
    ACTIONS(158), 1,
      anon_sym_LBRACE,
    ACTIONS(160), 1,
      anon_sym_LBRACK,
    ACTIONS(162), 1,
      anon_sym_break,
    ACTIONS(164), 1,
      anon_sym_continue,
    ACTIONS(166), 1,
      anon_sym_let,
    ACTIONS(168), 1,
      anon_sym_if,
    ACTIONS(170), 1,
      anon_sym_while,
    ACTIONS(172), 1,
      anon_sym_for,
    ACTIONS(174), 1,
      sym_none,
    ACTIONS(178), 1,
      sym_int_literal,
    ACTIONS(180), 1,
      sym_float_literal,
    ACTIONS(182), 1,
      aux_sym_string_literal_token1,
    ACTIONS(184), 1,
      anon_sym_not,
    STATE(91), 1,
      sym_expression,
    STATE(432), 1,
      sym__unnamed_arguments,
    ACTIONS(154), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(176), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    STATE(97), 3,
      sym_code_block,
      sym_content_block,
      sym_function_call,
    STATE(117), 3,
      sym_boolean_literal,
      sym_numeric,
      sym_string_literal,
    STATE(278), 8,
      sym__expression_statement,
      sym__control_flow,
      sym_break_statement,
      sym_continue_statement,
      sym_let_declaration,
      sym_if_expression,
      sym_while_expression,
      sym_for_expression,
    STATE(94), 11,
      sym_parenthesized_expression,
      sym_array,
      sym_unnamed_function,
      sym__literal,
      sym_assignment,
      sym_unary_operator,
      sym_not_operator,
      sym_boolean_operator,
      sym_binary_operator,
      sym_comparison_operator,
      sym_augmented_assignment,
  [1496] = 24,
    ACTIONS(186), 1,
      sym_identifier,
    ACTIONS(190), 1,
      anon_sym_LPAREN,
    ACTIONS(192), 1,
      anon_sym_LBRACE,
    ACTIONS(194), 1,
      anon_sym_LBRACK,
    ACTIONS(196), 1,
      anon_sym_break,
    ACTIONS(198), 1,
      anon_sym_continue,
    ACTIONS(200), 1,
      anon_sym_let,
    ACTIONS(202), 1,
      anon_sym_if,
    ACTIONS(204), 1,
      anon_sym_while,
    ACTIONS(206), 1,
      anon_sym_for,
    ACTIONS(208), 1,
      sym_none,
    ACTIONS(212), 1,
      sym_int_literal,
    ACTIONS(214), 1,
      sym_float_literal,
    ACTIONS(216), 1,
      aux_sym_string_literal_token1,
    ACTIONS(218), 1,
      anon_sym_not,
    STATE(68), 1,
      sym_expression,
    STATE(433), 1,
      sym__unnamed_arguments,
    ACTIONS(188), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(210), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    STATE(81), 3,
      sym_code_block,
      sym_content_block,
      sym_function_call,
    STATE(82), 3,
      sym_boolean_literal,
      sym_numeric,
      sym_string_literal,
    STATE(276), 8,
      sym__expression_statement,
      sym__control_flow,
      sym_break_statement,
      sym_continue_statement,
      sym_let_declaration,
      sym_if_expression,
      sym_while_expression,
      sym_for_expression,
    STATE(90), 11,
      sym_parenthesized_expression,
      sym_array,
      sym_unnamed_function,
      sym__literal,
      sym_assignment,
      sym_unary_operator,
      sym_not_operator,
      sym_boolean_operator,
      sym_binary_operator,
      sym_comparison_operator,
      sym_augmented_assignment,
  [1594] = 6,
    ACTIONS(224), 1,
      anon_sym_PERCENT,
    STATE(119), 1,
      sym_unit,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(226), 8,
      anon_sym_in,
      anon_sym_pt,
      anon_sym_mm,
      anon_sym_cm,
      anon_sym_deg,
      anon_sym_rad,
      anon_sym_em,
      anon_sym_fr,
    ACTIONS(220), 11,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym__,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(222), 24,
      anon_sym_DQUOTE,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_QMARK,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_escape_sequence,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [1655] = 6,
    ACTIONS(228), 1,
      anon_sym_PERCENT,
    STATE(77), 1,
      sym_unit,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(230), 8,
      anon_sym_in,
      anon_sym_pt,
      anon_sym_mm,
      anon_sym_cm,
      anon_sym_deg,
      anon_sym_rad,
      anon_sym_em,
      anon_sym_fr,
    ACTIONS(220), 11,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym__,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(222), 24,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_QMARK,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_escape_sequence,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [1716] = 11,
    ACTIONS(77), 1,
      anon_sym_EQ_GT,
    ACTIONS(232), 1,
      anon_sym_EQ,
    ACTIONS(234), 1,
      anon_sym_LPAREN2,
    ACTIONS(236), 1,
      anon_sym_DOT2,
    ACTIONS(240), 1,
      anon_sym_BANG2,
    STATE(154), 1,
      sym_parameters,
    ACTIONS(238), 2,
      anon_sym_SQUOTE2,
      anon_sym_QMARK2,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(242), 4,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
    ACTIONS(75), 10,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_SEMI2,
      sym_float_literal,
      aux_sym_string_literal_token1,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(73), 22,
      sym_identifier,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_STAR,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_let,
      anon_sym_if,
      anon_sym_while,
      anon_sym_for,
      anon_sym_in,
      sym_none,
      anon_sym_true,
      anon_sym_false,
      sym_int_literal,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
  [1786] = 5,
    ACTIONS(246), 1,
      sym_identifier,
    STATE(34), 1,
      sym_function_call,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(248), 16,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym_SQUOTE,
      anon_sym_DOT,
      anon_sym__,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_in,
      anon_sym_BANG2,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(244), 25,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_PERCENT,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_DOT2,
      anon_sym_SQUOTE2,
      anon_sym_QMARK2,
      sym_escape_sequence,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [1843] = 8,
    ACTIONS(89), 1,
      anon_sym_LPAREN2,
    ACTIONS(250), 1,
      anon_sym_DOT2,
    ACTIONS(254), 1,
      anon_sym_BANG2,
    STATE(40), 1,
      sym_parameters,
    ACTIONS(252), 2,
      anon_sym_SQUOTE2,
      anon_sym_QMARK2,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(73), 16,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym_LPAREN,
      anon_sym_SQUOTE,
      anon_sym_DOT,
      anon_sym__,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_in,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(75), 21,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_PERCENT,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_escape_sequence,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [1906] = 5,
    ACTIONS(246), 1,
      sym_identifier,
    STATE(35), 1,
      sym_function_call,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(258), 16,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym_SQUOTE,
      anon_sym_DOT,
      anon_sym__,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_in,
      anon_sym_BANG2,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(256), 25,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_PERCENT,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_DOT2,
      anon_sym_SQUOTE2,
      anon_sym_QMARK2,
      sym_escape_sequence,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [1963] = 8,
    ACTIONS(79), 1,
      anon_sym_LPAREN2,
    ACTIONS(260), 1,
      anon_sym_DOT2,
    ACTIONS(264), 1,
      anon_sym_BANG2,
    STATE(32), 1,
      sym_parameters,
    ACTIONS(262), 2,
      anon_sym_SQUOTE2,
      anon_sym_QMARK2,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(73), 16,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym_LPAREN,
      anon_sym_SQUOTE,
      anon_sym_DOT,
      anon_sym__,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_in,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(75), 21,
      anon_sym_DQUOTE,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_PERCENT,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_escape_sequence,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [2026] = 5,
    ACTIONS(266), 1,
      sym_identifier,
    STATE(30), 1,
      sym_function_call,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(248), 16,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym_SQUOTE,
      anon_sym_DOT,
      anon_sym__,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_in,
      anon_sym_BANG2,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(244), 25,
      anon_sym_DQUOTE,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_PERCENT,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DOT2,
      anon_sym_SQUOTE2,
      anon_sym_QMARK2,
      sym_escape_sequence,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [2083] = 5,
    ACTIONS(266), 1,
      sym_identifier,
    STATE(39), 1,
      sym_function_call,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(258), 16,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym_SQUOTE,
      anon_sym_DOT,
      anon_sym__,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_in,
      anon_sym_BANG2,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(256), 25,
      anon_sym_DQUOTE,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_PERCENT,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DOT2,
      anon_sym_SQUOTE2,
      anon_sym_QMARK2,
      sym_escape_sequence,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [2140] = 6,
    ACTIONS(272), 1,
      anon_sym_DOT2,
    ACTIONS(276), 1,
      anon_sym_BANG2,
    ACTIONS(274), 2,
      anon_sym_SQUOTE2,
      anon_sym_QMARK2,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(270), 15,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym_SQUOTE,
      anon_sym_DOT,
      anon_sym__,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_in,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(268), 22,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_PERCENT,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_escape_sequence,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [2197] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(278), 16,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym_SQUOTE,
      anon_sym_DOT,
      anon_sym__,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_in,
      anon_sym_BANG2,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(280), 25,
      anon_sym_DQUOTE,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_PERCENT,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DOT2,
      anon_sym_SQUOTE2,
      anon_sym_QMARK2,
      sym_escape_sequence,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [2248] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(282), 16,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym_SQUOTE,
      anon_sym_DOT,
      anon_sym__,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_in,
      anon_sym_BANG2,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(284), 25,
      anon_sym_DQUOTE,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_PERCENT,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DOT2,
      anon_sym_SQUOTE2,
      anon_sym_QMARK2,
      sym_escape_sequence,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [2299] = 5,
    ACTIONS(292), 1,
      anon_sym_BANG2,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(290), 3,
      anon_sym_DOT2,
      anon_sym_SQUOTE2,
      anon_sym_QMARK2,
    ACTIONS(286), 15,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym_SQUOTE,
      anon_sym_DOT,
      anon_sym__,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_in,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(288), 22,
      anon_sym_DQUOTE,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_PERCENT,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_escape_sequence,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [2354] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(248), 16,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym_SQUOTE,
      anon_sym_DOT,
      anon_sym__,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_in,
      anon_sym_BANG2,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(244), 25,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_PERCENT,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_DOT2,
      anon_sym_SQUOTE2,
      anon_sym_QMARK2,
      sym_escape_sequence,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [2405] = 6,
    ACTIONS(294), 1,
      anon_sym_DOT2,
    ACTIONS(298), 1,
      anon_sym_BANG2,
    ACTIONS(296), 2,
      anon_sym_SQUOTE2,
      anon_sym_QMARK2,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(270), 15,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym_SQUOTE,
      anon_sym_DOT,
      anon_sym__,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_in,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(268), 22,
      anon_sym_DQUOTE,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_PERCENT,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_escape_sequence,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [2462] = 6,
    ACTIONS(300), 1,
      anon_sym_PERCENT,
    STATE(233), 1,
      sym_unit,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(302), 8,
      anon_sym_in,
      anon_sym_pt,
      anon_sym_mm,
      anon_sym_cm,
      anon_sym_deg,
      anon_sym_rad,
      anon_sym_em,
      anon_sym_fr,
    ACTIONS(222), 14,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_STAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_SEMI2,
      sym_float_literal,
      aux_sym_string_literal_token1,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(220), 17,
      sym_identifier,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_let,
      anon_sym_if,
      anon_sym_while,
      anon_sym_for,
      sym_none,
      anon_sym_true,
      anon_sym_false,
      sym_int_literal,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
  [2519] = 5,
    ACTIONS(306), 1,
      anon_sym_BANG2,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(304), 3,
      anon_sym_DOT2,
      anon_sym_SQUOTE2,
      anon_sym_QMARK2,
    ACTIONS(286), 15,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym_SQUOTE,
      anon_sym_DOT,
      anon_sym__,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_in,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(288), 22,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_PERCENT,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_escape_sequence,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [2574] = 5,
    ACTIONS(314), 1,
      anon_sym_BANG2,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(312), 3,
      anon_sym_DOT2,
      anon_sym_SQUOTE2,
      anon_sym_QMARK2,
    ACTIONS(310), 15,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym_SQUOTE,
      anon_sym_DOT,
      anon_sym__,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_in,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(308), 22,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_PERCENT,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_escape_sequence,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [2629] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(282), 16,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym_SQUOTE,
      anon_sym_DOT,
      anon_sym__,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_in,
      anon_sym_BANG2,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(284), 25,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_PERCENT,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_DOT2,
      anon_sym_SQUOTE2,
      anon_sym_QMARK2,
      sym_escape_sequence,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [2680] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(318), 16,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym_SQUOTE,
      anon_sym_DOT,
      anon_sym__,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_in,
      anon_sym_BANG2,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(316), 25,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_PERCENT,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_DOT2,
      anon_sym_SQUOTE2,
      anon_sym_QMARK2,
      sym_escape_sequence,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [2731] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(318), 16,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym_SQUOTE,
      anon_sym_DOT,
      anon_sym__,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_in,
      anon_sym_BANG2,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(316), 25,
      anon_sym_DQUOTE,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_PERCENT,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DOT2,
      anon_sym_SQUOTE2,
      anon_sym_QMARK2,
      sym_escape_sequence,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [2782] = 5,
    ACTIONS(322), 1,
      anon_sym_BANG2,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(320), 3,
      anon_sym_DOT2,
      anon_sym_SQUOTE2,
      anon_sym_QMARK2,
    ACTIONS(310), 15,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym_SQUOTE,
      anon_sym_DOT,
      anon_sym__,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_in,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(308), 22,
      anon_sym_DQUOTE,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_PERCENT,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_escape_sequence,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [2837] = 6,
    ACTIONS(324), 1,
      anon_sym_DOT2,
    ACTIONS(328), 1,
      anon_sym_BANG2,
    ACTIONS(326), 2,
      anon_sym_SQUOTE2,
      anon_sym_QMARK2,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(270), 15,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym_SQUOTE,
      anon_sym_DOT,
      anon_sym__,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_in,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(268), 22,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_PERCENT,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_escape_sequence,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [2894] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(248), 16,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym_SQUOTE,
      anon_sym_DOT,
      anon_sym__,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_in,
      anon_sym_BANG2,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(244), 25,
      anon_sym_DQUOTE,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_PERCENT,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DOT2,
      anon_sym_SQUOTE2,
      anon_sym_QMARK2,
      sym_escape_sequence,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [2945] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(258), 16,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym_SQUOTE,
      anon_sym_DOT,
      anon_sym__,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_in,
      anon_sym_BANG2,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(256), 25,
      anon_sym_DQUOTE,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_PERCENT,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DOT2,
      anon_sym_SQUOTE2,
      anon_sym_QMARK2,
      sym_escape_sequence,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [2996] = 5,
    ACTIONS(332), 1,
      anon_sym_BANG2,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(330), 3,
      anon_sym_DOT2,
      anon_sym_SQUOTE2,
      anon_sym_QMARK2,
    ACTIONS(286), 15,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym_SQUOTE,
      anon_sym_DOT,
      anon_sym__,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_in,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(288), 22,
      anon_sym_DQUOTE,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_PERCENT,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_escape_sequence,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [3051] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(278), 16,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym_SQUOTE,
      anon_sym_DOT,
      anon_sym__,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_in,
      anon_sym_BANG2,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(280), 25,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_PERCENT,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_DOT2,
      anon_sym_SQUOTE2,
      anon_sym_QMARK2,
      sym_escape_sequence,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [3102] = 5,
    ACTIONS(336), 1,
      anon_sym_BANG2,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(334), 3,
      anon_sym_DOT2,
      anon_sym_SQUOTE2,
      anon_sym_QMARK2,
    ACTIONS(286), 15,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym_SQUOTE,
      anon_sym_DOT,
      anon_sym__,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_in,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(288), 22,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_PERCENT,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_escape_sequence,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [3157] = 5,
    ACTIONS(340), 1,
      anon_sym_BANG2,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(338), 3,
      anon_sym_DOT2,
      anon_sym_SQUOTE2,
      anon_sym_QMARK2,
    ACTIONS(310), 15,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym_SQUOTE,
      anon_sym_DOT,
      anon_sym__,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_in,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(308), 22,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_PERCENT,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_escape_sequence,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [3212] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(344), 16,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym_SQUOTE,
      anon_sym_DOT,
      anon_sym__,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_in,
      anon_sym_BANG2,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(342), 25,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_PERCENT,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_DOT2,
      anon_sym_SQUOTE2,
      anon_sym_QMARK2,
      sym_escape_sequence,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [3263] = 5,
    ACTIONS(348), 1,
      anon_sym_BANG2,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(346), 3,
      anon_sym_DOT2,
      anon_sym_SQUOTE2,
      anon_sym_QMARK2,
    ACTIONS(310), 15,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym_SQUOTE,
      anon_sym_DOT,
      anon_sym__,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_in,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(308), 22,
      anon_sym_DQUOTE,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_PERCENT,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_escape_sequence,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [3318] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(344), 16,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym_SQUOTE,
      anon_sym_DOT,
      anon_sym__,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_in,
      anon_sym_BANG2,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(342), 25,
      anon_sym_DQUOTE,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_PERCENT,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DOT2,
      anon_sym_SQUOTE2,
      anon_sym_QMARK2,
      sym_escape_sequence,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [3369] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(258), 16,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym_SQUOTE,
      anon_sym_DOT,
      anon_sym__,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_in,
      anon_sym_BANG2,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(256), 25,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_PERCENT,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_DOT2,
      anon_sym_SQUOTE2,
      anon_sym_QMARK2,
      sym_escape_sequence,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [3420] = 6,
    ACTIONS(350), 1,
      anon_sym_DOT2,
    ACTIONS(354), 1,
      anon_sym_BANG2,
    ACTIONS(352), 2,
      anon_sym_SQUOTE2,
      anon_sym_QMARK2,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(270), 15,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym_SQUOTE,
      anon_sym_DOT,
      anon_sym__,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_in,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(268), 22,
      anon_sym_DQUOTE,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_PERCENT,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_escape_sequence,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [3477] = 5,
    ACTIONS(266), 1,
      sym_identifier,
    STATE(43), 1,
      sym_function_call,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(248), 12,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym__,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG,
      anon_sym_in,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(244), 25,
      anon_sym_DQUOTE,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_QMARK,
      anon_sym_PERCENT,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_escape_sequence,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [3530] = 5,
    ACTIONS(266), 1,
      sym_identifier,
    STATE(48), 1,
      sym_function_call,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(258), 12,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym__,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG,
      anon_sym_in,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(256), 25,
      anon_sym_DQUOTE,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_QMARK,
      anon_sym_PERCENT,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_escape_sequence,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [3583] = 5,
    ACTIONS(246), 1,
      sym_identifier,
    STATE(46), 1,
      sym_function_call,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(258), 12,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym__,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG,
      anon_sym_in,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(256), 25,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_QMARK,
      anon_sym_PERCENT,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_escape_sequence,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [3636] = 5,
    ACTIONS(246), 1,
      sym_identifier,
    STATE(45), 1,
      sym_function_call,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(248), 12,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym__,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG,
      anon_sym_in,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(244), 25,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_QMARK,
      anon_sym_PERCENT,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_escape_sequence,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [3689] = 4,
    ACTIONS(360), 1,
      anon_sym_EQ_GT,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(358), 12,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym__,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG,
      anon_sym_in,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(356), 25,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_QMARK,
      anon_sym_PERCENT,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_escape_sequence,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [3739] = 8,
    ACTIONS(234), 1,
      anon_sym_LPAREN2,
    ACTIONS(236), 1,
      anon_sym_DOT2,
    ACTIONS(240), 1,
      anon_sym_BANG2,
    STATE(154), 1,
      sym_parameters,
    ACTIONS(238), 2,
      anon_sym_SQUOTE2,
      anon_sym_QMARK2,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(75), 13,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_SEMI2,
      sym_float_literal,
      aux_sym_string_literal_token1,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(73), 19,
      sym_identifier,
      anon_sym_SLASH,
      anon_sym_LPAREN,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_let,
      anon_sym_if,
      anon_sym_while,
      anon_sym_for,
      anon_sym_in,
      sym_none,
      anon_sym_true,
      anon_sym_false,
      sym_int_literal,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
  [3797] = 21,
    ACTIONS(362), 1,
      sym_identifier,
    ACTIONS(366), 1,
      anon_sym_LPAREN,
    ACTIONS(368), 1,
      anon_sym_RPAREN,
    ACTIONS(370), 1,
      anon_sym_LBRACE,
    ACTIONS(372), 1,
      anon_sym_LBRACK,
    ACTIONS(374), 1,
      anon_sym_DOT_DOT,
    ACTIONS(376), 1,
      sym_none,
    ACTIONS(380), 1,
      sym_int_literal,
    ACTIONS(382), 1,
      sym_float_literal,
    ACTIONS(384), 1,
      aux_sym_string_literal_token1,
    ACTIONS(386), 1,
      anon_sym_not,
    STATE(365), 1,
      sym_expression,
    STATE(409), 1,
      aux_sym__weird_edge_case,
    STATE(431), 1,
      sym__array,
    STATE(441), 1,
      sym__unnamed_arguments,
    ACTIONS(364), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(378), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(410), 2,
      sym__parameter,
      sym_asssigned_parameter,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    STATE(358), 3,
      sym_boolean_literal,
      sym_numeric,
      sym_string_literal,
    STATE(334), 14,
      sym_code_block,
      sym_content_block,
      sym_parenthesized_expression,
      sym_array,
      sym_unnamed_function,
      sym__literal,
      sym_assignment,
      sym_function_call,
      sym_unary_operator,
      sym_not_operator,
      sym_boolean_operator,
      sym_binary_operator,
      sym_comparison_operator,
      sym_augmented_assignment,
  [3881] = 4,
    ACTIONS(360), 1,
      anon_sym_EQ_GT,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(358), 12,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym__,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG,
      anon_sym_in,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(356), 25,
      anon_sym_DQUOTE,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_QMARK,
      anon_sym_PERCENT,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_escape_sequence,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [3931] = 21,
    ACTIONS(362), 1,
      sym_identifier,
    ACTIONS(366), 1,
      anon_sym_LPAREN,
    ACTIONS(370), 1,
      anon_sym_LBRACE,
    ACTIONS(372), 1,
      anon_sym_LBRACK,
    ACTIONS(374), 1,
      anon_sym_DOT_DOT,
    ACTIONS(376), 1,
      sym_none,
    ACTIONS(380), 1,
      sym_int_literal,
    ACTIONS(382), 1,
      sym_float_literal,
    ACTIONS(384), 1,
      aux_sym_string_literal_token1,
    ACTIONS(386), 1,
      anon_sym_not,
    ACTIONS(388), 1,
      anon_sym_RPAREN,
    STATE(368), 1,
      sym_expression,
    STATE(400), 1,
      aux_sym__weird_edge_case,
    STATE(421), 1,
      sym__array,
    STATE(441), 1,
      sym__unnamed_arguments,
    ACTIONS(364), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(378), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(410), 2,
      sym__parameter,
      sym_asssigned_parameter,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    STATE(358), 3,
      sym_boolean_literal,
      sym_numeric,
      sym_string_literal,
    STATE(334), 14,
      sym_code_block,
      sym_content_block,
      sym_parenthesized_expression,
      sym_array,
      sym_unnamed_function,
      sym__literal,
      sym_assignment,
      sym_function_call,
      sym_unary_operator,
      sym_not_operator,
      sym_boolean_operator,
      sym_binary_operator,
      sym_comparison_operator,
      sym_augmented_assignment,
  [4015] = 21,
    ACTIONS(362), 1,
      sym_identifier,
    ACTIONS(366), 1,
      anon_sym_LPAREN,
    ACTIONS(370), 1,
      anon_sym_LBRACE,
    ACTIONS(372), 1,
      anon_sym_LBRACK,
    ACTIONS(374), 1,
      anon_sym_DOT_DOT,
    ACTIONS(376), 1,
      sym_none,
    ACTIONS(380), 1,
      sym_int_literal,
    ACTIONS(382), 1,
      sym_float_literal,
    ACTIONS(384), 1,
      aux_sym_string_literal_token1,
    ACTIONS(386), 1,
      anon_sym_not,
    ACTIONS(390), 1,
      anon_sym_RPAREN,
    STATE(366), 1,
      sym_expression,
    STATE(392), 1,
      aux_sym__weird_edge_case,
    STATE(426), 1,
      sym__array,
    STATE(441), 1,
      sym__unnamed_arguments,
    ACTIONS(364), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(378), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(410), 2,
      sym__parameter,
      sym_asssigned_parameter,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    STATE(358), 3,
      sym_boolean_literal,
      sym_numeric,
      sym_string_literal,
    STATE(334), 14,
      sym_code_block,
      sym_content_block,
      sym_parenthesized_expression,
      sym_array,
      sym_unnamed_function,
      sym__literal,
      sym_assignment,
      sym_function_call,
      sym_unary_operator,
      sym_not_operator,
      sym_boolean_operator,
      sym_binary_operator,
      sym_comparison_operator,
      sym_augmented_assignment,
  [4099] = 21,
    ACTIONS(362), 1,
      sym_identifier,
    ACTIONS(366), 1,
      anon_sym_LPAREN,
    ACTIONS(370), 1,
      anon_sym_LBRACE,
    ACTIONS(372), 1,
      anon_sym_LBRACK,
    ACTIONS(374), 1,
      anon_sym_DOT_DOT,
    ACTIONS(376), 1,
      sym_none,
    ACTIONS(380), 1,
      sym_int_literal,
    ACTIONS(382), 1,
      sym_float_literal,
    ACTIONS(384), 1,
      aux_sym_string_literal_token1,
    ACTIONS(386), 1,
      anon_sym_not,
    ACTIONS(392), 1,
      anon_sym_RPAREN,
    STATE(367), 1,
      sym_expression,
    STATE(399), 1,
      aux_sym__weird_edge_case,
    STATE(441), 1,
      sym__unnamed_arguments,
    STATE(448), 1,
      sym__array,
    ACTIONS(364), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(378), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(410), 2,
      sym__parameter,
      sym_asssigned_parameter,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    STATE(358), 3,
      sym_boolean_literal,
      sym_numeric,
      sym_string_literal,
    STATE(334), 14,
      sym_code_block,
      sym_content_block,
      sym_parenthesized_expression,
      sym_array,
      sym_unnamed_function,
      sym__literal,
      sym_assignment,
      sym_function_call,
      sym_unary_operator,
      sym_not_operator,
      sym_boolean_operator,
      sym_binary_operator,
      sym_comparison_operator,
      sym_augmented_assignment,
  [4183] = 6,
    ACTIONS(398), 1,
      anon_sym_SLASH,
    ACTIONS(402), 1,
      anon_sym_STAR,
    ACTIONS(400), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(396), 11,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym__,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG,
      anon_sym_in,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(394), 22,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
      anon_sym_TILDE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_QMARK,
      anon_sym_PERCENT,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_escape_sequence,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [4236] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(406), 12,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym__,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG,
      anon_sym_in,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(404), 25,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_QMARK,
      anon_sym_PERCENT,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_escape_sequence,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [4283] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(258), 12,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym__,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG,
      anon_sym_in,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(256), 25,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_QMARK,
      anon_sym_PERCENT,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_escape_sequence,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [4330] = 20,
    ACTIONS(366), 1,
      anon_sym_LPAREN,
    ACTIONS(370), 1,
      anon_sym_LBRACE,
    ACTIONS(372), 1,
      anon_sym_LBRACK,
    ACTIONS(374), 1,
      anon_sym_DOT_DOT,
    ACTIONS(376), 1,
      sym_none,
    ACTIONS(380), 1,
      sym_int_literal,
    ACTIONS(382), 1,
      sym_float_literal,
    ACTIONS(384), 1,
      aux_sym_string_literal_token1,
    ACTIONS(386), 1,
      anon_sym_not,
    ACTIONS(408), 1,
      sym_identifier,
    ACTIONS(410), 1,
      anon_sym_RPAREN,
    STATE(370), 1,
      sym_expression,
    STATE(424), 1,
      sym__parameters,
    STATE(441), 1,
      sym__unnamed_arguments,
    ACTIONS(364), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(378), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(394), 2,
      sym__parameter,
      sym_asssigned_parameter,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    STATE(358), 3,
      sym_boolean_literal,
      sym_numeric,
      sym_string_literal,
    STATE(334), 14,
      sym_code_block,
      sym_content_block,
      sym_parenthesized_expression,
      sym_array,
      sym_unnamed_function,
      sym__literal,
      sym_assignment,
      sym_function_call,
      sym_unary_operator,
      sym_not_operator,
      sym_boolean_operator,
      sym_binary_operator,
      sym_comparison_operator,
      sym_augmented_assignment,
  [4411] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(414), 12,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym__,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG,
      anon_sym_in,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(412), 25,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_QMARK,
      anon_sym_PERCENT,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_escape_sequence,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [4458] = 11,
    ACTIONS(420), 1,
      anon_sym_SLASH,
    ACTIONS(424), 1,
      anon_sym_STAR,
    ACTIONS(428), 1,
      anon_sym_not,
    ACTIONS(430), 1,
      anon_sym_and,
    ACTIONS(432), 1,
      anon_sym_or,
    ACTIONS(422), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(426), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_in,
    ACTIONS(434), 4,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(416), 5,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym__,
      anon_sym_EQ,
      anon_sym_BANG,
    ACTIONS(418), 18,
      anon_sym_DQUOTE,
      anon_sym_TILDE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_QMARK,
      anon_sym_PERCENT,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_escape_sequence,
  [4521] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(438), 12,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym__,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG,
      anon_sym_in,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(436), 25,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_QMARK,
      anon_sym_PERCENT,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_escape_sequence,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [4568] = 5,
    ACTIONS(440), 1,
      sym_identifier,
    STATE(167), 1,
      sym_function_call,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(256), 16,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_STAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_SEMI2,
      anon_sym_SQUOTE2,
      anon_sym_QMARK2,
      sym_float_literal,
      aux_sym_string_literal_token1,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(258), 19,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_let,
      anon_sym_if,
      anon_sym_while,
      anon_sym_for,
      anon_sym_in,
      anon_sym_DOT2,
      anon_sym_BANG2,
      sym_none,
      anon_sym_true,
      anon_sym_false,
      sym_int_literal,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
  [4619] = 5,
    ACTIONS(440), 1,
      sym_identifier,
    STATE(160), 1,
      sym_function_call,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(244), 16,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_STAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_SEMI2,
      anon_sym_SQUOTE2,
      anon_sym_QMARK2,
      sym_float_literal,
      aux_sym_string_literal_token1,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(248), 19,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_let,
      anon_sym_if,
      anon_sym_while,
      anon_sym_for,
      anon_sym_in,
      anon_sym_DOT2,
      anon_sym_BANG2,
      sym_none,
      anon_sym_true,
      anon_sym_false,
      sym_int_literal,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
  [4670] = 20,
    ACTIONS(366), 1,
      anon_sym_LPAREN,
    ACTIONS(370), 1,
      anon_sym_LBRACE,
    ACTIONS(372), 1,
      anon_sym_LBRACK,
    ACTIONS(374), 1,
      anon_sym_DOT_DOT,
    ACTIONS(376), 1,
      sym_none,
    ACTIONS(380), 1,
      sym_int_literal,
    ACTIONS(382), 1,
      sym_float_literal,
    ACTIONS(384), 1,
      aux_sym_string_literal_token1,
    ACTIONS(386), 1,
      anon_sym_not,
    ACTIONS(408), 1,
      sym_identifier,
    ACTIONS(442), 1,
      anon_sym_RPAREN,
    STATE(370), 1,
      sym_expression,
    STATE(437), 1,
      sym__parameters,
    STATE(441), 1,
      sym__unnamed_arguments,
    ACTIONS(364), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(378), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(394), 2,
      sym__parameter,
      sym_asssigned_parameter,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    STATE(358), 3,
      sym_boolean_literal,
      sym_numeric,
      sym_string_literal,
    STATE(334), 14,
      sym_code_block,
      sym_content_block,
      sym_parenthesized_expression,
      sym_array,
      sym_unnamed_function,
      sym__literal,
      sym_assignment,
      sym_function_call,
      sym_unary_operator,
      sym_not_operator,
      sym_boolean_operator,
      sym_binary_operator,
      sym_comparison_operator,
      sym_augmented_assignment,
  [4751] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(446), 12,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym__,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG,
      anon_sym_in,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(444), 25,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_QMARK,
      anon_sym_PERCENT,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_escape_sequence,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [4798] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(450), 12,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym__,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG,
      anon_sym_in,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(448), 25,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_QMARK,
      anon_sym_PERCENT,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_escape_sequence,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [4845] = 11,
    ACTIONS(420), 1,
      anon_sym_SLASH,
    ACTIONS(424), 1,
      anon_sym_STAR,
    ACTIONS(428), 1,
      anon_sym_not,
    ACTIONS(430), 1,
      anon_sym_and,
    ACTIONS(432), 1,
      anon_sym_or,
    ACTIONS(422), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(426), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_in,
    ACTIONS(434), 4,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(452), 5,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym__,
      anon_sym_EQ,
      anon_sym_BANG,
    ACTIONS(454), 18,
      anon_sym_DQUOTE,
      anon_sym_TILDE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_QMARK,
      anon_sym_PERCENT,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_escape_sequence,
  [4908] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(458), 12,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym__,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG,
      anon_sym_in,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(456), 25,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_QMARK,
      anon_sym_PERCENT,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_escape_sequence,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [4955] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(462), 12,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym__,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG,
      anon_sym_in,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(460), 25,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_QMARK,
      anon_sym_PERCENT,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_escape_sequence,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [5002] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(466), 12,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym__,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG,
      anon_sym_in,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(464), 25,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_QMARK,
      anon_sym_PERCENT,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_escape_sequence,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [5049] = 9,
    ACTIONS(398), 1,
      anon_sym_SLASH,
    ACTIONS(402), 1,
      anon_sym_STAR,
    ACTIONS(474), 1,
      anon_sym_not,
    ACTIONS(400), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(472), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_in,
    ACTIONS(476), 4,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(470), 7,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym__,
      anon_sym_EQ,
      anon_sym_BANG,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(468), 18,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
      anon_sym_TILDE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_QMARK,
      anon_sym_PERCENT,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_escape_sequence,
  [5108] = 20,
    ACTIONS(366), 1,
      anon_sym_LPAREN,
    ACTIONS(370), 1,
      anon_sym_LBRACE,
    ACTIONS(372), 1,
      anon_sym_LBRACK,
    ACTIONS(374), 1,
      anon_sym_DOT_DOT,
    ACTIONS(376), 1,
      sym_none,
    ACTIONS(380), 1,
      sym_int_literal,
    ACTIONS(382), 1,
      sym_float_literal,
    ACTIONS(384), 1,
      aux_sym_string_literal_token1,
    ACTIONS(386), 1,
      anon_sym_not,
    ACTIONS(408), 1,
      sym_identifier,
    ACTIONS(478), 1,
      anon_sym_RPAREN,
    STATE(370), 1,
      sym_expression,
    STATE(441), 1,
      sym__unnamed_arguments,
    STATE(461), 1,
      sym__parameters,
    ACTIONS(364), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(378), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(394), 2,
      sym__parameter,
      sym_asssigned_parameter,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    STATE(358), 3,
      sym_boolean_literal,
      sym_numeric,
      sym_string_literal,
    STATE(334), 14,
      sym_code_block,
      sym_content_block,
      sym_parenthesized_expression,
      sym_array,
      sym_unnamed_function,
      sym__literal,
      sym_assignment,
      sym_function_call,
      sym_unary_operator,
      sym_not_operator,
      sym_boolean_operator,
      sym_binary_operator,
      sym_comparison_operator,
      sym_augmented_assignment,
  [5189] = 5,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(484), 4,
      anon_sym_in,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(486), 4,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(480), 8,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym__,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG,
    ACTIONS(482), 21,
      anon_sym_DQUOTE,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_QMARK,
      anon_sym_PERCENT,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_escape_sequence,
  [5240] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(220), 12,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym__,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG,
      anon_sym_in,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(222), 25,
      anon_sym_DQUOTE,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_QMARK,
      anon_sym_PERCENT,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_escape_sequence,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [5287] = 11,
    ACTIONS(398), 1,
      anon_sym_SLASH,
    ACTIONS(402), 1,
      anon_sym_STAR,
    ACTIONS(474), 1,
      anon_sym_not,
    ACTIONS(492), 1,
      anon_sym_and,
    ACTIONS(494), 1,
      anon_sym_or,
    ACTIONS(400), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(472), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_in,
    ACTIONS(476), 4,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(490), 5,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym__,
      anon_sym_EQ,
      anon_sym_BANG,
    ACTIONS(488), 18,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
      anon_sym_TILDE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_QMARK,
      anon_sym_PERCENT,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_escape_sequence,
  [5350] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(496), 12,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym__,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG,
      anon_sym_in,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(498), 25,
      anon_sym_DQUOTE,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_QMARK,
      anon_sym_PERCENT,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_escape_sequence,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [5397] = 11,
    ACTIONS(398), 1,
      anon_sym_SLASH,
    ACTIONS(402), 1,
      anon_sym_STAR,
    ACTIONS(474), 1,
      anon_sym_not,
    ACTIONS(492), 1,
      anon_sym_and,
    ACTIONS(494), 1,
      anon_sym_or,
    ACTIONS(400), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(472), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_in,
    ACTIONS(476), 4,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(502), 5,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym__,
      anon_sym_EQ,
      anon_sym_BANG,
    ACTIONS(500), 18,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
      anon_sym_TILDE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_QMARK,
      anon_sym_PERCENT,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_escape_sequence,
  [5460] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(248), 12,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym__,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG,
      anon_sym_in,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(244), 25,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_QMARK,
      anon_sym_PERCENT,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_escape_sequence,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [5507] = 11,
    ACTIONS(420), 1,
      anon_sym_SLASH,
    ACTIONS(424), 1,
      anon_sym_STAR,
    ACTIONS(428), 1,
      anon_sym_not,
    ACTIONS(430), 1,
      anon_sym_and,
    ACTIONS(432), 1,
      anon_sym_or,
    ACTIONS(422), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(426), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_in,
    ACTIONS(434), 4,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(504), 5,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym__,
      anon_sym_EQ,
      anon_sym_BANG,
    ACTIONS(506), 18,
      anon_sym_DQUOTE,
      anon_sym_TILDE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_QMARK,
      anon_sym_PERCENT,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_escape_sequence,
  [5570] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(450), 12,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym__,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG,
      anon_sym_in,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(448), 25,
      anon_sym_DQUOTE,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_QMARK,
      anon_sym_PERCENT,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_escape_sequence,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [5617] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(358), 12,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym__,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG,
      anon_sym_in,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(356), 25,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_QMARK,
      anon_sym_PERCENT,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_escape_sequence,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [5664] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(484), 12,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym__,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG,
      anon_sym_in,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(486), 25,
      anon_sym_DQUOTE,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_QMARK,
      anon_sym_PERCENT,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_escape_sequence,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [5711] = 11,
    ACTIONS(398), 1,
      anon_sym_SLASH,
    ACTIONS(402), 1,
      anon_sym_STAR,
    ACTIONS(474), 1,
      anon_sym_not,
    ACTIONS(492), 1,
      anon_sym_and,
    ACTIONS(494), 1,
      anon_sym_or,
    ACTIONS(400), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(472), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_in,
    ACTIONS(476), 4,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(416), 5,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym__,
      anon_sym_EQ,
      anon_sym_BANG,
    ACTIONS(418), 18,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
      anon_sym_TILDE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_QMARK,
      anon_sym_PERCENT,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_escape_sequence,
  [5774] = 20,
    ACTIONS(366), 1,
      anon_sym_LPAREN,
    ACTIONS(370), 1,
      anon_sym_LBRACE,
    ACTIONS(372), 1,
      anon_sym_LBRACK,
    ACTIONS(374), 1,
      anon_sym_DOT_DOT,
    ACTIONS(376), 1,
      sym_none,
    ACTIONS(380), 1,
      sym_int_literal,
    ACTIONS(382), 1,
      sym_float_literal,
    ACTIONS(384), 1,
      aux_sym_string_literal_token1,
    ACTIONS(386), 1,
      anon_sym_not,
    ACTIONS(408), 1,
      sym_identifier,
    ACTIONS(508), 1,
      anon_sym_RPAREN,
    STATE(370), 1,
      sym_expression,
    STATE(441), 1,
      sym__unnamed_arguments,
    STATE(452), 1,
      sym__parameters,
    ACTIONS(364), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(378), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(394), 2,
      sym__parameter,
      sym_asssigned_parameter,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    STATE(358), 3,
      sym_boolean_literal,
      sym_numeric,
      sym_string_literal,
    STATE(334), 14,
      sym_code_block,
      sym_content_block,
      sym_parenthesized_expression,
      sym_array,
      sym_unnamed_function,
      sym__literal,
      sym_assignment,
      sym_function_call,
      sym_unary_operator,
      sym_not_operator,
      sym_boolean_operator,
      sym_binary_operator,
      sym_comparison_operator,
      sym_augmented_assignment,
  [5855] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(258), 12,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym__,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG,
      anon_sym_in,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(256), 25,
      anon_sym_DQUOTE,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_QMARK,
      anon_sym_PERCENT,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_escape_sequence,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [5902] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(484), 12,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym__,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG,
      anon_sym_in,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(486), 25,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_QMARK,
      anon_sym_PERCENT,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_escape_sequence,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [5949] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(512), 12,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym__,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG,
      anon_sym_in,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(510), 25,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_QMARK,
      anon_sym_PERCENT,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_escape_sequence,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [5996] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(414), 12,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym__,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG,
      anon_sym_in,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(412), 25,
      anon_sym_DQUOTE,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_QMARK,
      anon_sym_PERCENT,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_escape_sequence,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [6043] = 5,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(484), 4,
      anon_sym_in,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(486), 4,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(480), 8,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym__,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG,
    ACTIONS(482), 21,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_QMARK,
      anon_sym_PERCENT,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_escape_sequence,
  [6094] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(466), 12,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym__,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG,
      anon_sym_in,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(464), 25,
      anon_sym_DQUOTE,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_QMARK,
      anon_sym_PERCENT,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_escape_sequence,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [6141] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(438), 12,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym__,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG,
      anon_sym_in,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(436), 25,
      anon_sym_DQUOTE,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_QMARK,
      anon_sym_PERCENT,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_escape_sequence,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [6188] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(446), 12,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym__,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG,
      anon_sym_in,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(444), 25,
      anon_sym_DQUOTE,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_QMARK,
      anon_sym_PERCENT,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_escape_sequence,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [6235] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(344), 12,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym__,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG,
      anon_sym_in,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(342), 25,
      anon_sym_DQUOTE,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_QMARK,
      anon_sym_PERCENT,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_escape_sequence,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [6282] = 6,
    ACTIONS(420), 1,
      anon_sym_SLASH,
    ACTIONS(424), 1,
      anon_sym_STAR,
    ACTIONS(422), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(514), 11,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym__,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG,
      anon_sym_in,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(516), 22,
      anon_sym_DQUOTE,
      anon_sym_TILDE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_QMARK,
      anon_sym_PERCENT,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_escape_sequence,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [6335] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(520), 12,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym__,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG,
      anon_sym_in,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(518), 25,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_QMARK,
      anon_sym_PERCENT,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_escape_sequence,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [6382] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(282), 12,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym__,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG,
      anon_sym_in,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(284), 25,
      anon_sym_DQUOTE,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_QMARK,
      anon_sym_PERCENT,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_escape_sequence,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [6429] = 10,
    ACTIONS(420), 1,
      anon_sym_SLASH,
    ACTIONS(424), 1,
      anon_sym_STAR,
    ACTIONS(428), 1,
      anon_sym_not,
    ACTIONS(430), 1,
      anon_sym_and,
    ACTIONS(422), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(426), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_in,
    ACTIONS(434), 4,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(522), 6,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym__,
      anon_sym_EQ,
      anon_sym_BANG,
      anon_sym_or,
    ACTIONS(524), 18,
      anon_sym_DQUOTE,
      anon_sym_TILDE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_QMARK,
      anon_sym_PERCENT,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_escape_sequence,
  [6490] = 9,
    ACTIONS(420), 1,
      anon_sym_SLASH,
    ACTIONS(424), 1,
      anon_sym_STAR,
    ACTIONS(428), 1,
      anon_sym_not,
    ACTIONS(422), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(426), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_in,
    ACTIONS(434), 4,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(522), 7,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym__,
      anon_sym_EQ,
      anon_sym_BANG,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(524), 18,
      anon_sym_DQUOTE,
      anon_sym_TILDE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_QMARK,
      anon_sym_PERCENT,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_escape_sequence,
  [6549] = 6,
    ACTIONS(420), 1,
      anon_sym_SLASH,
    ACTIONS(424), 1,
      anon_sym_STAR,
    ACTIONS(422), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(396), 11,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym__,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG,
      anon_sym_in,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(394), 22,
      anon_sym_DQUOTE,
      anon_sym_TILDE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_QMARK,
      anon_sym_PERCENT,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_escape_sequence,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [6602] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(528), 12,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym__,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG,
      anon_sym_in,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(526), 25,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_QMARK,
      anon_sym_PERCENT,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_escape_sequence,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [6649] = 5,
    ACTIONS(420), 1,
      anon_sym_SLASH,
    ACTIONS(424), 1,
      anon_sym_STAR,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(530), 11,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym__,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG,
      anon_sym_in,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(532), 24,
      anon_sym_DQUOTE,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_QMARK,
      anon_sym_PERCENT,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_escape_sequence,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [6700] = 11,
    ACTIONS(398), 1,
      anon_sym_SLASH,
    ACTIONS(402), 1,
      anon_sym_STAR,
    ACTIONS(474), 1,
      anon_sym_not,
    ACTIONS(492), 1,
      anon_sym_and,
    ACTIONS(494), 1,
      anon_sym_or,
    ACTIONS(400), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(472), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_in,
    ACTIONS(476), 4,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(504), 5,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym__,
      anon_sym_EQ,
      anon_sym_BANG,
    ACTIONS(506), 18,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
      anon_sym_TILDE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_QMARK,
      anon_sym_PERCENT,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_escape_sequence,
  [6763] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(282), 12,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym__,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG,
      anon_sym_in,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(284), 25,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_QMARK,
      anon_sym_PERCENT,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_escape_sequence,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [6810] = 5,
    ACTIONS(398), 1,
      anon_sym_SLASH,
    ACTIONS(402), 1,
      anon_sym_STAR,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(530), 11,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym__,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG,
      anon_sym_in,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(532), 24,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_QMARK,
      anon_sym_PERCENT,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_escape_sequence,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [6861] = 20,
    ACTIONS(366), 1,
      anon_sym_LPAREN,
    ACTIONS(370), 1,
      anon_sym_LBRACE,
    ACTIONS(372), 1,
      anon_sym_LBRACK,
    ACTIONS(374), 1,
      anon_sym_DOT_DOT,
    ACTIONS(376), 1,
      sym_none,
    ACTIONS(380), 1,
      sym_int_literal,
    ACTIONS(382), 1,
      sym_float_literal,
    ACTIONS(384), 1,
      aux_sym_string_literal_token1,
    ACTIONS(386), 1,
      anon_sym_not,
    ACTIONS(408), 1,
      sym_identifier,
    ACTIONS(534), 1,
      anon_sym_RPAREN,
    STATE(370), 1,
      sym_expression,
    STATE(430), 1,
      sym__parameters,
    STATE(441), 1,
      sym__unnamed_arguments,
    ACTIONS(364), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(378), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(394), 2,
      sym__parameter,
      sym_asssigned_parameter,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    STATE(358), 3,
      sym_boolean_literal,
      sym_numeric,
      sym_string_literal,
    STATE(334), 14,
      sym_code_block,
      sym_content_block,
      sym_parenthesized_expression,
      sym_array,
      sym_unnamed_function,
      sym__literal,
      sym_assignment,
      sym_function_call,
      sym_unary_operator,
      sym_not_operator,
      sym_boolean_operator,
      sym_binary_operator,
      sym_comparison_operator,
      sym_augmented_assignment,
  [6942] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(530), 12,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym__,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG,
      anon_sym_in,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(532), 25,
      anon_sym_DQUOTE,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_QMARK,
      anon_sym_PERCENT,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_escape_sequence,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [6989] = 9,
    ACTIONS(398), 1,
      anon_sym_SLASH,
    ACTIONS(402), 1,
      anon_sym_STAR,
    ACTIONS(474), 1,
      anon_sym_not,
    ACTIONS(400), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(472), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_in,
    ACTIONS(476), 4,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(522), 7,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym__,
      anon_sym_EQ,
      anon_sym_BANG,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(524), 18,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
      anon_sym_TILDE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_QMARK,
      anon_sym_PERCENT,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_escape_sequence,
  [7048] = 10,
    ACTIONS(398), 1,
      anon_sym_SLASH,
    ACTIONS(402), 1,
      anon_sym_STAR,
    ACTIONS(474), 1,
      anon_sym_not,
    ACTIONS(492), 1,
      anon_sym_and,
    ACTIONS(400), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(472), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_in,
    ACTIONS(476), 4,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(522), 6,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym__,
      anon_sym_EQ,
      anon_sym_BANG,
      anon_sym_or,
    ACTIONS(524), 18,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
      anon_sym_TILDE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_QMARK,
      anon_sym_PERCENT,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_escape_sequence,
  [7109] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(220), 12,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym__,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG,
      anon_sym_in,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(222), 25,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_QMARK,
      anon_sym_PERCENT,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_escape_sequence,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [7156] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(458), 12,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym__,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG,
      anon_sym_in,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(456), 25,
      anon_sym_DQUOTE,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_QMARK,
      anon_sym_PERCENT,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_escape_sequence,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [7203] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(462), 12,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym__,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG,
      anon_sym_in,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(460), 25,
      anon_sym_DQUOTE,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_QMARK,
      anon_sym_PERCENT,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_escape_sequence,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [7250] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(530), 12,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym__,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG,
      anon_sym_in,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(532), 25,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_QMARK,
      anon_sym_PERCENT,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_escape_sequence,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [7297] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(520), 12,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym__,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG,
      anon_sym_in,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(518), 25,
      anon_sym_DQUOTE,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_QMARK,
      anon_sym_PERCENT,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_escape_sequence,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [7344] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(528), 12,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym__,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG,
      anon_sym_in,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(526), 25,
      anon_sym_DQUOTE,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_QMARK,
      anon_sym_PERCENT,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_escape_sequence,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [7391] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(406), 12,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym__,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG,
      anon_sym_in,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(404), 25,
      anon_sym_DQUOTE,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_QMARK,
      anon_sym_PERCENT,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_escape_sequence,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [7438] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(512), 12,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym__,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG,
      anon_sym_in,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(510), 25,
      anon_sym_DQUOTE,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_QMARK,
      anon_sym_PERCENT,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_escape_sequence,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [7485] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(358), 12,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym__,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG,
      anon_sym_in,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(356), 25,
      anon_sym_DQUOTE,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_QMARK,
      anon_sym_PERCENT,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_escape_sequence,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [7532] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(248), 12,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym__,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG,
      anon_sym_in,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(244), 25,
      anon_sym_DQUOTE,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_QMARK,
      anon_sym_PERCENT,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_escape_sequence,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [7579] = 11,
    ACTIONS(398), 1,
      anon_sym_SLASH,
    ACTIONS(402), 1,
      anon_sym_STAR,
    ACTIONS(474), 1,
      anon_sym_not,
    ACTIONS(492), 1,
      anon_sym_and,
    ACTIONS(494), 1,
      anon_sym_or,
    ACTIONS(400), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(472), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_in,
    ACTIONS(476), 4,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(452), 5,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym__,
      anon_sym_EQ,
      anon_sym_BANG,
    ACTIONS(454), 18,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
      anon_sym_TILDE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_QMARK,
      anon_sym_PERCENT,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_escape_sequence,
  [7642] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(496), 12,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym__,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG,
      anon_sym_in,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(498), 25,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_QMARK,
      anon_sym_PERCENT,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_escape_sequence,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [7689] = 11,
    ACTIONS(420), 1,
      anon_sym_SLASH,
    ACTIONS(424), 1,
      anon_sym_STAR,
    ACTIONS(428), 1,
      anon_sym_not,
    ACTIONS(430), 1,
      anon_sym_and,
    ACTIONS(432), 1,
      anon_sym_or,
    ACTIONS(422), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(426), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_in,
    ACTIONS(434), 4,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(502), 5,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym__,
      anon_sym_EQ,
      anon_sym_BANG,
    ACTIONS(500), 18,
      anon_sym_DQUOTE,
      anon_sym_TILDE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_QMARK,
      anon_sym_PERCENT,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_escape_sequence,
  [7752] = 11,
    ACTIONS(420), 1,
      anon_sym_SLASH,
    ACTIONS(424), 1,
      anon_sym_STAR,
    ACTIONS(428), 1,
      anon_sym_not,
    ACTIONS(430), 1,
      anon_sym_and,
    ACTIONS(432), 1,
      anon_sym_or,
    ACTIONS(422), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(426), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_in,
    ACTIONS(434), 4,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(490), 5,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym__,
      anon_sym_EQ,
      anon_sym_BANG,
    ACTIONS(488), 18,
      anon_sym_DQUOTE,
      anon_sym_TILDE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_QMARK,
      anon_sym_PERCENT,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_escape_sequence,
  [7815] = 9,
    ACTIONS(420), 1,
      anon_sym_SLASH,
    ACTIONS(424), 1,
      anon_sym_STAR,
    ACTIONS(428), 1,
      anon_sym_not,
    ACTIONS(422), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(426), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_in,
    ACTIONS(434), 4,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(470), 7,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym__,
      anon_sym_EQ,
      anon_sym_BANG,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(468), 18,
      anon_sym_DQUOTE,
      anon_sym_TILDE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_QMARK,
      anon_sym_PERCENT,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_escape_sequence,
  [7874] = 6,
    ACTIONS(398), 1,
      anon_sym_SLASH,
    ACTIONS(402), 1,
      anon_sym_STAR,
    ACTIONS(400), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(514), 11,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym__,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG,
      anon_sym_in,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(516), 22,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
      anon_sym_TILDE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_QMARK,
      anon_sym_PERCENT,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_escape_sequence,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [7927] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(344), 12,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym__,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG,
      anon_sym_in,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(342), 25,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_QMARK,
      anon_sym_PERCENT,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_escape_sequence,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [7974] = 8,
    ACTIONS(538), 1,
      anon_sym_DQUOTE,
    ACTIONS(542), 1,
      anon_sym_POUND,
    ACTIONS(544), 1,
      anon_sym_LBRACK,
    ACTIONS(546), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(536), 4,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym__,
    STATE(146), 7,
      sym__markup,
      sym_quote,
      aux_sym__text,
      sym__code_mode,
      sym__code_block,
      sym_content_block,
      aux_sym_source_file_repeat1,
    ACTIONS(540), 21,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_PERCENT,
      sym_escape_sequence,
  [8030] = 8,
    ACTIONS(538), 1,
      anon_sym_DQUOTE,
    ACTIONS(542), 1,
      anon_sym_POUND,
    ACTIONS(544), 1,
      anon_sym_LBRACK,
    ACTIONS(552), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(548), 4,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym__,
    STATE(158), 7,
      sym__markup,
      sym_quote,
      aux_sym__text,
      sym__code_mode,
      sym__code_block,
      sym_content_block,
      aux_sym_source_file_repeat1,
    ACTIONS(550), 21,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_PERCENT,
      sym_escape_sequence,
  [8086] = 8,
    ACTIONS(538), 1,
      anon_sym_DQUOTE,
    ACTIONS(542), 1,
      anon_sym_POUND,
    ACTIONS(544), 1,
      anon_sym_LBRACK,
    ACTIONS(558), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(554), 4,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym__,
    STATE(137), 7,
      sym__markup,
      sym_quote,
      aux_sym__text,
      sym__code_mode,
      sym__code_block,
      sym_content_block,
      aux_sym_source_file_repeat1,
    ACTIONS(556), 21,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_PERCENT,
      sym_escape_sequence,
  [8142] = 8,
    ACTIONS(538), 1,
      anon_sym_DQUOTE,
    ACTIONS(542), 1,
      anon_sym_POUND,
    ACTIONS(544), 1,
      anon_sym_LBRACK,
    ACTIONS(564), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(560), 4,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym__,
    STATE(161), 7,
      sym__markup,
      sym_quote,
      aux_sym__text,
      sym__code_mode,
      sym__code_block,
      sym_content_block,
      aux_sym_source_file_repeat1,
    ACTIONS(562), 21,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_PERCENT,
      sym_escape_sequence,
  [8198] = 19,
    ACTIONS(366), 1,
      anon_sym_LPAREN,
    ACTIONS(370), 1,
      anon_sym_LBRACE,
    ACTIONS(372), 1,
      anon_sym_LBRACK,
    ACTIONS(374), 1,
      anon_sym_DOT_DOT,
    ACTIONS(376), 1,
      sym_none,
    ACTIONS(380), 1,
      sym_int_literal,
    ACTIONS(382), 1,
      sym_float_literal,
    ACTIONS(384), 1,
      aux_sym_string_literal_token1,
    ACTIONS(386), 1,
      anon_sym_not,
    ACTIONS(408), 1,
      sym_identifier,
    ACTIONS(566), 1,
      anon_sym_RPAREN,
    STATE(370), 1,
      sym_expression,
    STATE(441), 1,
      sym__unnamed_arguments,
    ACTIONS(364), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(378), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(412), 2,
      sym__parameter,
      sym_asssigned_parameter,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    STATE(358), 3,
      sym_boolean_literal,
      sym_numeric,
      sym_string_literal,
    STATE(334), 14,
      sym_code_block,
      sym_content_block,
      sym_parenthesized_expression,
      sym_array,
      sym_unnamed_function,
      sym__literal,
      sym_assignment,
      sym_function_call,
      sym_unary_operator,
      sym_not_operator,
      sym_boolean_operator,
      sym_binary_operator,
      sym_comparison_operator,
      sym_augmented_assignment,
  [8276] = 8,
    ACTIONS(538), 1,
      anon_sym_DQUOTE,
    ACTIONS(542), 1,
      anon_sym_POUND,
    ACTIONS(544), 1,
      anon_sym_LBRACK,
    ACTIONS(572), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(568), 4,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym__,
    STATE(140), 7,
      sym__markup,
      sym_quote,
      aux_sym__text,
      sym__code_mode,
      sym__code_block,
      sym_content_block,
      aux_sym_source_file_repeat1,
    ACTIONS(570), 21,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_PERCENT,
      sym_escape_sequence,
  [8332] = 8,
    ACTIONS(538), 1,
      anon_sym_DQUOTE,
    ACTIONS(542), 1,
      anon_sym_POUND,
    ACTIONS(544), 1,
      anon_sym_LBRACK,
    ACTIONS(574), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(560), 4,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym__,
    STATE(161), 7,
      sym__markup,
      sym_quote,
      aux_sym__text,
      sym__code_mode,
      sym__code_block,
      sym_content_block,
      aux_sym_source_file_repeat1,
    ACTIONS(562), 21,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_PERCENT,
      sym_escape_sequence,
  [8388] = 8,
    ACTIONS(538), 1,
      anon_sym_DQUOTE,
    ACTIONS(542), 1,
      anon_sym_POUND,
    ACTIONS(544), 1,
      anon_sym_LBRACK,
    ACTIONS(580), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(576), 4,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym__,
    STATE(142), 7,
      sym__markup,
      sym_quote,
      aux_sym__text,
      sym__code_mode,
      sym__code_block,
      sym_content_block,
      aux_sym_source_file_repeat1,
    ACTIONS(578), 21,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_PERCENT,
      sym_escape_sequence,
  [8444] = 8,
    ACTIONS(538), 1,
      anon_sym_DQUOTE,
    ACTIONS(542), 1,
      anon_sym_POUND,
    ACTIONS(544), 1,
      anon_sym_LBRACK,
    ACTIONS(582), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(560), 4,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym__,
    STATE(161), 7,
      sym__markup,
      sym_quote,
      aux_sym__text,
      sym__code_mode,
      sym__code_block,
      sym_content_block,
      aux_sym_source_file_repeat1,
    ACTIONS(562), 21,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_PERCENT,
      sym_escape_sequence,
  [8500] = 8,
    ACTIONS(538), 1,
      anon_sym_DQUOTE,
    ACTIONS(542), 1,
      anon_sym_POUND,
    ACTIONS(544), 1,
      anon_sym_LBRACK,
    ACTIONS(584), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(560), 4,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym__,
    STATE(161), 7,
      sym__markup,
      sym_quote,
      aux_sym__text,
      sym__code_mode,
      sym__code_block,
      sym_content_block,
      aux_sym_source_file_repeat1,
    ACTIONS(562), 21,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_PERCENT,
      sym_escape_sequence,
  [8556] = 19,
    ACTIONS(366), 1,
      anon_sym_LPAREN,
    ACTIONS(370), 1,
      anon_sym_LBRACE,
    ACTIONS(372), 1,
      anon_sym_LBRACK,
    ACTIONS(374), 1,
      anon_sym_DOT_DOT,
    ACTIONS(376), 1,
      sym_none,
    ACTIONS(380), 1,
      sym_int_literal,
    ACTIONS(382), 1,
      sym_float_literal,
    ACTIONS(384), 1,
      aux_sym_string_literal_token1,
    ACTIONS(386), 1,
      anon_sym_not,
    ACTIONS(408), 1,
      sym_identifier,
    ACTIONS(586), 1,
      anon_sym_RPAREN,
    STATE(370), 1,
      sym_expression,
    STATE(441), 1,
      sym__unnamed_arguments,
    ACTIONS(364), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(378), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(412), 2,
      sym__parameter,
      sym_asssigned_parameter,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    STATE(358), 3,
      sym_boolean_literal,
      sym_numeric,
      sym_string_literal,
    STATE(334), 14,
      sym_code_block,
      sym_content_block,
      sym_parenthesized_expression,
      sym_array,
      sym_unnamed_function,
      sym__literal,
      sym_assignment,
      sym_function_call,
      sym_unary_operator,
      sym_not_operator,
      sym_boolean_operator,
      sym_binary_operator,
      sym_comparison_operator,
      sym_augmented_assignment,
  [8634] = 8,
    ACTIONS(538), 1,
      anon_sym_DQUOTE,
    ACTIONS(542), 1,
      anon_sym_POUND,
    ACTIONS(544), 1,
      anon_sym_LBRACK,
    ACTIONS(592), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(588), 4,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym__,
    STATE(143), 7,
      sym__markup,
      sym_quote,
      aux_sym__text,
      sym__code_mode,
      sym__code_block,
      sym_content_block,
      aux_sym_source_file_repeat1,
    ACTIONS(590), 21,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_PERCENT,
      sym_escape_sequence,
  [8690] = 8,
    ACTIONS(538), 1,
      anon_sym_DQUOTE,
    ACTIONS(542), 1,
      anon_sym_POUND,
    ACTIONS(544), 1,
      anon_sym_LBRACK,
    ACTIONS(594), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(560), 4,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym__,
    STATE(161), 7,
      sym__markup,
      sym_quote,
      aux_sym__text,
      sym__code_mode,
      sym__code_block,
      sym_content_block,
      aux_sym_source_file_repeat1,
    ACTIONS(562), 21,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_PERCENT,
      sym_escape_sequence,
  [8746] = 8,
    ACTIONS(538), 1,
      anon_sym_DQUOTE,
    ACTIONS(542), 1,
      anon_sym_POUND,
    ACTIONS(544), 1,
      anon_sym_LBRACK,
    ACTIONS(600), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(596), 4,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym__,
    STATE(152), 7,
      sym__markup,
      sym_quote,
      aux_sym__text,
      sym__code_mode,
      sym__code_block,
      sym_content_block,
      aux_sym_source_file_repeat1,
    ACTIONS(598), 21,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_PERCENT,
      sym_escape_sequence,
  [8802] = 8,
    ACTIONS(538), 1,
      anon_sym_DQUOTE,
    ACTIONS(542), 1,
      anon_sym_POUND,
    ACTIONS(544), 1,
      anon_sym_LBRACK,
    ACTIONS(606), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(602), 4,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym__,
    STATE(168), 7,
      sym__markup,
      sym_quote,
      aux_sym__text,
      sym__code_mode,
      sym__code_block,
      sym_content_block,
      aux_sym_source_file_repeat1,
    ACTIONS(604), 21,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_PERCENT,
      sym_escape_sequence,
  [8858] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(256), 16,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_STAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_SEMI2,
      anon_sym_SQUOTE2,
      anon_sym_QMARK2,
      sym_float_literal,
      aux_sym_string_literal_token1,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(258), 20,
      sym_identifier,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_let,
      anon_sym_if,
      anon_sym_while,
      anon_sym_for,
      anon_sym_in,
      anon_sym_DOT2,
      anon_sym_BANG2,
      sym_none,
      anon_sym_true,
      anon_sym_false,
      sym_int_literal,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
  [8904] = 8,
    ACTIONS(608), 1,
      ts_builtin_sym_end,
    ACTIONS(613), 1,
      anon_sym_DQUOTE,
    ACTIONS(619), 1,
      anon_sym_POUND,
    ACTIONS(622), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(610), 4,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym__,
    STATE(150), 7,
      sym__markup,
      sym_quote,
      aux_sym__text,
      sym__code_mode,
      sym__code_block,
      sym_content_block,
      aux_sym_source_file_repeat1,
    ACTIONS(616), 21,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_PERCENT,
      sym_escape_sequence,
  [8960] = 19,
    ACTIONS(366), 1,
      anon_sym_LPAREN,
    ACTIONS(370), 1,
      anon_sym_LBRACE,
    ACTIONS(372), 1,
      anon_sym_LBRACK,
    ACTIONS(374), 1,
      anon_sym_DOT_DOT,
    ACTIONS(376), 1,
      sym_none,
    ACTIONS(380), 1,
      sym_int_literal,
    ACTIONS(382), 1,
      sym_float_literal,
    ACTIONS(384), 1,
      aux_sym_string_literal_token1,
    ACTIONS(386), 1,
      anon_sym_not,
    ACTIONS(408), 1,
      sym_identifier,
    ACTIONS(625), 1,
      anon_sym_RPAREN,
    STATE(370), 1,
      sym_expression,
    STATE(441), 1,
      sym__unnamed_arguments,
    ACTIONS(364), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(378), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(412), 2,
      sym__parameter,
      sym_asssigned_parameter,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    STATE(358), 3,
      sym_boolean_literal,
      sym_numeric,
      sym_string_literal,
    STATE(334), 14,
      sym_code_block,
      sym_content_block,
      sym_parenthesized_expression,
      sym_array,
      sym_unnamed_function,
      sym__literal,
      sym_assignment,
      sym_function_call,
      sym_unary_operator,
      sym_not_operator,
      sym_boolean_operator,
      sym_binary_operator,
      sym_comparison_operator,
      sym_augmented_assignment,
  [9038] = 8,
    ACTIONS(538), 1,
      anon_sym_DQUOTE,
    ACTIONS(542), 1,
      anon_sym_POUND,
    ACTIONS(544), 1,
      anon_sym_LBRACK,
    ACTIONS(627), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(560), 4,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym__,
    STATE(161), 7,
      sym__markup,
      sym_quote,
      aux_sym__text,
      sym__code_mode,
      sym__code_block,
      sym_content_block,
      aux_sym_source_file_repeat1,
    ACTIONS(562), 21,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_PERCENT,
      sym_escape_sequence,
  [9094] = 8,
    ACTIONS(538), 1,
      anon_sym_DQUOTE,
    ACTIONS(542), 1,
      anon_sym_POUND,
    ACTIONS(544), 1,
      anon_sym_LBRACK,
    ACTIONS(629), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(560), 4,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym__,
    STATE(161), 7,
      sym__markup,
      sym_quote,
      aux_sym__text,
      sym__code_mode,
      sym__code_block,
      sym_content_block,
      aux_sym_source_file_repeat1,
    ACTIONS(562), 21,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_PERCENT,
      sym_escape_sequence,
  [9150] = 6,
    ACTIONS(631), 1,
      anon_sym_DOT2,
    ACTIONS(635), 1,
      anon_sym_BANG2,
    ACTIONS(633), 2,
      anon_sym_SQUOTE2,
      anon_sym_QMARK2,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(268), 14,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_STAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_SEMI2,
      sym_float_literal,
      aux_sym_string_literal_token1,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(270), 18,
      sym_identifier,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_let,
      anon_sym_if,
      anon_sym_while,
      anon_sym_for,
      anon_sym_in,
      sym_none,
      anon_sym_true,
      anon_sym_false,
      sym_int_literal,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
  [9202] = 19,
    ACTIONS(366), 1,
      anon_sym_LPAREN,
    ACTIONS(370), 1,
      anon_sym_LBRACE,
    ACTIONS(372), 1,
      anon_sym_LBRACK,
    ACTIONS(374), 1,
      anon_sym_DOT_DOT,
    ACTIONS(376), 1,
      sym_none,
    ACTIONS(380), 1,
      sym_int_literal,
    ACTIONS(382), 1,
      sym_float_literal,
    ACTIONS(384), 1,
      aux_sym_string_literal_token1,
    ACTIONS(386), 1,
      anon_sym_not,
    ACTIONS(408), 1,
      sym_identifier,
    ACTIONS(637), 1,
      anon_sym_RPAREN,
    STATE(370), 1,
      sym_expression,
    STATE(441), 1,
      sym__unnamed_arguments,
    ACTIONS(364), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(378), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(412), 2,
      sym__parameter,
      sym_asssigned_parameter,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    STATE(358), 3,
      sym_boolean_literal,
      sym_numeric,
      sym_string_literal,
    STATE(334), 14,
      sym_code_block,
      sym_content_block,
      sym_parenthesized_expression,
      sym_array,
      sym_unnamed_function,
      sym__literal,
      sym_assignment,
      sym_function_call,
      sym_unary_operator,
      sym_not_operator,
      sym_boolean_operator,
      sym_binary_operator,
      sym_comparison_operator,
      sym_augmented_assignment,
  [9280] = 8,
    ACTIONS(538), 1,
      anon_sym_DQUOTE,
    ACTIONS(542), 1,
      anon_sym_POUND,
    ACTIONS(544), 1,
      anon_sym_LBRACK,
    ACTIONS(643), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(639), 4,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym__,
    STATE(153), 7,
      sym__markup,
      sym_quote,
      aux_sym__text,
      sym__code_mode,
      sym__code_block,
      sym_content_block,
      aux_sym_source_file_repeat1,
    ACTIONS(641), 21,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_PERCENT,
      sym_escape_sequence,
  [9336] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(342), 16,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_STAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_SEMI2,
      anon_sym_SQUOTE2,
      anon_sym_QMARK2,
      sym_float_literal,
      aux_sym_string_literal_token1,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(344), 20,
      sym_identifier,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_let,
      anon_sym_if,
      anon_sym_while,
      anon_sym_for,
      anon_sym_in,
      anon_sym_DOT2,
      anon_sym_BANG2,
      sym_none,
      anon_sym_true,
      anon_sym_false,
      sym_int_literal,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
  [9382] = 8,
    ACTIONS(538), 1,
      anon_sym_DQUOTE,
    ACTIONS(542), 1,
      anon_sym_POUND,
    ACTIONS(544), 1,
      anon_sym_LBRACK,
    ACTIONS(645), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(560), 4,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym__,
    STATE(161), 7,
      sym__markup,
      sym_quote,
      aux_sym__text,
      sym__code_mode,
      sym__code_block,
      sym_content_block,
      aux_sym_source_file_repeat1,
    ACTIONS(562), 21,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_PERCENT,
      sym_escape_sequence,
  [9438] = 8,
    ACTIONS(538), 1,
      anon_sym_DQUOTE,
    ACTIONS(542), 1,
      anon_sym_POUND,
    ACTIONS(544), 1,
      anon_sym_LBRACK,
    ACTIONS(651), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(647), 4,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym__,
    STATE(166), 7,
      sym__markup,
      sym_quote,
      aux_sym__text,
      sym__code_mode,
      sym__code_block,
      sym_content_block,
      aux_sym_source_file_repeat1,
    ACTIONS(649), 21,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_PERCENT,
      sym_escape_sequence,
  [9494] = 5,
    ACTIONS(653), 2,
      anon_sym_DOT2,
      anon_sym_BANG2,
    ACTIONS(655), 2,
      anon_sym_SQUOTE2,
      anon_sym_QMARK2,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(288), 14,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_STAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_SEMI2,
      sym_float_literal,
      aux_sym_string_literal_token1,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(286), 18,
      sym_identifier,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_let,
      anon_sym_if,
      anon_sym_while,
      anon_sym_for,
      anon_sym_in,
      sym_none,
      anon_sym_true,
      anon_sym_false,
      sym_int_literal,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
  [9544] = 8,
    ACTIONS(608), 1,
      anon_sym_RBRACK,
    ACTIONS(660), 1,
      anon_sym_DQUOTE,
    ACTIONS(666), 1,
      anon_sym_POUND,
    ACTIONS(669), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(657), 4,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym__,
    STATE(161), 7,
      sym__markup,
      sym_quote,
      aux_sym__text,
      sym__code_mode,
      sym__code_block,
      sym_content_block,
      aux_sym_source_file_repeat1,
    ACTIONS(663), 21,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_PERCENT,
      sym_escape_sequence,
  [9600] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(284), 16,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_STAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_SEMI2,
      anon_sym_SQUOTE2,
      anon_sym_QMARK2,
      sym_float_literal,
      aux_sym_string_literal_token1,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(282), 20,
      sym_identifier,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_let,
      anon_sym_if,
      anon_sym_while,
      anon_sym_for,
      anon_sym_in,
      anon_sym_DOT2,
      anon_sym_BANG2,
      sym_none,
      anon_sym_true,
      anon_sym_false,
      sym_int_literal,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
  [9646] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(280), 16,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_STAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_SEMI2,
      anon_sym_SQUOTE2,
      anon_sym_QMARK2,
      sym_float_literal,
      aux_sym_string_literal_token1,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(278), 20,
      sym_identifier,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_let,
      anon_sym_if,
      anon_sym_while,
      anon_sym_for,
      anon_sym_in,
      anon_sym_DOT2,
      anon_sym_BANG2,
      sym_none,
      anon_sym_true,
      anon_sym_false,
      sym_int_literal,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
  [9692] = 8,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(13), 1,
      anon_sym_POUND,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(672), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(674), 4,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym__,
    STATE(150), 7,
      sym__markup,
      sym_quote,
      aux_sym__text,
      sym__code_mode,
      sym__code_block,
      sym_content_block,
      aux_sym_source_file_repeat1,
    ACTIONS(676), 21,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_PERCENT,
      sym_escape_sequence,
  [9748] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(244), 16,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_STAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_SEMI2,
      anon_sym_SQUOTE2,
      anon_sym_QMARK2,
      sym_float_literal,
      aux_sym_string_literal_token1,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(248), 20,
      sym_identifier,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_let,
      anon_sym_if,
      anon_sym_while,
      anon_sym_for,
      anon_sym_in,
      anon_sym_DOT2,
      anon_sym_BANG2,
      sym_none,
      anon_sym_true,
      anon_sym_false,
      sym_int_literal,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
  [9794] = 8,
    ACTIONS(538), 1,
      anon_sym_DQUOTE,
    ACTIONS(542), 1,
      anon_sym_POUND,
    ACTIONS(544), 1,
      anon_sym_LBRACK,
    ACTIONS(678), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(560), 4,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym__,
    STATE(161), 7,
      sym__markup,
      sym_quote,
      aux_sym__text,
      sym__code_mode,
      sym__code_block,
      sym_content_block,
      aux_sym_source_file_repeat1,
    ACTIONS(562), 21,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_PERCENT,
      sym_escape_sequence,
  [9850] = 5,
    ACTIONS(680), 2,
      anon_sym_DOT2,
      anon_sym_BANG2,
    ACTIONS(682), 2,
      anon_sym_SQUOTE2,
      anon_sym_QMARK2,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(308), 14,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_STAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_SEMI2,
      sym_float_literal,
      aux_sym_string_literal_token1,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(310), 18,
      sym_identifier,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_let,
      anon_sym_if,
      anon_sym_while,
      anon_sym_for,
      anon_sym_in,
      sym_none,
      anon_sym_true,
      anon_sym_false,
      sym_int_literal,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
  [9900] = 8,
    ACTIONS(538), 1,
      anon_sym_DQUOTE,
    ACTIONS(542), 1,
      anon_sym_POUND,
    ACTIONS(544), 1,
      anon_sym_LBRACK,
    ACTIONS(684), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(560), 4,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym__,
    STATE(161), 7,
      sym__markup,
      sym_quote,
      aux_sym__text,
      sym__code_mode,
      sym__code_block,
      sym_content_block,
      aux_sym_source_file_repeat1,
    ACTIONS(562), 21,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_PERCENT,
      sym_escape_sequence,
  [9956] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(316), 16,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_STAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_SEMI2,
      anon_sym_SQUOTE2,
      anon_sym_QMARK2,
      sym_float_literal,
      aux_sym_string_literal_token1,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(318), 20,
      sym_identifier,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_let,
      anon_sym_if,
      anon_sym_while,
      anon_sym_for,
      anon_sym_in,
      anon_sym_DOT2,
      anon_sym_BANG2,
      sym_none,
      anon_sym_true,
      anon_sym_false,
      sym_int_literal,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
  [10002] = 18,
    ACTIONS(366), 1,
      anon_sym_LPAREN,
    ACTIONS(370), 1,
      anon_sym_LBRACE,
    ACTIONS(372), 1,
      anon_sym_LBRACK,
    ACTIONS(374), 1,
      anon_sym_DOT_DOT,
    ACTIONS(376), 1,
      sym_none,
    ACTIONS(380), 1,
      sym_int_literal,
    ACTIONS(382), 1,
      sym_float_literal,
    ACTIONS(384), 1,
      aux_sym_string_literal_token1,
    ACTIONS(386), 1,
      anon_sym_not,
    ACTIONS(408), 1,
      sym_identifier,
    STATE(370), 1,
      sym_expression,
    STATE(441), 1,
      sym__unnamed_arguments,
    ACTIONS(364), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(378), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(413), 2,
      sym__parameter,
      sym_asssigned_parameter,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    STATE(358), 3,
      sym_boolean_literal,
      sym_numeric,
      sym_string_literal,
    STATE(334), 14,
      sym_code_block,
      sym_content_block,
      sym_parenthesized_expression,
      sym_array,
      sym_unnamed_function,
      sym__literal,
      sym_assignment,
      sym_function_call,
      sym_unary_operator,
      sym_not_operator,
      sym_boolean_operator,
      sym_binary_operator,
      sym_comparison_operator,
      sym_augmented_assignment,
  [10077] = 18,
    ACTIONS(366), 1,
      anon_sym_LPAREN,
    ACTIONS(370), 1,
      anon_sym_LBRACE,
    ACTIONS(372), 1,
      anon_sym_LBRACK,
    ACTIONS(374), 1,
      anon_sym_DOT_DOT,
    ACTIONS(376), 1,
      sym_none,
    ACTIONS(380), 1,
      sym_int_literal,
    ACTIONS(382), 1,
      sym_float_literal,
    ACTIONS(384), 1,
      aux_sym_string_literal_token1,
    ACTIONS(386), 1,
      anon_sym_not,
    ACTIONS(408), 1,
      sym_identifier,
    STATE(370), 1,
      sym_expression,
    STATE(441), 1,
      sym__unnamed_arguments,
    ACTIONS(364), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(378), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(412), 2,
      sym__parameter,
      sym_asssigned_parameter,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    STATE(358), 3,
      sym_boolean_literal,
      sym_numeric,
      sym_string_literal,
    STATE(334), 14,
      sym_code_block,
      sym_content_block,
      sym_parenthesized_expression,
      sym_array,
      sym_unnamed_function,
      sym__literal,
      sym_assignment,
      sym_function_call,
      sym_unary_operator,
      sym_not_operator,
      sym_boolean_operator,
      sym_binary_operator,
      sym_comparison_operator,
      sym_augmented_assignment,
  [10152] = 4,
    ACTIONS(360), 1,
      anon_sym_EQ_GT,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(356), 14,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_STAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_SEMI2,
      sym_float_literal,
      aux_sym_string_literal_token1,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(358), 18,
      sym_identifier,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_let,
      anon_sym_if,
      anon_sym_while,
      anon_sym_for,
      anon_sym_in,
      sym_none,
      anon_sym_true,
      anon_sym_false,
      sym_int_literal,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
  [10197] = 17,
    ACTIONS(366), 1,
      anon_sym_LPAREN,
    ACTIONS(370), 1,
      anon_sym_LBRACE,
    ACTIONS(372), 1,
      anon_sym_LBRACK,
    ACTIONS(376), 1,
      sym_none,
    ACTIONS(380), 1,
      sym_int_literal,
    ACTIONS(382), 1,
      sym_float_literal,
    ACTIONS(384), 1,
      aux_sym_string_literal_token1,
    ACTIONS(386), 1,
      anon_sym_not,
    ACTIONS(686), 1,
      sym_identifier,
    ACTIONS(688), 1,
      anon_sym_RPAREN,
    STATE(369), 1,
      sym_expression,
    STATE(441), 1,
      sym__unnamed_arguments,
    ACTIONS(364), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(378), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    STATE(358), 3,
      sym_boolean_literal,
      sym_numeric,
      sym_string_literal,
    STATE(334), 14,
      sym_code_block,
      sym_content_block,
      sym_parenthesized_expression,
      sym_array,
      sym_unnamed_function,
      sym__literal,
      sym_assignment,
      sym_function_call,
      sym_unary_operator,
      sym_not_operator,
      sym_boolean_operator,
      sym_binary_operator,
      sym_comparison_operator,
      sym_augmented_assignment,
  [10268] = 17,
    ACTIONS(366), 1,
      anon_sym_LPAREN,
    ACTIONS(370), 1,
      anon_sym_LBRACE,
    ACTIONS(372), 1,
      anon_sym_LBRACK,
    ACTIONS(376), 1,
      sym_none,
    ACTIONS(380), 1,
      sym_int_literal,
    ACTIONS(382), 1,
      sym_float_literal,
    ACTIONS(384), 1,
      aux_sym_string_literal_token1,
    ACTIONS(386), 1,
      anon_sym_not,
    ACTIONS(690), 1,
      sym_identifier,
    STATE(371), 1,
      sym_expression,
    STATE(411), 1,
      sym_asssigned_parameter,
    STATE(441), 1,
      sym__unnamed_arguments,
    ACTIONS(364), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(378), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    STATE(358), 3,
      sym_boolean_literal,
      sym_numeric,
      sym_string_literal,
    STATE(334), 14,
      sym_code_block,
      sym_content_block,
      sym_parenthesized_expression,
      sym_array,
      sym_unnamed_function,
      sym__literal,
      sym_assignment,
      sym_function_call,
      sym_unary_operator,
      sym_not_operator,
      sym_boolean_operator,
      sym_binary_operator,
      sym_comparison_operator,
      sym_augmented_assignment,
  [10339] = 17,
    ACTIONS(366), 1,
      anon_sym_LPAREN,
    ACTIONS(370), 1,
      anon_sym_LBRACE,
    ACTIONS(372), 1,
      anon_sym_LBRACK,
    ACTIONS(376), 1,
      sym_none,
    ACTIONS(380), 1,
      sym_int_literal,
    ACTIONS(382), 1,
      sym_float_literal,
    ACTIONS(384), 1,
      aux_sym_string_literal_token1,
    ACTIONS(386), 1,
      anon_sym_not,
    ACTIONS(686), 1,
      sym_identifier,
    ACTIONS(692), 1,
      anon_sym_RPAREN,
    STATE(369), 1,
      sym_expression,
    STATE(441), 1,
      sym__unnamed_arguments,
    ACTIONS(364), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(378), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    STATE(358), 3,
      sym_boolean_literal,
      sym_numeric,
      sym_string_literal,
    STATE(334), 14,
      sym_code_block,
      sym_content_block,
      sym_parenthesized_expression,
      sym_array,
      sym_unnamed_function,
      sym__literal,
      sym_assignment,
      sym_function_call,
      sym_unary_operator,
      sym_not_operator,
      sym_boolean_operator,
      sym_binary_operator,
      sym_comparison_operator,
      sym_augmented_assignment,
  [10410] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(436), 14,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_STAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_SEMI2,
      sym_float_literal,
      aux_sym_string_literal_token1,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(438), 18,
      sym_identifier,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_let,
      anon_sym_if,
      anon_sym_while,
      anon_sym_for,
      anon_sym_in,
      sym_none,
      anon_sym_true,
      anon_sym_false,
      sym_int_literal,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
  [10452] = 16,
    ACTIONS(152), 1,
      sym_identifier,
    ACTIONS(156), 1,
      anon_sym_LPAREN,
    ACTIONS(158), 1,
      anon_sym_LBRACE,
    ACTIONS(160), 1,
      anon_sym_LBRACK,
    ACTIONS(174), 1,
      sym_none,
    ACTIONS(178), 1,
      sym_int_literal,
    ACTIONS(180), 1,
      sym_float_literal,
    ACTIONS(182), 1,
      aux_sym_string_literal_token1,
    ACTIONS(184), 1,
      anon_sym_not,
    STATE(115), 1,
      sym_expression,
    STATE(432), 1,
      sym__unnamed_arguments,
    ACTIONS(154), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(176), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    STATE(117), 3,
      sym_boolean_literal,
      sym_numeric,
      sym_string_literal,
    STATE(94), 14,
      sym_code_block,
      sym_content_block,
      sym_parenthesized_expression,
      sym_array,
      sym_unnamed_function,
      sym__literal,
      sym_assignment,
      sym_function_call,
      sym_unary_operator,
      sym_not_operator,
      sym_boolean_operator,
      sym_binary_operator,
      sym_comparison_operator,
      sym_augmented_assignment,
  [10520] = 16,
    ACTIONS(366), 1,
      anon_sym_LPAREN,
    ACTIONS(370), 1,
      anon_sym_LBRACE,
    ACTIONS(372), 1,
      anon_sym_LBRACK,
    ACTIONS(376), 1,
      sym_none,
    ACTIONS(380), 1,
      sym_int_literal,
    ACTIONS(382), 1,
      sym_float_literal,
    ACTIONS(384), 1,
      aux_sym_string_literal_token1,
    ACTIONS(386), 1,
      anon_sym_not,
    ACTIONS(686), 1,
      sym_identifier,
    STATE(342), 1,
      sym_expression,
    STATE(441), 1,
      sym__unnamed_arguments,
    ACTIONS(364), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(378), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    STATE(358), 3,
      sym_boolean_literal,
      sym_numeric,
      sym_string_literal,
    STATE(334), 14,
      sym_code_block,
      sym_content_block,
      sym_parenthesized_expression,
      sym_array,
      sym_unnamed_function,
      sym__literal,
      sym_assignment,
      sym_function_call,
      sym_unary_operator,
      sym_not_operator,
      sym_boolean_operator,
      sym_binary_operator,
      sym_comparison_operator,
      sym_augmented_assignment,
  [10588] = 16,
    ACTIONS(366), 1,
      anon_sym_LPAREN,
    ACTIONS(370), 1,
      anon_sym_LBRACE,
    ACTIONS(372), 1,
      anon_sym_LBRACK,
    ACTIONS(376), 1,
      sym_none,
    ACTIONS(380), 1,
      sym_int_literal,
    ACTIONS(382), 1,
      sym_float_literal,
    ACTIONS(384), 1,
      aux_sym_string_literal_token1,
    ACTIONS(386), 1,
      anon_sym_not,
    ACTIONS(686), 1,
      sym_identifier,
    STATE(343), 1,
      sym_expression,
    STATE(441), 1,
      sym__unnamed_arguments,
    ACTIONS(364), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(378), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    STATE(358), 3,
      sym_boolean_literal,
      sym_numeric,
      sym_string_literal,
    STATE(334), 14,
      sym_code_block,
      sym_content_block,
      sym_parenthesized_expression,
      sym_array,
      sym_unnamed_function,
      sym__literal,
      sym_assignment,
      sym_function_call,
      sym_unary_operator,
      sym_not_operator,
      sym_boolean_operator,
      sym_binary_operator,
      sym_comparison_operator,
      sym_augmented_assignment,
  [10656] = 16,
    ACTIONS(366), 1,
      anon_sym_LPAREN,
    ACTIONS(370), 1,
      anon_sym_LBRACE,
    ACTIONS(372), 1,
      anon_sym_LBRACK,
    ACTIONS(376), 1,
      sym_none,
    ACTIONS(380), 1,
      sym_int_literal,
    ACTIONS(382), 1,
      sym_float_literal,
    ACTIONS(384), 1,
      aux_sym_string_literal_token1,
    ACTIONS(386), 1,
      anon_sym_not,
    ACTIONS(686), 1,
      sym_identifier,
    STATE(344), 1,
      sym_expression,
    STATE(441), 1,
      sym__unnamed_arguments,
    ACTIONS(364), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(378), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    STATE(358), 3,
      sym_boolean_literal,
      sym_numeric,
      sym_string_literal,
    STATE(334), 14,
      sym_code_block,
      sym_content_block,
      sym_parenthesized_expression,
      sym_array,
      sym_unnamed_function,
      sym__literal,
      sym_assignment,
      sym_function_call,
      sym_unary_operator,
      sym_not_operator,
      sym_boolean_operator,
      sym_binary_operator,
      sym_comparison_operator,
      sym_augmented_assignment,
  [10724] = 16,
    ACTIONS(366), 1,
      anon_sym_LPAREN,
    ACTIONS(370), 1,
      anon_sym_LBRACE,
    ACTIONS(372), 1,
      anon_sym_LBRACK,
    ACTIONS(376), 1,
      sym_none,
    ACTIONS(380), 1,
      sym_int_literal,
    ACTIONS(382), 1,
      sym_float_literal,
    ACTIONS(384), 1,
      aux_sym_string_literal_token1,
    ACTIONS(386), 1,
      anon_sym_not,
    ACTIONS(686), 1,
      sym_identifier,
    STATE(345), 1,
      sym_expression,
    STATE(441), 1,
      sym__unnamed_arguments,
    ACTIONS(364), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(378), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    STATE(358), 3,
      sym_boolean_literal,
      sym_numeric,
      sym_string_literal,
    STATE(334), 14,
      sym_code_block,
      sym_content_block,
      sym_parenthesized_expression,
      sym_array,
      sym_unnamed_function,
      sym__literal,
      sym_assignment,
      sym_function_call,
      sym_unary_operator,
      sym_not_operator,
      sym_boolean_operator,
      sym_binary_operator,
      sym_comparison_operator,
      sym_augmented_assignment,
  [10792] = 16,
    ACTIONS(366), 1,
      anon_sym_LPAREN,
    ACTIONS(370), 1,
      anon_sym_LBRACE,
    ACTIONS(372), 1,
      anon_sym_LBRACK,
    ACTIONS(376), 1,
      sym_none,
    ACTIONS(380), 1,
      sym_int_literal,
    ACTIONS(382), 1,
      sym_float_literal,
    ACTIONS(384), 1,
      aux_sym_string_literal_token1,
    ACTIONS(386), 1,
      anon_sym_not,
    ACTIONS(686), 1,
      sym_identifier,
    STATE(364), 1,
      sym_expression,
    STATE(441), 1,
      sym__unnamed_arguments,
    ACTIONS(364), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(378), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    STATE(358), 3,
      sym_boolean_literal,
      sym_numeric,
      sym_string_literal,
    STATE(334), 14,
      sym_code_block,
      sym_content_block,
      sym_parenthesized_expression,
      sym_array,
      sym_unnamed_function,
      sym__literal,
      sym_assignment,
      sym_function_call,
      sym_unary_operator,
      sym_not_operator,
      sym_boolean_operator,
      sym_binary_operator,
      sym_comparison_operator,
      sym_augmented_assignment,
  [10860] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(498), 14,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_STAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_SEMI2,
      sym_float_literal,
      aux_sym_string_literal_token1,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(496), 18,
      sym_identifier,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_let,
      anon_sym_if,
      anon_sym_while,
      anon_sym_for,
      anon_sym_in,
      sym_none,
      anon_sym_true,
      anon_sym_false,
      sym_int_literal,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
  [10902] = 16,
    ACTIONS(152), 1,
      sym_identifier,
    ACTIONS(156), 1,
      anon_sym_LPAREN,
    ACTIONS(158), 1,
      anon_sym_LBRACE,
    ACTIONS(160), 1,
      anon_sym_LBRACK,
    ACTIONS(174), 1,
      sym_none,
    ACTIONS(178), 1,
      sym_int_literal,
    ACTIONS(180), 1,
      sym_float_literal,
    ACTIONS(182), 1,
      aux_sym_string_literal_token1,
    ACTIONS(184), 1,
      anon_sym_not,
    STATE(127), 1,
      sym_expression,
    STATE(432), 1,
      sym__unnamed_arguments,
    ACTIONS(154), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(176), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    STATE(117), 3,
      sym_boolean_literal,
      sym_numeric,
      sym_string_literal,
    STATE(94), 14,
      sym_code_block,
      sym_content_block,
      sym_parenthesized_expression,
      sym_array,
      sym_unnamed_function,
      sym__literal,
      sym_assignment,
      sym_function_call,
      sym_unary_operator,
      sym_not_operator,
      sym_boolean_operator,
      sym_binary_operator,
      sym_comparison_operator,
      sym_augmented_assignment,
  [10970] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(448), 14,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_STAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_SEMI2,
      sym_float_literal,
      aux_sym_string_literal_token1,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(450), 18,
      sym_identifier,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_let,
      anon_sym_if,
      anon_sym_while,
      anon_sym_for,
      anon_sym_in,
      sym_none,
      anon_sym_true,
      anon_sym_false,
      sym_int_literal,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
  [11012] = 16,
    ACTIONS(366), 1,
      anon_sym_LPAREN,
    ACTIONS(370), 1,
      anon_sym_LBRACE,
    ACTIONS(372), 1,
      anon_sym_LBRACK,
    ACTIONS(376), 1,
      sym_none,
    ACTIONS(380), 1,
      sym_int_literal,
    ACTIONS(382), 1,
      sym_float_literal,
    ACTIONS(384), 1,
      aux_sym_string_literal_token1,
    ACTIONS(386), 1,
      anon_sym_not,
    ACTIONS(686), 1,
      sym_identifier,
    STATE(361), 1,
      sym_expression,
    STATE(441), 1,
      sym__unnamed_arguments,
    ACTIONS(364), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(378), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    STATE(358), 3,
      sym_boolean_literal,
      sym_numeric,
      sym_string_literal,
    STATE(334), 14,
      sym_code_block,
      sym_content_block,
      sym_parenthesized_expression,
      sym_array,
      sym_unnamed_function,
      sym__literal,
      sym_assignment,
      sym_function_call,
      sym_unary_operator,
      sym_not_operator,
      sym_boolean_operator,
      sym_binary_operator,
      sym_comparison_operator,
      sym_augmented_assignment,
  [11080] = 16,
    ACTIONS(366), 1,
      anon_sym_LPAREN,
    ACTIONS(370), 1,
      anon_sym_LBRACE,
    ACTIONS(372), 1,
      anon_sym_LBRACK,
    ACTIONS(376), 1,
      sym_none,
    ACTIONS(380), 1,
      sym_int_literal,
    ACTIONS(382), 1,
      sym_float_literal,
    ACTIONS(384), 1,
      aux_sym_string_literal_token1,
    ACTIONS(386), 1,
      anon_sym_not,
    ACTIONS(686), 1,
      sym_identifier,
    STATE(362), 1,
      sym_expression,
    STATE(441), 1,
      sym__unnamed_arguments,
    ACTIONS(364), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(378), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    STATE(358), 3,
      sym_boolean_literal,
      sym_numeric,
      sym_string_literal,
    STATE(334), 14,
      sym_code_block,
      sym_content_block,
      sym_parenthesized_expression,
      sym_array,
      sym_unnamed_function,
      sym__literal,
      sym_assignment,
      sym_function_call,
      sym_unary_operator,
      sym_not_operator,
      sym_boolean_operator,
      sym_binary_operator,
      sym_comparison_operator,
      sym_augmented_assignment,
  [11148] = 16,
    ACTIONS(186), 1,
      sym_identifier,
    ACTIONS(190), 1,
      anon_sym_LPAREN,
    ACTIONS(192), 1,
      anon_sym_LBRACE,
    ACTIONS(194), 1,
      anon_sym_LBRACK,
    ACTIONS(208), 1,
      sym_none,
    ACTIONS(212), 1,
      sym_int_literal,
    ACTIONS(214), 1,
      sym_float_literal,
    ACTIONS(216), 1,
      aux_sym_string_literal_token1,
    ACTIONS(218), 1,
      anon_sym_not,
    STATE(102), 1,
      sym_expression,
    STATE(433), 1,
      sym__unnamed_arguments,
    ACTIONS(188), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(210), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    STATE(82), 3,
      sym_boolean_literal,
      sym_numeric,
      sym_string_literal,
    STATE(90), 14,
      sym_code_block,
      sym_content_block,
      sym_parenthesized_expression,
      sym_array,
      sym_unnamed_function,
      sym__literal,
      sym_assignment,
      sym_function_call,
      sym_unary_operator,
      sym_not_operator,
      sym_boolean_operator,
      sym_binary_operator,
      sym_comparison_operator,
      sym_augmented_assignment,
  [11216] = 16,
    ACTIONS(366), 1,
      anon_sym_LPAREN,
    ACTIONS(370), 1,
      anon_sym_LBRACE,
    ACTIONS(372), 1,
      anon_sym_LBRACK,
    ACTIONS(376), 1,
      sym_none,
    ACTIONS(380), 1,
      sym_int_literal,
    ACTIONS(382), 1,
      sym_float_literal,
    ACTIONS(384), 1,
      aux_sym_string_literal_token1,
    ACTIONS(386), 1,
      anon_sym_not,
    ACTIONS(686), 1,
      sym_identifier,
    STATE(360), 1,
      sym_expression,
    STATE(441), 1,
      sym__unnamed_arguments,
    ACTIONS(364), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(378), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    STATE(358), 3,
      sym_boolean_literal,
      sym_numeric,
      sym_string_literal,
    STATE(334), 14,
      sym_code_block,
      sym_content_block,
      sym_parenthesized_expression,
      sym_array,
      sym_unnamed_function,
      sym__literal,
      sym_assignment,
      sym_function_call,
      sym_unary_operator,
      sym_not_operator,
      sym_boolean_operator,
      sym_binary_operator,
      sym_comparison_operator,
      sym_augmented_assignment,
  [11284] = 16,
    ACTIONS(152), 1,
      sym_identifier,
    ACTIONS(156), 1,
      anon_sym_LPAREN,
    ACTIONS(158), 1,
      anon_sym_LBRACE,
    ACTIONS(160), 1,
      anon_sym_LBRACK,
    ACTIONS(174), 1,
      sym_none,
    ACTIONS(178), 1,
      sym_int_literal,
    ACTIONS(180), 1,
      sym_float_literal,
    ACTIONS(182), 1,
      aux_sym_string_literal_token1,
    ACTIONS(184), 1,
      anon_sym_not,
    STATE(132), 1,
      sym_expression,
    STATE(432), 1,
      sym__unnamed_arguments,
    ACTIONS(154), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(176), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    STATE(117), 3,
      sym_boolean_literal,
      sym_numeric,
      sym_string_literal,
    STATE(94), 14,
      sym_code_block,
      sym_content_block,
      sym_parenthesized_expression,
      sym_array,
      sym_unnamed_function,
      sym__literal,
      sym_assignment,
      sym_function_call,
      sym_unary_operator,
      sym_not_operator,
      sym_boolean_operator,
      sym_binary_operator,
      sym_comparison_operator,
      sym_augmented_assignment,
  [11352] = 16,
    ACTIONS(366), 1,
      anon_sym_LPAREN,
    ACTIONS(370), 1,
      anon_sym_LBRACE,
    ACTIONS(372), 1,
      anon_sym_LBRACK,
    ACTIONS(376), 1,
      sym_none,
    ACTIONS(380), 1,
      sym_int_literal,
    ACTIONS(382), 1,
      sym_float_literal,
    ACTIONS(384), 1,
      aux_sym_string_literal_token1,
    ACTIONS(386), 1,
      anon_sym_not,
    ACTIONS(686), 1,
      sym_identifier,
    STATE(349), 1,
      sym_expression,
    STATE(441), 1,
      sym__unnamed_arguments,
    ACTIONS(364), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(378), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    STATE(358), 3,
      sym_boolean_literal,
      sym_numeric,
      sym_string_literal,
    STATE(334), 14,
      sym_code_block,
      sym_content_block,
      sym_parenthesized_expression,
      sym_array,
      sym_unnamed_function,
      sym__literal,
      sym_assignment,
      sym_function_call,
      sym_unary_operator,
      sym_not_operator,
      sym_boolean_operator,
      sym_binary_operator,
      sym_comparison_operator,
      sym_augmented_assignment,
  [11420] = 16,
    ACTIONS(366), 1,
      anon_sym_LPAREN,
    ACTIONS(370), 1,
      anon_sym_LBRACE,
    ACTIONS(372), 1,
      anon_sym_LBRACK,
    ACTIONS(376), 1,
      sym_none,
    ACTIONS(380), 1,
      sym_int_literal,
    ACTIONS(382), 1,
      sym_float_literal,
    ACTIONS(384), 1,
      aux_sym_string_literal_token1,
    ACTIONS(386), 1,
      anon_sym_not,
    ACTIONS(686), 1,
      sym_identifier,
    STATE(339), 1,
      sym_expression,
    STATE(441), 1,
      sym__unnamed_arguments,
    ACTIONS(364), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(378), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    STATE(358), 3,
      sym_boolean_literal,
      sym_numeric,
      sym_string_literal,
    STATE(334), 14,
      sym_code_block,
      sym_content_block,
      sym_parenthesized_expression,
      sym_array,
      sym_unnamed_function,
      sym__literal,
      sym_assignment,
      sym_function_call,
      sym_unary_operator,
      sym_not_operator,
      sym_boolean_operator,
      sym_binary_operator,
      sym_comparison_operator,
      sym_augmented_assignment,
  [11488] = 16,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(41), 1,
      sym_none,
    ACTIONS(45), 1,
      sym_int_literal,
    ACTIONS(47), 1,
      sym_float_literal,
    ACTIONS(49), 1,
      aux_sym_string_literal_token1,
    ACTIONS(51), 1,
      anon_sym_not,
    STATE(207), 1,
      sym_expression,
    STATE(453), 1,
      sym__unnamed_arguments,
    ACTIONS(19), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(43), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    STATE(217), 3,
      sym_boolean_literal,
      sym_numeric,
      sym_string_literal,
    STATE(221), 14,
      sym_code_block,
      sym_content_block,
      sym_parenthesized_expression,
      sym_array,
      sym_unnamed_function,
      sym__literal,
      sym_assignment,
      sym_function_call,
      sym_unary_operator,
      sym_not_operator,
      sym_boolean_operator,
      sym_binary_operator,
      sym_comparison_operator,
      sym_augmented_assignment,
  [11556] = 16,
    ACTIONS(152), 1,
      sym_identifier,
    ACTIONS(156), 1,
      anon_sym_LPAREN,
    ACTIONS(158), 1,
      anon_sym_LBRACE,
    ACTIONS(160), 1,
      anon_sym_LBRACK,
    ACTIONS(174), 1,
      sym_none,
    ACTIONS(178), 1,
      sym_int_literal,
    ACTIONS(180), 1,
      sym_float_literal,
    ACTIONS(182), 1,
      aux_sym_string_literal_token1,
    ACTIONS(184), 1,
      anon_sym_not,
    STATE(116), 1,
      sym_expression,
    STATE(432), 1,
      sym__unnamed_arguments,
    ACTIONS(154), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(176), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    STATE(117), 3,
      sym_boolean_literal,
      sym_numeric,
      sym_string_literal,
    STATE(94), 14,
      sym_code_block,
      sym_content_block,
      sym_parenthesized_expression,
      sym_array,
      sym_unnamed_function,
      sym__literal,
      sym_assignment,
      sym_function_call,
      sym_unary_operator,
      sym_not_operator,
      sym_boolean_operator,
      sym_binary_operator,
      sym_comparison_operator,
      sym_augmented_assignment,
  [11624] = 16,
    ACTIONS(186), 1,
      sym_identifier,
    ACTIONS(190), 1,
      anon_sym_LPAREN,
    ACTIONS(192), 1,
      anon_sym_LBRACE,
    ACTIONS(194), 1,
      anon_sym_LBRACK,
    ACTIONS(208), 1,
      sym_none,
    ACTIONS(212), 1,
      sym_int_literal,
    ACTIONS(214), 1,
      sym_float_literal,
    ACTIONS(216), 1,
      aux_sym_string_literal_token1,
    ACTIONS(218), 1,
      anon_sym_not,
    STATE(105), 1,
      sym_expression,
    STATE(433), 1,
      sym__unnamed_arguments,
    ACTIONS(188), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(210), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    STATE(82), 3,
      sym_boolean_literal,
      sym_numeric,
      sym_string_literal,
    STATE(90), 14,
      sym_code_block,
      sym_content_block,
      sym_parenthesized_expression,
      sym_array,
      sym_unnamed_function,
      sym__literal,
      sym_assignment,
      sym_function_call,
      sym_unary_operator,
      sym_not_operator,
      sym_boolean_operator,
      sym_binary_operator,
      sym_comparison_operator,
      sym_augmented_assignment,
  [11692] = 16,
    ACTIONS(366), 1,
      anon_sym_LPAREN,
    ACTIONS(370), 1,
      anon_sym_LBRACE,
    ACTIONS(372), 1,
      anon_sym_LBRACK,
    ACTIONS(376), 1,
      sym_none,
    ACTIONS(380), 1,
      sym_int_literal,
    ACTIONS(382), 1,
      sym_float_literal,
    ACTIONS(384), 1,
      aux_sym_string_literal_token1,
    ACTIONS(386), 1,
      anon_sym_not,
    ACTIONS(686), 1,
      sym_identifier,
    STATE(347), 1,
      sym_expression,
    STATE(441), 1,
      sym__unnamed_arguments,
    ACTIONS(364), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(378), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    STATE(358), 3,
      sym_boolean_literal,
      sym_numeric,
      sym_string_literal,
    STATE(334), 14,
      sym_code_block,
      sym_content_block,
      sym_parenthesized_expression,
      sym_array,
      sym_unnamed_function,
      sym__literal,
      sym_assignment,
      sym_function_call,
      sym_unary_operator,
      sym_not_operator,
      sym_boolean_operator,
      sym_binary_operator,
      sym_comparison_operator,
      sym_augmented_assignment,
  [11760] = 16,
    ACTIONS(186), 1,
      sym_identifier,
    ACTIONS(190), 1,
      anon_sym_LPAREN,
    ACTIONS(192), 1,
      anon_sym_LBRACE,
    ACTIONS(194), 1,
      anon_sym_LBRACK,
    ACTIONS(208), 1,
      sym_none,
    ACTIONS(212), 1,
      sym_int_literal,
    ACTIONS(214), 1,
      sym_float_literal,
    ACTIONS(216), 1,
      aux_sym_string_literal_token1,
    ACTIONS(218), 1,
      anon_sym_not,
    STATE(106), 1,
      sym_expression,
    STATE(433), 1,
      sym__unnamed_arguments,
    ACTIONS(188), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(210), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    STATE(82), 3,
      sym_boolean_literal,
      sym_numeric,
      sym_string_literal,
    STATE(90), 14,
      sym_code_block,
      sym_content_block,
      sym_parenthesized_expression,
      sym_array,
      sym_unnamed_function,
      sym__literal,
      sym_assignment,
      sym_function_call,
      sym_unary_operator,
      sym_not_operator,
      sym_boolean_operator,
      sym_binary_operator,
      sym_comparison_operator,
      sym_augmented_assignment,
  [11828] = 16,
    ACTIONS(152), 1,
      sym_identifier,
    ACTIONS(156), 1,
      anon_sym_LPAREN,
    ACTIONS(158), 1,
      anon_sym_LBRACE,
    ACTIONS(160), 1,
      anon_sym_LBRACK,
    ACTIONS(174), 1,
      sym_none,
    ACTIONS(178), 1,
      sym_int_literal,
    ACTIONS(180), 1,
      sym_float_literal,
    ACTIONS(182), 1,
      aux_sym_string_literal_token1,
    ACTIONS(184), 1,
      anon_sym_not,
    STATE(67), 1,
      sym_expression,
    STATE(432), 1,
      sym__unnamed_arguments,
    ACTIONS(154), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(176), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    STATE(117), 3,
      sym_boolean_literal,
      sym_numeric,
      sym_string_literal,
    STATE(94), 14,
      sym_code_block,
      sym_content_block,
      sym_parenthesized_expression,
      sym_array,
      sym_unnamed_function,
      sym__literal,
      sym_assignment,
      sym_function_call,
      sym_unary_operator,
      sym_not_operator,
      sym_boolean_operator,
      sym_binary_operator,
      sym_comparison_operator,
      sym_augmented_assignment,
  [11896] = 16,
    ACTIONS(186), 1,
      sym_identifier,
    ACTIONS(190), 1,
      anon_sym_LPAREN,
    ACTIONS(192), 1,
      anon_sym_LBRACE,
    ACTIONS(194), 1,
      anon_sym_LBRACK,
    ACTIONS(208), 1,
      sym_none,
    ACTIONS(212), 1,
      sym_int_literal,
    ACTIONS(214), 1,
      sym_float_literal,
    ACTIONS(216), 1,
      aux_sym_string_literal_token1,
    ACTIONS(218), 1,
      anon_sym_not,
    STATE(107), 1,
      sym_expression,
    STATE(433), 1,
      sym__unnamed_arguments,
    ACTIONS(188), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(210), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    STATE(82), 3,
      sym_boolean_literal,
      sym_numeric,
      sym_string_literal,
    STATE(90), 14,
      sym_code_block,
      sym_content_block,
      sym_parenthesized_expression,
      sym_array,
      sym_unnamed_function,
      sym__literal,
      sym_assignment,
      sym_function_call,
      sym_unary_operator,
      sym_not_operator,
      sym_boolean_operator,
      sym_binary_operator,
      sym_comparison_operator,
      sym_augmented_assignment,
  [11964] = 16,
    ACTIONS(186), 1,
      sym_identifier,
    ACTIONS(190), 1,
      anon_sym_LPAREN,
    ACTIONS(192), 1,
      anon_sym_LBRACE,
    ACTIONS(194), 1,
      anon_sym_LBRACK,
    ACTIONS(208), 1,
      sym_none,
    ACTIONS(212), 1,
      sym_int_literal,
    ACTIONS(214), 1,
      sym_float_literal,
    ACTIONS(216), 1,
      aux_sym_string_literal_token1,
    ACTIONS(218), 1,
      anon_sym_not,
    STATE(109), 1,
      sym_expression,
    STATE(433), 1,
      sym__unnamed_arguments,
    ACTIONS(188), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(210), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    STATE(82), 3,
      sym_boolean_literal,
      sym_numeric,
      sym_string_literal,
    STATE(90), 14,
      sym_code_block,
      sym_content_block,
      sym_parenthesized_expression,
      sym_array,
      sym_unnamed_function,
      sym__literal,
      sym_assignment,
      sym_function_call,
      sym_unary_operator,
      sym_not_operator,
      sym_boolean_operator,
      sym_binary_operator,
      sym_comparison_operator,
      sym_augmented_assignment,
  [12032] = 16,
    ACTIONS(366), 1,
      anon_sym_LPAREN,
    ACTIONS(370), 1,
      anon_sym_LBRACE,
    ACTIONS(372), 1,
      anon_sym_LBRACK,
    ACTIONS(376), 1,
      sym_none,
    ACTIONS(380), 1,
      sym_int_literal,
    ACTIONS(382), 1,
      sym_float_literal,
    ACTIONS(384), 1,
      aux_sym_string_literal_token1,
    ACTIONS(386), 1,
      anon_sym_not,
    ACTIONS(686), 1,
      sym_identifier,
    STATE(346), 1,
      sym_expression,
    STATE(441), 1,
      sym__unnamed_arguments,
    ACTIONS(364), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(378), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    STATE(358), 3,
      sym_boolean_literal,
      sym_numeric,
      sym_string_literal,
    STATE(334), 14,
      sym_code_block,
      sym_content_block,
      sym_parenthesized_expression,
      sym_array,
      sym_unnamed_function,
      sym__literal,
      sym_assignment,
      sym_function_call,
      sym_unary_operator,
      sym_not_operator,
      sym_boolean_operator,
      sym_binary_operator,
      sym_comparison_operator,
      sym_augmented_assignment,
  [12100] = 16,
    ACTIONS(366), 1,
      anon_sym_LPAREN,
    ACTIONS(370), 1,
      anon_sym_LBRACE,
    ACTIONS(372), 1,
      anon_sym_LBRACK,
    ACTIONS(376), 1,
      sym_none,
    ACTIONS(380), 1,
      sym_int_literal,
    ACTIONS(382), 1,
      sym_float_literal,
    ACTIONS(384), 1,
      aux_sym_string_literal_token1,
    ACTIONS(386), 1,
      anon_sym_not,
    ACTIONS(686), 1,
      sym_identifier,
    STATE(331), 1,
      sym_expression,
    STATE(441), 1,
      sym__unnamed_arguments,
    ACTIONS(364), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(378), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    STATE(358), 3,
      sym_boolean_literal,
      sym_numeric,
      sym_string_literal,
    STATE(334), 14,
      sym_code_block,
      sym_content_block,
      sym_parenthesized_expression,
      sym_array,
      sym_unnamed_function,
      sym__literal,
      sym_assignment,
      sym_function_call,
      sym_unary_operator,
      sym_not_operator,
      sym_boolean_operator,
      sym_binary_operator,
      sym_comparison_operator,
      sym_augmented_assignment,
  [12168] = 16,
    ACTIONS(366), 1,
      anon_sym_LPAREN,
    ACTIONS(370), 1,
      anon_sym_LBRACE,
    ACTIONS(372), 1,
      anon_sym_LBRACK,
    ACTIONS(376), 1,
      sym_none,
    ACTIONS(380), 1,
      sym_int_literal,
    ACTIONS(382), 1,
      sym_float_literal,
    ACTIONS(384), 1,
      aux_sym_string_literal_token1,
    ACTIONS(386), 1,
      anon_sym_not,
    ACTIONS(686), 1,
      sym_identifier,
    STATE(357), 1,
      sym_expression,
    STATE(441), 1,
      sym__unnamed_arguments,
    ACTIONS(364), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(378), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    STATE(358), 3,
      sym_boolean_literal,
      sym_numeric,
      sym_string_literal,
    STATE(334), 14,
      sym_code_block,
      sym_content_block,
      sym_parenthesized_expression,
      sym_array,
      sym_unnamed_function,
      sym__literal,
      sym_assignment,
      sym_function_call,
      sym_unary_operator,
      sym_not_operator,
      sym_boolean_operator,
      sym_binary_operator,
      sym_comparison_operator,
      sym_augmented_assignment,
  [12236] = 16,
    ACTIONS(186), 1,
      sym_identifier,
    ACTIONS(190), 1,
      anon_sym_LPAREN,
    ACTIONS(192), 1,
      anon_sym_LBRACE,
    ACTIONS(194), 1,
      anon_sym_LBRACK,
    ACTIONS(208), 1,
      sym_none,
    ACTIONS(212), 1,
      sym_int_literal,
    ACTIONS(214), 1,
      sym_float_literal,
    ACTIONS(216), 1,
      aux_sym_string_literal_token1,
    ACTIONS(218), 1,
      anon_sym_not,
    STATE(114), 1,
      sym_expression,
    STATE(433), 1,
      sym__unnamed_arguments,
    ACTIONS(188), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(210), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    STATE(82), 3,
      sym_boolean_literal,
      sym_numeric,
      sym_string_literal,
    STATE(90), 14,
      sym_code_block,
      sym_content_block,
      sym_parenthesized_expression,
      sym_array,
      sym_unnamed_function,
      sym__literal,
      sym_assignment,
      sym_function_call,
      sym_unary_operator,
      sym_not_operator,
      sym_boolean_operator,
      sym_binary_operator,
      sym_comparison_operator,
      sym_augmented_assignment,
  [12304] = 16,
    ACTIONS(186), 1,
      sym_identifier,
    ACTIONS(190), 1,
      anon_sym_LPAREN,
    ACTIONS(192), 1,
      anon_sym_LBRACE,
    ACTIONS(194), 1,
      anon_sym_LBRACK,
    ACTIONS(208), 1,
      sym_none,
    ACTIONS(212), 1,
      sym_int_literal,
    ACTIONS(214), 1,
      sym_float_literal,
    ACTIONS(216), 1,
      aux_sym_string_literal_token1,
    ACTIONS(218), 1,
      anon_sym_not,
    STATE(87), 1,
      sym_expression,
    STATE(433), 1,
      sym__unnamed_arguments,
    ACTIONS(188), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(210), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    STATE(82), 3,
      sym_boolean_literal,
      sym_numeric,
      sym_string_literal,
    STATE(90), 14,
      sym_code_block,
      sym_content_block,
      sym_parenthesized_expression,
      sym_array,
      sym_unnamed_function,
      sym__literal,
      sym_assignment,
      sym_function_call,
      sym_unary_operator,
      sym_not_operator,
      sym_boolean_operator,
      sym_binary_operator,
      sym_comparison_operator,
      sym_augmented_assignment,
  [12372] = 16,
    ACTIONS(366), 1,
      anon_sym_LPAREN,
    ACTIONS(370), 1,
      anon_sym_LBRACE,
    ACTIONS(372), 1,
      anon_sym_LBRACK,
    ACTIONS(376), 1,
      sym_none,
    ACTIONS(380), 1,
      sym_int_literal,
    ACTIONS(382), 1,
      sym_float_literal,
    ACTIONS(384), 1,
      aux_sym_string_literal_token1,
    ACTIONS(386), 1,
      anon_sym_not,
    ACTIONS(686), 1,
      sym_identifier,
    STATE(369), 1,
      sym_expression,
    STATE(441), 1,
      sym__unnamed_arguments,
    ACTIONS(364), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(378), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    STATE(358), 3,
      sym_boolean_literal,
      sym_numeric,
      sym_string_literal,
    STATE(334), 14,
      sym_code_block,
      sym_content_block,
      sym_parenthesized_expression,
      sym_array,
      sym_unnamed_function,
      sym__literal,
      sym_assignment,
      sym_function_call,
      sym_unary_operator,
      sym_not_operator,
      sym_boolean_operator,
      sym_binary_operator,
      sym_comparison_operator,
      sym_augmented_assignment,
  [12440] = 11,
    ACTIONS(694), 1,
      anon_sym_SLASH,
    ACTIONS(698), 1,
      anon_sym_STAR,
    ACTIONS(702), 1,
      anon_sym_not,
    ACTIONS(704), 1,
      anon_sym_and,
    ACTIONS(706), 1,
      anon_sym_or,
    ACTIONS(696), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(700), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_in,
    ACTIONS(708), 4,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(454), 7,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_SEMI2,
      sym_float_literal,
      aux_sym_string_literal_token1,
    ACTIONS(452), 11,
      sym_identifier,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_let,
      anon_sym_if,
      anon_sym_while,
      anon_sym_for,
      sym_none,
      anon_sym_true,
      anon_sym_false,
      sym_int_literal,
  [12498] = 16,
    ACTIONS(152), 1,
      sym_identifier,
    ACTIONS(156), 1,
      anon_sym_LPAREN,
    ACTIONS(158), 1,
      anon_sym_LBRACE,
    ACTIONS(160), 1,
      anon_sym_LBRACK,
    ACTIONS(174), 1,
      sym_none,
    ACTIONS(178), 1,
      sym_int_literal,
    ACTIONS(180), 1,
      sym_float_literal,
    ACTIONS(182), 1,
      aux_sym_string_literal_token1,
    ACTIONS(184), 1,
      anon_sym_not,
    STATE(63), 1,
      sym_expression,
    STATE(432), 1,
      sym__unnamed_arguments,
    ACTIONS(154), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(176), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    STATE(117), 3,
      sym_boolean_literal,
      sym_numeric,
      sym_string_literal,
    STATE(94), 14,
      sym_code_block,
      sym_content_block,
      sym_parenthesized_expression,
      sym_array,
      sym_unnamed_function,
      sym__literal,
      sym_assignment,
      sym_function_call,
      sym_unary_operator,
      sym_not_operator,
      sym_boolean_operator,
      sym_binary_operator,
      sym_comparison_operator,
      sym_augmented_assignment,
  [12566] = 16,
    ACTIONS(152), 1,
      sym_identifier,
    ACTIONS(156), 1,
      anon_sym_LPAREN,
    ACTIONS(158), 1,
      anon_sym_LBRACE,
    ACTIONS(160), 1,
      anon_sym_LBRACK,
    ACTIONS(174), 1,
      sym_none,
    ACTIONS(178), 1,
      sym_int_literal,
    ACTIONS(180), 1,
      sym_float_literal,
    ACTIONS(182), 1,
      aux_sym_string_literal_token1,
    ACTIONS(184), 1,
      anon_sym_not,
    STATE(79), 1,
      sym_expression,
    STATE(432), 1,
      sym__unnamed_arguments,
    ACTIONS(154), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(176), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    STATE(117), 3,
      sym_boolean_literal,
      sym_numeric,
      sym_string_literal,
    STATE(94), 14,
      sym_code_block,
      sym_content_block,
      sym_parenthesized_expression,
      sym_array,
      sym_unnamed_function,
      sym__literal,
      sym_assignment,
      sym_function_call,
      sym_unary_operator,
      sym_not_operator,
      sym_boolean_operator,
      sym_binary_operator,
      sym_comparison_operator,
      sym_augmented_assignment,
  [12634] = 16,
    ACTIONS(366), 1,
      anon_sym_LPAREN,
    ACTIONS(370), 1,
      anon_sym_LBRACE,
    ACTIONS(372), 1,
      anon_sym_LBRACK,
    ACTIONS(376), 1,
      sym_none,
    ACTIONS(380), 1,
      sym_int_literal,
    ACTIONS(382), 1,
      sym_float_literal,
    ACTIONS(384), 1,
      aux_sym_string_literal_token1,
    ACTIONS(386), 1,
      anon_sym_not,
    ACTIONS(686), 1,
      sym_identifier,
    STATE(354), 1,
      sym_expression,
    STATE(441), 1,
      sym__unnamed_arguments,
    ACTIONS(364), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(378), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    STATE(358), 3,
      sym_boolean_literal,
      sym_numeric,
      sym_string_literal,
    STATE(334), 14,
      sym_code_block,
      sym_content_block,
      sym_parenthesized_expression,
      sym_array,
      sym_unnamed_function,
      sym__literal,
      sym_assignment,
      sym_function_call,
      sym_unary_operator,
      sym_not_operator,
      sym_boolean_operator,
      sym_binary_operator,
      sym_comparison_operator,
      sym_augmented_assignment,
  [12702] = 16,
    ACTIONS(186), 1,
      sym_identifier,
    ACTIONS(190), 1,
      anon_sym_LPAREN,
    ACTIONS(192), 1,
      anon_sym_LBRACE,
    ACTIONS(194), 1,
      anon_sym_LBRACK,
    ACTIONS(208), 1,
      sym_none,
    ACTIONS(212), 1,
      sym_int_literal,
    ACTIONS(214), 1,
      sym_float_literal,
    ACTIONS(216), 1,
      aux_sym_string_literal_token1,
    ACTIONS(218), 1,
      anon_sym_not,
    STATE(129), 1,
      sym_expression,
    STATE(433), 1,
      sym__unnamed_arguments,
    ACTIONS(188), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(210), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    STATE(82), 3,
      sym_boolean_literal,
      sym_numeric,
      sym_string_literal,
    STATE(90), 14,
      sym_code_block,
      sym_content_block,
      sym_parenthesized_expression,
      sym_array,
      sym_unnamed_function,
      sym__literal,
      sym_assignment,
      sym_function_call,
      sym_unary_operator,
      sym_not_operator,
      sym_boolean_operator,
      sym_binary_operator,
      sym_comparison_operator,
      sym_augmented_assignment,
  [12770] = 16,
    ACTIONS(152), 1,
      sym_identifier,
    ACTIONS(156), 1,
      anon_sym_LPAREN,
    ACTIONS(158), 1,
      anon_sym_LBRACE,
    ACTIONS(160), 1,
      anon_sym_LBRACK,
    ACTIONS(174), 1,
      sym_none,
    ACTIONS(178), 1,
      sym_int_literal,
    ACTIONS(180), 1,
      sym_float_literal,
    ACTIONS(182), 1,
      aux_sym_string_literal_token1,
    ACTIONS(184), 1,
      anon_sym_not,
    STATE(112), 1,
      sym_expression,
    STATE(432), 1,
      sym__unnamed_arguments,
    ACTIONS(154), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(176), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    STATE(117), 3,
      sym_boolean_literal,
      sym_numeric,
      sym_string_literal,
    STATE(94), 14,
      sym_code_block,
      sym_content_block,
      sym_parenthesized_expression,
      sym_array,
      sym_unnamed_function,
      sym__literal,
      sym_assignment,
      sym_function_call,
      sym_unary_operator,
      sym_not_operator,
      sym_boolean_operator,
      sym_binary_operator,
      sym_comparison_operator,
      sym_augmented_assignment,
  [12838] = 16,
    ACTIONS(152), 1,
      sym_identifier,
    ACTIONS(156), 1,
      anon_sym_LPAREN,
    ACTIONS(158), 1,
      anon_sym_LBRACE,
    ACTIONS(160), 1,
      anon_sym_LBRACK,
    ACTIONS(174), 1,
      sym_none,
    ACTIONS(178), 1,
      sym_int_literal,
    ACTIONS(180), 1,
      sym_float_literal,
    ACTIONS(182), 1,
      aux_sym_string_literal_token1,
    ACTIONS(184), 1,
      anon_sym_not,
    STATE(120), 1,
      sym_expression,
    STATE(432), 1,
      sym__unnamed_arguments,
    ACTIONS(154), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(176), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    STATE(117), 3,
      sym_boolean_literal,
      sym_numeric,
      sym_string_literal,
    STATE(94), 14,
      sym_code_block,
      sym_content_block,
      sym_parenthesized_expression,
      sym_array,
      sym_unnamed_function,
      sym__literal,
      sym_assignment,
      sym_function_call,
      sym_unary_operator,
      sym_not_operator,
      sym_boolean_operator,
      sym_binary_operator,
      sym_comparison_operator,
      sym_augmented_assignment,
  [12906] = 16,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(41), 1,
      sym_none,
    ACTIONS(45), 1,
      sym_int_literal,
    ACTIONS(47), 1,
      sym_float_literal,
    ACTIONS(49), 1,
      aux_sym_string_literal_token1,
    ACTIONS(51), 1,
      anon_sym_not,
    STATE(229), 1,
      sym_expression,
    STATE(453), 1,
      sym__unnamed_arguments,
    ACTIONS(19), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(43), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    STATE(217), 3,
      sym_boolean_literal,
      sym_numeric,
      sym_string_literal,
    STATE(221), 14,
      sym_code_block,
      sym_content_block,
      sym_parenthesized_expression,
      sym_array,
      sym_unnamed_function,
      sym__literal,
      sym_assignment,
      sym_function_call,
      sym_unary_operator,
      sym_not_operator,
      sym_boolean_operator,
      sym_binary_operator,
      sym_comparison_operator,
      sym_augmented_assignment,
  [12974] = 16,
    ACTIONS(152), 1,
      sym_identifier,
    ACTIONS(156), 1,
      anon_sym_LPAREN,
    ACTIONS(158), 1,
      anon_sym_LBRACE,
    ACTIONS(160), 1,
      anon_sym_LBRACK,
    ACTIONS(174), 1,
      sym_none,
    ACTIONS(178), 1,
      sym_int_literal,
    ACTIONS(180), 1,
      sym_float_literal,
    ACTIONS(182), 1,
      aux_sym_string_literal_token1,
    ACTIONS(184), 1,
      anon_sym_not,
    STATE(110), 1,
      sym_expression,
    STATE(432), 1,
      sym__unnamed_arguments,
    ACTIONS(154), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(176), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    STATE(117), 3,
      sym_boolean_literal,
      sym_numeric,
      sym_string_literal,
    STATE(94), 14,
      sym_code_block,
      sym_content_block,
      sym_parenthesized_expression,
      sym_array,
      sym_unnamed_function,
      sym__literal,
      sym_assignment,
      sym_function_call,
      sym_unary_operator,
      sym_not_operator,
      sym_boolean_operator,
      sym_binary_operator,
      sym_comparison_operator,
      sym_augmented_assignment,
  [13042] = 16,
    ACTIONS(186), 1,
      sym_identifier,
    ACTIONS(190), 1,
      anon_sym_LPAREN,
    ACTIONS(192), 1,
      anon_sym_LBRACE,
    ACTIONS(194), 1,
      anon_sym_LBRACK,
    ACTIONS(208), 1,
      sym_none,
    ACTIONS(212), 1,
      sym_int_literal,
    ACTIONS(214), 1,
      sym_float_literal,
    ACTIONS(216), 1,
      aux_sym_string_literal_token1,
    ACTIONS(218), 1,
      anon_sym_not,
    STATE(131), 1,
      sym_expression,
    STATE(433), 1,
      sym__unnamed_arguments,
    ACTIONS(188), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(210), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    STATE(82), 3,
      sym_boolean_literal,
      sym_numeric,
      sym_string_literal,
    STATE(90), 14,
      sym_code_block,
      sym_content_block,
      sym_parenthesized_expression,
      sym_array,
      sym_unnamed_function,
      sym__literal,
      sym_assignment,
      sym_function_call,
      sym_unary_operator,
      sym_not_operator,
      sym_boolean_operator,
      sym_binary_operator,
      sym_comparison_operator,
      sym_augmented_assignment,
  [13110] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(222), 14,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_STAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_SEMI2,
      sym_float_literal,
      aux_sym_string_literal_token1,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(220), 18,
      sym_identifier,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_let,
      anon_sym_if,
      anon_sym_while,
      anon_sym_for,
      anon_sym_in,
      sym_none,
      anon_sym_true,
      anon_sym_false,
      sym_int_literal,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
  [13152] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(518), 14,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_STAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_SEMI2,
      sym_float_literal,
      aux_sym_string_literal_token1,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(520), 18,
      sym_identifier,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_let,
      anon_sym_if,
      anon_sym_while,
      anon_sym_for,
      anon_sym_in,
      sym_none,
      anon_sym_true,
      anon_sym_false,
      sym_int_literal,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
  [13194] = 16,
    ACTIONS(366), 1,
      anon_sym_LPAREN,
    ACTIONS(370), 1,
      anon_sym_LBRACE,
    ACTIONS(372), 1,
      anon_sym_LBRACK,
    ACTIONS(376), 1,
      sym_none,
    ACTIONS(380), 1,
      sym_int_literal,
    ACTIONS(382), 1,
      sym_float_literal,
    ACTIONS(384), 1,
      aux_sym_string_literal_token1,
    ACTIONS(386), 1,
      anon_sym_not,
    ACTIONS(686), 1,
      sym_identifier,
    STATE(350), 1,
      sym_expression,
    STATE(441), 1,
      sym__unnamed_arguments,
    ACTIONS(364), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(378), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    STATE(358), 3,
      sym_boolean_literal,
      sym_numeric,
      sym_string_literal,
    STATE(334), 14,
      sym_code_block,
      sym_content_block,
      sym_parenthesized_expression,
      sym_array,
      sym_unnamed_function,
      sym__literal,
      sym_assignment,
      sym_function_call,
      sym_unary_operator,
      sym_not_operator,
      sym_boolean_operator,
      sym_binary_operator,
      sym_comparison_operator,
      sym_augmented_assignment,
  [13262] = 16,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(41), 1,
      sym_none,
    ACTIONS(45), 1,
      sym_int_literal,
    ACTIONS(47), 1,
      sym_float_literal,
    ACTIONS(49), 1,
      aux_sym_string_literal_token1,
    ACTIONS(51), 1,
      anon_sym_not,
    STATE(235), 1,
      sym_expression,
    STATE(453), 1,
      sym__unnamed_arguments,
    ACTIONS(19), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(43), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    STATE(217), 3,
      sym_boolean_literal,
      sym_numeric,
      sym_string_literal,
    STATE(221), 14,
      sym_code_block,
      sym_content_block,
      sym_parenthesized_expression,
      sym_array,
      sym_unnamed_function,
      sym__literal,
      sym_assignment,
      sym_function_call,
      sym_unary_operator,
      sym_not_operator,
      sym_boolean_operator,
      sym_binary_operator,
      sym_comparison_operator,
      sym_augmented_assignment,
  [13330] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(486), 14,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_STAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_SEMI2,
      sym_float_literal,
      aux_sym_string_literal_token1,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(484), 18,
      sym_identifier,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_let,
      anon_sym_if,
      anon_sym_while,
      anon_sym_for,
      anon_sym_in,
      sym_none,
      anon_sym_true,
      anon_sym_false,
      sym_int_literal,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
  [13372] = 16,
    ACTIONS(366), 1,
      anon_sym_LPAREN,
    ACTIONS(370), 1,
      anon_sym_LBRACE,
    ACTIONS(372), 1,
      anon_sym_LBRACK,
    ACTIONS(376), 1,
      sym_none,
    ACTIONS(380), 1,
      sym_int_literal,
    ACTIONS(382), 1,
      sym_float_literal,
    ACTIONS(384), 1,
      aux_sym_string_literal_token1,
    ACTIONS(386), 1,
      anon_sym_not,
    ACTIONS(686), 1,
      sym_identifier,
    STATE(340), 1,
      sym_expression,
    STATE(441), 1,
      sym__unnamed_arguments,
    ACTIONS(364), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(378), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    STATE(358), 3,
      sym_boolean_literal,
      sym_numeric,
      sym_string_literal,
    STATE(334), 14,
      sym_code_block,
      sym_content_block,
      sym_parenthesized_expression,
      sym_array,
      sym_unnamed_function,
      sym__literal,
      sym_assignment,
      sym_function_call,
      sym_unary_operator,
      sym_not_operator,
      sym_boolean_operator,
      sym_binary_operator,
      sym_comparison_operator,
      sym_augmented_assignment,
  [13440] = 16,
    ACTIONS(186), 1,
      sym_identifier,
    ACTIONS(190), 1,
      anon_sym_LPAREN,
    ACTIONS(192), 1,
      anon_sym_LBRACE,
    ACTIONS(194), 1,
      anon_sym_LBRACK,
    ACTIONS(208), 1,
      sym_none,
    ACTIONS(212), 1,
      sym_int_literal,
    ACTIONS(214), 1,
      sym_float_literal,
    ACTIONS(216), 1,
      aux_sym_string_literal_token1,
    ACTIONS(218), 1,
      anon_sym_not,
    STATE(96), 1,
      sym_expression,
    STATE(433), 1,
      sym__unnamed_arguments,
    ACTIONS(188), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(210), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    STATE(82), 3,
      sym_boolean_literal,
      sym_numeric,
      sym_string_literal,
    STATE(90), 14,
      sym_code_block,
      sym_content_block,
      sym_parenthesized_expression,
      sym_array,
      sym_unnamed_function,
      sym__literal,
      sym_assignment,
      sym_function_call,
      sym_unary_operator,
      sym_not_operator,
      sym_boolean_operator,
      sym_binary_operator,
      sym_comparison_operator,
      sym_augmented_assignment,
  [13508] = 16,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(41), 1,
      sym_none,
    ACTIONS(45), 1,
      sym_int_literal,
    ACTIONS(47), 1,
      sym_float_literal,
    ACTIONS(49), 1,
      aux_sym_string_literal_token1,
    ACTIONS(51), 1,
      anon_sym_not,
    STATE(243), 1,
      sym_expression,
    STATE(453), 1,
      sym__unnamed_arguments,
    ACTIONS(19), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(43), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    STATE(217), 3,
      sym_boolean_literal,
      sym_numeric,
      sym_string_literal,
    STATE(221), 14,
      sym_code_block,
      sym_content_block,
      sym_parenthesized_expression,
      sym_array,
      sym_unnamed_function,
      sym__literal,
      sym_assignment,
      sym_function_call,
      sym_unary_operator,
      sym_not_operator,
      sym_boolean_operator,
      sym_binary_operator,
      sym_comparison_operator,
      sym_augmented_assignment,
  [13576] = 11,
    ACTIONS(694), 1,
      anon_sym_SLASH,
    ACTIONS(698), 1,
      anon_sym_STAR,
    ACTIONS(702), 1,
      anon_sym_not,
    ACTIONS(704), 1,
      anon_sym_and,
    ACTIONS(706), 1,
      anon_sym_or,
    ACTIONS(696), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(700), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_in,
    ACTIONS(708), 4,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(418), 7,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_SEMI2,
      sym_float_literal,
      aux_sym_string_literal_token1,
    ACTIONS(416), 11,
      sym_identifier,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_let,
      anon_sym_if,
      anon_sym_while,
      anon_sym_for,
      sym_none,
      anon_sym_true,
      anon_sym_false,
      sym_int_literal,
  [13634] = 6,
    ACTIONS(694), 1,
      anon_sym_SLASH,
    ACTIONS(698), 1,
      anon_sym_STAR,
    ACTIONS(696), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(516), 11,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_SEMI2,
      sym_float_literal,
      aux_sym_string_literal_token1,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(514), 17,
      sym_identifier,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_let,
      anon_sym_if,
      anon_sym_while,
      anon_sym_for,
      anon_sym_in,
      sym_none,
      anon_sym_true,
      anon_sym_false,
      sym_int_literal,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
  [13682] = 16,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(41), 1,
      sym_none,
    ACTIONS(45), 1,
      sym_int_literal,
    ACTIONS(47), 1,
      sym_float_literal,
    ACTIONS(49), 1,
      aux_sym_string_literal_token1,
    ACTIONS(51), 1,
      anon_sym_not,
    STATE(247), 1,
      sym_expression,
    STATE(453), 1,
      sym__unnamed_arguments,
    ACTIONS(19), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(43), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    STATE(217), 3,
      sym_boolean_literal,
      sym_numeric,
      sym_string_literal,
    STATE(221), 14,
      sym_code_block,
      sym_content_block,
      sym_parenthesized_expression,
      sym_array,
      sym_unnamed_function,
      sym__literal,
      sym_assignment,
      sym_function_call,
      sym_unary_operator,
      sym_not_operator,
      sym_boolean_operator,
      sym_binary_operator,
      sym_comparison_operator,
      sym_augmented_assignment,
  [13750] = 16,
    ACTIONS(366), 1,
      anon_sym_LPAREN,
    ACTIONS(370), 1,
      anon_sym_LBRACE,
    ACTIONS(372), 1,
      anon_sym_LBRACK,
    ACTIONS(376), 1,
      sym_none,
    ACTIONS(380), 1,
      sym_int_literal,
    ACTIONS(382), 1,
      sym_float_literal,
    ACTIONS(384), 1,
      aux_sym_string_literal_token1,
    ACTIONS(386), 1,
      anon_sym_not,
    ACTIONS(686), 1,
      sym_identifier,
    STATE(351), 1,
      sym_expression,
    STATE(441), 1,
      sym__unnamed_arguments,
    ACTIONS(364), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(378), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    STATE(358), 3,
      sym_boolean_literal,
      sym_numeric,
      sym_string_literal,
    STATE(334), 14,
      sym_code_block,
      sym_content_block,
      sym_parenthesized_expression,
      sym_array,
      sym_unnamed_function,
      sym__literal,
      sym_assignment,
      sym_function_call,
      sym_unary_operator,
      sym_not_operator,
      sym_boolean_operator,
      sym_binary_operator,
      sym_comparison_operator,
      sym_augmented_assignment,
  [13818] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(412), 14,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_STAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_SEMI2,
      sym_float_literal,
      aux_sym_string_literal_token1,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(414), 18,
      sym_identifier,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_let,
      anon_sym_if,
      anon_sym_while,
      anon_sym_for,
      anon_sym_in,
      sym_none,
      anon_sym_true,
      anon_sym_false,
      sym_int_literal,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
  [13860] = 16,
    ACTIONS(152), 1,
      sym_identifier,
    ACTIONS(156), 1,
      anon_sym_LPAREN,
    ACTIONS(158), 1,
      anon_sym_LBRACE,
    ACTIONS(160), 1,
      anon_sym_LBRACK,
    ACTIONS(174), 1,
      sym_none,
    ACTIONS(178), 1,
      sym_int_literal,
    ACTIONS(180), 1,
      sym_float_literal,
    ACTIONS(182), 1,
      aux_sym_string_literal_token1,
    ACTIONS(184), 1,
      anon_sym_not,
    STATE(85), 1,
      sym_expression,
    STATE(432), 1,
      sym__unnamed_arguments,
    ACTIONS(154), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(176), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    STATE(117), 3,
      sym_boolean_literal,
      sym_numeric,
      sym_string_literal,
    STATE(94), 14,
      sym_code_block,
      sym_content_block,
      sym_parenthesized_expression,
      sym_array,
      sym_unnamed_function,
      sym__literal,
      sym_assignment,
      sym_function_call,
      sym_unary_operator,
      sym_not_operator,
      sym_boolean_operator,
      sym_binary_operator,
      sym_comparison_operator,
      sym_augmented_assignment,
  [13928] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(444), 14,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_STAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_SEMI2,
      sym_float_literal,
      aux_sym_string_literal_token1,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(446), 18,
      sym_identifier,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_let,
      anon_sym_if,
      anon_sym_while,
      anon_sym_for,
      anon_sym_in,
      sym_none,
      anon_sym_true,
      anon_sym_false,
      sym_int_literal,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
  [13970] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(456), 14,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_STAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_SEMI2,
      sym_float_literal,
      aux_sym_string_literal_token1,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(458), 18,
      sym_identifier,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_let,
      anon_sym_if,
      anon_sym_while,
      anon_sym_for,
      anon_sym_in,
      sym_none,
      anon_sym_true,
      anon_sym_false,
      sym_int_literal,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
  [14012] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(460), 14,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_STAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_SEMI2,
      sym_float_literal,
      aux_sym_string_literal_token1,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(462), 18,
      sym_identifier,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_let,
      anon_sym_if,
      anon_sym_while,
      anon_sym_for,
      anon_sym_in,
      sym_none,
      anon_sym_true,
      anon_sym_false,
      sym_int_literal,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
  [14054] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(464), 14,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_STAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_SEMI2,
      sym_float_literal,
      aux_sym_string_literal_token1,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(466), 18,
      sym_identifier,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_let,
      anon_sym_if,
      anon_sym_while,
      anon_sym_for,
      anon_sym_in,
      sym_none,
      anon_sym_true,
      anon_sym_false,
      sym_int_literal,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
  [14096] = 9,
    ACTIONS(694), 1,
      anon_sym_SLASH,
    ACTIONS(698), 1,
      anon_sym_STAR,
    ACTIONS(702), 1,
      anon_sym_not,
    ACTIONS(696), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(700), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_in,
    ACTIONS(708), 4,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(468), 7,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_SEMI2,
      sym_float_literal,
      aux_sym_string_literal_token1,
    ACTIONS(470), 13,
      sym_identifier,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_let,
      anon_sym_if,
      anon_sym_while,
      anon_sym_for,
      sym_none,
      anon_sym_true,
      anon_sym_false,
      sym_int_literal,
      anon_sym_and,
      anon_sym_or,
  [14150] = 16,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(41), 1,
      sym_none,
    ACTIONS(45), 1,
      sym_int_literal,
    ACTIONS(47), 1,
      sym_float_literal,
    ACTIONS(49), 1,
      aux_sym_string_literal_token1,
    ACTIONS(51), 1,
      anon_sym_not,
    STATE(256), 1,
      sym_expression,
    STATE(453), 1,
      sym__unnamed_arguments,
    ACTIONS(19), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(43), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    STATE(217), 3,
      sym_boolean_literal,
      sym_numeric,
      sym_string_literal,
    STATE(221), 14,
      sym_code_block,
      sym_content_block,
      sym_parenthesized_expression,
      sym_array,
      sym_unnamed_function,
      sym__literal,
      sym_assignment,
      sym_function_call,
      sym_unary_operator,
      sym_not_operator,
      sym_boolean_operator,
      sym_binary_operator,
      sym_comparison_operator,
      sym_augmented_assignment,
  [14218] = 16,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(41), 1,
      sym_none,
    ACTIONS(45), 1,
      sym_int_literal,
    ACTIONS(47), 1,
      sym_float_literal,
    ACTIONS(49), 1,
      aux_sym_string_literal_token1,
    ACTIONS(51), 1,
      anon_sym_not,
    STATE(255), 1,
      sym_expression,
    STATE(453), 1,
      sym__unnamed_arguments,
    ACTIONS(19), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(43), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    STATE(217), 3,
      sym_boolean_literal,
      sym_numeric,
      sym_string_literal,
    STATE(221), 14,
      sym_code_block,
      sym_content_block,
      sym_parenthesized_expression,
      sym_array,
      sym_unnamed_function,
      sym__literal,
      sym_assignment,
      sym_function_call,
      sym_unary_operator,
      sym_not_operator,
      sym_boolean_operator,
      sym_binary_operator,
      sym_comparison_operator,
      sym_augmented_assignment,
  [14286] = 16,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(41), 1,
      sym_none,
    ACTIONS(45), 1,
      sym_int_literal,
    ACTIONS(47), 1,
      sym_float_literal,
    ACTIONS(49), 1,
      aux_sym_string_literal_token1,
    ACTIONS(51), 1,
      anon_sym_not,
    STATE(251), 1,
      sym_expression,
    STATE(453), 1,
      sym__unnamed_arguments,
    ACTIONS(19), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(43), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    STATE(217), 3,
      sym_boolean_literal,
      sym_numeric,
      sym_string_literal,
    STATE(221), 14,
      sym_code_block,
      sym_content_block,
      sym_parenthesized_expression,
      sym_array,
      sym_unnamed_function,
      sym__literal,
      sym_assignment,
      sym_function_call,
      sym_unary_operator,
      sym_not_operator,
      sym_boolean_operator,
      sym_binary_operator,
      sym_comparison_operator,
      sym_augmented_assignment,
  [14354] = 16,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(41), 1,
      sym_none,
    ACTIONS(45), 1,
      sym_int_literal,
    ACTIONS(47), 1,
      sym_float_literal,
    ACTIONS(49), 1,
      aux_sym_string_literal_token1,
    ACTIONS(51), 1,
      anon_sym_not,
    STATE(248), 1,
      sym_expression,
    STATE(453), 1,
      sym__unnamed_arguments,
    ACTIONS(19), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(43), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    STATE(217), 3,
      sym_boolean_literal,
      sym_numeric,
      sym_string_literal,
    STATE(221), 14,
      sym_code_block,
      sym_content_block,
      sym_parenthesized_expression,
      sym_array,
      sym_unnamed_function,
      sym__literal,
      sym_assignment,
      sym_function_call,
      sym_unary_operator,
      sym_not_operator,
      sym_boolean_operator,
      sym_binary_operator,
      sym_comparison_operator,
      sym_augmented_assignment,
  [14422] = 16,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(41), 1,
      sym_none,
    ACTIONS(45), 1,
      sym_int_literal,
    ACTIONS(47), 1,
      sym_float_literal,
    ACTIONS(49), 1,
      aux_sym_string_literal_token1,
    ACTIONS(51), 1,
      anon_sym_not,
    STATE(244), 1,
      sym_expression,
    STATE(453), 1,
      sym__unnamed_arguments,
    ACTIONS(19), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(43), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    STATE(217), 3,
      sym_boolean_literal,
      sym_numeric,
      sym_string_literal,
    STATE(221), 14,
      sym_code_block,
      sym_content_block,
      sym_parenthesized_expression,
      sym_array,
      sym_unnamed_function,
      sym__literal,
      sym_assignment,
      sym_function_call,
      sym_unary_operator,
      sym_not_operator,
      sym_boolean_operator,
      sym_binary_operator,
      sym_comparison_operator,
      sym_augmented_assignment,
  [14490] = 16,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(41), 1,
      sym_none,
    ACTIONS(45), 1,
      sym_int_literal,
    ACTIONS(47), 1,
      sym_float_literal,
    ACTIONS(49), 1,
      aux_sym_string_literal_token1,
    ACTIONS(51), 1,
      anon_sym_not,
    STATE(242), 1,
      sym_expression,
    STATE(453), 1,
      sym__unnamed_arguments,
    ACTIONS(19), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(43), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    STATE(217), 3,
      sym_boolean_literal,
      sym_numeric,
      sym_string_literal,
    STATE(221), 14,
      sym_code_block,
      sym_content_block,
      sym_parenthesized_expression,
      sym_array,
      sym_unnamed_function,
      sym__literal,
      sym_assignment,
      sym_function_call,
      sym_unary_operator,
      sym_not_operator,
      sym_boolean_operator,
      sym_binary_operator,
      sym_comparison_operator,
      sym_augmented_assignment,
  [14558] = 10,
    ACTIONS(694), 1,
      anon_sym_SLASH,
    ACTIONS(698), 1,
      anon_sym_STAR,
    ACTIONS(702), 1,
      anon_sym_not,
    ACTIONS(704), 1,
      anon_sym_and,
    ACTIONS(696), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(700), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_in,
    ACTIONS(708), 4,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(524), 7,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_SEMI2,
      sym_float_literal,
      aux_sym_string_literal_token1,
    ACTIONS(522), 12,
      sym_identifier,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_let,
      anon_sym_if,
      anon_sym_while,
      anon_sym_for,
      sym_none,
      anon_sym_true,
      anon_sym_false,
      sym_int_literal,
      anon_sym_or,
  [14614] = 11,
    ACTIONS(694), 1,
      anon_sym_SLASH,
    ACTIONS(698), 1,
      anon_sym_STAR,
    ACTIONS(702), 1,
      anon_sym_not,
    ACTIONS(704), 1,
      anon_sym_and,
    ACTIONS(706), 1,
      anon_sym_or,
    ACTIONS(696), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(700), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_in,
    ACTIONS(708), 4,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(488), 7,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_SEMI2,
      sym_float_literal,
      aux_sym_string_literal_token1,
    ACTIONS(490), 11,
      sym_identifier,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_let,
      anon_sym_if,
      anon_sym_while,
      anon_sym_for,
      sym_none,
      anon_sym_true,
      anon_sym_false,
      sym_int_literal,
  [14672] = 9,
    ACTIONS(694), 1,
      anon_sym_SLASH,
    ACTIONS(698), 1,
      anon_sym_STAR,
    ACTIONS(702), 1,
      anon_sym_not,
    ACTIONS(696), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(700), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_in,
    ACTIONS(708), 4,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(524), 7,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_SEMI2,
      sym_float_literal,
      aux_sym_string_literal_token1,
    ACTIONS(522), 13,
      sym_identifier,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_let,
      anon_sym_if,
      anon_sym_while,
      anon_sym_for,
      sym_none,
      anon_sym_true,
      anon_sym_false,
      sym_int_literal,
      anon_sym_and,
      anon_sym_or,
  [14726] = 16,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(41), 1,
      sym_none,
    ACTIONS(45), 1,
      sym_int_literal,
    ACTIONS(47), 1,
      sym_float_literal,
    ACTIONS(49), 1,
      aux_sym_string_literal_token1,
    ACTIONS(51), 1,
      anon_sym_not,
    STATE(226), 1,
      sym_expression,
    STATE(453), 1,
      sym__unnamed_arguments,
    ACTIONS(19), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(43), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    STATE(217), 3,
      sym_boolean_literal,
      sym_numeric,
      sym_string_literal,
    STATE(221), 14,
      sym_code_block,
      sym_content_block,
      sym_parenthesized_expression,
      sym_array,
      sym_unnamed_function,
      sym__literal,
      sym_assignment,
      sym_function_call,
      sym_unary_operator,
      sym_not_operator,
      sym_boolean_operator,
      sym_binary_operator,
      sym_comparison_operator,
      sym_augmented_assignment,
  [14794] = 16,
    ACTIONS(366), 1,
      anon_sym_LPAREN,
    ACTIONS(370), 1,
      anon_sym_LBRACE,
    ACTIONS(372), 1,
      anon_sym_LBRACK,
    ACTIONS(376), 1,
      sym_none,
    ACTIONS(380), 1,
      sym_int_literal,
    ACTIONS(382), 1,
      sym_float_literal,
    ACTIONS(384), 1,
      aux_sym_string_literal_token1,
    ACTIONS(386), 1,
      anon_sym_not,
    ACTIONS(686), 1,
      sym_identifier,
    STATE(341), 1,
      sym_expression,
    STATE(441), 1,
      sym__unnamed_arguments,
    ACTIONS(364), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(378), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    STATE(358), 3,
      sym_boolean_literal,
      sym_numeric,
      sym_string_literal,
    STATE(334), 14,
      sym_code_block,
      sym_content_block,
      sym_parenthesized_expression,
      sym_array,
      sym_unnamed_function,
      sym__literal,
      sym_assignment,
      sym_function_call,
      sym_unary_operator,
      sym_not_operator,
      sym_boolean_operator,
      sym_binary_operator,
      sym_comparison_operator,
      sym_augmented_assignment,
  [14862] = 11,
    ACTIONS(694), 1,
      anon_sym_SLASH,
    ACTIONS(698), 1,
      anon_sym_STAR,
    ACTIONS(702), 1,
      anon_sym_not,
    ACTIONS(704), 1,
      anon_sym_and,
    ACTIONS(706), 1,
      anon_sym_or,
    ACTIONS(696), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(700), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_in,
    ACTIONS(708), 4,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(500), 7,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_SEMI2,
      sym_float_literal,
      aux_sym_string_literal_token1,
    ACTIONS(502), 11,
      sym_identifier,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_let,
      anon_sym_if,
      anon_sym_while,
      anon_sym_for,
      sym_none,
      anon_sym_true,
      anon_sym_false,
      sym_int_literal,
  [14920] = 6,
    ACTIONS(694), 1,
      anon_sym_SLASH,
    ACTIONS(698), 1,
      anon_sym_STAR,
    ACTIONS(696), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(394), 11,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_SEMI2,
      sym_float_literal,
      aux_sym_string_literal_token1,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(396), 17,
      sym_identifier,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_let,
      anon_sym_if,
      anon_sym_while,
      anon_sym_for,
      anon_sym_in,
      sym_none,
      anon_sym_true,
      anon_sym_false,
      sym_int_literal,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
  [14968] = 16,
    ACTIONS(366), 1,
      anon_sym_LPAREN,
    ACTIONS(370), 1,
      anon_sym_LBRACE,
    ACTIONS(372), 1,
      anon_sym_LBRACK,
    ACTIONS(376), 1,
      sym_none,
    ACTIONS(380), 1,
      sym_int_literal,
    ACTIONS(382), 1,
      sym_float_literal,
    ACTIONS(384), 1,
      aux_sym_string_literal_token1,
    ACTIONS(386), 1,
      anon_sym_not,
    ACTIONS(686), 1,
      sym_identifier,
    STATE(333), 1,
      sym_expression,
    STATE(441), 1,
      sym__unnamed_arguments,
    ACTIONS(364), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(378), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    STATE(358), 3,
      sym_boolean_literal,
      sym_numeric,
      sym_string_literal,
    STATE(334), 14,
      sym_code_block,
      sym_content_block,
      sym_parenthesized_expression,
      sym_array,
      sym_unnamed_function,
      sym__literal,
      sym_assignment,
      sym_function_call,
      sym_unary_operator,
      sym_not_operator,
      sym_boolean_operator,
      sym_binary_operator,
      sym_comparison_operator,
      sym_augmented_assignment,
  [15036] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(356), 14,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_STAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_SEMI2,
      sym_float_literal,
      aux_sym_string_literal_token1,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(358), 18,
      sym_identifier,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_let,
      anon_sym_if,
      anon_sym_while,
      anon_sym_for,
      anon_sym_in,
      sym_none,
      anon_sym_true,
      anon_sym_false,
      sym_int_literal,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
  [15078] = 5,
    ACTIONS(694), 1,
      anon_sym_SLASH,
    ACTIONS(698), 1,
      anon_sym_STAR,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(532), 13,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_SEMI2,
      sym_float_literal,
      aux_sym_string_literal_token1,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(530), 17,
      sym_identifier,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_let,
      anon_sym_if,
      anon_sym_while,
      anon_sym_for,
      anon_sym_in,
      sym_none,
      anon_sym_true,
      anon_sym_false,
      sym_int_literal,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
  [15124] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(510), 14,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_STAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_SEMI2,
      sym_float_literal,
      aux_sym_string_literal_token1,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(512), 18,
      sym_identifier,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_let,
      anon_sym_if,
      anon_sym_while,
      anon_sym_for,
      anon_sym_in,
      sym_none,
      anon_sym_true,
      anon_sym_false,
      sym_int_literal,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
  [15166] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(404), 14,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_STAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_SEMI2,
      sym_float_literal,
      aux_sym_string_literal_token1,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(406), 18,
      sym_identifier,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_let,
      anon_sym_if,
      anon_sym_while,
      anon_sym_for,
      anon_sym_in,
      sym_none,
      anon_sym_true,
      anon_sym_false,
      sym_int_literal,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
  [15208] = 16,
    ACTIONS(186), 1,
      sym_identifier,
    ACTIONS(190), 1,
      anon_sym_LPAREN,
    ACTIONS(192), 1,
      anon_sym_LBRACE,
    ACTIONS(194), 1,
      anon_sym_LBRACK,
    ACTIONS(208), 1,
      sym_none,
    ACTIONS(212), 1,
      sym_int_literal,
    ACTIONS(214), 1,
      sym_float_literal,
    ACTIONS(216), 1,
      aux_sym_string_literal_token1,
    ACTIONS(218), 1,
      anon_sym_not,
    STATE(75), 1,
      sym_expression,
    STATE(433), 1,
      sym__unnamed_arguments,
    ACTIONS(188), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(210), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    STATE(82), 3,
      sym_boolean_literal,
      sym_numeric,
      sym_string_literal,
    STATE(90), 14,
      sym_code_block,
      sym_content_block,
      sym_parenthesized_expression,
      sym_array,
      sym_unnamed_function,
      sym__literal,
      sym_assignment,
      sym_function_call,
      sym_unary_operator,
      sym_not_operator,
      sym_boolean_operator,
      sym_binary_operator,
      sym_comparison_operator,
      sym_augmented_assignment,
  [15276] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(532), 14,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_STAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_SEMI2,
      sym_float_literal,
      aux_sym_string_literal_token1,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(530), 18,
      sym_identifier,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_let,
      anon_sym_if,
      anon_sym_while,
      anon_sym_for,
      anon_sym_in,
      sym_none,
      anon_sym_true,
      anon_sym_false,
      sym_int_literal,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
  [15318] = 11,
    ACTIONS(694), 1,
      anon_sym_SLASH,
    ACTIONS(698), 1,
      anon_sym_STAR,
    ACTIONS(702), 1,
      anon_sym_not,
    ACTIONS(704), 1,
      anon_sym_and,
    ACTIONS(706), 1,
      anon_sym_or,
    ACTIONS(696), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(700), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_in,
    ACTIONS(708), 4,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(506), 7,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_SEMI2,
      sym_float_literal,
      aux_sym_string_literal_token1,
    ACTIONS(504), 11,
      sym_identifier,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_let,
      anon_sym_if,
      anon_sym_while,
      anon_sym_for,
      sym_none,
      anon_sym_true,
      anon_sym_false,
      sym_int_literal,
  [15376] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(526), 14,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_STAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_SEMI2,
      sym_float_literal,
      aux_sym_string_literal_token1,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(528), 18,
      sym_identifier,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_let,
      anon_sym_if,
      anon_sym_while,
      anon_sym_for,
      anon_sym_in,
      sym_none,
      anon_sym_true,
      anon_sym_false,
      sym_int_literal,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
  [15418] = 5,
    ACTIONS(714), 1,
      anon_sym_else,
    STATE(273), 1,
      sym_else_clause,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(710), 4,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym__,
    ACTIONS(712), 25,
      anon_sym_DQUOTE,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_PERCENT,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_escape_sequence,
  [15463] = 5,
    ACTIONS(716), 1,
      anon_sym_else,
    STATE(292), 1,
      sym_else_clause,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(710), 4,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym__,
    ACTIONS(712), 25,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_PERCENT,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_escape_sequence,
  [15508] = 16,
    ACTIONS(77), 1,
      anon_sym_EQ_GT,
    ACTIONS(718), 1,
      sym_identifier,
    ACTIONS(720), 1,
      anon_sym_RPAREN,
    ACTIONS(722), 1,
      anon_sym_COLON,
    ACTIONS(724), 1,
      anon_sym_EQ,
    ACTIONS(726), 1,
      anon_sym_COMMA,
    ACTIONS(728), 1,
      anon_sym_COMMA2,
    ACTIONS(730), 1,
      anon_sym_LPAREN2,
    ACTIONS(732), 1,
      anon_sym_DOT2,
    ACTIONS(736), 1,
      anon_sym_BANG2,
    STATE(311), 1,
      sym_parameters,
    ACTIONS(734), 2,
      anon_sym_SQUOTE2,
      anon_sym_QMARK2,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(75), 4,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(738), 4,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
    ACTIONS(73), 10,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_in,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
  [15575] = 11,
    ACTIONS(77), 1,
      anon_sym_EQ_GT,
    ACTIONS(724), 1,
      anon_sym_EQ,
    ACTIONS(730), 1,
      anon_sym_LPAREN2,
    ACTIONS(732), 1,
      anon_sym_DOT2,
    ACTIONS(736), 1,
      anon_sym_BANG2,
    STATE(311), 1,
      sym_parameters,
    ACTIONS(734), 2,
      anon_sym_SQUOTE2,
      anon_sym_QMARK2,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(738), 4,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
    ACTIONS(73), 6,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(75), 12,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_in,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [15631] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(446), 5,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym__,
      anon_sym_else,
    ACTIONS(444), 25,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_PERCENT,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_escape_sequence,
  [15671] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(450), 5,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym__,
      anon_sym_else,
    ACTIONS(448), 25,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_PERCENT,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_escape_sequence,
  [15711] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(496), 5,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym__,
      anon_sym_else,
    ACTIONS(498), 25,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_PERCENT,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_escape_sequence,
  [15751] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(446), 5,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym__,
      anon_sym_else,
    ACTIONS(444), 25,
      anon_sym_DQUOTE,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_PERCENT,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_escape_sequence,
  [15791] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(406), 5,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym__,
      anon_sym_else,
    ACTIONS(404), 25,
      anon_sym_DQUOTE,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_PERCENT,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_escape_sequence,
  [15831] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(450), 5,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym__,
      anon_sym_else,
    ACTIONS(448), 25,
      anon_sym_DQUOTE,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_PERCENT,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_escape_sequence,
  [15871] = 6,
    ACTIONS(740), 1,
      sym_line_break,
    STATE(268), 1,
      aux_sym__text,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(744), 3,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym__,
    ACTIONS(742), 5,
      anon_sym_DQUOTE,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_escape_sequence,
    ACTIONS(747), 20,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_PERCENT,
  [15917] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(496), 5,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym__,
      anon_sym_else,
    ACTIONS(498), 25,
      anon_sym_DQUOTE,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_PERCENT,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_escape_sequence,
  [15957] = 6,
    ACTIONS(740), 1,
      sym_line_break,
    STATE(270), 1,
      aux_sym__text,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(750), 3,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym__,
    ACTIONS(742), 5,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_escape_sequence,
    ACTIONS(753), 20,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_PERCENT,
  [16003] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(406), 5,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym__,
      anon_sym_else,
    ACTIONS(404), 25,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_PERCENT,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_escape_sequence,
  [16043] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(758), 4,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym__,
    ACTIONS(756), 25,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_PERCENT,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_escape_sequence,
  [16082] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(760), 4,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym__,
    ACTIONS(762), 25,
      anon_sym_DQUOTE,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_PERCENT,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_escape_sequence,
  [16121] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(764), 4,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym__,
    ACTIONS(766), 25,
      anon_sym_DQUOTE,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_PERCENT,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_escape_sequence,
  [16160] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(768), 4,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym__,
    ACTIONS(770), 25,
      anon_sym_DQUOTE,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_PERCENT,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_escape_sequence,
  [16199] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(480), 4,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym__,
    ACTIONS(482), 25,
      anon_sym_DQUOTE,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_PERCENT,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_escape_sequence,
  [16238] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(450), 4,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym__,
    ACTIONS(448), 25,
      anon_sym_DQUOTE,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_PERCENT,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_escape_sequence,
  [16277] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(480), 4,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym__,
    ACTIONS(482), 25,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_PERCENT,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_escape_sequence,
  [16316] = 13,
    ACTIONS(77), 1,
      anon_sym_EQ_GT,
    ACTIONS(722), 1,
      anon_sym_COLON,
    ACTIONS(724), 1,
      anon_sym_EQ,
    ACTIONS(730), 1,
      anon_sym_LPAREN2,
    ACTIONS(732), 1,
      anon_sym_DOT2,
    ACTIONS(736), 1,
      anon_sym_BANG2,
    STATE(311), 1,
      sym_parameters,
    ACTIONS(734), 2,
      anon_sym_SQUOTE2,
      anon_sym_QMARK2,
    ACTIONS(772), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(738), 4,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
    ACTIONS(73), 6,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(75), 8,
      anon_sym_in,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [16375] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(774), 4,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym__,
    ACTIONS(776), 25,
      anon_sym_DQUOTE,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_PERCENT,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_escape_sequence,
  [16414] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(758), 4,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym__,
    ACTIONS(756), 25,
      anon_sym_DQUOTE,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_PERCENT,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_escape_sequence,
  [16453] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(446), 4,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym__,
    ACTIONS(444), 25,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_PERCENT,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_escape_sequence,
  [16492] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(406), 4,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym__,
    ACTIONS(404), 25,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_PERCENT,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_escape_sequence,
  [16531] = 13,
    ACTIONS(77), 1,
      anon_sym_EQ_GT,
    ACTIONS(722), 1,
      anon_sym_COLON,
    ACTIONS(724), 1,
      anon_sym_EQ,
    ACTIONS(730), 1,
      anon_sym_LPAREN2,
    ACTIONS(732), 1,
      anon_sym_DOT2,
    ACTIONS(736), 1,
      anon_sym_BANG2,
    STATE(311), 1,
      sym_parameters,
    ACTIONS(720), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(734), 2,
      anon_sym_SQUOTE2,
      anon_sym_QMARK2,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(738), 4,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
    ACTIONS(73), 6,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(75), 8,
      anon_sym_in,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [16590] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(780), 4,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym__,
    ACTIONS(778), 25,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_PERCENT,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_escape_sequence,
  [16629] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(496), 4,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym__,
    ACTIONS(498), 25,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_PERCENT,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_escape_sequence,
  [16668] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(782), 4,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym__,
    ACTIONS(784), 25,
      anon_sym_DQUOTE,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_PERCENT,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_escape_sequence,
  [16707] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(768), 4,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym__,
    ACTIONS(770), 25,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_PERCENT,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_escape_sequence,
  [16746] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(496), 4,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym__,
    ACTIONS(498), 25,
      anon_sym_DQUOTE,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_PERCENT,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_escape_sequence,
  [16785] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(764), 4,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym__,
    ACTIONS(766), 25,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_PERCENT,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_escape_sequence,
  [16824] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(788), 4,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym__,
    ACTIONS(786), 25,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_PERCENT,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_escape_sequence,
  [16863] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(760), 4,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym__,
    ACTIONS(762), 25,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_PERCENT,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_escape_sequence,
  [16902] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(788), 4,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym__,
    ACTIONS(786), 25,
      anon_sym_DQUOTE,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_PERCENT,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_escape_sequence,
  [16941] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(774), 4,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym__,
    ACTIONS(776), 25,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_PERCENT,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_escape_sequence,
  [16980] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(780), 4,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym__,
    ACTIONS(778), 25,
      anon_sym_DQUOTE,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_PERCENT,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_escape_sequence,
  [17019] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(782), 4,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym__,
    ACTIONS(784), 25,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_PERCENT,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_escape_sequence,
  [17058] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(450), 4,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym__,
    ACTIONS(448), 25,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_PERCENT,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_escape_sequence,
  [17097] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(446), 4,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym__,
    ACTIONS(444), 25,
      anon_sym_DQUOTE,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_PERCENT,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_escape_sequence,
  [17136] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(406), 4,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym__,
    ACTIONS(404), 25,
      anon_sym_DQUOTE,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_PERCENT,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_escape_sequence,
  [17175] = 5,
    STATE(353), 1,
      sym_unit,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(220), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(790), 9,
      anon_sym_PERCENT,
      anon_sym_in,
      anon_sym_pt,
      anon_sym_mm,
      anon_sym_cm,
      anon_sym_deg,
      anon_sym_rad,
      anon_sym_em,
      anon_sym_fr,
    ACTIONS(222), 14,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [17216] = 8,
    ACTIONS(730), 1,
      anon_sym_LPAREN2,
    ACTIONS(732), 1,
      anon_sym_DOT2,
    ACTIONS(736), 1,
      anon_sym_BANG2,
    STATE(311), 1,
      sym_parameters,
    ACTIONS(734), 2,
      anon_sym_SQUOTE2,
      anon_sym_QMARK2,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(73), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(75), 15,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_in,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [17260] = 5,
    ACTIONS(792), 1,
      sym_identifier,
    STATE(315), 1,
      sym_function_call,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(258), 8,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_in,
      anon_sym_BANG2,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(256), 14,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_DOT2,
      anon_sym_SQUOTE2,
      anon_sym_QMARK2,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [17298] = 5,
    ACTIONS(792), 1,
      sym_identifier,
    STATE(309), 1,
      sym_function_call,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(248), 8,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_in,
      anon_sym_BANG2,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(244), 14,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_DOT2,
      anon_sym_SQUOTE2,
      anon_sym_QMARK2,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [17336] = 5,
    ACTIONS(794), 1,
      anon_sym_else,
    STATE(319), 1,
      sym_else_clause,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(712), 9,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_SEMI2,
      sym_float_literal,
      aux_sym_string_literal_token1,
    ACTIONS(710), 12,
      sym_identifier,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_let,
      anon_sym_if,
      anon_sym_while,
      anon_sym_for,
      sym_none,
      anon_sym_true,
      anon_sym_false,
      sym_int_literal,
      anon_sym_not,
  [17373] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(344), 4,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG2,
    ACTIONS(342), 18,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_in,
      anon_sym_DOT2,
      anon_sym_SQUOTE2,
      anon_sym_QMARK2,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [17405] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(278), 4,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG2,
    ACTIONS(280), 18,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_in,
      anon_sym_DOT2,
      anon_sym_SQUOTE2,
      anon_sym_QMARK2,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [17437] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(282), 4,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG2,
    ACTIONS(284), 18,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_in,
      anon_sym_DOT2,
      anon_sym_SQUOTE2,
      anon_sym_QMARK2,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [17469] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(318), 4,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG2,
    ACTIONS(316), 18,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_in,
      anon_sym_DOT2,
      anon_sym_SQUOTE2,
      anon_sym_QMARK2,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [17501] = 5,
    ACTIONS(798), 1,
      anon_sym_BANG2,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(286), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(796), 3,
      anon_sym_DOT2,
      anon_sym_SQUOTE2,
      anon_sym_QMARK2,
    ACTIONS(288), 15,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_in,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [17537] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(258), 4,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG2,
    ACTIONS(256), 18,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_in,
      anon_sym_DOT2,
      anon_sym_SQUOTE2,
      anon_sym_QMARK2,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [17569] = 6,
    ACTIONS(800), 1,
      anon_sym_DOT2,
    ACTIONS(804), 1,
      anon_sym_BANG2,
    ACTIONS(802), 2,
      anon_sym_SQUOTE2,
      anon_sym_QMARK2,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(270), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(268), 15,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_in,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [17607] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(498), 9,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_SEMI2,
      sym_float_literal,
      aux_sym_string_literal_token1,
    ACTIONS(496), 13,
      sym_identifier,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_let,
      anon_sym_if,
      anon_sym_else,
      anon_sym_while,
      anon_sym_for,
      sym_none,
      anon_sym_true,
      anon_sym_false,
      sym_int_literal,
      anon_sym_not,
  [17639] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(448), 9,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_SEMI2,
      sym_float_literal,
      aux_sym_string_literal_token1,
    ACTIONS(450), 13,
      sym_identifier,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_let,
      anon_sym_if,
      anon_sym_else,
      anon_sym_while,
      anon_sym_for,
      sym_none,
      anon_sym_true,
      anon_sym_false,
      sym_int_literal,
      anon_sym_not,
  [17671] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(404), 9,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_SEMI2,
      sym_float_literal,
      aux_sym_string_literal_token1,
    ACTIONS(406), 13,
      sym_identifier,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_let,
      anon_sym_if,
      anon_sym_else,
      anon_sym_while,
      anon_sym_for,
      sym_none,
      anon_sym_true,
      anon_sym_false,
      sym_int_literal,
      anon_sym_not,
  [17703] = 5,
    ACTIONS(808), 1,
      anon_sym_BANG2,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(310), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(806), 3,
      anon_sym_DOT2,
      anon_sym_SQUOTE2,
      anon_sym_QMARK2,
    ACTIONS(308), 15,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_in,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [17739] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(248), 4,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG2,
    ACTIONS(244), 18,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_in,
      anon_sym_DOT2,
      anon_sym_SQUOTE2,
      anon_sym_QMARK2,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [17771] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(444), 9,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_SEMI2,
      sym_float_literal,
      aux_sym_string_literal_token1,
    ACTIONS(446), 13,
      sym_identifier,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_let,
      anon_sym_if,
      anon_sym_else,
      anon_sym_while,
      anon_sym_for,
      sym_none,
      anon_sym_true,
      anon_sym_false,
      sym_int_literal,
      anon_sym_not,
  [17803] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(448), 9,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_SEMI2,
      sym_float_literal,
      aux_sym_string_literal_token1,
    ACTIONS(450), 12,
      sym_identifier,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_let,
      anon_sym_if,
      anon_sym_while,
      anon_sym_for,
      sym_none,
      anon_sym_true,
      anon_sym_false,
      sym_int_literal,
      anon_sym_not,
  [17834] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(762), 9,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_SEMI2,
      sym_float_literal,
      aux_sym_string_literal_token1,
    ACTIONS(760), 12,
      sym_identifier,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_let,
      anon_sym_if,
      anon_sym_while,
      anon_sym_for,
      sym_none,
      anon_sym_true,
      anon_sym_false,
      sym_int_literal,
      anon_sym_not,
  [17865] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(756), 9,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_SEMI2,
      sym_float_literal,
      aux_sym_string_literal_token1,
    ACTIONS(758), 12,
      sym_identifier,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_let,
      anon_sym_if,
      anon_sym_while,
      anon_sym_for,
      sym_none,
      anon_sym_true,
      anon_sym_false,
      sym_int_literal,
      anon_sym_not,
  [17896] = 4,
    ACTIONS(814), 1,
      anon_sym_SEMI2,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(812), 8,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      sym_float_literal,
      aux_sym_string_literal_token1,
    ACTIONS(810), 12,
      sym_identifier,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_let,
      anon_sym_if,
      anon_sym_while,
      anon_sym_for,
      sym_none,
      anon_sym_true,
      anon_sym_false,
      sym_int_literal,
      anon_sym_not,
  [17929] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(766), 9,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_SEMI2,
      sym_float_literal,
      aux_sym_string_literal_token1,
    ACTIONS(764), 12,
      sym_identifier,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_let,
      anon_sym_if,
      anon_sym_while,
      anon_sym_for,
      sym_none,
      anon_sym_true,
      anon_sym_false,
      sym_int_literal,
      anon_sym_not,
  [17960] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(778), 9,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_SEMI2,
      sym_float_literal,
      aux_sym_string_literal_token1,
    ACTIONS(780), 12,
      sym_identifier,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_let,
      anon_sym_if,
      anon_sym_while,
      anon_sym_for,
      sym_none,
      anon_sym_true,
      anon_sym_false,
      sym_int_literal,
      anon_sym_not,
  [17991] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(444), 9,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_SEMI2,
      sym_float_literal,
      aux_sym_string_literal_token1,
    ACTIONS(446), 12,
      sym_identifier,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_let,
      anon_sym_if,
      anon_sym_while,
      anon_sym_for,
      sym_none,
      anon_sym_true,
      anon_sym_false,
      sym_int_literal,
      anon_sym_not,
  [18022] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(404), 9,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_SEMI2,
      sym_float_literal,
      aux_sym_string_literal_token1,
    ACTIONS(406), 12,
      sym_identifier,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_let,
      anon_sym_if,
      anon_sym_while,
      anon_sym_for,
      sym_none,
      anon_sym_true,
      anon_sym_false,
      sym_int_literal,
      anon_sym_not,
  [18053] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(776), 9,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_SEMI2,
      sym_float_literal,
      aux_sym_string_literal_token1,
    ACTIONS(774), 12,
      sym_identifier,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_let,
      anon_sym_if,
      anon_sym_while,
      anon_sym_for,
      sym_none,
      anon_sym_true,
      anon_sym_false,
      sym_int_literal,
      anon_sym_not,
  [18084] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(770), 9,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_SEMI2,
      sym_float_literal,
      aux_sym_string_literal_token1,
    ACTIONS(768), 12,
      sym_identifier,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_let,
      anon_sym_if,
      anon_sym_while,
      anon_sym_for,
      sym_none,
      anon_sym_true,
      anon_sym_false,
      sym_int_literal,
      anon_sym_not,
  [18115] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(498), 9,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_SEMI2,
      sym_float_literal,
      aux_sym_string_literal_token1,
    ACTIONS(496), 12,
      sym_identifier,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_let,
      anon_sym_if,
      anon_sym_while,
      anon_sym_for,
      sym_none,
      anon_sym_true,
      anon_sym_false,
      sym_int_literal,
      anon_sym_not,
  [18146] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(111), 8,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      sym_float_literal,
      aux_sym_string_literal_token1,
    ACTIONS(816), 12,
      sym_identifier,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_let,
      anon_sym_if,
      anon_sym_while,
      anon_sym_for,
      sym_none,
      anon_sym_true,
      anon_sym_false,
      sym_int_literal,
      anon_sym_not,
  [18176] = 4,
    ACTIONS(360), 1,
      anon_sym_EQ_GT,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(358), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(356), 15,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_in,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [18207] = 12,
    ACTIONS(818), 1,
      anon_sym_SLASH,
    ACTIONS(822), 1,
      anon_sym_STAR,
    ACTIONS(826), 1,
      anon_sym_LBRACE,
    ACTIONS(828), 1,
      anon_sym_LBRACK,
    ACTIONS(832), 1,
      anon_sym_not,
    ACTIONS(834), 1,
      anon_sym_and,
    ACTIONS(836), 1,
      anon_sym_or,
    ACTIONS(820), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(824), 2,
      anon_sym_LT,
      anon_sym_GT,
    STATE(259), 2,
      sym_code_block,
      sym_content_block,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(830), 5,
      anon_sym_in,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [18253] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(450), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(448), 15,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_in,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [18281] = 10,
    ACTIONS(818), 1,
      anon_sym_SLASH,
    ACTIONS(822), 1,
      anon_sym_STAR,
    ACTIONS(832), 1,
      anon_sym_not,
    ACTIONS(834), 1,
      anon_sym_and,
    ACTIONS(836), 1,
      anon_sym_or,
    ACTIONS(820), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(824), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(500), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
    ACTIONS(830), 5,
      anon_sym_in,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [18323] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(484), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(486), 15,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_in,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [18351] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(358), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(356), 15,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_in,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [18379] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(512), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(510), 15,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_in,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [18407] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(406), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(404), 15,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_in,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [18435] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(528), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(526), 15,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_in,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [18463] = 12,
    ACTIONS(818), 1,
      anon_sym_SLASH,
    ACTIONS(822), 1,
      anon_sym_STAR,
    ACTIONS(832), 1,
      anon_sym_not,
    ACTIONS(834), 1,
      anon_sym_and,
    ACTIONS(836), 1,
      anon_sym_or,
    ACTIONS(838), 1,
      anon_sym_LBRACE,
    ACTIONS(840), 1,
      anon_sym_LBRACK,
    ACTIONS(820), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(824), 2,
      anon_sym_LT,
      anon_sym_GT,
    STATE(323), 2,
      sym_code_block,
      sym_content_block,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(830), 5,
      anon_sym_in,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [18509] = 10,
    ACTIONS(818), 1,
      anon_sym_SLASH,
    ACTIONS(822), 1,
      anon_sym_STAR,
    ACTIONS(832), 1,
      anon_sym_not,
    ACTIONS(834), 1,
      anon_sym_and,
    ACTIONS(836), 1,
      anon_sym_or,
    ACTIONS(820), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(824), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(506), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
    ACTIONS(830), 5,
      anon_sym_in,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [18551] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(530), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(532), 15,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_in,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [18579] = 5,
    ACTIONS(818), 1,
      anon_sym_SLASH,
    ACTIONS(822), 1,
      anon_sym_STAR,
    ACTIONS(530), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(532), 14,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_in,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [18611] = 6,
    ACTIONS(818), 1,
      anon_sym_SLASH,
    ACTIONS(822), 1,
      anon_sym_STAR,
    ACTIONS(396), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(820), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(394), 12,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_in,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [18645] = 8,
    ACTIONS(818), 1,
      anon_sym_SLASH,
    ACTIONS(822), 1,
      anon_sym_STAR,
    ACTIONS(832), 1,
      anon_sym_not,
    ACTIONS(820), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(824), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(830), 5,
      anon_sym_in,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(524), 6,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_and,
      anon_sym_or,
  [18683] = 9,
    ACTIONS(818), 1,
      anon_sym_SLASH,
    ACTIONS(822), 1,
      anon_sym_STAR,
    ACTIONS(832), 1,
      anon_sym_not,
    ACTIONS(834), 1,
      anon_sym_and,
    ACTIONS(820), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(824), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(524), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_or,
    ACTIONS(830), 5,
      anon_sym_in,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [18723] = 6,
    ACTIONS(818), 1,
      anon_sym_SLASH,
    ACTIONS(822), 1,
      anon_sym_STAR,
    ACTIONS(514), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(820), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(516), 12,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_in,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [18757] = 12,
    ACTIONS(818), 1,
      anon_sym_SLASH,
    ACTIONS(822), 1,
      anon_sym_STAR,
    ACTIONS(832), 1,
      anon_sym_not,
    ACTIONS(834), 1,
      anon_sym_and,
    ACTIONS(836), 1,
      anon_sym_or,
    ACTIONS(842), 1,
      anon_sym_LBRACE,
    ACTIONS(844), 1,
      anon_sym_LBRACK,
    ACTIONS(820), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(824), 2,
      anon_sym_LT,
      anon_sym_GT,
    STATE(304), 2,
      sym_code_block,
      sym_content_block,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(830), 5,
      anon_sym_in,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [18803] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(520), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(518), 15,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_in,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [18831] = 12,
    ACTIONS(818), 1,
      anon_sym_SLASH,
    ACTIONS(822), 1,
      anon_sym_STAR,
    ACTIONS(832), 1,
      anon_sym_not,
    ACTIONS(834), 1,
      anon_sym_and,
    ACTIONS(836), 1,
      anon_sym_or,
    ACTIONS(838), 1,
      anon_sym_LBRACE,
    ACTIONS(840), 1,
      anon_sym_LBRACK,
    ACTIONS(820), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(824), 2,
      anon_sym_LT,
      anon_sym_GT,
    STATE(327), 2,
      sym_code_block,
      sym_content_block,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(830), 5,
      anon_sym_in,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [18877] = 8,
    ACTIONS(818), 1,
      anon_sym_SLASH,
    ACTIONS(822), 1,
      anon_sym_STAR,
    ACTIONS(832), 1,
      anon_sym_not,
    ACTIONS(820), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(824), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(830), 5,
      anon_sym_in,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(468), 6,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_and,
      anon_sym_or,
  [18915] = 10,
    ACTIONS(818), 1,
      anon_sym_SLASH,
    ACTIONS(822), 1,
      anon_sym_STAR,
    ACTIONS(832), 1,
      anon_sym_not,
    ACTIONS(834), 1,
      anon_sym_and,
    ACTIONS(836), 1,
      anon_sym_or,
    ACTIONS(820), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(824), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(488), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
    ACTIONS(830), 5,
      anon_sym_in,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [18957] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(466), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(464), 15,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_in,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [18985] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(462), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(460), 15,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_in,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [19013] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(414), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(412), 15,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_in,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [19041] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(458), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(456), 15,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_in,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [19069] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(446), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(444), 15,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_in,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [19097] = 12,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(818), 1,
      anon_sym_SLASH,
    ACTIONS(822), 1,
      anon_sym_STAR,
    ACTIONS(832), 1,
      anon_sym_not,
    ACTIONS(834), 1,
      anon_sym_and,
    ACTIONS(836), 1,
      anon_sym_or,
    ACTIONS(846), 1,
      anon_sym_LBRACE,
    ACTIONS(820), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(824), 2,
      anon_sym_LT,
      anon_sym_GT,
    STATE(285), 2,
      sym_code_block,
      sym_content_block,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(830), 5,
      anon_sym_in,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [19143] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(220), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(222), 15,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_in,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [19171] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(438), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(436), 15,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_in,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [19199] = 12,
    ACTIONS(818), 1,
      anon_sym_SLASH,
    ACTIONS(822), 1,
      anon_sym_STAR,
    ACTIONS(832), 1,
      anon_sym_not,
    ACTIONS(834), 1,
      anon_sym_and,
    ACTIONS(836), 1,
      anon_sym_or,
    ACTIONS(848), 1,
      anon_sym_LBRACE,
    ACTIONS(850), 1,
      anon_sym_LBRACK,
    ACTIONS(820), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(824), 2,
      anon_sym_LT,
      anon_sym_GT,
    STATE(258), 2,
      sym_code_block,
      sym_content_block,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(830), 5,
      anon_sym_in,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [19245] = 12,
    ACTIONS(544), 1,
      anon_sym_LBRACK,
    ACTIONS(818), 1,
      anon_sym_SLASH,
    ACTIONS(822), 1,
      anon_sym_STAR,
    ACTIONS(832), 1,
      anon_sym_not,
    ACTIONS(834), 1,
      anon_sym_and,
    ACTIONS(836), 1,
      anon_sym_or,
    ACTIONS(852), 1,
      anon_sym_LBRACE,
    ACTIONS(820), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(824), 2,
      anon_sym_LT,
      anon_sym_GT,
    STATE(295), 2,
      sym_code_block,
      sym_content_block,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(830), 5,
      anon_sym_in,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [19291] = 12,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(818), 1,
      anon_sym_SLASH,
    ACTIONS(822), 1,
      anon_sym_STAR,
    ACTIONS(832), 1,
      anon_sym_not,
    ACTIONS(834), 1,
      anon_sym_and,
    ACTIONS(836), 1,
      anon_sym_or,
    ACTIONS(846), 1,
      anon_sym_LBRACE,
    ACTIONS(820), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(824), 2,
      anon_sym_LT,
      anon_sym_GT,
    STATE(288), 2,
      sym_code_block,
      sym_content_block,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(830), 5,
      anon_sym_in,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [19337] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(496), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(498), 15,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_in,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [19365] = 12,
    ACTIONS(544), 1,
      anon_sym_LBRACK,
    ACTIONS(818), 1,
      anon_sym_SLASH,
    ACTIONS(822), 1,
      anon_sym_STAR,
    ACTIONS(832), 1,
      anon_sym_not,
    ACTIONS(834), 1,
      anon_sym_and,
    ACTIONS(836), 1,
      anon_sym_or,
    ACTIONS(852), 1,
      anon_sym_LBRACE,
    ACTIONS(820), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(824), 2,
      anon_sym_LT,
      anon_sym_GT,
    STATE(275), 2,
      sym_code_block,
      sym_content_block,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(830), 5,
      anon_sym_in,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [19411] = 12,
    ACTIONS(818), 1,
      anon_sym_SLASH,
    ACTIONS(822), 1,
      anon_sym_STAR,
    ACTIONS(832), 1,
      anon_sym_not,
    ACTIONS(834), 1,
      anon_sym_and,
    ACTIONS(836), 1,
      anon_sym_or,
    ACTIONS(854), 1,
      anon_sym_RPAREN,
    ACTIONS(856), 1,
      anon_sym_COMMA,
    STATE(401), 1,
      aux_sym__array_repeat1,
    ACTIONS(820), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(824), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(830), 5,
      anon_sym_in,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [19456] = 12,
    ACTIONS(818), 1,
      anon_sym_SLASH,
    ACTIONS(822), 1,
      anon_sym_STAR,
    ACTIONS(832), 1,
      anon_sym_not,
    ACTIONS(834), 1,
      anon_sym_and,
    ACTIONS(836), 1,
      anon_sym_or,
    ACTIONS(856), 1,
      anon_sym_COMMA,
    ACTIONS(858), 1,
      anon_sym_RPAREN,
    STATE(401), 1,
      aux_sym__array_repeat1,
    ACTIONS(820), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(824), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(830), 5,
      anon_sym_in,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [19501] = 12,
    ACTIONS(818), 1,
      anon_sym_SLASH,
    ACTIONS(822), 1,
      anon_sym_STAR,
    ACTIONS(832), 1,
      anon_sym_not,
    ACTIONS(834), 1,
      anon_sym_and,
    ACTIONS(836), 1,
      anon_sym_or,
    ACTIONS(856), 1,
      anon_sym_COMMA,
    ACTIONS(860), 1,
      anon_sym_RPAREN,
    STATE(401), 1,
      aux_sym__array_repeat1,
    ACTIONS(820), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(824), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(830), 5,
      anon_sym_in,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [19546] = 12,
    ACTIONS(818), 1,
      anon_sym_SLASH,
    ACTIONS(822), 1,
      anon_sym_STAR,
    ACTIONS(832), 1,
      anon_sym_not,
    ACTIONS(834), 1,
      anon_sym_and,
    ACTIONS(836), 1,
      anon_sym_or,
    ACTIONS(856), 1,
      anon_sym_COMMA,
    ACTIONS(862), 1,
      anon_sym_RPAREN,
    STATE(401), 1,
      aux_sym__array_repeat1,
    ACTIONS(820), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(824), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(830), 5,
      anon_sym_in,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [19591] = 10,
    ACTIONS(818), 1,
      anon_sym_SLASH,
    ACTIONS(822), 1,
      anon_sym_STAR,
    ACTIONS(832), 1,
      anon_sym_not,
    ACTIONS(834), 1,
      anon_sym_and,
    ACTIONS(836), 1,
      anon_sym_or,
    ACTIONS(820), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(824), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(864), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(830), 5,
      anon_sym_in,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [19631] = 10,
    ACTIONS(818), 1,
      anon_sym_SLASH,
    ACTIONS(822), 1,
      anon_sym_STAR,
    ACTIONS(832), 1,
      anon_sym_not,
    ACTIONS(834), 1,
      anon_sym_and,
    ACTIONS(836), 1,
      anon_sym_or,
    ACTIONS(720), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(820), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(824), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(830), 5,
      anon_sym_in,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [19671] = 10,
    ACTIONS(818), 1,
      anon_sym_SLASH,
    ACTIONS(822), 1,
      anon_sym_STAR,
    ACTIONS(832), 1,
      anon_sym_not,
    ACTIONS(834), 1,
      anon_sym_and,
    ACTIONS(836), 1,
      anon_sym_or,
    ACTIONS(772), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(820), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(824), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(830), 5,
      anon_sym_in,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [19711] = 5,
    ACTIONS(544), 1,
      anon_sym_LBRACK,
    ACTIONS(852), 1,
      anon_sym_LBRACE,
    ACTIONS(866), 1,
      anon_sym_if,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    STATE(274), 3,
      sym_code_block,
      sym_content_block,
      sym_if_expression,
  [19731] = 5,
    ACTIONS(838), 1,
      anon_sym_LBRACE,
    ACTIONS(840), 1,
      anon_sym_LBRACK,
    ACTIONS(868), 1,
      anon_sym_if,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    STATE(322), 3,
      sym_code_block,
      sym_content_block,
      sym_if_expression,
  [19751] = 5,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(846), 1,
      anon_sym_LBRACE,
    ACTIONS(870), 1,
      anon_sym_if,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    STATE(290), 3,
      sym_code_block,
      sym_content_block,
      sym_if_expression,
  [19771] = 5,
    ACTIONS(872), 1,
      anon_sym_DQUOTE,
    ACTIONS(874), 1,
      sym__not_an_escape_sequence,
    STATE(379), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(876), 2,
      sym__string_content,
      sym_escape_sequence,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
  [19790] = 5,
    ACTIONS(878), 1,
      anon_sym_DQUOTE,
    ACTIONS(880), 1,
      sym__not_an_escape_sequence,
    STATE(381), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(882), 2,
      sym__string_content,
      sym_escape_sequence,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
  [19809] = 5,
    ACTIONS(884), 1,
      anon_sym_DQUOTE,
    ACTIONS(886), 1,
      sym__not_an_escape_sequence,
    STATE(378), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(888), 2,
      sym__string_content,
      sym_escape_sequence,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
  [19828] = 5,
    ACTIONS(874), 1,
      sym__not_an_escape_sequence,
    ACTIONS(890), 1,
      anon_sym_DQUOTE,
    STATE(379), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(876), 2,
      sym__string_content,
      sym_escape_sequence,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
  [19847] = 5,
    ACTIONS(892), 1,
      anon_sym_DQUOTE,
    ACTIONS(894), 1,
      sym__not_an_escape_sequence,
    STATE(379), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(897), 2,
      sym__string_content,
      sym_escape_sequence,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
  [19866] = 5,
    ACTIONS(900), 1,
      anon_sym_DQUOTE,
    ACTIONS(902), 1,
      sym__not_an_escape_sequence,
    STATE(383), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(904), 2,
      sym__string_content,
      sym_escape_sequence,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
  [19885] = 5,
    ACTIONS(874), 1,
      sym__not_an_escape_sequence,
    ACTIONS(906), 1,
      anon_sym_DQUOTE,
    STATE(379), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(876), 2,
      sym__string_content,
      sym_escape_sequence,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
  [19904] = 5,
    ACTIONS(908), 1,
      anon_sym_DQUOTE,
    ACTIONS(910), 1,
      sym__not_an_escape_sequence,
    STATE(375), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(912), 2,
      sym__string_content,
      sym_escape_sequence,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
  [19923] = 5,
    ACTIONS(874), 1,
      sym__not_an_escape_sequence,
    ACTIONS(914), 1,
      anon_sym_DQUOTE,
    STATE(379), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(876), 2,
      sym__string_content,
      sym_escape_sequence,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
  [19942] = 4,
    ACTIONS(916), 1,
      anon_sym_DQUOTE,
    STATE(386), 1,
      aux_sym_quote_repeat1,
    ACTIONS(918), 2,
      sym__string_content,
      sym_escape_sequence,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
  [19958] = 4,
    ACTIONS(920), 1,
      anon_sym_DQUOTE,
    STATE(386), 1,
      aux_sym_quote_repeat1,
    ACTIONS(918), 2,
      sym__string_content,
      sym_escape_sequence,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
  [19974] = 4,
    ACTIONS(922), 1,
      anon_sym_DQUOTE,
    STATE(386), 1,
      aux_sym_quote_repeat1,
    ACTIONS(924), 2,
      sym__string_content,
      sym_escape_sequence,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
  [19990] = 4,
    ACTIONS(927), 1,
      anon_sym_DQUOTE,
    STATE(384), 1,
      aux_sym_quote_repeat1,
    ACTIONS(929), 2,
      sym__string_content,
      sym_escape_sequence,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
  [20006] = 4,
    ACTIONS(931), 1,
      anon_sym_DQUOTE,
    STATE(385), 1,
      aux_sym_quote_repeat1,
    ACTIONS(933), 2,
      sym__string_content,
      sym_escape_sequence,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
  [20022] = 4,
    ACTIONS(935), 1,
      anon_sym_EQ,
    ACTIONS(937), 1,
      anon_sym_LPAREN2,
    STATE(427), 1,
      sym_parameters,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
  [20037] = 4,
    ACTIONS(939), 1,
      sym_identifier,
    ACTIONS(942), 1,
      anon_sym_RPAREN,
    STATE(390), 1,
      aux_sym__weird_edge_case,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
  [20052] = 4,
    ACTIONS(944), 1,
      anon_sym_COMMA,
    ACTIONS(947), 1,
      anon_sym_in,
    STATE(391), 1,
      aux_sym_pattern_list_repeat1,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
  [20067] = 4,
    ACTIONS(949), 1,
      sym_identifier,
    ACTIONS(951), 1,
      anon_sym_RPAREN,
    STATE(390), 1,
      aux_sym__weird_edge_case,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
  [20082] = 4,
    ACTIONS(953), 1,
      anon_sym_COMMA,
    ACTIONS(955), 1,
      anon_sym_in,
    STATE(406), 1,
      aux_sym_pattern_list_repeat1,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
  [20097] = 4,
    ACTIONS(957), 1,
      anon_sym_RPAREN,
    ACTIONS(959), 1,
      anon_sym_COMMA,
    STATE(408), 1,
      aux_sym__unnamed_arguments_repeat1,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
  [20112] = 4,
    ACTIONS(961), 1,
      sym_identifier,
    STATE(458), 1,
      sym_pattern_list,
    STATE(460), 1,
      sym_pattern,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
  [20127] = 4,
    ACTIONS(864), 1,
      anon_sym_RPAREN,
    ACTIONS(963), 1,
      anon_sym_COMMA,
    STATE(396), 1,
      aux_sym__array_repeat1,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
  [20142] = 3,
    ACTIONS(728), 1,
      anon_sym_COMMA2,
    ACTIONS(966), 2,
      sym_identifier,
      anon_sym_RPAREN,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
  [20155] = 4,
    ACTIONS(625), 1,
      anon_sym_RPAREN,
    ACTIONS(968), 1,
      anon_sym_COMMA,
    STATE(404), 1,
      aux_sym__unnamed_arguments_repeat1,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
  [20170] = 4,
    ACTIONS(949), 1,
      sym_identifier,
    ACTIONS(970), 1,
      anon_sym_RPAREN,
    STATE(390), 1,
      aux_sym__weird_edge_case,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
  [20185] = 4,
    ACTIONS(949), 1,
      sym_identifier,
    ACTIONS(972), 1,
      anon_sym_RPAREN,
    STATE(390), 1,
      aux_sym__weird_edge_case,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
  [20200] = 4,
    ACTIONS(688), 1,
      anon_sym_RPAREN,
    ACTIONS(974), 1,
      anon_sym_COMMA,
    STATE(396), 1,
      aux_sym__array_repeat1,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
  [20215] = 4,
    ACTIONS(937), 1,
      anon_sym_LPAREN2,
    ACTIONS(976), 1,
      anon_sym_EQ,
    STATE(427), 1,
      sym_parameters,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
  [20230] = 4,
    ACTIONS(937), 1,
      anon_sym_LPAREN2,
    ACTIONS(978), 1,
      anon_sym_EQ,
    STATE(427), 1,
      sym_parameters,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
  [20245] = 4,
    ACTIONS(980), 1,
      anon_sym_RPAREN,
    ACTIONS(982), 1,
      anon_sym_COMMA,
    STATE(404), 1,
      aux_sym__unnamed_arguments_repeat1,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
  [20260] = 4,
    ACTIONS(961), 1,
      sym_identifier,
    STATE(458), 1,
      sym_pattern_list,
    STATE(459), 1,
      sym_pattern,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
  [20275] = 4,
    ACTIONS(985), 1,
      anon_sym_COMMA,
    ACTIONS(987), 1,
      anon_sym_in,
    STATE(391), 1,
      aux_sym_pattern_list_repeat1,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
  [20290] = 4,
    ACTIONS(961), 1,
      sym_identifier,
    STATE(456), 1,
      sym_pattern,
    STATE(458), 1,
      sym_pattern_list,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
  [20305] = 4,
    ACTIONS(586), 1,
      anon_sym_RPAREN,
    ACTIONS(989), 1,
      anon_sym_COMMA,
    STATE(404), 1,
      aux_sym__unnamed_arguments_repeat1,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
  [20320] = 4,
    ACTIONS(949), 1,
      sym_identifier,
    ACTIONS(991), 1,
      anon_sym_RPAREN,
    STATE(390), 1,
      aux_sym__weird_edge_case,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
  [20335] = 4,
    ACTIONS(993), 1,
      anon_sym_RPAREN,
    ACTIONS(995), 1,
      anon_sym_COMMA,
    STATE(398), 1,
      aux_sym__unnamed_arguments_repeat1,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
  [20350] = 2,
    ACTIONS(772), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
  [20360] = 2,
    ACTIONS(980), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
  [20370] = 2,
    ACTIONS(997), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
  [20380] = 3,
    ACTIONS(999), 1,
      sym_identifier,
    STATE(455), 1,
      sym_function,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
  [20392] = 3,
    ACTIONS(1001), 1,
      sym_identifier,
    ACTIONS(1003), 1,
      anon_sym_in,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
  [20404] = 3,
    ACTIONS(1005), 1,
      sym_identifier,
    STATE(425), 1,
      sym_function,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
  [20416] = 3,
    ACTIONS(1001), 1,
      sym_identifier,
    ACTIONS(1007), 1,
      anon_sym_in,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
  [20428] = 2,
    ACTIONS(947), 2,
      anon_sym_COMMA,
      anon_sym_in,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
  [20438] = 3,
    ACTIONS(1009), 1,
      sym_identifier,
    STATE(445), 1,
      sym_function,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
  [20450] = 2,
    ACTIONS(942), 2,
      sym_identifier,
      anon_sym_RPAREN,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
  [20460] = 2,
    ACTIONS(1011), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
  [20469] = 2,
    ACTIONS(1013), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
  [20478] = 2,
    ACTIONS(1015), 1,
      anon_sym_in,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
  [20487] = 2,
    ACTIONS(1017), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
  [20496] = 2,
    ACTIONS(978), 1,
      anon_sym_EQ,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
  [20505] = 2,
    ACTIONS(1019), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
  [20514] = 2,
    ACTIONS(1021), 1,
      anon_sym_EQ,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
  [20523] = 2,
    ACTIONS(316), 1,
      anon_sym_EQ,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
  [20532] = 2,
    ACTIONS(1023), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
  [20541] = 2,
    ACTIONS(1025), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
  [20550] = 2,
    ACTIONS(1027), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
  [20559] = 2,
    ACTIONS(1029), 1,
      anon_sym_EQ_GT,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
  [20568] = 2,
    ACTIONS(1031), 1,
      anon_sym_EQ_GT,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
  [20577] = 2,
    ACTIONS(1033), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
  [20586] = 2,
    ACTIONS(1035), 1,
      anon_sym_in,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
  [20595] = 2,
    ACTIONS(1037), 1,
      anon_sym_EQ_GT,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
  [20604] = 2,
    ACTIONS(1039), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
  [20613] = 2,
    ACTIONS(1041), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
  [20622] = 2,
    ACTIONS(1043), 1,
      anon_sym_in,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
  [20631] = 2,
    ACTIONS(280), 1,
      anon_sym_EQ,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
  [20640] = 2,
    ACTIONS(1045), 1,
      anon_sym_EQ_GT,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
  [20649] = 2,
    ACTIONS(1047), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
  [20658] = 2,
    ACTIONS(1049), 1,
      sym_identifier,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
  [20667] = 2,
    ACTIONS(1051), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
  [20676] = 2,
    ACTIONS(976), 1,
      anon_sym_EQ,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
  [20685] = 2,
    ACTIONS(1053), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
  [20694] = 2,
    ACTIONS(1055), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
  [20703] = 2,
    ACTIONS(1057), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
  [20712] = 2,
    ACTIONS(1059), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
  [20721] = 2,
    ACTIONS(1061), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
  [20730] = 2,
    ACTIONS(1063), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
  [20739] = 2,
    ACTIONS(1065), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
  [20748] = 2,
    ACTIONS(1067), 1,
      anon_sym_EQ_GT,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
  [20757] = 2,
    ACTIONS(360), 1,
      anon_sym_EQ_GT,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
  [20766] = 2,
    ACTIONS(935), 1,
      anon_sym_EQ,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
  [20775] = 2,
    ACTIONS(1069), 1,
      anon_sym_in,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
  [20784] = 2,
    ACTIONS(1071), 1,
      anon_sym_EQ_GT,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
  [20793] = 2,
    ACTIONS(955), 1,
      anon_sym_in,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
  [20802] = 2,
    ACTIONS(1073), 1,
      anon_sym_in,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
  [20811] = 2,
    ACTIONS(1075), 1,
      anon_sym_in,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
  [20820] = 2,
    ACTIONS(1077), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
  [20829] = 2,
    ACTIONS(1079), 1,
      anon_sym_in,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 105,
  [SMALL_STATE(4)] = 210,
  [SMALL_STATE(5)] = 315,
  [SMALL_STATE(6)] = 420,
  [SMALL_STATE(7)] = 525,
  [SMALL_STATE(8)] = 630,
  [SMALL_STATE(9)] = 735,
  [SMALL_STATE(10)] = 840,
  [SMALL_STATE(11)] = 945,
  [SMALL_STATE(12)] = 1050,
  [SMALL_STATE(13)] = 1152,
  [SMALL_STATE(14)] = 1224,
  [SMALL_STATE(15)] = 1296,
  [SMALL_STATE(16)] = 1398,
  [SMALL_STATE(17)] = 1496,
  [SMALL_STATE(18)] = 1594,
  [SMALL_STATE(19)] = 1655,
  [SMALL_STATE(20)] = 1716,
  [SMALL_STATE(21)] = 1786,
  [SMALL_STATE(22)] = 1843,
  [SMALL_STATE(23)] = 1906,
  [SMALL_STATE(24)] = 1963,
  [SMALL_STATE(25)] = 2026,
  [SMALL_STATE(26)] = 2083,
  [SMALL_STATE(27)] = 2140,
  [SMALL_STATE(28)] = 2197,
  [SMALL_STATE(29)] = 2248,
  [SMALL_STATE(30)] = 2299,
  [SMALL_STATE(31)] = 2354,
  [SMALL_STATE(32)] = 2405,
  [SMALL_STATE(33)] = 2462,
  [SMALL_STATE(34)] = 2519,
  [SMALL_STATE(35)] = 2574,
  [SMALL_STATE(36)] = 2629,
  [SMALL_STATE(37)] = 2680,
  [SMALL_STATE(38)] = 2731,
  [SMALL_STATE(39)] = 2782,
  [SMALL_STATE(40)] = 2837,
  [SMALL_STATE(41)] = 2894,
  [SMALL_STATE(42)] = 2945,
  [SMALL_STATE(43)] = 2996,
  [SMALL_STATE(44)] = 3051,
  [SMALL_STATE(45)] = 3102,
  [SMALL_STATE(46)] = 3157,
  [SMALL_STATE(47)] = 3212,
  [SMALL_STATE(48)] = 3263,
  [SMALL_STATE(49)] = 3318,
  [SMALL_STATE(50)] = 3369,
  [SMALL_STATE(51)] = 3420,
  [SMALL_STATE(52)] = 3477,
  [SMALL_STATE(53)] = 3530,
  [SMALL_STATE(54)] = 3583,
  [SMALL_STATE(55)] = 3636,
  [SMALL_STATE(56)] = 3689,
  [SMALL_STATE(57)] = 3739,
  [SMALL_STATE(58)] = 3797,
  [SMALL_STATE(59)] = 3881,
  [SMALL_STATE(60)] = 3931,
  [SMALL_STATE(61)] = 4015,
  [SMALL_STATE(62)] = 4099,
  [SMALL_STATE(63)] = 4183,
  [SMALL_STATE(64)] = 4236,
  [SMALL_STATE(65)] = 4283,
  [SMALL_STATE(66)] = 4330,
  [SMALL_STATE(67)] = 4411,
  [SMALL_STATE(68)] = 4458,
  [SMALL_STATE(69)] = 4521,
  [SMALL_STATE(70)] = 4568,
  [SMALL_STATE(71)] = 4619,
  [SMALL_STATE(72)] = 4670,
  [SMALL_STATE(73)] = 4751,
  [SMALL_STATE(74)] = 4798,
  [SMALL_STATE(75)] = 4845,
  [SMALL_STATE(76)] = 4908,
  [SMALL_STATE(77)] = 4955,
  [SMALL_STATE(78)] = 5002,
  [SMALL_STATE(79)] = 5049,
  [SMALL_STATE(80)] = 5108,
  [SMALL_STATE(81)] = 5189,
  [SMALL_STATE(82)] = 5240,
  [SMALL_STATE(83)] = 5287,
  [SMALL_STATE(84)] = 5350,
  [SMALL_STATE(85)] = 5397,
  [SMALL_STATE(86)] = 5460,
  [SMALL_STATE(87)] = 5507,
  [SMALL_STATE(88)] = 5570,
  [SMALL_STATE(89)] = 5617,
  [SMALL_STATE(90)] = 5664,
  [SMALL_STATE(91)] = 5711,
  [SMALL_STATE(92)] = 5774,
  [SMALL_STATE(93)] = 5855,
  [SMALL_STATE(94)] = 5902,
  [SMALL_STATE(95)] = 5949,
  [SMALL_STATE(96)] = 5996,
  [SMALL_STATE(97)] = 6043,
  [SMALL_STATE(98)] = 6094,
  [SMALL_STATE(99)] = 6141,
  [SMALL_STATE(100)] = 6188,
  [SMALL_STATE(101)] = 6235,
  [SMALL_STATE(102)] = 6282,
  [SMALL_STATE(103)] = 6335,
  [SMALL_STATE(104)] = 6382,
  [SMALL_STATE(105)] = 6429,
  [SMALL_STATE(106)] = 6490,
  [SMALL_STATE(107)] = 6549,
  [SMALL_STATE(108)] = 6602,
  [SMALL_STATE(109)] = 6649,
  [SMALL_STATE(110)] = 6700,
  [SMALL_STATE(111)] = 6763,
  [SMALL_STATE(112)] = 6810,
  [SMALL_STATE(113)] = 6861,
  [SMALL_STATE(114)] = 6942,
  [SMALL_STATE(115)] = 6989,
  [SMALL_STATE(116)] = 7048,
  [SMALL_STATE(117)] = 7109,
  [SMALL_STATE(118)] = 7156,
  [SMALL_STATE(119)] = 7203,
  [SMALL_STATE(120)] = 7250,
  [SMALL_STATE(121)] = 7297,
  [SMALL_STATE(122)] = 7344,
  [SMALL_STATE(123)] = 7391,
  [SMALL_STATE(124)] = 7438,
  [SMALL_STATE(125)] = 7485,
  [SMALL_STATE(126)] = 7532,
  [SMALL_STATE(127)] = 7579,
  [SMALL_STATE(128)] = 7642,
  [SMALL_STATE(129)] = 7689,
  [SMALL_STATE(130)] = 7752,
  [SMALL_STATE(131)] = 7815,
  [SMALL_STATE(132)] = 7874,
  [SMALL_STATE(133)] = 7927,
  [SMALL_STATE(134)] = 7974,
  [SMALL_STATE(135)] = 8030,
  [SMALL_STATE(136)] = 8086,
  [SMALL_STATE(137)] = 8142,
  [SMALL_STATE(138)] = 8198,
  [SMALL_STATE(139)] = 8276,
  [SMALL_STATE(140)] = 8332,
  [SMALL_STATE(141)] = 8388,
  [SMALL_STATE(142)] = 8444,
  [SMALL_STATE(143)] = 8500,
  [SMALL_STATE(144)] = 8556,
  [SMALL_STATE(145)] = 8634,
  [SMALL_STATE(146)] = 8690,
  [SMALL_STATE(147)] = 8746,
  [SMALL_STATE(148)] = 8802,
  [SMALL_STATE(149)] = 8858,
  [SMALL_STATE(150)] = 8904,
  [SMALL_STATE(151)] = 8960,
  [SMALL_STATE(152)] = 9038,
  [SMALL_STATE(153)] = 9094,
  [SMALL_STATE(154)] = 9150,
  [SMALL_STATE(155)] = 9202,
  [SMALL_STATE(156)] = 9280,
  [SMALL_STATE(157)] = 9336,
  [SMALL_STATE(158)] = 9382,
  [SMALL_STATE(159)] = 9438,
  [SMALL_STATE(160)] = 9494,
  [SMALL_STATE(161)] = 9544,
  [SMALL_STATE(162)] = 9600,
  [SMALL_STATE(163)] = 9646,
  [SMALL_STATE(164)] = 9692,
  [SMALL_STATE(165)] = 9748,
  [SMALL_STATE(166)] = 9794,
  [SMALL_STATE(167)] = 9850,
  [SMALL_STATE(168)] = 9900,
  [SMALL_STATE(169)] = 9956,
  [SMALL_STATE(170)] = 10002,
  [SMALL_STATE(171)] = 10077,
  [SMALL_STATE(172)] = 10152,
  [SMALL_STATE(173)] = 10197,
  [SMALL_STATE(174)] = 10268,
  [SMALL_STATE(175)] = 10339,
  [SMALL_STATE(176)] = 10410,
  [SMALL_STATE(177)] = 10452,
  [SMALL_STATE(178)] = 10520,
  [SMALL_STATE(179)] = 10588,
  [SMALL_STATE(180)] = 10656,
  [SMALL_STATE(181)] = 10724,
  [SMALL_STATE(182)] = 10792,
  [SMALL_STATE(183)] = 10860,
  [SMALL_STATE(184)] = 10902,
  [SMALL_STATE(185)] = 10970,
  [SMALL_STATE(186)] = 11012,
  [SMALL_STATE(187)] = 11080,
  [SMALL_STATE(188)] = 11148,
  [SMALL_STATE(189)] = 11216,
  [SMALL_STATE(190)] = 11284,
  [SMALL_STATE(191)] = 11352,
  [SMALL_STATE(192)] = 11420,
  [SMALL_STATE(193)] = 11488,
  [SMALL_STATE(194)] = 11556,
  [SMALL_STATE(195)] = 11624,
  [SMALL_STATE(196)] = 11692,
  [SMALL_STATE(197)] = 11760,
  [SMALL_STATE(198)] = 11828,
  [SMALL_STATE(199)] = 11896,
  [SMALL_STATE(200)] = 11964,
  [SMALL_STATE(201)] = 12032,
  [SMALL_STATE(202)] = 12100,
  [SMALL_STATE(203)] = 12168,
  [SMALL_STATE(204)] = 12236,
  [SMALL_STATE(205)] = 12304,
  [SMALL_STATE(206)] = 12372,
  [SMALL_STATE(207)] = 12440,
  [SMALL_STATE(208)] = 12498,
  [SMALL_STATE(209)] = 12566,
  [SMALL_STATE(210)] = 12634,
  [SMALL_STATE(211)] = 12702,
  [SMALL_STATE(212)] = 12770,
  [SMALL_STATE(213)] = 12838,
  [SMALL_STATE(214)] = 12906,
  [SMALL_STATE(215)] = 12974,
  [SMALL_STATE(216)] = 13042,
  [SMALL_STATE(217)] = 13110,
  [SMALL_STATE(218)] = 13152,
  [SMALL_STATE(219)] = 13194,
  [SMALL_STATE(220)] = 13262,
  [SMALL_STATE(221)] = 13330,
  [SMALL_STATE(222)] = 13372,
  [SMALL_STATE(223)] = 13440,
  [SMALL_STATE(224)] = 13508,
  [SMALL_STATE(225)] = 13576,
  [SMALL_STATE(226)] = 13634,
  [SMALL_STATE(227)] = 13682,
  [SMALL_STATE(228)] = 13750,
  [SMALL_STATE(229)] = 13818,
  [SMALL_STATE(230)] = 13860,
  [SMALL_STATE(231)] = 13928,
  [SMALL_STATE(232)] = 13970,
  [SMALL_STATE(233)] = 14012,
  [SMALL_STATE(234)] = 14054,
  [SMALL_STATE(235)] = 14096,
  [SMALL_STATE(236)] = 14150,
  [SMALL_STATE(237)] = 14218,
  [SMALL_STATE(238)] = 14286,
  [SMALL_STATE(239)] = 14354,
  [SMALL_STATE(240)] = 14422,
  [SMALL_STATE(241)] = 14490,
  [SMALL_STATE(242)] = 14558,
  [SMALL_STATE(243)] = 14614,
  [SMALL_STATE(244)] = 14672,
  [SMALL_STATE(245)] = 14726,
  [SMALL_STATE(246)] = 14794,
  [SMALL_STATE(247)] = 14862,
  [SMALL_STATE(248)] = 14920,
  [SMALL_STATE(249)] = 14968,
  [SMALL_STATE(250)] = 15036,
  [SMALL_STATE(251)] = 15078,
  [SMALL_STATE(252)] = 15124,
  [SMALL_STATE(253)] = 15166,
  [SMALL_STATE(254)] = 15208,
  [SMALL_STATE(255)] = 15276,
  [SMALL_STATE(256)] = 15318,
  [SMALL_STATE(257)] = 15376,
  [SMALL_STATE(258)] = 15418,
  [SMALL_STATE(259)] = 15463,
  [SMALL_STATE(260)] = 15508,
  [SMALL_STATE(261)] = 15575,
  [SMALL_STATE(262)] = 15631,
  [SMALL_STATE(263)] = 15671,
  [SMALL_STATE(264)] = 15711,
  [SMALL_STATE(265)] = 15751,
  [SMALL_STATE(266)] = 15791,
  [SMALL_STATE(267)] = 15831,
  [SMALL_STATE(268)] = 15871,
  [SMALL_STATE(269)] = 15917,
  [SMALL_STATE(270)] = 15957,
  [SMALL_STATE(271)] = 16003,
  [SMALL_STATE(272)] = 16043,
  [SMALL_STATE(273)] = 16082,
  [SMALL_STATE(274)] = 16121,
  [SMALL_STATE(275)] = 16160,
  [SMALL_STATE(276)] = 16199,
  [SMALL_STATE(277)] = 16238,
  [SMALL_STATE(278)] = 16277,
  [SMALL_STATE(279)] = 16316,
  [SMALL_STATE(280)] = 16375,
  [SMALL_STATE(281)] = 16414,
  [SMALL_STATE(282)] = 16453,
  [SMALL_STATE(283)] = 16492,
  [SMALL_STATE(284)] = 16531,
  [SMALL_STATE(285)] = 16590,
  [SMALL_STATE(286)] = 16629,
  [SMALL_STATE(287)] = 16668,
  [SMALL_STATE(288)] = 16707,
  [SMALL_STATE(289)] = 16746,
  [SMALL_STATE(290)] = 16785,
  [SMALL_STATE(291)] = 16824,
  [SMALL_STATE(292)] = 16863,
  [SMALL_STATE(293)] = 16902,
  [SMALL_STATE(294)] = 16941,
  [SMALL_STATE(295)] = 16980,
  [SMALL_STATE(296)] = 17019,
  [SMALL_STATE(297)] = 17058,
  [SMALL_STATE(298)] = 17097,
  [SMALL_STATE(299)] = 17136,
  [SMALL_STATE(300)] = 17175,
  [SMALL_STATE(301)] = 17216,
  [SMALL_STATE(302)] = 17260,
  [SMALL_STATE(303)] = 17298,
  [SMALL_STATE(304)] = 17336,
  [SMALL_STATE(305)] = 17373,
  [SMALL_STATE(306)] = 17405,
  [SMALL_STATE(307)] = 17437,
  [SMALL_STATE(308)] = 17469,
  [SMALL_STATE(309)] = 17501,
  [SMALL_STATE(310)] = 17537,
  [SMALL_STATE(311)] = 17569,
  [SMALL_STATE(312)] = 17607,
  [SMALL_STATE(313)] = 17639,
  [SMALL_STATE(314)] = 17671,
  [SMALL_STATE(315)] = 17703,
  [SMALL_STATE(316)] = 17739,
  [SMALL_STATE(317)] = 17771,
  [SMALL_STATE(318)] = 17803,
  [SMALL_STATE(319)] = 17834,
  [SMALL_STATE(320)] = 17865,
  [SMALL_STATE(321)] = 17896,
  [SMALL_STATE(322)] = 17929,
  [SMALL_STATE(323)] = 17960,
  [SMALL_STATE(324)] = 17991,
  [SMALL_STATE(325)] = 18022,
  [SMALL_STATE(326)] = 18053,
  [SMALL_STATE(327)] = 18084,
  [SMALL_STATE(328)] = 18115,
  [SMALL_STATE(329)] = 18146,
  [SMALL_STATE(330)] = 18176,
  [SMALL_STATE(331)] = 18207,
  [SMALL_STATE(332)] = 18253,
  [SMALL_STATE(333)] = 18281,
  [SMALL_STATE(334)] = 18323,
  [SMALL_STATE(335)] = 18351,
  [SMALL_STATE(336)] = 18379,
  [SMALL_STATE(337)] = 18407,
  [SMALL_STATE(338)] = 18435,
  [SMALL_STATE(339)] = 18463,
  [SMALL_STATE(340)] = 18509,
  [SMALL_STATE(341)] = 18551,
  [SMALL_STATE(342)] = 18579,
  [SMALL_STATE(343)] = 18611,
  [SMALL_STATE(344)] = 18645,
  [SMALL_STATE(345)] = 18683,
  [SMALL_STATE(346)] = 18723,
  [SMALL_STATE(347)] = 18757,
  [SMALL_STATE(348)] = 18803,
  [SMALL_STATE(349)] = 18831,
  [SMALL_STATE(350)] = 18877,
  [SMALL_STATE(351)] = 18915,
  [SMALL_STATE(352)] = 18957,
  [SMALL_STATE(353)] = 18985,
  [SMALL_STATE(354)] = 19013,
  [SMALL_STATE(355)] = 19041,
  [SMALL_STATE(356)] = 19069,
  [SMALL_STATE(357)] = 19097,
  [SMALL_STATE(358)] = 19143,
  [SMALL_STATE(359)] = 19171,
  [SMALL_STATE(360)] = 19199,
  [SMALL_STATE(361)] = 19245,
  [SMALL_STATE(362)] = 19291,
  [SMALL_STATE(363)] = 19337,
  [SMALL_STATE(364)] = 19365,
  [SMALL_STATE(365)] = 19411,
  [SMALL_STATE(366)] = 19456,
  [SMALL_STATE(367)] = 19501,
  [SMALL_STATE(368)] = 19546,
  [SMALL_STATE(369)] = 19591,
  [SMALL_STATE(370)] = 19631,
  [SMALL_STATE(371)] = 19671,
  [SMALL_STATE(372)] = 19711,
  [SMALL_STATE(373)] = 19731,
  [SMALL_STATE(374)] = 19751,
  [SMALL_STATE(375)] = 19771,
  [SMALL_STATE(376)] = 19790,
  [SMALL_STATE(377)] = 19809,
  [SMALL_STATE(378)] = 19828,
  [SMALL_STATE(379)] = 19847,
  [SMALL_STATE(380)] = 19866,
  [SMALL_STATE(381)] = 19885,
  [SMALL_STATE(382)] = 19904,
  [SMALL_STATE(383)] = 19923,
  [SMALL_STATE(384)] = 19942,
  [SMALL_STATE(385)] = 19958,
  [SMALL_STATE(386)] = 19974,
  [SMALL_STATE(387)] = 19990,
  [SMALL_STATE(388)] = 20006,
  [SMALL_STATE(389)] = 20022,
  [SMALL_STATE(390)] = 20037,
  [SMALL_STATE(391)] = 20052,
  [SMALL_STATE(392)] = 20067,
  [SMALL_STATE(393)] = 20082,
  [SMALL_STATE(394)] = 20097,
  [SMALL_STATE(395)] = 20112,
  [SMALL_STATE(396)] = 20127,
  [SMALL_STATE(397)] = 20142,
  [SMALL_STATE(398)] = 20155,
  [SMALL_STATE(399)] = 20170,
  [SMALL_STATE(400)] = 20185,
  [SMALL_STATE(401)] = 20200,
  [SMALL_STATE(402)] = 20215,
  [SMALL_STATE(403)] = 20230,
  [SMALL_STATE(404)] = 20245,
  [SMALL_STATE(405)] = 20260,
  [SMALL_STATE(406)] = 20275,
  [SMALL_STATE(407)] = 20290,
  [SMALL_STATE(408)] = 20305,
  [SMALL_STATE(409)] = 20320,
  [SMALL_STATE(410)] = 20335,
  [SMALL_STATE(411)] = 20350,
  [SMALL_STATE(412)] = 20360,
  [SMALL_STATE(413)] = 20370,
  [SMALL_STATE(414)] = 20380,
  [SMALL_STATE(415)] = 20392,
  [SMALL_STATE(416)] = 20404,
  [SMALL_STATE(417)] = 20416,
  [SMALL_STATE(418)] = 20428,
  [SMALL_STATE(419)] = 20438,
  [SMALL_STATE(420)] = 20450,
  [SMALL_STATE(421)] = 20460,
  [SMALL_STATE(422)] = 20469,
  [SMALL_STATE(423)] = 20478,
  [SMALL_STATE(424)] = 20487,
  [SMALL_STATE(425)] = 20496,
  [SMALL_STATE(426)] = 20505,
  [SMALL_STATE(427)] = 20514,
  [SMALL_STATE(428)] = 20523,
  [SMALL_STATE(429)] = 20532,
  [SMALL_STATE(430)] = 20541,
  [SMALL_STATE(431)] = 20550,
  [SMALL_STATE(432)] = 20559,
  [SMALL_STATE(433)] = 20568,
  [SMALL_STATE(434)] = 20577,
  [SMALL_STATE(435)] = 20586,
  [SMALL_STATE(436)] = 20595,
  [SMALL_STATE(437)] = 20604,
  [SMALL_STATE(438)] = 20613,
  [SMALL_STATE(439)] = 20622,
  [SMALL_STATE(440)] = 20631,
  [SMALL_STATE(441)] = 20640,
  [SMALL_STATE(442)] = 20649,
  [SMALL_STATE(443)] = 20658,
  [SMALL_STATE(444)] = 20667,
  [SMALL_STATE(445)] = 20676,
  [SMALL_STATE(446)] = 20685,
  [SMALL_STATE(447)] = 20694,
  [SMALL_STATE(448)] = 20703,
  [SMALL_STATE(449)] = 20712,
  [SMALL_STATE(450)] = 20721,
  [SMALL_STATE(451)] = 20730,
  [SMALL_STATE(452)] = 20739,
  [SMALL_STATE(453)] = 20748,
  [SMALL_STATE(454)] = 20757,
  [SMALL_STATE(455)] = 20766,
  [SMALL_STATE(456)] = 20775,
  [SMALL_STATE(457)] = 20784,
  [SMALL_STATE(458)] = 20793,
  [SMALL_STATE(459)] = 20802,
  [SMALL_STATE(460)] = 20811,
  [SMALL_STATE(461)] = 20820,
  [SMALL_STATE(462)] = 20829,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(388),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(320),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(326),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(416),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(196),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(192),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(405),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(217),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(218),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(382),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(220),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statements, 1),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 1, .production_id = 1),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 1, .production_id = 1),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__unnamed_arguments, 1),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [99] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__statements_repeat1, 2), SHIFT_REPEAT(20),
  [102] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__statements_repeat1, 2), SHIFT_REPEAT(214),
  [105] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__statements_repeat1, 2), SHIFT_REPEAT(62),
  [108] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__statements_repeat1, 2), SHIFT_REPEAT(4),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__statements_repeat1, 2),
  [113] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__statements_repeat1, 2), SHIFT_REPEAT(148),
  [116] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__statements_repeat1, 2), SHIFT_REPEAT(320),
  [119] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__statements_repeat1, 2), SHIFT_REPEAT(326),
  [122] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__statements_repeat1, 2), SHIFT_REPEAT(416),
  [125] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__statements_repeat1, 2), SHIFT_REPEAT(196),
  [128] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__statements_repeat1, 2), SHIFT_REPEAT(192),
  [131] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__statements_repeat1, 2), SHIFT_REPEAT(405),
  [134] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__statements_repeat1, 2), SHIFT_REPEAT(217),
  [137] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__statements_repeat1, 2), SHIFT_REPEAT(218),
  [140] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__statements_repeat1, 2), SHIFT_REPEAT(33),
  [143] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__statements_repeat1, 2), SHIFT_REPEAT(33),
  [146] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__statements_repeat1, 2), SHIFT_REPEAT(382),
  [149] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__statements_repeat1, 2), SHIFT_REPEAT(220),
  [152] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [162] = {.entry = {.count = 1, .reusable = false}}, SHIFT(272),
  [164] = {.entry = {.count = 1, .reusable = false}}, SHIFT(294),
  [166] = {.entry = {.count = 1, .reusable = false}}, SHIFT(414),
  [168] = {.entry = {.count = 1, .reusable = false}}, SHIFT(202),
  [170] = {.entry = {.count = 1, .reusable = false}}, SHIFT(203),
  [172] = {.entry = {.count = 1, .reusable = false}}, SHIFT(407),
  [174] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [176] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [178] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [184] = {.entry = {.count = 1, .reusable = false}}, SHIFT(209),
  [186] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [196] = {.entry = {.count = 1, .reusable = false}}, SHIFT(281),
  [198] = {.entry = {.count = 1, .reusable = false}}, SHIFT(280),
  [200] = {.entry = {.count = 1, .reusable = false}}, SHIFT(419),
  [202] = {.entry = {.count = 1, .reusable = false}}, SHIFT(189),
  [204] = {.entry = {.count = 1, .reusable = false}}, SHIFT(186),
  [206] = {.entry = {.count = 1, .reusable = false}}, SHIFT(395),
  [208] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [210] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [212] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [218] = {.entry = {.count = 1, .reusable = false}}, SHIFT(216),
  [220] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__literal, 1),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__literal, 1),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [226] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [230] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [232] = {.entry = {.count = 1, .reusable = false}}, SHIFT(224),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [236] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [240] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 3, .production_id = 2),
  [246] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [248] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 3, .production_id = 2),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [254] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 2, .production_id = 1),
  [258] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 2, .production_id = 1),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [264] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [266] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 2, .production_id = 2),
  [270] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 2, .production_id = 2),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [276] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [278] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameters, 3),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 3),
  [282] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 4, .production_id = 6),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 4, .production_id = 6),
  [286] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 4, .production_id = 12),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 4, .production_id = 12),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [292] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [298] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [302] = {.entry = {.count = 1, .reusable = false}}, SHIFT(232),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [306] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 3, .production_id = 6),
  [310] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 3, .production_id = 6),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [314] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 2),
  [318] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameters, 2),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [322] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [328] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [332] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [336] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [340] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 5, .production_id = 12),
  [344] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 5, .production_id = 12),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [348] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [354] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 3),
  [358] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 3),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__unnamed_arguments, 3),
  [362] = {.entry = {.count = 1, .reusable = false}}, SHIFT(260),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [376] = {.entry = {.count = 1, .reusable = false}}, SHIFT(358),
  [378] = {.entry = {.count = 1, .reusable = false}}, SHIFT(348),
  [380] = {.entry = {.count = 1, .reusable = false}}, SHIFT(300),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [386] = {.entry = {.count = 1, .reusable = false}}, SHIFT(219),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comparison_operator, 3, .production_id = 7),
  [396] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comparison_operator, 3, .production_id = 7),
  [398] = {.entry = {.count = 1, .reusable = false}}, SHIFT(213),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_block, 3),
  [406] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code_block, 3),
  [408] = {.entry = {.count = 1, .reusable = false}}, SHIFT(284),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(428),
  [412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_operator, 2, .production_id = 3),
  [414] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_operator, 2, .production_id = 3),
  [416] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression_statement, 1),
  [418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression_statement, 1),
  [420] = {.entry = {.count = 1, .reusable = false}}, SHIFT(204),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [426] = {.entry = {.count = 1, .reusable = false}}, SHIFT(199),
  [428] = {.entry = {.count = 1, .reusable = false}}, SHIFT(423),
  [430] = {.entry = {.count = 1, .reusable = false}}, SHIFT(197),
  [432] = {.entry = {.count = 1, .reusable = false}}, SHIFT(195),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [436] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 2),
  [438] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 2),
  [440] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_block, 2),
  [446] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code_block, 2),
  [448] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_content_block, 2),
  [450] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_content_block, 2),
  [452] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_declaration, 4, .production_id = 14),
  [454] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_declaration, 4, .production_id = 14),
  [456] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unit, 1),
  [458] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unit, 1),
  [460] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numeric, 2),
  [462] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_numeric, 2),
  [464] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 2),
  [466] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 2),
  [468] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_not_operator, 2, .production_id = 4),
  [470] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_not_operator, 2, .production_id = 4),
  [472] = {.entry = {.count = 1, .reusable = false}}, SHIFT(208),
  [474] = {.entry = {.count = 1, .reusable = false}}, SHIFT(435),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [480] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__code_block, 2),
  [482] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__code_block, 2),
  [484] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1),
  [486] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [488] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 3, .production_id = 5),
  [490] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment, 3, .production_id = 5),
  [492] = {.entry = {.count = 1, .reusable = false}}, SHIFT(177),
  [494] = {.entry = {.count = 1, .reusable = false}}, SHIFT(194),
  [496] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_content_block, 3),
  [498] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_content_block, 3),
  [500] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_augmented_assignment, 3, .production_id = 7),
  [502] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_augmented_assignment, 3, .production_id = 7),
  [504] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unnamed_function, 3, .production_id = 11),
  [506] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unnamed_function, 3, .production_id = 11),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [510] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_expression, 3),
  [512] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized_expression, 3),
  [514] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comparison_operator, 4, .production_id = 16),
  [516] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comparison_operator, 4, .production_id = 16),
  [518] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_literal, 1),
  [520] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean_literal, 1),
  [522] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean_operator, 3, .production_id = 7),
  [524] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_operator, 3, .production_id = 7),
  [526] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 3),
  [528] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 3),
  [530] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_operator, 3, .production_id = 7),
  [532] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_operator, 3, .production_id = 7),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [536] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(387),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [548] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [554] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [560] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [566] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameters, 3),
  [568] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [576] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [586] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameters, 2),
  [588] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [596] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [602] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [608] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [610] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(150),
  [613] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(388),
  [616] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(150),
  [619] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(16),
  [622] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(136),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(457),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [631] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [635] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(436),
  [639] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [647] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [653] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [657] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(161),
  [660] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(387),
  [663] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(161),
  [666] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(17),
  [669] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(159),
  [672] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [674] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [680] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [686] = {.entry = {.count = 1, .reusable = false}}, SHIFT(261),
  [688] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__array, 2),
  [690] = {.entry = {.count = 1, .reusable = false}}, SHIFT(279),
  [692] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__array, 3),
  [694] = {.entry = {.count = 1, .reusable = false}}, SHIFT(237),
  [696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [700] = {.entry = {.count = 1, .reusable = false}}, SHIFT(239),
  [702] = {.entry = {.count = 1, .reusable = false}}, SHIFT(439),
  [704] = {.entry = {.count = 1, .reusable = false}}, SHIFT(240),
  [706] = {.entry = {.count = 1, .reusable = false}}, SHIFT(241),
  [708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [710] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_expression, 3, .production_id = 9),
  [712] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_expression, 3, .production_id = 9),
  [714] = {.entry = {.count = 1, .reusable = false}}, SHIFT(372),
  [716] = {.entry = {.count = 1, .reusable = false}}, SHIFT(374),
  [718] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__weird_edge_case, 1),
  [720] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter, 1),
  [722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [724] = {.entry = {.count = 1, .reusable = false}}, SHIFT(228),
  [726] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__parameter, 1),
  [728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(420),
  [730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [736] = {.entry = {.count = 1, .reusable = false}}, SHIFT(310),
  [738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [740] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__text, 2),
  [742] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__text, 2),
  [744] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__text, 2), SHIFT_REPEAT(268),
  [747] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__text, 2), SHIFT_REPEAT(268),
  [750] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__text, 2), SHIFT_REPEAT(270),
  [753] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__text, 2), SHIFT_REPEAT(270),
  [756] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_break_statement, 1),
  [758] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_break_statement, 1),
  [760] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_expression, 4, .production_id = 15),
  [762] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_expression, 4, .production_id = 15),
  [764] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_else_clause, 2),
  [766] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else_clause, 2),
  [768] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_expression, 5, .production_id = 17),
  [770] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_expression, 5, .production_id = 17),
  [772] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter, 2),
  [774] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_continue_statement, 1),
  [776] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_continue_statement, 1),
  [778] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_while_expression, 3, .production_id = 10),
  [780] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_while_expression, 3, .production_id = 10),
  [782] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quote, 2),
  [784] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quote, 2),
  [786] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quote, 3),
  [788] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quote, 3),
  [790] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [792] = {.entry = {.count = 1, .reusable = false}}, SHIFT(301),
  [794] = {.entry = {.count = 1, .reusable = false}}, SHIFT(373),
  [796] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [798] = {.entry = {.count = 1, .reusable = false}}, SHIFT(305),
  [800] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [804] = {.entry = {.count = 1, .reusable = false}}, SHIFT(316),
  [806] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [808] = {.entry = {.count = 1, .reusable = false}}, SHIFT(307),
  [810] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__statements_repeat1, 1),
  [812] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__statements_repeat1, 1),
  [814] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [816] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__statements_repeat1, 2),
  [818] = {.entry = {.count = 1, .reusable = false}}, SHIFT(246),
  [820] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [822] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [824] = {.entry = {.count = 1, .reusable = false}}, SHIFT(179),
  [826] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [828] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [830] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [832] = {.entry = {.count = 1, .reusable = true}}, SHIFT(462),
  [834] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [836] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [838] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [840] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [842] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [844] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [846] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [848] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [850] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [852] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [854] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [856] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [858] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [860] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [862] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [864] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__array_repeat1, 2),
  [866] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [868] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [870] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [872] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [874] = {.entry = {.count = 1, .reusable = false}}, SHIFT(379),
  [876] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [878] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [880] = {.entry = {.count = 1, .reusable = false}}, SHIFT(381),
  [882] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [884] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [886] = {.entry = {.count = 1, .reusable = false}}, SHIFT(378),
  [888] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [890] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [892] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_literal_repeat1, 2),
  [894] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 2), SHIFT_REPEAT(379),
  [897] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_literal_repeat1, 2), SHIFT_REPEAT(379),
  [900] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [902] = {.entry = {.count = 1, .reusable = false}}, SHIFT(383),
  [904] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [906] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [908] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [910] = {.entry = {.count = 1, .reusable = false}}, SHIFT(375),
  [912] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [914] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [916] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [918] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [920] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [922] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_quote_repeat1, 2),
  [924] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_quote_repeat1, 2), SHIFT_REPEAT(386),
  [927] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [929] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [931] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [933] = {.entry = {.count = 1, .reusable = true}}, SHIFT(385),
  [935] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [937] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [939] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__weird_edge_case, 2), SHIFT_REPEAT(397),
  [942] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__weird_edge_case, 2),
  [944] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pattern_list_repeat1, 2), SHIFT_REPEAT(443),
  [947] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pattern_list_repeat1, 2),
  [949] = {.entry = {.count = 1, .reusable = true}}, SHIFT(397),
  [951] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [953] = {.entry = {.count = 1, .reusable = true}}, SHIFT(415),
  [955] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 1),
  [957] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameters, 1),
  [959] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [961] = {.entry = {.count = 1, .reusable = true}}, SHIFT(393),
  [963] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__array_repeat1, 2), SHIFT_REPEAT(206),
  [966] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__weird_edge_case, 1),
  [968] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [970] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [972] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [974] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [976] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [978] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [980] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__unnamed_arguments_repeat1, 2),
  [982] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__unnamed_arguments_repeat1, 2), SHIFT_REPEAT(171),
  [985] = {.entry = {.count = 1, .reusable = true}}, SHIFT(417),
  [987] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern_list, 2),
  [989] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [991] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [993] = {.entry = {.count = 1, .reusable = true}}, SHIFT(454),
  [995] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [997] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_asssigned_parameter, 3, .production_id = 13),
  [999] = {.entry = {.count = 1, .reusable = true}}, SHIFT(389),
  [1001] = {.entry = {.count = 1, .reusable = false}}, SHIFT(418),
  [1003] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pattern_list, 2),
  [1005] = {.entry = {.count = 1, .reusable = true}}, SHIFT(403),
  [1007] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pattern_list, 3),
  [1009] = {.entry = {.count = 1, .reusable = true}}, SHIFT(402),
  [1011] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [1013] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [1015] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [1017] = {.entry = {.count = 1, .reusable = true}}, SHIFT(440),
  [1019] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [1021] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 2, .production_id = 8),
  [1023] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [1025] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [1027] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [1029] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [1031] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [1033] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [1035] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [1037] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__unnamed_arguments, 5),
  [1039] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [1041] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [1043] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [1045] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [1047] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [1049] = {.entry = {.count = 1, .reusable = true}}, SHIFT(418),
  [1051] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [1053] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [1055] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [1057] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [1059] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1061] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [1063] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [1065] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [1067] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [1069] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [1071] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__unnamed_arguments, 4),
  [1073] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [1075] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [1077] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [1079] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_typst_external_scanner_create(void);
void tree_sitter_typst_external_scanner_destroy(void *);
bool tree_sitter_typst_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_typst_external_scanner_serialize(void *, char *);
void tree_sitter_typst_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_typst(void) {
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
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_typst_external_scanner_create,
      tree_sitter_typst_external_scanner_destroy,
      tree_sitter_typst_external_scanner_scan,
      tree_sitter_typst_external_scanner_serialize,
      tree_sitter_typst_external_scanner_deserialize,
    },
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
