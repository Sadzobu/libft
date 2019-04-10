#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    char			*res;
    unsigned int	i;

    if (s && f)
    {
        res = (char *)malloc(sizeof(*res) * (ft_strlen(s) + 1));
        if (res)
        {
            i = 0;
            while (s[i])
            {
                res[i] = f(i, s[i]);
                i++;
            }
            res[i] = '\0';
            return (res);
        }
    }
    return (NULL);
}
