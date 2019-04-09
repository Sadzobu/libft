#include "libft.h"

void	ft_putendl(char const *s)
{
    char *tmp;

    if (s)
    {
        tmp = (char *)s;
        while (*tmp)
            write(1, tmp++, 1);
        write(1, "\n", 1);
    }
}
