/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelestel <jelestel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 15:25:46 by jelestel          #+#    #+#             */
/*   Updated: 2014/11/08 16:49:55 by jelestel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void				*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*tmp;
	size_t			i;

	if ((dst > (src + len)) || (dst + len) < src)
		return (ft_memcpy(dst, src, len));
	i = -1;
	tmp = (unsigned char *)malloc(sizeof(unsigned char) * (len + 1));
	while (++i < len)
		tmp[i] = *(unsigned char *)(src + i);
	dst = ft_memcpy(dst, (const void *)tmp, len);
	free(tmp);
	return (dst);
}
