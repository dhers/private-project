/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tabdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfanton <gfanton@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/23 03:12:27 by gfanton           #+#    #+#             */
/*   Updated: 2014/01/25 00:29:13 by gfanton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	ft_tabdel(char ***tab)
{
	long	i;

	if (*tab && **tab)
	{
		i = 0;
		while ((*tab)[i] != NULL)
		{
			free((*tab)[i]);
			++i;
		}
		free(*tab);
		*tab = NULL;
	}
}
