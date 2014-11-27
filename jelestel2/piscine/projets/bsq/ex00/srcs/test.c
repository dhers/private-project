/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelestel <jelestel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/23 15:12:16 by jelestel          #+#    #+#             */
/*   Updated: 2014/07/24 06:17:32 by jelestel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

#include <stdio.h>
#include <limits.h>

typedef struct	s_test
{
	int			i;
}				t_test;

void bin_print_int(unsigned number)
{
	unsigned mask = 128;/*~(UINT_MAX >> 1);*/

	//mask >>= 24;
	while (mask != 0)
	{
		if (number & mask)
		{
			putchar('1');
		}
		else
		{
			putchar('0');
		}
		mask >>= 1;
	}
	putchar(' ');
}

int or_mask(int n)
{
	return 1 << n;
}

int and_mask(int n)
{
	return ~(1 << n);
}

int main(int ac, char **av)
{
	unsigned char toto[50];

	if (ac == 1)
		return (0);
	ac--;
	av++;
	int i = 0;
	int	j = 0;
	int	k = 0;
	while (j < ac)
	{
		i = 0;
		while (av[j][i])
		{
			if (i % 8 == 0)
			{
				if (k != 0)
					bin_print_int(toto[k]);
				k++;
				toto[k] = 0;
			}
			if (av[j][i] == 'o')
				toto[k] |= 128 >> i % 8;
			i++;
		}
		toto[k] |= (128 >> (i - 1) % 8) - 1;
		putchar(' ');
		j++;
	}
	bin_print_int(toto[k]);
	putchar('\n');
	return (0);
}
