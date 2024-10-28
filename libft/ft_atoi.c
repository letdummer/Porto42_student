/* ************************************************************************** */
/*																			*/
/*														:::	  ::::::::   */
/*   ft_atoi.c										  :+:	  :+:	:+:   */
/*													+:+ +:+		 +:+	 */
/*   By: ldummer- <marvin@42.fr>					+#+  +:+	   +#+		*/
/*												+#+#+#+#+#+   +#+		   */
/*   Created: 2024/10/24 16:10:14 by ldummer-		  #+#	#+#			 */
/*   Updated: 2024/10/24 16:10:16 by ldummer-		 ###   ########.fr	   */
/*																			*/
/* ************************************************************************** */

#include "libft.h"

static const char	*ft_is_space(const char *str);
static const char	*ft_is_signal(const char *str, int *signal);
int					ft_atoi(const char *str);

int	main(void)
{
	char	*string;
	int		result;

	string = "   -123a456";
	result = ft_atoi(string);
	printf("%i\n", result);
	return (0);
}

int	ft_atoi(const char *str)
{
	int	result;
	int	signal;

	result = 0;
	signal = 1;
	if (str == NULL)
		return (0);
	str = ft_is_space(str);
	str = ft_is_signal(str, &signal);
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + (*str - '0');
		str++;
	}
	return (result * signal);
}

static const char	*ft_is_space(const char *str)
{
	while (*str == ' ' || *str == '\n' || *str == '\t'
		||*str == '\f' || *str == '\r' || *str == '\v')
		str++;
	return (str);
}

static const char	*ft_is_signal(const char *str, int *signal)
{
	if (*str == '-')
	{
		*signal = -1;
		str++;
	}
	else if (*str == '+')
	{
		str++;
	}
	return (str);
}
