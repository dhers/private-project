/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelestel <jelestel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/24 16:06:16 by jelestel          #+#    #+#             */
/*   Updated: 2014/12/07 00:52:04 by jelestel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"
#include <stdio.h>

#define TEST ((t_file * )(lst->content))

int		main(int ac, char **av)
{
	t_list	*lst;

	ac--;
	av++;
	lst = NULL;
	if (ac != 0)
	{
		lst = parse(av[0]);
		fdf(&lst);
	}
	return (0);
}
