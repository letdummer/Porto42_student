//#include "libft.h"
#include <stdio.h>

void    *ft_memset(void *str, int c, size_t n);

int main()
{       
        char str[50] = "This is a string";

        printf("Before ft_memset: %s\n", str);
        ft_memset(str, '#', 4);
        printf("After ft_memset(): %s\n", str);


    return 0;
}

void    *ft_memset(void *str, int c, size_t n)
{
        size_t     i = 0;
        char    *string;

         string= (char *)str;

        while (i < n)
        {
                string[i] = (char)c;
                i++;
        }
        return (str);
}