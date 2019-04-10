#include "libft.h"

char	*ft_strncpy(char *dest, const char *src, size_t n)
{
    size_t size;

    size = ft_strlen(src);
    if (size > n)
        size = n;
    if (size != n)
        ft_memset(dest + size, '\0', n - size);
    return ((char*)ft_memcpy(dest, src, size));
}
