/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelestel <jelestel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/16 17:11:26 by jelestel          #+#    #+#             */
/*   Updated: 2014/07/16 17:16:10 by jelestel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list		*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	int		i;
	t_list	*tmp;

	i = 0;
	tmp = begin_list;
	while ((tmp->next) && (i < (int)nbr))
	{
		tmp = tmp->next;
		i++;
	}
	return (tmp);
}
