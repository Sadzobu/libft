#include "libft.h"

char	*strncpy(char *dest, const char *src, size_t n)
{
    if (strlen(src) != n)
        memset(dest + size, '\0', n - size);
    return (memcpy(dest, src, size))
}
