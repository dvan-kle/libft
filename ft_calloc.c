/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_calloc.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: dvan-kle <dvan-kle@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/06 13:49:37 by dvan-kle      #+#    #+#                 */
/*   Updated: 2022/10/06 15:55:08 by dvan-kle      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_calloc(size_t count, size_t size)
{
	size_t	*memory;
	size_t	i;

	memory = malloc(count * sizeof(size));
	if (memory == NULL)
		return (NULL);
	i = 0;
	while (memory[i])
	{
		memory[i] = 0;
		i++;
	}
	return (memory);
}
