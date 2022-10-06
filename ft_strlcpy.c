/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcpy.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: dvan-kle <dvan-kle@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/05 14:45:05 by dvan-kle      #+#    #+#                 */
/*   Updated: 2022/10/06 16:28:31 by dvan-kle      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;

	if (size == 0)
		return (ft_strlen(src));
	if (0 == ft_strlen(src) || (size < ft_strlen(src)))
		return (0);
	i = 0;
	while (i < size)
	{
		dest[i] = src[i];
		i++;
	}
	return (ft_strlen(src));
}

/* int main(void)
{
	char dest[] = "";
	char dest1[] = "";
	char src[] = "deze kopie";

	printf("%lu\n", strlcpy(dest, src, 1));
	printf("%lu\n", ft_strlcpy(dest1, src, 1));
} */