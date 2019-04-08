#include "libft.h"

void	*ft_memrchr(const void *s, int c, size_t n)
{
    while (n--)
    {
        if (*((unsigned char*)s + n) == (unsigned char)c)
            return (void*)((unsigned char*)s + n);
    }
    return (NULL);
}
