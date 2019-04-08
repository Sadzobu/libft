#include "libft.h"

int		strnlen(const char *src, size_t n)
{
    int		cnt_n;
    int		cnt_s;

    cnt_n = n;
    cnt_s = 0;
    while (*src++ && n--)
    {
        if (!n)
            return (cnt_n);
        cnt_s++;
    }
    return (cnt_s)
}
