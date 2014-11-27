/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorted_list_insert.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelestel <jelestel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/17 17:36:39 by jelestel          #+#    #+#             */
/*   Updated: 2014/07/17 17:55:54 by jelestel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void		ft_sorted_list_insert(t_list **begin_list, void *data, int (*cmp)())
{
	t_list	*tmp;
	t_list	*save;

	tmp = (*begin_list);
	save = (void *)0;
	while ((tmp->next) && ((*cmp)(tmp->next->data, data) < 0))
		tmp = tmp->next;
	if ((tmp->next) && (tmp == (*begin_list)))
	{
		tmp = ft_create_elem(data);
		tmp->next = (*begin_list);
		(*begin_list) = tmp;
	}
	else if ((tmp->next) && (tmp != (*begin_list)))
	{
		save = tmp->next;
		tmp->next = ft_create_elem(data);
		tmp = tmp->next;
		tmp->next = save;
	}
	else
		tmp->next = ft_create_elem(data);
}
