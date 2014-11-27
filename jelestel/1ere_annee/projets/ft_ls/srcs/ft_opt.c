/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_opt.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelestel <jelestel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/18 10:33:12 by jelestel          #+#    #+#             */
/*   Updated: 2014/11/24 10:25:26 by jelestel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

#include <stdio.h>

#define DATE(x) ((t_stat *)(elem_num(lst, x)->content))->date
#define NEXT(x) elem_num(lst, x)->next

t_list			*elem_num(t_list **lst, int n)
{
	t_list		*tmp;

	tmp = *lst;
	while ((tmp->next) && (n-- > 0))
		tmp = tmp->next;
	if (n > 0)
		return (NULL);
	return (tmp);
}

void			ft_attribute_t(t_list **lst, int i, int j, int k)
{
	t_list		*tmp1;
	t_list		*tmp2;
	t_list		*tmp3;

	tmp1 = elem_num(lst, i);
	tmp2 = elem_num(lst, j);
	tmp3 = elem_num(lst, k);
	if (j == 0)
	{
		tmp2->next = tmp3->next;
		tmp3->next = tmp2;
		*lst = tmp3;
	}
	else
	{
		tmp1->next = tmp3;
		tmp2->next = tmp3->next;
		tmp3->next = tmp2;
	}
}

void			ft_sort_t(t_list **lst)
{
	int			i;

	i = 0;
	while (elem_num(lst, i + 1))
	{
		if (ft_strcmp(DATE(i), DATE(i + 1)) < 0)
		{
			if (i == 0)
				ft_attribute_t(lst, i, i, i + 1);
			else
			{
				ft_attribute_t(lst, i - 1, i, i + 1);
				i = i - 1;
			}
		}
		else
			i++;
	}
}

void			ft_reverse_r(t_list **lst)
{
	int			i;
	int			j;
	t_list		*tmp;

	tmp = *lst;
	i = 0;
	while (tmp)
	{
		i++;
		tmp = tmp->next;
	}
	tmp = *lst;
	*lst = elem_num(&tmp, i - 1);
	j = 1;
	while (j < i)
	{
		elem_num(&tmp, (i - j))->next = elem_num(&tmp, (i - j - 1));
		j++;
	}
	tmp->next = NULL;
}
