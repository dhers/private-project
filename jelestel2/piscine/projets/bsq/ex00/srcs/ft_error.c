/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelestel <jelestel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/21 11:01:25 by jelestel          #+#    #+#             */
/*   Updated: 2014/07/22 20:35:59 by jelestel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"
#include "libft.h"
#include <unistd.h>
#include <sys/uio.h>
#include <sys/types.h>
#include <fcntl.h>
#include <stdlib.h>

char		*ft_realloc(char *str, int ref, char *buf)
{
	int		i;
	int		k;
	char	*tmp;

	i = -1;
	if (!(tmp = (char *)malloc(sizeof(char) * (ft_strlen(str) + ref + 1))))
		return (NULL);
	while (str[++i])
		tmp[i] = str[i];
	k = -1;
	while (buf[++k])
		tmp[i++] = buf[k];
	tmp[i] = '\0';
	free(str);
	return (tmp);
}

int			ft_init_param(char *param, t_error *tmp)
{
	int		i;

	i = 0;
	while ((param[i]) && (param[i] >= '0') && (param[i] <= '9'))
		i++;
	if (!(tmp->param = (t_param *)malloc(sizeof(t_param))))
		return (0);
	if ((param[i + 2]) && (!param[i + 3]))
	{
		tmp->param->empty = param[i];
		tmp->param->obst = param[i + 1];
		tmp->param->full = param[i + 2];
		param[i] = '\0';
		tmp->param->line = ft_atoi(param);
	}
	else
		return (0);
	return (1);
}

int			ft_init_list(char *buf, t_error *tmp, int fd, int ref)
{
	t_arg	ptr;
	int		i;

	i = 0;
	ptr.i = 0;
	ptr.j = 1;
	ptr.save = 0;
	ptr.error = 0;
	if (INIT8 || INIT9)
		return (0);
	while ((ref = read(fd, buf, 4096)))
	{
		ptr.k = 0;
		buf[ref] = '\0';
		while (ptr.k < ref)
		{
			ft_save_line(&ptr, buf[ptr.k], tmp);
			if (ptr.error != 0)
				return (0);
			ptr.j++;
			ptr.k++;
		}
	}
	tmp->param->col = ptr.save;
	if (ptr.i != tmp->param->line)
		return (0);
	return (1);
}

int			ft_init(t_error *tmp, int fd)
{
	char	*buf;
	int		ref;
	char	*param;

	if (INIT1 || INIT3)
		return (0);
	while ((ref = read(fd, buf, 1)) && (buf[0] != '\n'))
	{
		buf[ref] = '\0';
		param = ft_realloc(param, ref, buf);
		if (!param)
			return (0);
	}
	if  ((ft_init_param(param, tmp) == 0) || INIT2 || INIT4)
		return (0);
	if ((ft_init_list(buf, tmp, fd, ref)) == 0)
		return (0);
	free(buf);
	return (1);
}

t_error		*ft_error(char *file)
{
	t_error	*tmp;
	int		fd;

	if (!(tmp = (t_error *)malloc(sizeof(t_error))))
		return ((t_error *)0);
	if ((fd = open(file, O_RDONLY)) && (fd != -1))
	{
		if ((ft_init(tmp, fd)) == 0)
			return ((t_error *)0);
		if (close(fd) == -1)
		{
			write(2, "close() error\n", 14);
			return ((t_error *)0);
		}
	}
	else
		write(2, "open() error\n", 13);
	return (tmp);
}
