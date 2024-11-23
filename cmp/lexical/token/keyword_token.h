#ifndef TOKEN_H
#define TOKEN_H

#include <stdio.h>
#include <string.h>

typedef enum {
    CHAR_TOKEN = 1,
    SHORT_TOKEN,
    INT_TOKEN,
    LONG_TOKEN,
    FLOAT_TOKEN,
    DOUBLE_TOKEN,
    IF_TOKEN,
    ELSE_IF_TOKEN,
    ELSE_TOKEN,
    WHILE_TOKEN,
    FOR_TOKEN,
    BREAK_TOKEN,
    CONST_TOKEN,
    CASE_TOKEN,
    DEFAULT_TOKEN,
    GOTO_TOKEN,
    RETURN_TOKEN,
    SIGNED_TOKEN,
    UNSIGNED_TOKEN,
    VOID_TOKEN,
    STATIC_TOKEN,
    INVALID_TOKEN
} token_type;

typedef struct {
    const char* keyword;
    token_type token;
} keyword_token;

keyword_token keywords[] = {
    {"char", CHAR_TOKEN},
    {"short", SHORT_TOKEN},
    {"int", INT_TOKEN},
    {"long", LONG_TOKEN},
    {"float", FLOAT_TOKEN},
    {"double", DOUBLE_TOKEN},
    {"if", IF_TOKEN},
    {"else if", ELSE_IF_TOKEN},
    {"else", ELSE_TOKEN},
    {"while", WHILE_TOKEN},
    {"for", FOR_TOKEN},
    {"break", BREAK_TOKEN},
    {"const", CONST_TOKEN},
    {"case", CASE_TOKEN},
    {"default", DEFAULT_TOKEN},
    {"goto", GOTO_TOKEN},
    {"return", RETURN_TOKEN},
    {"signed", SIGNED_TOKEN},
    {"unsigned", UNSIGNED_TOKEN},
    {"void", VOID_TOKEN},
    {"static", STATIC_TOKEN}
};

#endif