/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvutina <alvutina@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 14:25:31 by alvutina          #+#    #+#             */
/*   Updated: 2024/04/23 14:54:35 by alvutina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Iterates the list ’lst’ and applies the function
’f’ on the content of each node. Creates a new
list resulting of the successive applications of
the function ’f’. The ’del’ function is used to
delete the content of a node if needed.*/
#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*list;
	t_list	*copy_list;
	t_list	*new_node;
	t_list	*first_node;

	list = lst;
	first_node = 0;
	copy_list = 0;
	while (list && f)
	{
		new_node = ft_lstnew(f(list->content));
		if (!new_node)
		{
			ft_lstclear(&copy_list, del);
			return (0);
		}
		if (first_node)
			first_node->next = new_node;
		first_node = new_node;
		if (!copy_list)
			copy_list = first_node;
		list = list->next;
	}
	return (copy_list);
}
