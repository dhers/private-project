/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfanton <gfanton@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/22 12:47:12 by gfanton           #+#    #+#             */
/*   Updated: 2014/02/16 22:28:21 by gfanton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*s_tmp;

	s_tmp = ((unsigned char*)s);
	while (n--)
	{
		if ((*s_tmp) == c)
			return ((void*)s_tmp);
		++s_tmp;
	}
	return (NULL);
}
