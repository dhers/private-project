/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelestel <jelestel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/16 19:01:56 by jelestel          #+#    #+#             */
/*   Updated: 2014/07/16 19:04:09 by jelestel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void		ft_list_foreach(t_list *begin_list, void(*f)(void *))
{
	t_list	*tmp;

	tmp = begin_list;
	while (tmp->next)
	{
		(*f)(tmp->data);
		tmp = tmp->next;
	}
}
