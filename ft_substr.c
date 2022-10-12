/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_substr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: dvan-kle <dvan-kle@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/06 15:15:09 by dvan-kle      #+#    #+#                 */
/*   Updated: 2022/10/11 21:08:20 by dvan-kle      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_substr(char const *str, unsigned int start, size_t len)
{
	char			*ret;
	unsigned int	i;
	size_t			c;

	ret = (char *)malloc((len + 1) * sizeof(char));
	if (ret == NULL)
		return (NULL);
	i = 0;
	c = 0;
	while (str[i] != '\0')
	{
		if (i >= start && c < len)
		{
			ret[c] = str[i];
			c++;
		}
		i++;
	}
	ret[c] = '\0';
	return (ret);
}
