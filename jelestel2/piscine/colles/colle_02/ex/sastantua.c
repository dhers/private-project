/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sastantua.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelestel <jelestel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/05 10:26:31 by jelestel          #+#    #+#             */
/*   Updated: 2014/07/20 16:04:25 by jelestel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "colle_2.h"

int			ft_base(int size)
{
	int	len;
	int	dec;
	int	i;
	int	j;

	dec = 2;
	len = 3;
	i = -1;
	while (++i < size)
	{
		j = 0;
		if ((i + 1) % 2 == 0)
			dec++;
		if (i > 0)
			len = len + (dec * 2);
		while (++j < (i + 3))
			len = len + 2;
	}
	return (len);
}

char		*ft_print_door(int n, int i, int width, int ref)
{
	if (((ref - 2) >= 5) && (n == 2 + ((ref - 2) / 2)) &&
			(i == (width - 3 + ((ref - 1) / 2))))
		ft_putchar('$');
	else
		ft_putchar('|');
}

char		*ft_print_sastantua(int n, int base, int width, int ref)
{
	int		pos;
	int		i;

	n = -1;
	while (++n < ref)
	{
		i = -1;
		while (++i < base - pos + 1)
		{
			pos = width - (ft_base(ref - 2) / 2) + (ref - n) - 1;
			if (i == pos - 1)
				ft_putchar('/');
			else if ((n >= 2 + ((ref + 1) % 2)) && (ft_base(ref - 2) == base)
					&& (i >= (width - ((ref - 1) / 2))
					&& (i < (width - 1 + ((ref - 1) / 2)))))
				ft_print_door(n, i, width, ref);
			else if (i == base - pos)
				ft_putchar('\\');
			else if ((i >= pos) && (i < base - pos))
				ft_putchar('*');
			else
				ft_putchar(' ');
		}
		ft_putchar('\n');
	}
}

char		*ft_solve_sastantua(int n, int base, char *str)
{
	if (n != 1)
		ft_solve((n - 1), base);
	if (ft_base(n) != base)
		ft_print(n, base, ((base + 1) / 2), (n + 2));
	else
		ft_print(n, base, ((base + 1) / 2), (n + 2));
}

char		*sastantua(int size, char *str)
{
	if (size > 0)
		return(ft_solve(size, ft_base(size), str));
}
