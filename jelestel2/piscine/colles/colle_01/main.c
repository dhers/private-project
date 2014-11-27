/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelestel <jelestel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/11 22:10:12 by jelestel          #+#    #+#             */
/*   Updated: 2014/07/12 01:39:49 by jelestel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku.h"

void		ft_putchar(char c)
{
	write(1, &c, 1);
}

void		ft_putstr(char *str)
{
	int		i;

	i = 0;
	while (str[i])
		ft_putchar(str[i++]);
}

int			ft_error(int ac, char **av)
{
	int		i;
	int		j;

	i = 0;
	if (ac == 9)
	{
		while (i < 9)
		{
			j = 0;
			while (j < 9)
			{
				if (((av[i][j] >= '0') && (av[i][j] <= '9'))
					|| (av[i][j] == '.'))
					j++;
				else
					return (0);
			}
			i++;
		}
	}
	else
		return (0);
	return (1);
}

char		*ft_concat_params(int ac, char **av)
{
	int		i;
	int		j;
	int		ref;
	char	*str;

	i = 0;
	ref = 0;
	while (i < ac)
	{
		j = 0;
		while (av[i][j++])
			ref++;
		i++;
	}
	str = (char *)malloc(sizeof(char) * (ref + 1));
	i = 0;
	ref = 0;
	while (i < ac)
	{
		j = 0;
		while (av[i][j])
			str[ref++] = av[i][j++];
		i++;
	}
	return (str);
}

int			main(int ac, char **av)
{
	int		i;
	int		ref;
	int		check;
	char	*tab;
	char	*tab2;
	int		*ptr;

	i = 0;
	ref = 0;
	ptr = &ref;
	ac--;
	av++;
	if (ft_error(ac, av) == 1)
	{
		tab = ft_concat_params(ac, av);
		tab2 = ft_concat_params(ac, av);
		while (tab[i] != '.')
			i++;
		check = i;
		ft_solve(tab, i, tab2, ptr);
		printf("%d\n", *ptr);
		if (*ptr == 1)
			printf("%s", tab2);
		else
			write(2, "Erreur\n", 7);
	}
	else
		write(2, "Erreur\n", 7);
	return (0);
}
