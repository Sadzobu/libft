#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
    int lenh;
    int lenn;
    int i;

    lenh = strlen(haystack);
    lenn = strlen(needle);
    i = -1;
    while (++i <= lenh - lenn)
        if (!ft_strncmp(haystack + i, needle, lenn))
            return (haystack + i);
    return (NULL);
}

