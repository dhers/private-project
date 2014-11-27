/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_ls.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelestel <jelestel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/10 17:36:19 by jelestel          #+#    #+#             */
/*   Updated: 2014/11/27 15:33:50 by jelestel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"
#include <stdlib.h>
#include <stdio.h>

void		print_io(char c)
{
	ft_putstr_fd("ls: illegal option -- ", 2);
	ft_putchar_fd(c, 2);
	ft_putstr_fd("\nusage: ls [-Ralrt] [file ...]\n", 2);
}

int			check_optp(char c, t_ls *tmp)
{
	int		i;
	char	*ref;

	i = 0;
	ref = ft_strncpy(ft_memalloc(4), "Ralrt", 5);
	while ((ref[i]) && (ref[i] != c))
		i++;
	if ((ref[i] == c) || ((c == '-')))
	{
		if (!(tmp->optp))
			tmp->optp = ft_strdup(&c);
		else
			tmp->optp = ft_realloc(tmp->optp, &c);
			/*str = ft_strdup(tmp->optp);
			free(tmp->optp);
			tmp->optp = ft_strjoin(str, &c);
			free(str);*/
		free(ref);
		return (1);
	}
	free(ref);
	return (0);
}

t_ls		*parse_ls(int ac, char **av)
{
	t_ls	*tmp;
	size_t	i;
	size_t	j;

	if ((ac == 0) || (!(tmp = (t_ls *)malloc(sizeof(t_ls)))))
		return (NULL);
	i = 0;
	while (av[i] && (av[i][0] == '-'))
	{
		j = 1;
		while (av[i][j])
		{

			if (check_optp(av[i][j], tmp))
				j++;
			else
			{
				print_io(av[i][j]);
				free(tmp);
				return(NULL);
			}
		}
		i++;
	}
	tmp->tabtp = &av[i];
	return (tmp);
}
