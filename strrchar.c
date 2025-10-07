#include "string.h"

char *strrchr(const char *str, int c) {
    unsigned char ch = (unsigned char)c;
    char *temp = NULL;
    
    while (*str != '\0') {
        if (*str == ch) temp = (char *)str;
        str++;
    }
    
    if (ch == '\0') return (char *)str;
    return temp;
}