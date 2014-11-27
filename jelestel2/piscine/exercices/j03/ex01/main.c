/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelestel <jelestel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/04 10:01:34 by jelestel          #+#    #+#             */
/*   Updated: 2014/07/04 10:14:08 by jelestel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_ft(int *********nbr);

int	main()
{
	int	i = 5;
	int	*ptr=&i;
	int	**ptr2=&ptr;
	int	***ptr3=&ptr2;
	int	****ptr4=&ptr3;
	int	*****ptr5=&ptr4;
	int	******ptr6=&ptr5;
	int	*******ptr7=&ptr6;
	int	********ptr8=&ptr7;
	int	*********ptr9=&ptr8;
	printf("%d\n", i);
	ft_ultimate_ft(ptr9);
	printf("%d\n", i);
}
