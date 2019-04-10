#include "libft.h"

char*	ft_strtrim(char const *s)
{
    int		strt;
    int		end;
    int		len;

    if (s)
    {
        strt = 0;
        end = 0;
        len = ft_strlen(s);
        while (s[strt] == '\t' || s[strt] == '\n' || s[strt] == ' ')
            strt++;
        if (strt == len)
            return (ft_strnew(0));
        while ((s[len - end - 1] == '\t' || s[len - end - 1] == '\n' || s[len - end - 1] == ' '))
            end++;
        return (ft_strsub(s, strt, len - strt - end));
    }
    return (NULL);
}
