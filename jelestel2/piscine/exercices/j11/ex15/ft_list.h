/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelestel <jelestel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/16 10:20:10 by jelestel          #+#    #+#             */
/*   Updated: 2014/07/17 17:32:06 by jelestel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef 	FT_LIST_H
# define	FT_LIST_H

# define PLACE ft_list_at(begin_list, k)->data
# define PLACE2 ft_list_at(begin_list, i - k - 1)->data

typedef struct s_list	t_list;

struct		s_list
{
	t_list	*next;
	void	*data;
};

t_list		*ft_create_elem(void *data);
void		ft_list_reverse_fun(t_list *begin_list);

#endif
