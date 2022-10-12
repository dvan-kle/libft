/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_itoa.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: dvan-kle <dvan-kle@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/11 19:44:14 by dvan-kle      #+#    #+#                 */
/*   Updated: 2022/10/12 16:01:34 by dvan-kle      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_len(int n);

char	*ft_itoa(int n)
{
	char	*ptr;
	int		len;

	if (n == -2147483648)
	{
		ptr = (char *)malloc(12);
		ptr = "-2147483648";
		return (ptr);
	}
	len = ft_len(n);
	ptr = (char *)malloc((len + 1) * sizeof(char));
	if (!ptr)
		return (NULL);
	
	ptr[len--] = '\0';
	if (n == 0)
		ptr[0] = '0';
	else if (n > 0 && n < 10)
		ptr[0] = n + 48;
	else
	{
		if (n < 0)
		{
			ptr[0] = '-';
			n = -n;
		}
		while (n != 0)
		{
			ptr[len--] = (n % 10) + 48;
			n = n / 10;
		}
	}
	return (ptr);
}

int	ft_len(int n)
{
	int	len;

	len = 0;
	if (n <= 0)
	{
		len++;
	}
	while (n != 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}
