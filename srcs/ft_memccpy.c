#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
    while ((*(unsigned char*)src != c) && n)
    {
        *(unsigned char*)dest++ = *(unsigned char*)src++;
        n--;
    }
    if (!n)
        return (NULL);
    else
        return (dest);
}
