/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach_if.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelestel <jelestel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/16 19:11:19 by jelestel          #+#    #+#             */
/*   Updated: 2014/07/16 19:19:19 by jelestel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void		ft_list_foreach_if(t_list *begin_list, void(*f)(void *),
				void *data_ref, int(*cmp)())
{
	t_list	*tmp;

	tmp = begin_list;
	while (tmp->next)
	{
		if ((*cmp)(tmp->data, data_ref) == 0)
			(*f)(tmp->data);
		tmp = tmp->next;
	}
}
