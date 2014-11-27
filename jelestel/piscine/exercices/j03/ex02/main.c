/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelestel <jelestel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/04 10:01:34 by jelestel          #+#    #+#             */
/*   Updated: 2014/07/04 10:19:58 by jelestel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

int	main()
{
	int	a = 10;
	int b = 3;
	int c = 0;
	int	d = 0;
	int	*div = &c;
	int *mod = &d;
	printf("%d, %d, %d, %d\n", a, b, c, d);
	ft_div_mod(a, b, div, mod);
	printf("%d, %d, %d, %d\n", a, b, c, d);
}
