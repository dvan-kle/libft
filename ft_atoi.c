/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_atoi.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: dvan-kle <dvan-kle@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/05 13:34:48 by dvan-kle      #+#    #+#                 */
/*   Updated: 2022/10/06 15:14:04 by dvan-kle      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(const char *str)
{
	int	i;
	int	min;
	int	plus;
	int	result;

	i = 0;
	min = 0;
	plus = 0;
	result = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			min++;
		if (str[i] == '+')
			plus++;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - 48);
		i++;
	}
	if ((min + plus) > 1)
		return (0);
	if (min == 1)
		result = -result;
	return (result);
}

/* int main(void)
{
	const char str[999] = "   +1234adac123";

	printf("%i\n", atoi(str));
	printf("%i\n", ft_atoi(str));
}
 */