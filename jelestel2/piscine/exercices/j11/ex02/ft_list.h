/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelestel <jelestel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/16 10:20:10 by jelestel          #+#    #+#             */
/*   Updated: 2014/07/16 14:09:10 by jelestel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef 	FT_LIST_H
# define	FT_LIST_H

typedef struct s_list	t_list;

struct		s_list
{
	t_list	*next;
	void	*data;
};

void		ft_list_push_front(t_list **begin_list, void *data);
t_list		*ft_create_elem(void *data);

#endif
