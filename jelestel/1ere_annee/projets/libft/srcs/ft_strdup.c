/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelestel <jelestel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 13:54:59 by jelestel          #+#    #+#             */
/*   Updated: 2014/11/03 14:55:50 by jelestel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char		*ft_strdup(const char *s1)
{
	size_t	i;
	char	*dest;

	i = ft_strlen(s1);
	dest = (char*)malloc(sizeof(char) * (i + 1));
	i = -1;
	if (dest)
	{
		while (s1[++i])
			dest[i] = s1[i];
		dest[i] = '\0';
		return (dest);
	}
	return (NULL);
}
