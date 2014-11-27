/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelestel <jelestel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 15:08:20 by jelestel          #+#    #+#             */
/*   Updated: 2014/11/03 15:24:01 by jelestel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strncpy(char *dst, const char *src, size_t n)
{
	size_t	i;
	size_t	j;

	i = -1;
	j = ft_strlen(dst);
	while ((++i < n) && (src[i]))
		dst[i] = src[i];
	while (i < j)
		dst[i++] = '\0';
	return (dst);
}
