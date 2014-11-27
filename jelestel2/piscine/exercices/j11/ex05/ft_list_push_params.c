/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelestel <jelestel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/16 15:00:55 by jelestel          #+#    #+#             */
/*   Updated: 2014/07/16 15:56:22 by jelestel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list		*ft_list_push_params(int ac, char **av)
{
	t_list	*begin;
	t_list	*tmp;
	int		i;

	i = 0;
	while (++i < ac)
	{
		tmp = ft_create_elem(av[i]);
		tmp->next = begin;
		begin = tmp;
	}
	return (begin);
}
