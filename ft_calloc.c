/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_calloc.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: dvan-kle <dvan-kle@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/06 13:49:37 by dvan-kle      #+#    #+#                 */
/*   Updated: 2022/10/10 18:07:04 by dvan-kle      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*memory;
	size_t	i;

	memory = malloc(count * size);
	if (memory == NULL)
		return (NULL);
	i = 0;
	ft_bzero(memory, size * count);
	return (memory);
}
