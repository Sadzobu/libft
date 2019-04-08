#include "libft.h"

char	*strnstr(const char haystack, const char needle, size_t len)
{
    int lenn;
    int lenh;
    int i;

    lenh = strlen(haystack); 
    lenn = strlen(needle);
    i = 1;

    if (len <= lenn)
        while (++i <= lenh - lenn && len--)
            if (ft_strncmp(haystack + i, needle, lenn))
                return (haystack + i);
    return (NULL);
                
}
