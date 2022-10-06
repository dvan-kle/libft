/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strncmp.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: dvan-kle <dvan-kle@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/04 12:48:04 by dvan-kle      #+#    #+#                 */
/*   Updated: 2022/10/05 13:32:42 by dvan-kle      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	int		diff;

	i = 0;
	while (i < n)
	{
		if (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
		{
			i++;
		}
		else
		{
			diff = s1[i] - s2[i];
			if (diff > 0)
				return (1);
			if (diff < 0)
				return (-1);
		}
	}
	return (0);
}

/* int main(void)
{
	const char	str1[] = "tESTTAb";
	const char	str2[] = "tESfTAb";
	printf("%d\n", strncmp(str1, str2, 10));
	printf("%d\n", ft_strncmp(str1, str2, 10));
} */