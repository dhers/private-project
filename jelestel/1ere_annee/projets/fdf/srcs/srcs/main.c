/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelestel <jelestel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/24 16:06:16 by jelestel          #+#    #+#             */
/*   Updated: 2014/12/08 02:18:41 by jelestel         ###   ########.fr       */
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
		if (!(lst = parse(av[0])))
			return (-1);
		fdf(&lst);
	}
	return (0);
}
