#ifndef STRING_H
#define STRING_H

#include <errno.h>
#include <stdio.h>
#include <string.h>

/* Platform detection */
#if defined(__APPLE__) || defined(__MACH__)
    #define PLATFORM_MAC
#elif defined(__linux__)
    #define PLATFORM_LINUX
#endif

/* Error messages for macOS */
#ifdef PLATFORM_MAC
    #define ERROR_MESSAGES \
    { \
        "Success", \
        "Operation not permitted", \
        "No such file or directory", \
        "No such process", \
        "Interrupted system call", \
        "Input/output error", \
        "Device not configured", \
        "Argument list too long", \
        "Exec format error", \
        "Bad file descriptor", \
        "No child processes", \
        "Resource deadlock avoided", \
        "Cannot allocate memory", \
        "Permission denied", \
        "Bad address", \
        "Block device required", \
        "Resource busy", \
        "File exists", \
        "Cross-device link", \
        "Operation not supported by device", \
        "Not a directory", \
        "Is a directory", \
        "Invalid argument", \
        "Too many open files in system", \
        "Too many open files", \
        "Inappropriate ioctl for device", \
        "Text file busy", \
        "File too large", \
        "No space left on device", \
        "Illegal seek", \
        "Read-only file system", \
        "Too many links", \
        "Broken pipe", \
        "Numerical argument out of domain", \
        "Result too large" \
    }
    #define MAX_ERRNO 34
#endif

/* Error messages for Linux */
#ifdef PLATFORM_LINUX
    #define ERROR_MESSAGES \
    { \
        "Success", \
        "Operation not permitted", \
        "No such file or directory", \
        "No such process", \
        "Interrupted system call", \
        "Input/output error", \
        "No such device or address", \
        "Argument list too long", \
        "Exec format error", \
        "Bad file descriptor", \
        "No child processes", \
        "Resource temporarily unavailable", \
        "Cannot allocate memory", \
        "Permission denied", \
        "Bad address", \
        "Block device required", \
        "Device or resource busy", \
        "File exists", \
        "Invalid cross-device link", \
        "No such device", \
        "Not a directory", \
        "Is a directory", \
        "Invalid argument", \
        "Too many open files in system", \
        "Too many open files", \
        "Inappropriate ioctl for device", \
        "Text file busy", \
        "File too large", \
        "No space left on device", \
        "Illegal seek", \
        "Read-only file system", \
        "Too many links", \
        "Broken pipe", \
        "Numerical argument out of domain", \
        "Numerical result out of range" \
    }
    #define MAX_ERRNO 34
#endif

/* Define NULL */
#define NULL ((void *)0)
/* Type definitions */
typedef unsigned long size_t;

/* Function declarations */
char *strerror(int errnum);
char *strtok(char *str, const char *delim);
size_t strlen(const char *str);
char *strpbrk(const char *str1, const char *str2);
char *strrchr(const char *str, int c);
char *strchr(const char *str, int c);
char *strstr(const char *haystack, const char *needle);

#endif