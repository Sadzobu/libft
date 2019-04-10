#include "libft.h"

void	ft_putendl_fd(char const *s, int fd)
{
    char *tmp;

    if (s)
    {
        tmp = (char *)s;
        while (*tmp)
            write (fd, tmp++, 1);
        write (fd, "\n", 1);
    }
}
