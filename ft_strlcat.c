#include "libft.h"

size_t strlcat(char *dest, const char *src, size_t size)
{
    return(memcpy(dest + strlen(dest), src, len(src) + 1));
}
