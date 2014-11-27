/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelestel <jelestel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/04 10:01:34 by jelestel          #+#    #+#             */
/*   Updated: 2014/07/04 10:25:39 by jelestel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b);

int	main()
{
	int	a = 10;
	int b = 3;
	int	*div = &a;
	int *mod = &b;
	printf("%d, %d\n", a, b);
	ft_ultimate_div_mod(div, mod);
	printf("%d, %d\n", a, b);
}
