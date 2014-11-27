/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelestel <jelestel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/24 08:49:42 by jelestel          #+#    #+#             */
/*   Updated: 2014/07/24 11:02:05 by jelestel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../includes/bsq.h"
#include "../libft/includes/libft.h"
#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

/* static void	print_env(void) */
/* { */
/* 	printf("symboles: [%c] [%c] [%c]\n", */
/* 		   get_env()->symb[0], get_env()->symb[1],get_env()->symb[2]); */
/* 	printf("lines: %d\n", get_env()->sizey); */
/* } */

void	bin_print_char(unsigned number)
{
	unsigned mask = 128;
	unsigned mask1;
	unsigned mask2;
	int	i = 7;
	while (mask != 0)
	{
		mask1 = mask <<=1;
		mask2 = mask >>=1;
		if (number & mask)
			ft_putchar('1');
		else
			ft_putchar('0');
		mask >>= 1;
		/*if ((i % 4 == 0) && (i != 0))
			ft_putchar('.');*/
		i--;
	}
	ft_putchar(' ');
}

static void print_tab(void)
{
	t_bit *tab;
	int x;
	int y;
	int i;

	(void)tab;
	y = 0;
	while(y < SIZEY)
	{
		x = 0;
		while(x < BINX)
		{
			//printf("[%3d]", TAB(x, y));
			bin_print_char(TAB(x, y));
			i = 0;
			while (i < 8)
			{
				/* printf("x: %d, y: %d, nbit: %d <--> %d\n", x, y, i, TAB(x, y)); */
				++i;
			}
			++x;
		}
		printf("\n");
		++y;
	}
}

int		main(int ac, char **av)
{
	int	i;
	int	fd;

	i = -1;
	ac--;
	av++;
	if (ac == 0)
		return (0);
	while (++i < ac)
	{
		if ((fd = open(av[i], O_RDWR)) < 3)
		{
			ft_putendl_fd("open() error", 2);
			return (1);
		}
		if (!parse(fd))
		{
			ft_putendl_fd("map error", 2);
			free(get_env());
			return (1);
		}
		print_tab();
		free(get_env());
		if ((close (fd)) < 0)
		{
			ft_putendl_fd("close() error", 2);
			return (1);
		}
	}
	return (0);
}
