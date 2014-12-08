/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelestel <jelestel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/24 16:05:06 by jelestel          #+#    #+#             */
/*   Updated: 2014/12/08 02:26:04 by jelestel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <errno.h>

char		*ft_realloc(char *s1, char *s2)
{
	char	*tmp;

	tmp = ft_strjoin(s1, s2);
	free(s1);
	return (tmp);
}

t_file		*ft_set_line_fdf(char *line)
{
	char	**tmp;
	t_file	*file;
	int		i;
	int		j;

	tmp = ft_strsplit(line, ' ');
	i = 0;
	while ((tmp[i]))
		i++;
	file = (t_file *)malloc(sizeof(t_file) * i);
	j = -1;
	while (tmp[++j])
	{
		file[j].cl = i;
		file[j].z = atoi(tmp[j]);
	}
	j = -1;
	while (tmp[++j])
		free(tmp[j]);
	free(tmp);
	return (file);
}

t_list		*ft_lstlast(t_list **lst)
{
	t_list	*tmp;

	tmp = *lst;
	while (tmp->next)
		tmp = tmp->next;
	return (tmp);
}

t_list		*parse(char *file)
{
	int		fd;
	char	*line;
	t_file	*tmp;
	t_list	*lst;

	fd = open(file, O_RDONLY);
	if (fd == -1)
	{
		perror("fdf");
		printf("errno = %i\n", errno);
		return (NULL);
	}
	line = NULL;
	lst = NULL;
	while (get_next_line(fd, &line))
	{
		tmp = (t_file *)malloc(sizeof(t_file));
		if (!lst)
			lst = ft_lstnew(tmp, sizeof(tmp));
		else
			ft_lstadd(&lst, ft_lstnew(tmp, sizeof(tmp)));
		free(tmp);
		ft_lstlast(&lst)->content = ft_set_line_fdf(line);
		free(line);
	}
	return (lst);
}
