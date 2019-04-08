#include "libft.h"

char *ft_strncat(char *dest, const char *src, size_t n)
{
    char *s1;

    s1 = dest + ft_strlen(dest) + ft_strnlen(src, n);
    *s1 = '\0';
    return (ft_strcpy(dest + ft_strlen(dest), src));
}
