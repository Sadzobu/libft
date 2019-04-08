#include "libft.h"

int		strcmp(const char *s1, const char *s2)
{
    unsigned char *s3;
    unsigned char *s4;

    s3 = (const unsigned char *)s1;
    s4 = (const unsigned char *)s2;
    while (*s3++ == *s4++)
        if (!s3)
            return (s3 - s4);
    return (s3  - s4);
}
