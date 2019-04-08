#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
    unsigned char *tmp;

    tmp = (unsigned char*) dest;
    while (n--)
        *tmp++ = *(unsigned char*)src++;
    return (dest);
}
