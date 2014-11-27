/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelestel <jelestel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/16 10:20:10 by jelestel          #+#    #+#             */
/*   Updated: 2014/07/16 17:14:26 by jelestel         ###   ########.fr       */
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

t_list		*ft_create_elem(void *data);
t_list		*ft_list_at(t_list *begin_list, unsigned int nbr);

#endif
