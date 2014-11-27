/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelestel <jelestel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 11:40:56 by jelestel          #+#    #+#             */
/*   Updated: 2014/11/05 20:19:53 by jelestel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_write_nbr(int n)
{
	if (n > -10)
		ft_putchar(-n + 48);
	else
	{
		ft_write_nbr(n / 10);
		ft_write_nbr(n % 10);
	}
}

void	ft_putnbr(int n)
{
	if (n < 0)
	{
		ft_putchar('-');
		ft_write_nbr(n);
	}
	else
		ft_write_nbr(-n);
}
