#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
    return ((char*)ft_memrchr(s, c, ft_strlen(s) + 1));
}
