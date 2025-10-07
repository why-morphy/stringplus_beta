#include "string.h"

char *strstr(const char *haystack, const char *needle) {
    if (*needle == '\0') return (char *)haystack;

    // Search through haystack
    while (*haystack != '\0') {
        const char *h = haystack;
        const char *n = needle;
        
        // Try to match needle starting at current position
        while (*h != '\0' && *n != '\0' && *h == *n) {
            h++;
            n++;
        }
        
        // If we reached end of needle, we found a match
        if (*n == '\0') return (char *)haystack;
        
        haystack++;
    }
    
    return NULL;
}