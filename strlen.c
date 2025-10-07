#include "string.h"

typedef unsigned long size_t;
size_t my_strlen(const char *str) {
    size_t length = 0;
    while (str[length] != '\0') {
        length++;
    }
    
    return length;
}