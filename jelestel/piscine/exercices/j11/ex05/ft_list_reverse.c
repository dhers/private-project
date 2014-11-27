/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelestel <jelestel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/16 17:19:59 by jelestel          #+#    #+#             */
/*   Updated: 2014/07/16 18:30:56 by jelestel         ###   ########.fr       */
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

void		ft_list_reverse(t_list **begin_list)
{
	t_list	*tmp;
	int		i;
	int		k;

	tmp = (*begin_list);
	i = ft_list_size(*begin_list);
	(*begin_list) = ft_list_at(*begin_list, i - 1);
	k = 1;
	while (k < i)
	{
		ft_list_at(tmp, i - k)->next = ft_list_at(tmp, i - k - 1);
		k++;
	}
	ft_list_at(tmp, i - k)->next = (void *)0;
}
