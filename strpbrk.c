#include "string.h"

char *strpbrk(const char *str1, const char *str2) {
    while (*str1 != '\0') {
        const char *temp = str2;
        while (*temp != '\0') {
            if (*str1 == *temp) {
                return (char *)str1;
            }
            temp++;
        }
        str1++;
    }
    return NULL;
}