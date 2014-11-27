/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelestel <jelestel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/16 11:29:31 by jelestel          #+#    #+#             */
/*   Updated: 2014/07/17 19:24:19 by jelestel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "ft_list.h"
#include <unistd.h>

void	ft_list_push_front(t_list **begin, void *data);
void	ft_list_push_back(t_list **begin, void *data);
void	ft_list_clear(t_list **begin_list);
void	ft_list_reverse_fun(t_list *begin_list);
void	ft_list_remove_if(t_list **begin, void *data_ref, int (*cmp)());

int		ft_strcmp(char *str, char *src)
{
	int i;

	i = 0;
	while ((str[i]) && (src[i]) && (str[i] == src[i]))
		i++;
	return (str[i] - src[i]);
}

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_print_list(t_list *begin)
{
	while (begin)
	{
		printf("%s\n", (begin)->data);
		(begin) = (begin)->next;
	}
	ft_putchar('\n');
}

int		main(int ac, char **av)
{
	t_list	*begin;
	t_list	*begin2;

	ac--;
	av++;	
	begin = ft_create_elem("element X");
	ft_list_push_front(&begin, "element 11");
	ft_list_push_front(&begin, "element 9");
	ft_list_push_front(&begin, "element 7");
	ft_list_push_front(&begin, "element 4");
	ft_list_push_front(&begin, "element 2");
	begin2 = ft_create_elem("element 10");
	ft_list_push_front(&begin2, "element 8");
	ft_list_push_front(&begin2, "element 6");
	ft_list_push_front(&begin2, "element 5");
	ft_list_push_front(&begin2, "element 3");
	ft_list_push_front(&begin2, "element 1");
	ft_print_list(begin);
	ft_print_list(begin2);
	ft_sorted_list_merge(&begin, begin2, &ft_strcmp);
	ft_print_list(begin);
	return (0);
}
