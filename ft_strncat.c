#include "libft.h"

char	*ft_strncat(char *dest, const char *src, size_t n)
{
    if (ft_strlen(src) < n)
        ft_strcpy(dest + ft_strlen(dest), src);
    else
    {
        dest[ft_strlen(dest) + n] = '\0';
        ft_strncpy(dest + ft_strlen(dest), src, n);
    }
    return (dest);
}
