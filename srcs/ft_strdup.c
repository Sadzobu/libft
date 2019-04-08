#include "libft.h"

char	*ft_strdup(const char *s)
{
    char *dest;
    char *tmp;
    
    dest = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
    tmp = dest;
    if (tmp)
    {
        while (*s)
            *tmp++ = *s++;
        *tmp = '\0';
        return (dest);
    }
    return (NULL);
        
}
