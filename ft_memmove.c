/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memmove.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: dvan-kle <dvan-kle@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/05 17:36:41 by dvan-kle      #+#    #+#                 */
/*   Updated: 2022/10/06 14:34:00 by dvan-kle      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void	*ft_memmove(void *dst, const void *sc, size_t len)
{
	size_t			i;
	unsigned char	*dest;
	unsigned char	*src;

	i = 0;
	dest = (unsigned char *) dst;
	src = (unsigned char *) sc;
	while (i < len)
	{
		dest[i] = src[i];
		i++;
	}
	return (dst);
}
