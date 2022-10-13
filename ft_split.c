/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_split.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: dvan-kle <dvan-kle@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/12 15:00:44 by dvan-kle      #+#    #+#                 */
/*   Updated: 2022/10/13 19:15:41 by dvan-kle      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	**ft_split(char const *str, char c)
{
	char	**ptr;
	int		i;
	int		x;
	int		y;

	ptr = (char **)malloc(ft_strlen(str) * sizeof(char) + 1);
	if (!ptr)
		return (NULL);
	i = 0;
	x = 0;
	y = -1;
	while (str[i])
	{
		while (str[i] != c)
		{
			x = 0;
			y++;
			ptr[y][x] = str[i];
			i++;
			x++;
		}
		ptr[y][x] = '\0';
		i++;
	}
	ptr[y + 1][x] = '\0';
	return (ptr);
}

int	malloc_size(const char *str, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		if (str[i] != c)
			count++;
		i++;
	}
	return (count);
}

/* int main(void)
{
		int i;

		i = 0;
		const char *string = "      split       this for   me  !       ";
        // char **expected = ((char*[6]){"split", "this", "for", "me", "!", ((void *)0)});
		int len = ft_strlen(string);
		printf("%d", len);
		
       char **result = ft_split(string, ' ');
		while(!result[i])
		{
			printf("%s", result[i]);
			i++;
		}
} */