#include "../include/libft.h"
#include <stdio.h>


void	ft_putchar_fd_test()
{
	char	chars[] = {'a', 'A', 'z', 'Z', '0', '?', '*', '#'};
	int		i;
	int		nb_tests;
	char	ch;
	char	*result;

	
	printf("\n/===================================\\");
	printf("\n|        Running ft_isalpha()       |");
	printf("\n|             Tests                 |");
	printf("\n\\===================================/\n");
	nb_tests = sizeof(chars) / sizeof(chars[0]);

	i = 0;
	while (i < nb_tests)
	{
		ch = chars[i];
		result = ft_putchar_fd(ch, 1);

		if (result == ch)
			printf("[🟢] Success: Input %c validated.\n", ch);
		else
			{
				printf("[🔴] Failure: Input %c did not pass.\n", ch);
				printf("Expected: %d\tResult: %d\n", chars[i], ft_putchar_fd(ch, 1));
			}

		i++;
	}	
		
	printf("\n");
	return (0);
}
