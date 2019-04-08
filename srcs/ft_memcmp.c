#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
    int res;

    res = 0;
    if (!n)
        return (res);
    while (*(unsigned char*)s1 && *(unsigned char*)s2 && n--)
        if (*(unsigned char*)s1++ != (*(unsigned char*)s2++))
            return (*(unsigned char*)s1-- - (*(unsigned char*)s2--));
    return (*(unsigned char*)s1 - (*(unsigned char*)s2));
}
