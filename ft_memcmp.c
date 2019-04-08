#include "libft.h"

int		(const void *s1, const void *s2, size_t n)
{
    int res;

    res = 0;
    if (!n)
        return (res);
    while (*s1 && *s2 && n--)
        if (*(unsigned char*)s1++ != (*(unsigned char*)s2++))
            return (*(unsigned char*)s1-- - (*(unsigned char*)s2--));
    return (*(unsigned char*)s1 - (*(unsigned char*)s2));
}
