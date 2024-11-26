#ifndef SPECIAL_TOKEN_H
#define SPECIAL_TOKEN_H

typedef enum {
    SEMICOLON_TOKEN,     
    COLON_TOKEN,             
    COMMA_TOKEN,             
    DOT_TOKEN,               
    QUESTION_MARK_TOKEN,     
    EXCLAMATION_MARK_TOKEN,  
    PLUS_TOKEN,              
    MINUS_TOKEN,             
    ASTERISK_TOKEN,          
    SLASH_TOKEN,             
    PERCENT_TOKEN,           
    AMPERSAND_TOKEN,         
    PIPE_TOKEN,              
    CARET_TOKEN,             
    TILDE_TOKEN,             
    LESS_THAN_TOKEN,         
    GREATER_THAN_TOKEN,      
    EQUAL_TOKEN,             
    OPEN_PAREN_TOKEN,        
    CLOSE_PAREN_TOKEN,       
    OPEN_BRACE_TOKEN,        
    CLOSE_BRACE_TOKEN,       
    OPEN_BRACKET_TOKEN,      
    CLOSE_BRACKET_TOKEN,     
    SINGLE_QUOTE_TOKEN,      
    DOUBLE_QUOTE_TOKEN,      
    BACKSLASH_TOKEN,         
    HASH_TOKEN,              
    DOLLAR_TOKEN,            
    AT_TOKEN,                
    INVALID_TOKEN
} token_type;

typedef struct {
    const char* symbol;
    token_type token;
} special_token;

special_token special_characters[] = {
    {";", SEMICOLON_TOKEN},
    {":", COLON_TOKEN},
    {",", COMMA_TOKEN},
    {".", DOT_TOKEN},
    {"?", QUESTION_MARK_TOKEN},
    {"!", EXCLAMATION_MARK_TOKEN},
    {"+", PLUS_TOKEN},
    {"-", MINUS_TOKEN},
    {"*", ASTERISK_TOKEN},
    {"/", SLASH_TOKEN},
    {"%", PERCENT_TOKEN},
    {"&", AMPERSAND_TOKEN},
    {"|", PIPE_TOKEN},
    {"^", CARET_TOKEN},
    {"<", LESS_THAN_TOKEN},
    {">", GREATER_THAN_TOKEN},
    {"=", EQUAL_TOKEN},
    {"(", OPEN_PAREN_TOKEN},
    {")", CLOSE_PAREN_TOKEN},
    {"{", OPEN_BRACE_TOKEN},
    {"}", CLOSE_BRACE_TOKEN},
    {"[", OPEN_BRACKET_TOKEN},
    {"]", CLOSE_BRACKET_TOKEN},
    {"'", SINGLE_QUOTE_TOKEN},
    {"\"", DOUBLE_QUOTE_TOKEN},
    {"\\", BACKSLASH_TOKEN},
    {"#", HASH_TOKEN},
    {"@", AT_TOKEN}
};


#endif