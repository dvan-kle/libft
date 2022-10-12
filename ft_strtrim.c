/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strtrim.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: dvan-kle <dvan-kle@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/12 12:03:46 by dvan-kle      #+#    #+#                 */
/*   Updated: 2022/10/12 13:59:10 by dvan-kle      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_start(char const *str, char const *set);
static int	ft_end(char const *str, char const *set);

char	*ft_strtrim(char const *str, char const *set)
{
	char	*ptr;
	int		start;
	int		end;
	int		i;

	start = ft_start(str, set);
	end = ft_end(str, set);
	ptr = (char *)malloc(end - start + 1);
	if (!ptr)
		return (NULL);
	i = 0;
	while (start <= end)
	{
		ptr[i] = str[start];
		i++;
		start++;
	}
	return (ptr);
}

static int	ft_start(char const *str, char const *set)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i])
	{
		if (str[i] != set[j])
			break;
		i++;
		j++;
	}
	return (i);
}

static int	ft_end(char const *str, char const *set)
{
	int	i;
	int	j;

	i = ft_strlen(str);
	j = ft_strlen(set);
	while (str[i] == set[j])
	{
		i--;
		j--;
	}
	return (i);
}
