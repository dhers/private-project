/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sastantua.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelestel <jelestel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/05 10:26:31 by jelestel          #+#    #+#             */
/*   Updated: 2014/07/19 11:19:32 by jelestel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void		ft_putchar(char c);

int			ft_base(int n)
{
	if (n == 1)
		return(7);
	if (n == 2)
		return(19);
	if (n == 3)
		return(33);
	if (n == 4)
		return(51);
	if (n == 5)
		return(71);
	if (n == 8)
		return(151);
	if (n == 7)
		return(121);
	if (n == 6)
		return(95);
	else
		return(0);
}

void		ft_print_door(int n, int i, int width, int ref)
{
	if (((ref - 2) >= 5) && (n == 2 + ((ref - 2) / 2 )) &&
			(i == (width - 3 + ((ref - 1) / 2))))
		ft_putchar('$');
	else
		ft_putchar('|');
}

void		ft_print(int n, int base, int width, int ref)
{
	int		pos;
	int		i;

	n = -1;
	while (++n < ref)
	{
		i = -1;
		while (++i < base - pos + 1)
		{
			pos =  width - (ft_base(ref - 2) / 2) + (ref - n) - 1;
			if (i == pos - 1)
				ft_putchar('/');
			else if ((n >= 2 + ((ref + 1) % 2)) && (ft_base(ref - 2) == base)
					&& (i >= (width - ((ref - 1) / 2)) &&
					 (i < (width -1 + ((ref - 1) / 2)))))
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

void		ft_solve(int n, int base)
{
	if (n != 1)
		ft_solve((n - 1), base);
	if (ft_base(n) != base)
		ft_print(n, base, ((base + 1) / 2), (n + 2));
	else
		ft_print(n, base, ((base + 1) / 2), (n + 2));
}

void		sastantua(int size)
{
	if (size > 0)
		ft_solve(size, ft_base(size));
}
