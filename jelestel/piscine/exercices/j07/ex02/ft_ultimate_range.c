/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelestel <jelestel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/11 13:45:55 by jelestel          #+#    #+#             */
/*   Updated: 2014/07/11 14:29:56 by jelestel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int	*tab;
	int	i;
	int	ref;

	if (min >= max)
		range = NULL;
	tab = (int *)malloc(sizeof(int) * (max - min));
	i = 0;
	ref = max - min;
	while (min < max)
	{
		tab[i] = min;
		i++;
		min++;
	}
	*range = tab;
	return (ref);
}
