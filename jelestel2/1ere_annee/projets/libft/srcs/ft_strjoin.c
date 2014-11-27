/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelestel <jelestel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 13:18:07 by jelestel          #+#    #+#             */
/*   Updated: 2014/11/07 19:36:59 by jelestel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char		*ft_strjoin(const char *s1, const char *s2)
{
	size_t	i;
	size_t	j;
	char	*tmp;

	if (!s1 || !s2)
		return (NULL);
	i = ft_strlen(s1) + ft_strlen(s2) + 1;
	if ((tmp = (char *)malloc(sizeof(char) * i)))
	{
		i = -1;
		j = -1;
		while (s1[++i])
			tmp[i] = s1[i];
		while (s2[++j])
			tmp[i + j] = s2[j];
		tmp[i + j] = '\0';
	}
	return (tmp);
}
