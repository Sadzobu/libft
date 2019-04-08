#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
    unsigned char *tmp;

    tmp = (unsigned char*)dest;
    while (*(unsigned char*)src && (*(unsigned char*)src != (unsigned char)c) && n--)
        *tmp++ = *(unsigned char*)src++;
    if (*(unsigned char*)src == (unsigned char)c)
    {
        *tmp++ = *(unsigned char*)src++;
        return (tmp);
    }
    else
        return (NULL);
}
