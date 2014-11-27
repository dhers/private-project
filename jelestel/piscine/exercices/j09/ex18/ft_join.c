/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_join.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelestel <jelestel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/18 15:29:53 by jelestel          #+#    #+#             */
/*   Updated: 2014/07/18 15:57:10 by jelestel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int			ft_size_tab(char **tab, int *ptr)
{
	int		i;
	int		j;
	int		ref;

	i = -1;
	ref = 0;
	while (tab[++i])
	{
		j = -1;
		while (tab[i][++j])
			ref++;
		(*ptr)++;
	}
	return (ref);
}

char		*ft_join(char **tab, char *sep)
{
	int		i;
	int		j;
	int		k;
	int		l;
	char	*str;

	i = 0;
	j = 0;
	k = 0;
	l = 0;
	while (sep[i])
		i++;
	str = (char *)malloc(sizeof(char) * (ft_size_tab(tab, &l) + i * l + 1));
	i = -1;
	while (tab[++i])
	{
		j = -1;
		while (tab[i][++j])
			str[k++] = tab[i][j];
		j = -1;
		while ((sep[++j]) && (i < l - 1))
			str[k++] = sep[j];
	}
	str[k] = '\0';
	return (str);
}
