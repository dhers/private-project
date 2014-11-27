/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgoeminn <cgoeminn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/06 17:29:33 by cgoeminn          #+#    #+#             */
/*   Updated: 2014/07/16 20:56:38 by cgoeminn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void		ft_putnbr_rec(int n)
{
	if (n < -9)
		ft_putnbr_rec(n / 10);
	ft_putchar('0' - (n % 10));
}

void			ft_putnbr(int n)
{
	if (n < 0)
		ft_putchar ('-');
	else
		n = -n;
	ft_putnbr_rec(n);
}
