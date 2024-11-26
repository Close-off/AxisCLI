#ifndef CREATE_TOKEN_H
#define CREATE_TOKEN_H
#include "keyword_token.h"
#include <string.h>

char* _strcut(char* str, char delim) {
    for(int i = 0; str[i] != '\0'; i++) {
        if(strcmp(str[i], delim) == 0) {
            return str[i + 1];
        } else {
            return NULL;
        }
    }
}

char* create_token(char* str, char delim) {
    
}

#endif