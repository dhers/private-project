/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelestel <jelestel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/19 14:41:02 by jelestel          #+#    #+#             */
/*   Updated: 2014/07/20 14:06:05 by jelestel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "colle_2.h"

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

void	ft_print(t_solve param, char *str, int *test)
{
	if (((!ft_strcmp(str, "carre")) || (!ft_strcmp(str, "carre inverse")))
		&& (param.l != param.c))
	{
		(*test)--;
		return ;
	}
	if ((*test) != 0)
	{
		ft_putchar(' ');
		ft_putchar('|');
		ft_putchar('|');
		ft_putchar(' ');
	}
	ft_putchar('[');
	ft_putstr(str);
	ft_putchar(']');
	ft_putchar(' ');
	ft_putchar('[');
	ft_putnbr(param.l);
	ft_putchar(']');
	ft_putchar(' ');
	ft_putchar('[');
	ft_putnbr(param.c);
	ft_putchar(']');
}
