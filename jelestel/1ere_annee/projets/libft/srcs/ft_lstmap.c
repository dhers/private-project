/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelestel <jelestel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 14:07:43 by jelestel          #+#    #+#             */
/*   Updated: 2014/11/10 15:30:09 by jelestel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*tmp;
	t_list	*tmp2;

	if (!(tmp = (*f)(lst)))
		return (NULL);
	if (lst->next)
	{
		tmp2 = ft_lstmap((lst->next), (f));
		ft_lstpush(&(tmp2), tmp);
	}
	else
		return (tmp);
	if (!(tmp->next))
	{
		ft_lstdelone(&(tmp), &ft_bzero);
		return (NULL);
	}
	return (tmp);
}
