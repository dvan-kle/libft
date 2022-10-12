/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: dvan-kle <dvan-kle@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/03 15:01:56 by dvan-kle      #+#    #+#                 */
/*   Updated: 2022/10/11 19:05:45 by dvan-kle      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int		i;
	char	*ptr;

	i = 0;
	ptr = (char *)str;
	while (ptr[i] != (char)c)
	{
		if (ptr[i] == 0)
			return (NULL);
		i++;
	}
	return (&ptr[i]);
}

/* char	*ft_strchr(const char *str, int c)
{
	int		i;
	char	*ptr;
	int		len;

	i = 0;
	ptr = (char *)str;
	len = ft_strlen(str);
	while (i < len)
	{
		if (str[i] == c)
		{
			return (&ptr[i]);
		}
		i++;
	}
	return (NULL);
}

int main(void)
{q
	char str[] = "abcdefgh";
	char *ptr = &str;

	printf("%s\n", strchr(ptr, 104));
	printf("%s\n", ft_strchr(ptr, 104));
	
}  */