/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelestel <jelestel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 16:13:01 by jelestel          #+#    #+#             */
/*   Updated: 2014/11/14 14:30:07 by jelestel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/uio.h>
#include <unistd.h>
#include <stdio.h>

#define ENV	get_env(fd)

t_env				*get_env(int fd)
{
	static t_list	**lst;
	t_list			*tmp;
	t_env			*env;

	if (!(env = (t_env *)malloc(sizeof(t_env))))
		return (NULL);
	env->save = NULL;
	if (!(*lst))
	{
		lst = (t_list **)malloc(sizeof(t_list *));
		*lst = ft_lstnew(env, sizeof(t_env));
		((t_env *)((*lst)->content))->fd = fd;
	}
	tmp = *lst;
	while ((((t_env *)(tmp->content))->fd != fd) && (tmp->next))
		tmp = tmp->next;
	if ((!(tmp->next)) && (((t_env *)(tmp->content))->fd != fd))
	{
		tmp->next = ft_lstnew(env, sizeof(t_env));
		tmp = tmp->next;
		((t_env *)(tmp->content))->fd = fd;
	}
	free(env);
	return (tmp->content);
}

int					ft_set_line(char **line, char *str, int fd)
{
	size_t			i;
	char			*tmp;

	i = 0;
	if (ft_strchr(str, '\n'))
		i = ft_strchr(str, '\n') - str;
	else
		i = ft_strlen(str);
	*line = ft_strncpy(ft_memalloc(i + 1), str, i);
	tmp = ft_strsub(str, i + 1, (ft_strlen(str) - i));
	free(ENV->save);
	ENV->save = tmp;
	return (1);
}

int					ft_read_next(int fd, char **line, char *buf)
{
	size_t			ref;
	char			*tmp;

	ref = 0;
	while ((ref = read(fd, buf, BUFF_SIZE)))
	{
		buf[ref] = '\0';
		if (ENV->save)
		{
			tmp = ft_strdup(ENV->save);
			free(ENV->save);
			if (!(ENV->save = ft_strjoin(tmp, buf)))
				return (-1);
			free(tmp);
		}
		else
			ENV->save = ft_strdup(buf);
		if ((ft_strchr(ENV->save, '\n'))
				|| (ENV->save[ft_strlen(ENV->save)] == EOF))
			return (ft_set_line(line, ENV->save, fd));
	}
	return (-1);
}

int					get_next_line(const int fd, char **line)
{
	char			*buf;
	int				tmp;

	if (!(buf = (char *)malloc(sizeof(char) * (BUFF_SIZE + 1))))
		return (-1);
	if ((int)ENV->save == EOF)
		return (0);
	if ((!(ENV->save)) || (!(ft_strchr(ENV->save, '\n'))
			&& (ENV->save[ft_strlen(ENV->save)] != EOF)))
	{
		tmp = ft_read_next(fd, line, buf);
		free(buf);
		return (tmp);
	}
	else
	{
		tmp = ft_set_line(line, ENV->save, fd);
		free(buf);
		return (tmp);
	}
}
