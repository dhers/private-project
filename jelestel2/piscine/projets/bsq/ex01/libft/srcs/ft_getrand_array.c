/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_getrand_array.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfanton <gfanton@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/04 03:17:34 by gfanton           #+#    #+#             */
/*   Updated: 2014/04/27 03:32:31 by gfanton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

int					*ft_getrand_array(void)
{
	static int		*array = NULL;

	if (!array)
		array = (int*)malloc(sizeof(int) * (RAND_SIZE));
	return (array);
}
