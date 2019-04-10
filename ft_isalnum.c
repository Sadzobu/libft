#include "libft.h"

/*int		ft_isalnum(int c)
{
    return (ft_isalpha(c) || ft_isdigit(c));
    }*/

int		ft_isalnum(int c)
{
	if ((c >= '0' && c <= '9') || (c >= 'A' && c <= 'Z')
			|| (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}
