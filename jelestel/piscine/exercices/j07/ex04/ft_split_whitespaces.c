/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelestel <jelestel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/14 15:43:23 by jelestel          #+#    #+#             */
/*   Updated: 2014/07/14 20:32:05 by jelestel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int			ft_count_par(char *str)
{
	int		i;
	int		k;

	k = 0;
	i = 0;
	while (str[i])
	{
		while ((str[i]) && ((str[i] == ' ') || (str[i] == '\t')
				|| (str[i] == '\n')))
			i++;
		while ((str[i]) && ((str[i] != ' ') && (str[i] != '\t')
				&& (str[i] != '\n')))
			i++;
		k++;
	}
	return (k);
}

int			ft_strlen_par(char *str)
{
	int		i;

	i = 0;
	while ((str[i]) && (str[i] != ' ') && (str[i] != '\t') && (str[i] != '\n'))
		i++;
	return (i);
}

void		ft_cpy_tab(char **tab, char *str, int k, int count)
{
	int		j;
	int		i;

	j = -1;
	i = ft_strlen_par(&str[count]);
	while (++j < i)
		tab[k][j] = str[count + j];
	tab[k++][j] = 0;
}

char		**ft_split_whitespaces(char *str)
{
	char	**tab;
	int		k;
	int		count;
	int		i;

	k = ft_count_par(str);
	tab = (char **)malloc(sizeof(char *) * (k + 1));
	k = 0;
	count = 0;
	while (str[count])
	{
		while ((str[count]) && ((str[count] == ' ') || (str[count] == '\t')
				|| (str[count] == '\n')))
			count++;
		if (str[count])
		{
			i = ft_strlen_par(&str[count]);
			tab[k] = (char *)malloc(sizeof(char) * (i + 1));
			ft_cpy_tab(tab, str, k, count);
			count += i;
			k++;
		}
	}
	tab[k] = NULL;
	return (tab);
}
