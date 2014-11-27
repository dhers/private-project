/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelestel <jelestel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/19 10:11:20 by jelestel          #+#    #+#             */
/*   Updated: 2014/07/20 17:07:52 by jelestel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "colle_2.h"

void		ft_putchar(char c)
{
	write (1, &c, 1);
}

void		ft_putstr(char *str)
{
	int		i;

	i = 0;
	while (str[i])
		ft_putchar(str[i++]);
}

int			ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char		*ft_realloc(char *str, int ref, char *buf)
{
	int		i;
	int		k;
	char	*tmp;

	i = -1;
	tmp = (char *)malloc(sizeof(char) * (ft_strlen(str) + ref + 1));
	if (!tmp)
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

int			main(int ac, char **av)
{
	char	buf[BUFF_SIZE + 1];
	char	*save;
	int		ref;

	save = (char *)malloc(sizeof(char) * 1);
	if ((!buf) || (!save))
		return (1);
	ac--;
	av++;
	while ((ref = read(0, buf, BUFF_SIZE)))
	{
		if ((ref == 2)  && (buf[0] == '\n'))
			ref++;
		else
		{
			buf[ref] = '\0';
			save = ft_realloc(save, ref, buf);
			if (!save)
				return (1);
		}
	}
	ft_solve(save);
	free(save);
	ft_putchar('\n');
	return (0);
}
