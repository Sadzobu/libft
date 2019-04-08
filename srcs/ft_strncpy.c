#include "libft.h"

char	*ft_strncpy(char *dest, const char *src, size_t n)
{
    size_t size;

    size = ft_strnlen(src, n);
    if (size != n)
        ft_memset(dest + size, '\0', n - size);
    return ((char*)ft_memcpy(dest, src, size));
}
