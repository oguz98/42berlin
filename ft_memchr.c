#include <string.h>

void *ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*src = s;
	unsigned char	cc = c;
	while (n--)
	{
		if (*src == cc)
			return (src);
		src++;	
	}
	return (0);
}
