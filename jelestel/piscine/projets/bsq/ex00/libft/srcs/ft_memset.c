/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgoeminn <cgoeminn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/06 17:26:44 by cgoeminn          #+#    #+#             */
/*   Updated: 2014/07/19 15:53:38 by cgoeminn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, int len)
{
	int	tmp;

	tmp = 0;
	while (tmp != len)
	{
		*(char*)(b + tmp) = (unsigned char)c;
		++tmp;
	}
	return (char*)b;
}
