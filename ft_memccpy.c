#include <string.h>

void    *ft_memccpy(void *restrict dest, const void *restrict src, int c, size_t n)
{
    const char *s = src;
    char *d = dest;
    int i;

    i = 0;
    while (n > i)
    {
        if (s[i] != c)
            ((char*) d)[i] = ((const char*) s)[i];
        if (s[i] == c)
        {
            ((char*) d)[i] = ((const char*) s)[i];
            return (d[i + 1]);
        }
        i++;
    }
    return (0);
}