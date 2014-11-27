/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   carre_inverse.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelestel <jelestel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/20 18:26:24 by jelestel          #+#    #+#             */
/*   Updated: 2014/07/20 19:38:21 by jelestel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_test.h"

void	ft_putchar(char c);

void	ft_carre_inverse(int l)
{
	t_solve	i;

	i.c = 0;
	i.i = 0;
	while (++i.c <= l)
	{
		i.l = 0;
		while (++i.l <= l)
		{
			if ((i.c == 1) || (i.c == l) || (i.l == 1) || (i.l == l))
				ft_putchar(' ');
			else
				ft_putchar('*');
		}
		if (i.c != l)
			ft_putchar('\n');
	}
	ft_putchar('\n');
	ft_putchar('\0');
}
