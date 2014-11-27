/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelestel <jelestel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/07 09:04:19 by jelestel          #+#    #+#             */
/*   Updated: 2014/07/07 09:20:53 by jelestel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb);

int	main()
{
	int	i = 5;
	printf("%d\n", i);
	i = ft_recursive_factorial(i);
	printf("%d\n", i);
	return (0);
}
