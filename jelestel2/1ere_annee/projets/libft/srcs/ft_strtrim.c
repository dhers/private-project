/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelestel <jelestel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 13:25:46 by jelestel          #+#    #+#             */
/*   Updated: 2014/11/08 19:06:55 by jelestel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

int			ft_is_trim(const char c)
{
	if ((c == ' ') || (c == '\t') || (c == '\n'))
		return (1);
	return (0);
}

char		*ft_strtrim(const char *s)
{
	size_t	i;
	size_t	j;
	size_t	k;
	char	*tmp;

	if (!s)
		return (NULL);
	i = 0;
	tmp = NULL;
	while ((ft_is_trim(s[i])) && (s[i]))
		i++;
	j = ft_strlen(s) - 1;
	while ((ft_is_trim(s[j])) && (j > 0) && (j > i + 1))
		j--;
	j = j - i;
	k = -1;
	if ((j > 0) && (tmp = (char *)malloc(sizeof(char) * j + 2)))
	{
		while (++k < j + 1)
			tmp[k] = (char)s[i + k];
		tmp[k] = '\0';
	}
	return (tmp);
}
