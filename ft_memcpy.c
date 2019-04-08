#include "libft.h"

void	*memcpy(void *dest, const void *src, size_t n)
{
    while (n--)
        *(unsigned char*)dest = *(unsigned char*)src;
    return (dest - n);
}
