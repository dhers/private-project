/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfanton <gfanton@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/22 14:32:00 by gfanton           #+#    #+#             */
/*   Updated: 2013/12/23 20:16:10 by gfanton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	*ft_memmove(void *s1, const void *s2, size_t n)
{
	unsigned char	*tmp;

	if (!n)
		return (s1);
	tmp = ft_memalloc(n);
	tmp = ft_memcpy(tmp, s2, n);
	s1 = ft_memcpy(s1, tmp, n);
	free(tmp);
	return (s1);
}
