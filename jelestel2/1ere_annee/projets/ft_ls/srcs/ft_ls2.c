/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ls2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelestel <jelestel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/17 11:51:23 by jelestel          #+#    #+#             */
/*   Updated: 2014/11/24 14:08:26 by jelestel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"
#include <stdlib.h>
#include <stdio.h>
#include <sys/stat.h>

int				ft_dec_to_oct(int n)
{
	int			i;
	int			j;

	i = 0;
	j = 0;
	while (n > 0)
	{
		i = i + ((n % 8) * ft_power(10, j));
		n = n / 8;
		j++;
	}
	return (i);
}

char			*ft_realloc(char *s1, char *s2)
{
	char		*tmp;

	tmp = ft_strjoin(s1, s2);
	free(s1);
	return (tmp);
}

char			*ft_tab_rights(int n)
{
	static char	**type;

	if (!(type))
	{
		type = (char **)malloc(sizeof(char *) * 8);
		type[0] = ft_strdup("---");
		type[1] = ft_strdup("--x");
		type[2] = ft_strdup("-w-");
		type[3] = ft_strdup("-wx");
		type[4] = ft_strdup("r--");
		type[5] = ft_strdup("r-x");
		type[6] = ft_strdup("rw-");
		type[7] = ft_strdup("rwx");
	}
	return (type[n]);
}

char			*ft_type(mode_t tmp)
{
	if (S_ISFIFO(tmp))
		return ("p");
	if (S_ISDIR(tmp))
		return ("d");
	if (S_ISREG(tmp))
		return ("-");
	if (S_ISLNK(tmp))
		return ("l");
	if (S_ISSOCK(tmp))
		return ("s");
	if (S_ISCHR(tmp))
		return ("c");
	if (S_ISBLK(tmp))
		return ("b");
	if (S_ISWHT(tmp))
		return ("w");
	return (NULL);
}

char			*ft_right(char *nbr)
{
	int			i;
	char		*tmp;

	i = 0;
	tmp = ft_strdup("");
	while(nbr[i])
	{
		tmp = ft_realloc(tmp, ft_tab_rights(nbr[i] - 48));
		i++;
	}
	free(nbr);
	return (tmp);
}
