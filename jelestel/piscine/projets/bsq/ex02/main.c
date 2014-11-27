/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelestel <jelestel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/24 08:49:42 by jelestel          #+#    #+#             */
/*   Updated: 2014/07/24 18:49:00 by cgoeminn         ###   ########.fr       */
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

static void print_tab(void)
{
	int x;
	int y;

	y = 0;
	while(y < SIZEY)
	{
		x = 0;
		while(x++ < SIZEX)
		++y;
	}
}

int		main(int ac, char **av)
{
	int	i;
	int	fd;

	i = 0;
	if (ac == 0)
		return (0);
	fd = 0;
	while (++i < ac)
	{
		if ((fd = open(av[i], O_RDONLY)) < 0)
		{
			ft_putendl_fd("open() error", 2);
			return (1);
		}
		if (!parse(fd))
		{
			ft_putendl_fd("map error", 2);
			return (1);
		}
		print_tab();
		close (fd);
	}
	free(get_env());
	return (0);
}
