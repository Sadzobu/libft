#include "libft.h"

void	ft_putstr(char const *s)
{
    char *tmp;

    if (s)
    {
        tmp = (char*)s;
        while (*tmp)
            write(1, tmp++, 1);
    }
}
