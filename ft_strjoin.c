#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
    char *res;
    if (s1 && s2)
    {
        res = (char *)malloc(sizeof(*res) * (ft_strlen(s1) + ft_strlen(s2) + 1));
        if (res)
        {
            res = ft_strcpy(res, s1);
            return(ft_strcat(res, s2));
        }
    }
    return (NULL);
}
