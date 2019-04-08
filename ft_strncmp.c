#include "libft.h"

int		strncmp(const char *s1, const char *s2, size_t n)
{
    unsigned char s3;
    unsigned char s4;

    s3 = (const unsigned char*)s1;
    s4 = (const unsigned char*)s4;

    while (*s3++ == *s4++ && n--)
        if (!s3)
            return (s3 - s4);
    return (s3 - s4);
}
