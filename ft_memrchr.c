#include "libft.h"

void *memrchr(const void *s, int c, size_t n)
{
    
    while (n)
        if (*(unsigned char*)(s + n--) == (unsigned char)c)
            return (s + n++);
    return (NULL);
}
