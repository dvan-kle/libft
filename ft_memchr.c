/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: dvan-kle <dvan-kle@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/05 17:19:06 by dvan-kle      #+#    #+#                 */
/*   Updated: 2022/10/06 13:36:50 by dvan-kle      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	char			*str;
	void			*ptr;

	i = 0;
	str = (char *) s;
	while (i < n)
	{
		if (str[i] == c)
		{
			ptr = (void *) &str[i];
			return (ptr);
		}
		i++;
	}
	return (0);
}
