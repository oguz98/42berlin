#include <stdio.h>
#include <string.h>

void    *memcpy(void *restrict dest, const void *restrict src, size_t n)
{
    const char *s = src;
    char *d = dest;
    int i;

    i = 0;
    while (n > i)
    {
        ((char*) d)[i] = ((const char*) s)[i];
        i++;
    }
    return (d);
}    
/*
int main ()
{
    char    str[] = "aloaloalo";
    int c = 5;
    printf (ft_memset(str, c, sizeof(str));
}
*/
int  main(void)
{
  char str[] = "";
  char c[] = "blabla";
  char str1[] = "";
  char c1[] = "blabla";
  printf("str before ft_memcpy: %s\n", str);
  ft_memcpy(str, c, 6);
  printf("str after ft_memcpy: %s\n", str);
  printf("c before memcpy: %s\n", c);
  memcpy(str1, c1, 6);
  printf("c after memcpy: %s\n", c);
  return (0);
}