/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelestel <jelestel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/14 21:02:44 by jelestel          #+#    #+#             */
/*   Updated: 2014/07/14 21:17:47 by jelestel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		ft_putchar(str[i++]);
}

void	ft_putnbr(int n)
{
	if (n < 0)
	{
		ft_putchar('-');
		ft_putnbr(n * (-1));
	}
	else if (n < 10)
		ft_putchar(n + 48);
	else
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
}

void	ft_show_tab(struct s_stock_par *par)
{
	int	i;

	while (par->str)
	{
		i = 0;
		ft_putstr(par->str);
		ft_putchar('\n');
		ft_putnbr(par->size_params);
		ft_putchar('\n');
		while (par->tab[i])
		{
			ft_putstr(par->tab[i]);
			ft_putchar('\n');
			i++;
		}
		par++;
	}
}
