/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstclear.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: dvan-kle <dvan-kle@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/18 20:07:53 by dvan-kle      #+#    #+#                 */
/*   Updated: 2022/10/18 22:02:31 by dvan-kle      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*list;
	t_list	*list2;

	list = *lst;
	list2 = *lst;
	while (list)
	{
		list2 = list2->next;
		del(list->content);
		free(list);
		list = list2;
	}
	*lst = 0;
}
