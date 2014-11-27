/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelestel <jelestel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/17 15:13:55 by jelestel          #+#    #+#             */
/*   Updated: 2014/07/17 16:04:29 by jelestel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>

void		ft_list_sort(t_list **begin_list, int (*cmp)())
{
	t_list	*tmp;
	t_list	*save;

	tmp = (*begin_list);
	while (tmp->next->next)
	{
		if (((*cmp)(tmp->data, tmp->next->data) > 0) && ((*begin_list) == tmp))
		{
			tmp = tmp->next;
			(*begin_list)->next = tmp->next;
			tmp->next = (*begin_list);
			(*begin_list) = tmp;
			tmp = (*begin_list);
		}
		if ((*cmp)(tmp->next->data, tmp->next->next->data) > 0)
		{
			save = tmp->next->next;
			tmp->next->next = save->next;
			save->next = tmp->next;
			tmp->next = save;
			tmp = (*begin_list);
		}
		else
			tmp = tmp->next;
	}
}
