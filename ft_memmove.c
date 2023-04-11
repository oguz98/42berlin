#include <string.h>

void *ft_memmove(void *dest, const void *src, size_t n)
{    
    unsigned char d* = dest;
    const unsigned char *s = src;
    if (s < d)
    {
        while (n--)
            d[n] = s[n];
    }
    else
    {
        while (n--)
            d++ = s++;
    }
    return (dest);
}

int main()
{
    
}