/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelestel <jelestel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/18 12:04:34 by jelestel          #+#    #+#             */
/*   Updated: 2014/07/18 12:06:37 by jelestel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

unsigned int	ft_collatz_conjecture(unsigned int base);

int main(int ac, char **av)
{
	if (ac == 2)
		printf("%d\n", ft_collatz_conjecture(atoi(av[1])));
	return (0);
}
