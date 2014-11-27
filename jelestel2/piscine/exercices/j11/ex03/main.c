/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelestel <jelestel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/16 11:29:31 by jelestel          #+#    #+#             */
/*   Updated: 2014/07/16 14:18:47 by jelestel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "ft_list.h"

void	ft_list_push_front(t_list **begin, void *data);
void	ft_list_push_back(t_list **begin, void *data);

void	ft_print_list(t_list *begin)
{
	while (begin)
	{
		printf("%s\n", (begin)->data);
		(begin) = (begin)->next;;
	}
}

int		main()
{
	t_list *begin;
	
	begin = ft_create_elem("tutu");
	ft_list_push_front(&begin, "toto");
	ft_list_push_front(&begin, "titi");
	ft_list_push_front(&begin, "tata");
	printf("%i\n", ft_list_size(begin));
	ft_print_list(begin);
	return (0);
}
