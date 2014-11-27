/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_merge.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelestel <jelestel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/17 14:47:27 by jelestel          #+#    #+#             */
/*   Updated: 2014/07/17 14:54:46 by jelestel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void		ft_list_merge(t_list **begin_list, t_list *begin_list2)
{
	t_list	*tmp;

	tmp = (*begin_list);
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = begin_list2;
}
