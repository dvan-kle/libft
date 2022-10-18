/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstmap.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: dvan-kle <dvan-kle@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/18 21:05:02 by dvan-kle      #+#    #+#                 */
/*   Updated: 2022/10/18 23:06:44 by dvan-kle      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newblock;
	t_list	*newlist;

	newlist = 0;
	while (lst)
	{
		newblock = ft_lstnew(f(lst->content));
		if (!newblock)
		{
			ft_lstclear(&newlist, del);
			return (NULL);
		}
		ft_lstadd_back(&newlist, newblock);
		lst = lst->next;
	}
	return (newlist);
}
