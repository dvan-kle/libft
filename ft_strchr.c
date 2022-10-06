/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: dvan-kle <dvan-kle@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/03 15:01:56 by dvan-kle      #+#    #+#                 */
/*   Updated: 2022/10/06 13:38:41 by dvan-kle      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strchr(const char *str, int c)
{
	int		i;
	char	*ptr;

	i = 0;
	ptr = (char *)str;
	while (str[i] != '\0')
	{
		if (str[i] == c)
		{
			return (&ptr[i]);
		}
		i++;
	}
	return (0);
}

/*  int main(void)
{q
	char str[] = "abcdefgh";
	char *ptr = &str;

	printf("%s\n", strchr(ptr, 104));
	printf("%s\n", ft_strchr(ptr, 104));
	
}  */