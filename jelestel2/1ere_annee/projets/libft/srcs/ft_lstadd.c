/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelestel <jelestel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/10 15:31:17 by jelestel          #+#    #+#             */
/*   Updated: 2014/11/10 15:37:41 by jelestel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_lstadd(t_list **lst, t_list *to_add)
{
	t_list	*tmp;

	tmp = *lst;
	if (to_add)
	{
		while (tmp->next)
			tmp = tmp->next;
		tmp->next = to_add;
	}
}
