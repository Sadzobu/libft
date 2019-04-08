#include "libft.h"

char	*ft_strdup(const char *s)
{
    char *dest;

    dest = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
    if (dest)
    {
        while (*s)
            *dest++ = *s++;
        *dest = '\0';
        return (dest - ft_strlen(s) - 1);
    }
    return (NULL);
        
}
