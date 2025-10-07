#include "string.h"

char *strerror(int errnum) {
    static char *error_messages[] = ERROR_MESSAGES;
    static char unknown_error[50];

    if (errnum < 0 || errnum > MAX_ERRNO) {
        // Handling the case with unknown error
        snprintf(unknown_error, sizeof(unknown_error), 
                 "Unknown error: %d", errnum);
        return unknown_error;
    }
    
    return error_messages[errnum];
}

// usage
// int main(void) {
//     printf("Platform: ");
//     #ifdef PLATFORM_MAC
//         printf("macOS\n");
//     #elif defined(PLATFORM_LINUX)
//         printf("Linux\n");
//     #else
//         printf("Unknown\n");
//     #endif
    
//     printf("\nПримеры сообщений об ошибках:\n");
//     printf("errno 0: %s\n", strerror(0));
//     printf("errno 2: %s\n", strerror(2));
//     printf("errno 13: %s\n", strerror(13));
//     printf("errno 22: %s\n", strerror(22));
//     printf("errno 999: %s\n", strerror(999));
    
//     return 0;
// }