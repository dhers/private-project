/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelestel <jelestel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/19 10:56:06 by jelestel          #+#    #+#             */
/*   Updated: 2014/07/20 14:00:10 by jelestel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>

void	colle(int c, int l);

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

int main(int ac, char **av)
{
	ac--;
	av++;
	if (ac != 2)
		return (0);
	colle(atoi(av[0]), atoi(av[1]));
	return (0);
}
