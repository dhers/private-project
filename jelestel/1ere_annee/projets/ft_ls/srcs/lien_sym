/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelestel <jelestel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/26 17:39:19 by jelestel          #+#    #+#             */
/*   Updated: 2014/11/26 17:39:22 by jelestel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"
#include <stdlib.h>
#include <stdio.h>

int			main(int ac, char **av)
{
	t_ls	*test;
	ac--;
	av++;
	if (!(test = parse_ls(ac, av)) && (ac == 0))
		test = (t_ls *)malloc(sizeof(t_ls));
	else if (!test)
		return (0);
	if ((!test->tabtp) || (!*test->tabtp))
		ft_ls(".", test, 0);
	else
	{
		while (*(test->tabtp))
		{
			ft_ls(*(test->tabtp), test, 0);
			test->tabtp++;
		}
	}

	return (0);
}
