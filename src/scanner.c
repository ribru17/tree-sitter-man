#include <tree_sitter/parser.h>

void *tree_sitter_man_external_scanner_create() {
    return NULL;
}

void tree_sitter_man_external_scanner_destroy(void *p) {}

void tree_sitter_man_external_scanner_reset(void *p) {}

unsigned tree_sitter_man_external_scanner_serialize(void *p, char *buffer) {
    return 0;
}

void tree_sitter_man_external_scanner_deserialize(void *p, const char *b,
                                                  unsigned n) {}

bool tree_sitter_man_external_scanner_scan(void *payload, TSLexer *lexer,
                                           const bool *valid_symbols) {
    if (lexer->lookahead == '\n' || lexer->lookahead == '\r' ||
        lexer->eof(lexer)) {
        return false;
    }
    while (true) {
        lexer->advance(lexer, false);
        if (lexer->lookahead == '\n' || lexer->lookahead == '\r') {
            lexer->mark_end(lexer);
            lexer->advance(lexer, false);
            lexer->advance(lexer, false);
            // allow empty line after footer
            if (lexer->eof(lexer)) {
                return true;
            }
            return false;
        }
        if (lexer->eof(lexer)) {
            return true;
        }
    }
}
