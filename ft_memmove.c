#include "libft.h"

void	*memmove(void *dest, const void *src, size_t n)
{
    unsigned char	*tmp;
    size_t			cnt;

    tmp = (unsigned char*)malloc(sizeof(unsigned char) * n);
    cnt = n;
    while (cnt--)
        *tmp++ = *(unsigned char*)src++;
    tmp = tmp - n;
    while (n--)
        *dest++ = *(unsigned char*)tmp++;
    free(tmp);
}
