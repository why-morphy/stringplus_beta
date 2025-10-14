#include "string.h"

static char *save_ptr = NULL;

char *strtok(char *str, const char *delim) { 
    if (str != NULL) save_ptr = str;
    if (save_ptr == NULL || *save_ptr == '\0') return NULL;
   
    while (*save_ptr != '\0' && strchr(delim, *save_ptr) != NULL) {
        save_ptr++;
    }
    
    if (*save_ptr == '\0') return NULL;
    
    char *token_start = save_ptr;
    while (*save_ptr != '\0' && strchr(delim, *save_ptr) == NULL) {
        save_ptr++;
    }
    
    if (*save_ptr != '\0') {
        *save_ptr = '\0';
        save_ptr++;
    }
    
    return token_start;
}
