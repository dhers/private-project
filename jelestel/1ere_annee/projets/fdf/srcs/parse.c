/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelestel <jelestel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/24 16:05:06 by jelestel          #+#    #+#             */
/*   Updated: 2014/11/26 16:30:23 by jelestel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

t_var		*check col(char ***map)
{
	t_var	*i;
	int		ref;

	i = (t_var *)malloc(sizeof(t_var));
	i->i = 0;
	ref = 0;
	while (*map[i->i])
	{
		i->j = 0;
		while (*map[i->i][i->j])
		{
			if (ref == 0)
				ref = i->j;
			else if (ref != i->j)
				return (NULL);
			i->j++;
		}
		i->i++;
	}
	return (i);
}

int			**parse(char *file)
{
	int		fd;
	int		**tab;
	char	***map;
	char	*line;
	t_var	i;
	t_var	*j;

	map = (char ***)malloc(sizeof(char **));
	tab = (int **)malloc(sizeof(int *))
	i.i = 0;
	line = NULL;
	fd = open(file);
	while (get_next_line(fd, &line) == 1)
	{
		map[i.i] = ft_strsplit(line);
		i.i++;
		free(line);
	}
	if (!(i.j = check_col(map)))
		return(NULL);
	i.i = 0;
	while (i.i < j->i)
	{
		i.j = 0;
		while (i.j < j->j)
		{
			tab[i.i][i.j] = ft_atoi(*map[i.i][i.j]);
			i.j++;
		}
		i.i++;
	}
	printf("")
	return (tab);
}
