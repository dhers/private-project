/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelestel <jelestel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 18:23:02 by jelestel          #+#    #+#             */
/*   Updated: 2014/11/05 11:09:54 by jelestel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	tmp;

	tmp = strlen(dst);
	if (ft_strlen(dst) + 1 < size)
	{
		ft_strncat(dst, src, (size - tmp - 1));
		return (ft_strlen(src) + tmp);
	}
	return (ft_strlen(src) + ft_strnlen(dst, size));
}
