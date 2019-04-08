#include "libft.h"

char	*ft_strncpy(char *dest, const char *src, size_t n)
{
    if (ft_strlen(src) != n)
        ft_memset(dest + ft_strlen(src), '\0', n - ft_strlen(src));
    return (ft_memcpy(dest, src, ft_strlen(src)));
}
