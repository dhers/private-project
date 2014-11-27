/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelestel <jelestel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 11:59:56 by jelestel          #+#    #+#             */
/*   Updated: 2014/11/05 15:11:22 by jelestel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void				*ft_memalloc(size_t size)
{
	unsigned char	*tmp;

	if (size == 0)
		return (NULL);
	if ((tmp = (unsigned char *)malloc(sizeof(unsigned char) * (size))))
		bzero((void *)tmp, size);
	return (tmp);
}
