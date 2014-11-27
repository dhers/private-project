/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelestel <jelestel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/21 15:28:34 by jelestel          #+#    #+#             */
/*   Updated: 2014/07/21 15:44:27 by jelestel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <sys/uio.h>
#include <sys/types.h>
#include <fcntl.h>
#include <stdlib.h>


int		main(int ac, char **av)
{
	int	fd;
	char	*buf;
	int ref;
	int	i;

	if (ac == 1)
		return (0);
	buf = (char *)malloc(sizeof(char) * 4096 + 1);
	fd = open(av[1], O_RDONLY);
	while ((ref = read(fd, buf, 4096)))
	{
		i = 0;
		buf[ref] = '\0';
		while (buf[i])
			i++;
	}
	return (0);
}
