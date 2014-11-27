/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelestel <jelestel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/07 09:33:08 by jelestel          #+#    #+#             */
/*   Updated: 2014/07/07 09:39:42 by jelestel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power);

int	main()
{
	int	i = 5;
	int	j = 3;

	printf("%d, %d\n", i, j);
	i = ft_iterative_power(i, j);
	printf("%d\n", i);
}
