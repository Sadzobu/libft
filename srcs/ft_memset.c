#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
    while (n--)
        *(unsigned char*)s++ = c;
    return (s - n);
}
