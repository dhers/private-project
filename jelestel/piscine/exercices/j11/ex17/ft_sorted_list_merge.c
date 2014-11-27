/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorted_list_merge.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelestel <jelestel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/17 18:29:49 by jelestel          #+#    #+#             */
/*   Updated: 2014/07/17 19:40:46 by jelestel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>

void		ft_place(t_list *place, t_list *to_place)
{
	t_list	*tmp;

	printf("test place\n");
	tmp = place->next;
	place->next = to_place;
	to_place->next = tmp;
}

void		ft_place_first(t_list **begin, t_list **place,  t_list **to_place)
{
	t_list	*tmp;
	printf("test place first\n");
	tmp = (*to_place)->next;
	(*begin) = (*to_place);
	(*to_place)->next = (*place);
	place = begin;
	(*to_place) = tmp;
}

void		ft_sorted_list_merge(t_list **begin_list1, t_list *begin_list2,
				int(*cmp)())
{
	t_list	*tmp;
	t_list	*tmp2;

	tmp = *begin_list1;
	tmp2 = begin_list2;
	if (!tmp)
	{
		*begin_list1 = begin_list2;
		return ;
	}
	while (tmp2->next)
	{
		printf("%s, %s\n", tmp->data, tmp2->data);
		while ((tmp->next) && ((*cmp)(tmp->next->data, tmp2->data) < 0))
			tmp = tmp->next;
		printf("%s, %s\n", tmp->data, tmp2->data);
		if (((*cmp)(tmp->data, tmp2->data) > 0))
			ft_place_first(begin_list1, &tmp, &tmp2);
		else
			ft_place(tmp, tmp2);
	}
}
