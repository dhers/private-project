/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelestel <jelestel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/21 11:05:34 by jelestel          #+#    #+#             */
/*   Updated: 2014/07/23 14:18:58 by jelestel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"
#include "libft.h"
#include <stdio.h>

int		main(int ac, char **av)
{
	int	i;
	int	ref;
	t_error	*tmp;
	t_list	**test;

	i = -1;
	if (ac == 1)
		return (0);
	ac--;
	av++;
	while (++i < ac)
	{
		ref = 0;
		tmp = ft_error(av[i]);
		if (!tmp)
		{
			ft_puterror();
			return (1);
		}
		test = tmp->begin;
		while (ref < tmp->param->line)
		{
			if ((!(test[ref])) && (ref < tmp->param->line))
			{
				if (test[ref + 1])
					test[ref] = test[ref + 1];
				ref++;
			}
			else
				test[ref] = test[ref]->next;
		}
	}
	printf("test\n");
	return (0);
}
