#include <stdio.h>
#include <string.h>

void *ft_bzero(void *s, size_t n)
{
    int i;
    
    i = 0;
    while (n > i)
    {
        ((unsigned char*) s)[i] = 0;
        i++;
    }
    return (s);
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
  char str[] = "blabla";
  char c[] = "blabla";
  printf("str before ft_bzero: %s\n", str);
  ft_bzero(str, 3);
  printf("str after ft_bzero: %s\n", str);
  printf("c before bzero: %s\n", c);
  bzero(c, 3);
  printf("c after bzero: %s\n", c);
  return (0);
}