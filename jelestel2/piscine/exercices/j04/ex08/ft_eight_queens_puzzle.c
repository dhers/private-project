/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_eight_queens_puzzle.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelestel <jelestel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/08 11:00:28 by jelestel          #+#    #+#             */
/*   Updated: 2014/07/08 17:06:04 by jelestel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_check(int tab[8][8], int i, int ref)
{
	int	pol;
	int check;

	pol = -1;
	check = 0;
	while (++pol < 8)
	{
		if (tab[pol][ref] != 0)
			return (0);
	}
	pol = -1;
	while ((i - ++pol >= 0) && (ref - pol >= 0))
	{
		if (tab[i - pol][ref - pol] != 0)
			check++;
	}
	pol = -1;
	while ((i - ++pol >= 0) && (ref + pol < 8))
	{
		if (tab[i - pol][ref + pol] != 0)
			check++;
	}
	if (check != 0)
		return (0);
	return (1);
}

void	ft_solve(int tab[8][8], int i, int *ptr)
{
	int	ref;
	int	check;

	ref = 1;
	while (ref < 9)
	{
		check = ft_check(tab, i, ref - 1);
		if ((check == 1) && (i != 7))
		{
			tab[i][ref - 1] = ref;
			ft_solve(tab, i + 1, ptr);
			tab[i][ref - 1] = 0;
		}
		else if ((check == 1) && (i == 7))
		{
			tab[i][ref - 1] = ref;
			ptr[0] += 1;
			tab[i][ref - 1] = 0;
		}
		ref++;
	}
}

int		ft_eight_queens_puzzle(void)
{
	int	i;
	int	j;
	int	tab[8][8];
	int	sol;
	int	*ptr;

	i = 0;
	sol = 0;
	while (i < 8)
	{
		j = 0;
		while (j < 8)
			tab[i][j++] = 0;
		i++;
	}
	i = 0;
	ptr = &sol;
	ft_solve(tab, i, ptr);
	return (sol);
}
