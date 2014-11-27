/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelestel <jelestel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/14 15:43:23 by jelestel          #+#    #+#             */
/*   Updated: 2014/07/14 17:36:41 by jelestel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int			ft_count_par(char *str)
{
	int		i;
	int		k;

	k = 1;
	i = 0;
	while (str[i + 1])
	{
		if (((str[i] == ' ') || (str[i] == '\t') || (str[i] == '\n'))
			&& ((str[i + 1] != ' ') && (str[i + 1] != '	')
			&& (str[i + 1] != '\n')))
			k++;
		i++;
	}
	return (k);
}

int			ft_strlen_par(char *str)
{
	int		i;

	i = 0;
	while ((str[i] != ' ') && (str[i] != '\t') && (str[i] != '\n') && (str[i]))
		i++;
	return (i);
}

char		**ft_split_whitespaces(char *str)
{
	char	**tab;
	int		i;
	int		j;
	int		k;

	i = 0;
	k = ft_count_par(str);
	tab = (char **)malloc(sizeof(char *) * (k) + 1);
	k = 0;
	while (*str)
	{
		j = -1;
		while (((*str) == ' ') || ((*str) == '\t') || ((*str) == '\n'))
			str++;
		i = ft_strlen_par(str);
		tab[k] = (char *)malloc(sizeof(char) * (i) + 1);
		while (++j < i)
			tab[k][j] = *str++;
		k++;
	}
	tab[k] = NULL;
	return (tab);
}
