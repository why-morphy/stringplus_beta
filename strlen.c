#include <stdio.h>

// Определение типа size_t (если не используется stddef.h)
typedef unsigned long size_t;

// Реализация функции strlen
size_t my_strlen(const char *str) {
    size_t length = 0;
    
    // Проходим по строке до нулевого символа
    while (str[length] != '\0') {
        length++;
    }
    
    return length;
}

// Альтернативная реализация с указателями
size_t my_strlen_v2(const char *str) {
    const char *start = str;
    
    // Перемещаем указатель до нулевого символа
    while (*str != '\0') {
        str++;
    }
    
    // Возвращаем разницу между конечным и начальным адресом
    return str - start;
}

// Пример использования
int main(void) {
    const char *test1 = "Hello, World!";
    const char *test2 = "";
    const char *test3 = "C Programming";
    const char *test4 = "12345";
    
    printf("Тесты функции my_strlen:\n");
    printf("\"%s\" -> длина: %lu\n", test1, my_strlen(test1));
    printf("\"%s\" -> длина: %lu\n", test2, my_strlen(test2));
    printf("\"%s\" -> длина: %lu\n", test3, my_strlen(test3));
    printf("\"%s\" -> длина: %lu\n", test4, my_strlen(test4));
    
    printf("\nТесты функции my_strlen_v2:\n");
    printf("\"%s\" -> длина: %lu\n", test1, my_strlen_v2(test1));
    printf("\"%s\" -> длина: %lu\n", test2, my_strlen_v2(test2));
    printf("\"%s\" -> длина: %lu\n", test3, my_strlen_v2(test3));
    printf("\"%s\" -> длина: %lu\n", test4, my_strlen_v2(test4));
    
    return 0;
}