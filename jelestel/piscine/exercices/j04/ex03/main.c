/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelestel <jelestel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/07 09:33:08 by jelestel          #+#    #+#             */
/*   Updated: 2014/07/07 09:57:55 by jelestel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power);

int	main()
{
	int	i = 5;
	int	j = 2;

	printf("%d, %d\n", i, j);
	i = ft_recursive_power(i, j);
	printf("%d\n", i);
}
