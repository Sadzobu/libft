#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
    unsigned char *tmp;

    tmp = (unsigned char*)s;
    while (n--)
        *tmp++ = c;
    return (s);
}
