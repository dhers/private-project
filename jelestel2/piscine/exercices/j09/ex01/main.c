/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelestel <jelestel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/18 09:32:35 by jelestel          #+#    #+#             */
/*   Updated: 2014/07/18 09:34:17 by jelestel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_takes_place(int hour);

int		main(int ac, char **av)
{
	ac--;
	av++;
	if (ac == 1)
		ft_takes_place(atoi(av[0]));
	return (0);
}
