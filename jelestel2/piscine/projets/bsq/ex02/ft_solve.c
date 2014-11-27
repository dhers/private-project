/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solve.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelestel <jelestel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/24 18:55:47 by jelestel          #+#    #+#             */
/*   Updated: 2014/07/24 20:14:35 by jelestel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"
#include <stdio.h>
void	ft_do_sol(int save[4])
{
	int	i;
	int	j;
	int	x;
	int	y;

	i = -1;
	y = save[0];
	while (++i < save[2])
	{
		j = -1;
		x = save[1];
		while(j < save[2])
			TABDUP(x + j, y + i) = FULL;
	}
	printf("%s\n", GTABDUP);
}

void	solve_tab(void)
{
	int	x;
	int	y;
	int		save[4];

	save[2] = 0;
	save[3] = 1;
	while (save[3] != 0)
	{
		save[3] = 0;
		y = -1;
		while (++y < SIZEY - save[2])
		{
			x = -1;
			while (++x < SIZEX - save[2])
			{
				if ((TAB(x, y) == VIDE) && (save[3]++ == 0))
				{
					save[0] = x;
					save[1] = y;
				}
				if (((TAB(x, y + 1) == OBST) || (TAB(x + 1, y - 1) == OBST)
					|| (TAB(x + 1, y) == OBST) || (TAB(x + 1, y + 1) == OBST))
						&& (TAB(x, y) == VIDE))
					TAB(x, y) = OBST;
			}
		}
		save[2]++;
	}
	ft_do_sol(save);
}
