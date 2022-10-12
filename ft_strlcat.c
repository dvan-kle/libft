/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcat.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: dvan-kle <dvan-kle@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/05 15:47:26 by dvan-kle      #+#    #+#                 */
/*   Updated: 2022/10/11 20:23:51 by dvan-kle      ########   odam.nl         */
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
	j = ft_strlen(src);
	result = i + j;
	if (i > size)
		return (j + size);
	j = 0;
	while (i < (size - 1))
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	if (i < size)
		dest[i] = '\0';
	return (result);
}

/* int main(void)
{
	char dest[14] = "a";
	char dest2[14] = "a";
	char str1[] = "lorem ipsum dolor sit amet";
	char str2[] = "lorem ipsum dolor sit amet";

	
	printf("%lu\n", ft_strlcat(dest, "lorem ipsum dolor sit amet", 15));
	write(1, dest, 15);
	write(1, "\n", 1);
	printf("%lu\n", strlcat(dest2, "lorem ipsum dolor sit amet", 15));
	write(1, dest, 15);
	write(1, "\n", 1); 
} */