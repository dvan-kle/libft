/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_bzero.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: dvan-kle <dvan-kle@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/04 13:00:22 by dvan-kle      #+#    #+#                 */
/*   Updated: 2022/10/06 15:02:01 by dvan-kle      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

void	*ft_bzero(void	*b, size_t n)
{
	size_t			i;
	unsigned char	*str;

	i = 0;
	str = (unsigned char *)b;
	while (i < n)
	{
		str[i] = '\0';
		i++;
	}
	return (b);
}

/* int	main(void)
{
	char	arr[] = "timma ze moer";
	char	arr2[] = "timma ze moe2";

	printf("%s\n", bzero(arr2, 0));
	printf("%s\n", ft_bzero(arr, 0));
}
 */