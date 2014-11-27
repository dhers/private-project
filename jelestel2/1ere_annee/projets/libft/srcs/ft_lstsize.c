/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelestel <jelestel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/10 15:38:52 by jelestel          #+#    #+#             */
/*   Updated: 2014/11/10 15:41:48 by jelestel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_lstsize(t_list **lst)
{
	t_list	*tmp;
	size_t	i;

	i = 0;
	tmp = *lst;
	if (tmp)
	{
		while (tmp->next)
		{
			tmp = tmp->next;
			i++;
		}
	}
	return (i);
}
