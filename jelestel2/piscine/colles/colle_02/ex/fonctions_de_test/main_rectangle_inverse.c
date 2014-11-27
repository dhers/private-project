/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_rectangle_inverse.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelestel <jelestel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/20 18:27:45 by jelestel          #+#    #+#             */
/*   Updated: 2014/07/20 19:33:15 by jelestel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rectangle_inverse(int c, int l);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_exp(int n, int exp)
{
	int	i;

	i = 1;
	if (exp == 0)
		return (1);
	while (exp > 0)
	{
		i = i * n;
		exp--;
	}
	return (i);
}

int		ft_atoi(char *str)
{
	int	i;
	int	j;
	int	sol;

	i = 0;
	j = 0;
	sol = 0;
	while (str[i])
		i++;
	i--;
	while (str[j])
	{
		if (str[j] != '-')
			sol = sol + (str[j] - 48) * ft_exp(10, i);
		i--;
		j++;
	}
	if (str[0] == '-')
		sol = sol * (-1);
	return (sol);
}

int		main(int ac, char **av)
{
	ac--;
	av++;
	if (ac != 2)
		return (0);
	ft_rectangle_inverse(ft_atoi(av[0]), ft_atoi(av[1]));
	return (0);
}
