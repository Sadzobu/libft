#include "libft.h"

void	*memccpy(void *dest, const void *src, int c, size_t n)
{
    while ((*src != c) && n)
    {
        *(unsigned char*)dest++ = *(unsigned char*)src++;
        n--;
    }
    if (!n)
        return (NULL);
    else
        return (dest);
}
