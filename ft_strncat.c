#include <stdio.h>

char *strncat(char *dest, const char *src, size_t n)
{
    char *s1;

    s1 = dest + strlen(dest) + strnlen(src, n);
    *s1 = '\0';
    return (strcpy(dest + strlen(dest), src));
}
