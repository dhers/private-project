/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putfloat.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfanton <gfanton@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/04/27 03:39:54 by gfanton           #+#    #+#             */
/*   Updated: 2014/04/27 03:39:55 by gfanton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

static void	ft_float(float d, float epsilone)
{
	if (d >= 10)
	{
		ft_float(((int)d / 10) + (d - (int)d), epsilone);
		ft_float((int)d % 10, epsilone);
	}
	else if (d - (int)d > epsilone && d - (int)d < 1 - epsilone)
		ft_float((int)((d - (int)d) / epsilone), epsilone);
	else
		ft_putchar((int)d + 48);
}

void		ft_putfloat(float d, double epsilone)
{
	if (d < 0)
	{
		ft_putchar('-');
		d *= -1;
	}
	if (d - (int)d < 1 - (float)epsilone)
		ft_float((int)d, (float)epsilone);
	ft_putchar('.');
	ft_float(d - (int)d, (float)epsilone);
}
