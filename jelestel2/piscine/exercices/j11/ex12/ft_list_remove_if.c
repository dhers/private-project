/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelestel <jelestel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/16 19:56:04 by jelestel          #+#    #+#             */
/*   Updated: 2014/07/17 13:35:06 by jelestel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>
#include <stdio.h>

void		ft_first(t_list **begin_list, t_list **tmp)
{
	(*tmp) = (*tmp)->next;
	free(*begin_list);
	(*begin_list) = (*tmp);
}

void		ft_second(t_list *tmp, t_list *save)
{
	save = tmp->next->next;
	free(tmp->next);
	tmp->next = save;
}

void		ft_last(t_list *tmp)
{
	free(tmp->next);
	tmp->next = NULL;
}

void		ft_list_remove_if(t_list **begin_list, void *data_ref, int(*cmp)())
{
	t_list	*tmp;
	t_list	*save;

	tmp = (*begin_list);
	while (tmp->next)
	{
		save = NULL;
		if ((*cmp)(tmp->data, data_ref) == 0)
			ft_first(begin_list, &tmp);
		else if (((*cmp)(tmp->next->data, data_ref) == 0) && (tmp->next->next))
			ft_second(tmp, save);
		else if ((*cmp)(tmp->next->data, data_ref) == 0)
			ft_last(tmp);
		else
			tmp = tmp->next;
	}
}
