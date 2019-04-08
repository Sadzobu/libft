#include "libft.h"

size_t ft_strlen(const char *s)
{
    size_t res;

    while (*s++)
        res++;
    return (res);
}
