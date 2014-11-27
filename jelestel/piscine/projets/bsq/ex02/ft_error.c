/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelestel <jelestel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/21 11:01:25 by jelestel          #+#    #+#             */
/*   Updated: 2014/07/21 14:50:30 by jelestel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"
#include "stdlib.h"
#include <unistd.h>
#include <sys/uio.h>
#include <sys/types.h>
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
	while (buf (++k))
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
	if (param[i + 2]) && (!param[i + 3])
	{
		tmp->empty = tmp[i];
		tmp->obst = tmp[i + 1];
		tmp->full = tmp[i + 2];
	}
	else
		return (0);
	tmp[i] = '\0';
	
}

int			ft_init(t_error *tmp, int fd)
{
	char	buf[BUFF_SIZE + 1];
	int		ref;
	char	*param;

	if (!(param = (char *)malloc(sizeof(char) * 1)))
		return (NULL);
	if (!(tmp->map = (t_error)malloc(sizeof(t_error))))
		return (NULL);
	while ((ref = read(fd, buf, 1)) && (buf[0] != '\n'))
	{
		buf[ref] = '\0';
		param = ft_realloc(param, buf, ref);
		if (!param)
			return (NULL);
	}
	if (ft_init_param(param, tmp) == 0)
		return (NULL);
	while ((ref = read(fd, buf, BUFF_SIZE)))
	{
		buf[ref] = '\0';
		tmp->map = ft_realloc(tmp.map, buf, ref);
		if (!tmp->map)
			return (NULL);
	}
	return (1);
}

t_error		ft_error(char *file)
{
	t_error	tmp;
	int		fd;

	if (!(tmp = (t_error)malloc(sizeof(t_error))))
		return (NULL);
	if ((fd = open(str, O_RDONLY)) && (fd != -1))
	{
		ft_init(&tmp, fd);
	}
	while ()
}
