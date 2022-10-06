/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcat.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: dvan-kle <dvan-kle@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/05 15:47:26 by dvan-kle      #+#    #+#                 */
/*   Updated: 2022/10/06 12:06:15 by dvan-kle      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	result;

	i = ft_strlen((const char *)dest);
	j = 0;
	while (i < size)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	result = ft_strlen((const char *) dest) + ft_strlen(src);
	if (result > size)
	{
		return (ft_strlen(src) + size);
	}
	return (result);
}

/* int main(void)
{
	char str1[] = "hello";
	char str2[] = "hello";
	char str3[] = "wor";

	
	printf("%lu\n", ft_strlcat(str1, str3, 1));
	printf("%lu\n", strlcat(str2, str3, 1));
} */