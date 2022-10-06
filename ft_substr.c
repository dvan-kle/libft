/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_substr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: dvan-kle <dvan-kle@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/06 15:15:09 by dvan-kle      #+#    #+#                 */
/*   Updated: 2022/10/06 15:31:06 by dvan-kle      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_substr(char const *str, unsigned int start, size_t len)
{
	char	*ret;
	int		i;
	size_t	c;

	ret = (char *)malloc(len * sizeof(char));
	i = 0;
	c = 0;
	while (str[i] != '\0')
	{
		if (str[i] == start)
		{
			while (c < len)
			{
				ret[c] = str[i];
				c++;
				i++;
			}
			return (ret);
		}
		i++;
	}
	return (0);
}
