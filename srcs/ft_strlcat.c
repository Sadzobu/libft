#include "libft.h"

size_t ft_strlcat(char *dest, const char *src, size_t size)
{
    size_t srclen;
    size_t destlen;

    srclen = ft_strlen(src);
    destlen = ft_strnlen(dest, size);
    
    if (destlen == size)
        return (size + srclen);
    if (srclen < size - destlen)
        ft_memcpy(dest + destlen, src, srclen + 1);
    else
    {
        ft_memcpy(dest + destlen, src, size - 1);
        dest[destlen + size - 1] = '\0';
    }
    return (destlen + srclen);
}
