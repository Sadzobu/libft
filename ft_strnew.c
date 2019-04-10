#include "libft.h"

char	*ft_strnew(size_t size)
{
    char *tmp;

    tmp = (char*)malloc(sizeof(*tmp) * (size + 1));
    if (tmp)
    {
        ft_bzero(tmp, size + 1);
        return (tmp);
    }
    return (NULL);
}
