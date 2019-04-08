#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
    size_t lenh;
    size_t lenn;
    size_t i;

    lenh = ft_strlen(haystack);
    lenn = ft_strlen(needle);
    i = -1;
    while (++i < lenh - lenn)
        if (!ft_strncmp(haystack + i, needle, lenn))
            return ((char*)haystack + i);
    return (NULL);
}

