/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memset.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: dvan-kle <dvan-kle@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/03 14:29:25 by dvan-kle      #+#    #+#                 */
/*   Updated: 2022/10/05 13:32:30 by dvan-kle      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

void	*ft_memset(void	*b, int c, size_t n)
{
	unsigned long	i;
	unsigned char	*str;

	i = 0;
	str = (unsigned char *) b;
	while (i < n)
	{
		str[i] = c;
		i++;
	}
	return (b);
}

/* int main(void)
{
    char arr[] = "timma ze moer";
    char arr2[] = "timma ze moe2";
    
    printf("%s\n", memset(arr2, '0', 2));
    printf("%s\n", ft_memset(arr, '0', 2));
} */
