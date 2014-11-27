/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelestel <jelestel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 13:52:50 by jelestel          #+#    #+#             */
/*   Updated: 2014/11/08 19:12:16 by jelestel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

#define JSL ft_save_line(i, tmp, c)

int			ft_count_words(const char *str, char c)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (str[j])
	{
		if (str[j] != c)
			i++;
		while ((str[j] != c) && (str[j]))
			j++;
		while ((str[j] == c) && (str[j]))
			j++;
	}
	return (i);
}

size_t		ft_save_line(size_t i, char *tmp, char c)
{
	size_t	j;

	j = 0;
	while ((tmp[i + j]) && (tmp[i + j] != c))
		j++;
	return (j);
}

char		**ft_strsplit(const char *s, char c)
{
	size_t	i;
	size_t	k;
	char	*tmp;
	char	**tab;

	if (!s)
		return (NULL);
	tmp = ft_strtrimwith(s, c);
	k = ft_count_words((const char *)tmp, c) + 1;
	if ((tab = (char **)malloc(sizeof(char *) * k)))
	{
		i = 0;
		k = -1;
		while ((int)++k <= ft_count_words((const char *)tmp, c))
		{
			if (!(tab[k] = ft_strsub((const char *)tmp, (unsigned int)i, JSL)))
				return (NULL);
			i = JSL;
			while (tmp[i] == c)
				i++;
		}
		tab[k - 1] = NULL;
	}
	return (tab);
}
