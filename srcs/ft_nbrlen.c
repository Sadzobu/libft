#include "libft.h"

int		ft_nbrlen(int n)
{
    int res;

    res = 0;
    if (n <= 0)
        res++;
    while (n)
    {
        n /= 10;
        res++;
    }
    return (res);
}
