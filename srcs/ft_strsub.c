#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
    char			*res;
    unsigned int	i;
    
    res = (char *)malloc(sizeof(*res) * (len + 1));
    if (s && res)
    {
        i = 0;
        while (len--)
        {
            res[i] = s[start + i];
            i++;
        }
        res[i] = '\0';
        return (res);
    }
    return (NULL);        
}
