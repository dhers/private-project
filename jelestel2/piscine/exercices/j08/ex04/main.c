/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelestel <jelestel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/14 20:42:42 by jelestel          #+#    #+#             */
/*   Updated: 2014/07/14 20:48:30 by jelestel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"
#include <stdio.h>

int	main(int ac, char **av)
{
	t_stock_par	*test;
	int	i;

	i = 0;
	test = ft_param_to_tab(ac, av);
	while (test->str)
	{
		printf("%i, %s, %s\n", test->size_params, test->str, test->copy);
		test++;
	}
	return (0);
}
