#include "main.h"
#include <stdio.h>

/* Define each function with a basic implementation */

int _putchar(char c) {
    return putchar(c);
}

int _islower(int c) {
    return (c >= 'a' && c <= 'z');
}

int _isalpha(int c) {
    return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

int _abs(int n) {
    return (n < 0 ? -n : n);
}

int _isupper(int c) {
    return (c >= 'A' && c <= 'Z');
}

int _isdigit(int c) {
    return (c >= '0' && c <= '9');
}

int _strlen(char *s) {
    int len = 0;
    while (s[len])
        len++;
    return len;
}

void _puts(char *s) {
    while (*s)
        _putchar(*s++);
    _putchar('\n');
}

char *_strcpy(char *dest, char *src) {
    char *ptr = dest;
    while ((*dest++ = *src++))
        ;
    return ptr;
}

int _atoi(char *s) {
    int result = 0, sign = 1;
    while (*s && (*s < '0' || *s > '9')) {
        if (*s == '-')
            sign = -sign;
        s++;
    }
    while (*s && (*s >= '0' && *s <= '9')) {
        result = result * 10 + (*s - '0');
        s++;
    }
    return sign * result;
}

char *_strcat(char *dest, char *src) {
    char *ptr = dest;
    while (*dest)
        dest++;
    while ((*dest++ = *src++))
        ;
    return ptr;
}

char *_strncat(char *dest, char *src, int n) {
    char *ptr = dest;
    while (*dest)
        dest++;
    while (n-- && (*dest++ = *src++))
        ;
    if (n < 0)
        *dest = '\0';
    return ptr;
}

char *_strncpy(char *dest, char *src, int n) {
    char *ptr = dest;
    while (n-- && (*dest++ = *src++))
        ;
    while (n-- > 0)
        *dest++ = '\0';
    return ptr;
}

int _strcmp(char *s1, char *s2) {
    while (*s1 && (*s1 == *s2)) {
        s1++;
        s2++;
    }
    return *(unsigned char *)s1 - *(unsigned char *)s2;
}

char *_memset(char *s, char b, unsigned int n) {
    char *ptr = s;
    while (n--)
        *s++ = b;
    return ptr;
}

char *_memcpy(char *dest, char *src, unsigned int n) {
    char *ptr = dest;
    while (n--)
        *dest++ = *src++;
    return ptr;
}

char *_strchr(char *s, char c) {
    while (*s) {
        if (*s == c)
            return s;
        s++;
    }
    return (c == '\0') ? s : NULL;
}

unsigned int _strspn(char *s, char *accept) {
    unsigned int count = 0;
    char *a;
    while (*s) {
        for (a = accept; *a; a++) {
            if (*s == *a)
                break;
        }
        if (*a == '\0')
            return count;
        s++;
        count++;
    }
    return count;
}

char *_strpbrk(char *s, char *accept) {
    char *a;
    while (*s) {
        for (a = accept; *a; a++) {
            if (*s == *a)
                return s;
        }
        s++;
    }
    return NULL;
}

char *_strstr(char *haystack, char *needle) {
    char *h, *n;
    while (*haystack) {
        h = haystack;
        n = needle;
        while (*h && *n && (*h == *n)) {
            h++;
            n++;
        }
        if (!*n)
            return haystack;
        haystack++;
    }
    return NULL;
}
