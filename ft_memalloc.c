#include "libft.h"

void	*ft_memalloc(size_t size)
{
    void *tmp;

    tmp = malloc(size);
    if (tmp)
    {
        ft_bzero(tmp, size);
        return (tmp);
    }
    return (NULL);
}
