/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse_fun.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelestel <jelestel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/17 16:19:49 by jelestel          #+#    #+#             */
/*   Updated: 2014/07/17 17:30:37 by jelestel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list		*ft_list_at(t_list *begin_list, int nbr)
{
	int		i;
	t_list	*tmp;

	i = 0;
	tmp = begin_list;
	while (i < (int)nbr)
	{
		if ((!tmp->next) && (i < nbr - 1))
			return ((void *)0);
		tmp = tmp->next;
		i++;
	}
	return (tmp);
}

int			ft_list_size(t_list *begin_list)
{
	int		i;

	i = 0;
	while (begin_list)
	{
		i++;
		begin_list = begin_list->next;
	}
	return (i);
}

void		ft_list_reverse_fun(t_list *begin_list)
{
	void	*tmp;
	int		i;
	int		k;

	i = ft_list_size(begin_list);
	k = 0;
	tmp = (void*)0;
	while (k < i / 2)
	{
		tmp = PLACE;
		PLACE = PLACE2;
		PLACE2 = tmp;
		k++;
	}
}
