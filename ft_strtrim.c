/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strtrim.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: dvan-kle <dvan-kle@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/12 12:03:46 by dvan-kle      #+#    #+#                 */
/*   Updated: 2022/10/13 18:11:10 by dvan-kle      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>

/* static int	ft_start(char const *str, char const *set);
static int	ft_end(char const *str, char const *set); */

char	*ft_strtrim(char const *str, char const *set)
{
	size_t		start;
	size_t		end;

	start = 0;
	end = ft_strlen(str);
	while (ft_strchr(set, str[start]) != 0 && start < ft_strlen(str))
		start++;
	while (ft_strchr(set, str[end]) != 0 && start < end)
		end--;
	return (ft_substr(str, start, (end - start + 1)));
}

/* static int	ft_start(char const *str, char const *set)
{
	int	i;

	i = 0;
	while (ft_strchr(set, str[i]) != 0 && )
		i++;
	return (i);
}

static int	ft_end(char const *str, char const *set)
{
	int	i;

	i = ft_strlen(str) - 1;
	while (ft_strchr(set, str[i]) != 0)
		i--;
	return (i);
} */

/* int main(void)
{
	char *s1 = "";
	char *s2 = "";
	char *ret = ft_strtrim(s1, s2);

	if (!strcmp(ret, s1))
	{
		printf("%s", "succes");
		return (0);
	}
	printf("%s", "fail");
}  */

/* char	*ft_strtrim(char const *str, char const *set)
{
	char	*ptr;
	int		start;
	int		end;
	int		i;

	if (!str)
		return (NULL);
	if (!set)
		return (ft_strdup(str));
	start = ft_start(str, set);
	end = ft_end(str, set) + 1;
	ptr = (char *)malloc(end - start + 1);
	if (!ptr)
		return (NULL);
	i = 0;
	while (start < end)
	{
		ptr[i] = str[start];
		i++;
		start++;
	}
	ptr[i] = '\0';
	return (ptr);
} */