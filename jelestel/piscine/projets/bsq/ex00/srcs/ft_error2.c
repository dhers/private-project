/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelestel <jelestel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/21 17:10:46 by jelestel          #+#    #+#             */
/*   Updated: 2014/07/22 20:38:36 by jelestel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"
#include "libft.h"
#include <unistd.h>
#include <stdlib.h>

void		ft_puterror(void)
{
	write(2, "map error\n", 10);
}

t_list		*ft_create_elem(int x, int y)
{
	t_list	*tmp;

	tmp = (t_list *)malloc(sizeof(t_list));
	if (tmp)
	{
		tmp->x = x;
		tmp->y = y;
		tmp->next = NULL;
	}
	return (tmp);
}

int			ft_do_list(t_list **begin, int x, int y, t_list **last)
{
	t_list	*tmp;
	t_list	*elem;

	x++;
	tmp = begin[x];
	elem = ft_create_elem(x, y);
	if (!elem)
		return (1);
	if (!(begin[x]))
	{
		begin[x] = elem;
		last[x] = elem;
	}
	else
	{
		tmp = last[x];
		tmp->next = elem;
		last[x] = elem;
	}
	return (0);
}

void		ft_save_line(t_arg *ptr, char buf, t_error *tmp)
{
	if (buf == '\n')
	{
		ptr->error += INIT5;
	}
	else if (buf == tmp->param->obst)
	{
		ptr->error += INIT6;
	}
	else if (buf != tmp->param->empty)
	{
		ptr->error += 1;
	}
}

int			ft_init_list2(int *save, int *x, int *y, t_error *tmp)
{
	int		i;

	i = *x;
	if (*x == 0)
	{
		*save = *y;
		(*x)++;
		*y = 0;
		if (INIT8 || INIT9)
			return (1);
	}
	else if (*y == *save)
	{
		*y = 0;
		(*x)++;
	}
	else
		return (1);
	return (0);
}
