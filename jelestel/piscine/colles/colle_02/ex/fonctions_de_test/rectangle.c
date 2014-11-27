/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rectangle.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelestel <jelestel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/20 18:40:04 by jelestel          #+#    #+#             */
/*   Updated: 2014/07/20 19:42:03 by jelestel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_test.h"

void	ft_putchar(char c);

void	ft_rectangle(int l, int c)
{
	t_solve	i;

	i.c = 0;
	i.i = 0;
	while (++i.c <= c)
	{
		i.l = 0;
		while (++i.l <= l)
		{
			if ((i.c == 1) || (i.c == c) || (i.l == 1) || (i.l == l))
				ft_putchar('*');
			else
				ft_putchar(' ');
		}
		if (i.c != c)
			ft_putchar('\n');
	}
	ft_putchar('\n');
	ft_putchar('\0');
}
