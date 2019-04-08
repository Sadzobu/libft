#include "libft.h"

char	*strdup(const char *s)
{
    char *dest;

    *dest = (char *)malloc(sizeof(char) * (strlen(s) + 1));
    if (dest)
    {
        while (*s)
            *dest++ = *s++;
        *dest = '\0';
        return (dest - strlen(s) - 1);
    }
    return (NULL);
        
}
