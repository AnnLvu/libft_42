/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvutina <alvutina@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 12:31:15 by alvutina          #+#    #+#             */
/*   Updated: 2024/04/23 15:00:01 by alvutina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Counts the number of nodes in a list.*/
#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	size_t	size;
	t_list	*move_list;

	if (lst == 0)
		return (0);
	size = 1;
	move_list = lst;
	while (move_list->next != 0)
	{
		move_list = move_list->next;
		size++;
	}
	return (size);
}
