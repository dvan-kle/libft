/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strrchr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: dvan-kle <dvan-kle@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/03 15:01:56 by dvan-kle      #+#    #+#                 */
/*   Updated: 2022/10/11 19:09:05 by dvan-kle      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strrchr(const char *str, int c)
{
	int		i;
	char	*ptr;

	i = 0;
	ptr = (char *)str;
	while (str[i] != '\0')
	{
		i++;
	}
	while (i >= 0)
	{
		if (str[i] == (char)c)
		{
			return (&ptr[i]);
		}
		i--;
	}
	return (0);
}

/* int main(void)
{
	char str[] = "adbcdefgddhjkl";
	char *ptr = &str;

	printf("%s\n", strrchr(ptr, 100));
	printf("%s\n", ft_strrchr(ptr, 100));
	
} */