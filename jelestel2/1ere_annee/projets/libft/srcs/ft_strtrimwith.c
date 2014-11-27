/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrimwith.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelestel <jelestel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 13:55:48 by jelestel          #+#    #+#             */
/*   Updated: 2014/11/05 15:57:16 by jelestel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char		*ft_strtrimwith(const char *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	k;
	char	*tmp;

	i = 0;
	tmp = NULL;
	while ((s[i] == c) && (s[i]))
		i++;
	j = ft_strlen(s) - 1;
	while ((s[j] == c) && (j > 0) && (j > i + 1))
		j--;
	j = j - i;
	k = 0;
	if ((j > 0) && (tmp = (char *)malloc(sizeof(char) * j + 2)))
	{
		while (k < j + 1)
		{
			tmp[k] = (char)s[i + k];
			k++;
		}
		tmp[k] = '\0';
	}
	return (tmp);
}
