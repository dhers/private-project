/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp_int.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelestel <jelestel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/11 12:49:30 by jelestel          #+#    #+#             */
/*   Updated: 2014/07/11 13:43:04 by jelestel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_strcmp_int(int *tab, int *tab2, int size)
{
	int	i;

	i = 0;
	while ((i < size - 1) && (tab[i] == tab2[i]))
		i++;
	return (tab[i] - tab2[i]);
}
