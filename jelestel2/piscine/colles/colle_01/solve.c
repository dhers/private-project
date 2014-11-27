/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelestel <jelestel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/11 22:28:31 by jelestel          #+#    #+#             */
/*   Updated: 2014/07/12 02:06:02 by jelestel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku.h"

int		ft_check(char *tab, int i, int ref)
{
	int	a;
	int	b;
	int	c;
	int	d;

	a = i % 9;
	b = i - (i % 9);
	c = ((i / 3 * 3) / 27 * 27) + ((i / 3 * 3) % 9);
	d = 0;
	//printf("%s --->%d<---\n", tab, i);
	while (d < 9)
	{
		if (i >= 78)
			printf("%d, %d, %d, %c, %d, %c <------\n",a,b,c,ref + 48, i, tab[80]);
		if (tab[a] == ref + 48 || tab[b] == ref + 48 || tab[c] == ref + 48)
			return (0);
		
		a += 9;
		b++;
		if ((d % 3) == 2)
			c += 7;
		else
			c++;
		d++;
	}
	printf("    1    ");
	return (1);
}

int		ft_solve(char *tab, int i, char *tab2, int *ptr)
{
	int	ref;
	int	k;

	ref = 1;
	k = 1;
	//printf("%s\n", tab);
	while ((tab[i + k]) && (tab[i + k] != '.'))
		k++;
	if (!tab[i + k])
		return (0);
	while (ref < 10)
	{
		if (i >= 77)
			printf("%s, --->i = %d ref = %d<---\n", tab, i, ref);
		if (*ptr == 2)
			return (0);
		else if ((i != 80) && (ft_check (tab, i, ref) == 1))
		{
			tab[i] = ref + 48;
			ft_solve(tab, i + k, tab2, ptr);
			tab[i] = '.';
		}
		else if ((i == 80) && (ft_check (tab, i, ref) == 1))
		{
			tab[i] = ref + 48;
			tab2 = tab;
			printf("%s\n", tab);
			tab[i] = '.';
			(*ptr)++;
		}
		ref++;
	}
	return (0);
}
