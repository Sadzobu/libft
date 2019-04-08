#include "libft.h"

void *ft_memrchr(const void *s, int c, size_t n)
{
    const unsigned char *p;

    p = s;
    while (n)
        if (*p + n-- == (unsigned char)c)
            return ((void*)(p + n++));
    return (NULL);
}
