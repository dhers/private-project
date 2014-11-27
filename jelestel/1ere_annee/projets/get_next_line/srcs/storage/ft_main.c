/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_main.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelestel <jelestel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/07 22:32:38 by jelestel          #+#    #+#             */
/*   Updated: 2014/11/10 14:07:09 by jelestel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <string.h>
#include <sys/wait.h>

int get_next_line(int fd, char **line);

int		main(int ac, char **argv)
{
	int i;
	int	j;
	int	k;
	int n = '\n';
	char *line;
	if (ac < 3)
		return (1);
	i = open(argv[1], O_RDONLY);
	j = open(argv[2], O_RDONLY);
	k = open("me.txt", O_WRONLY | O_CREAT | O_TRUNC, 0666);
	if ((i == -1) || (j == -1) || (k == -1))
	{
		printf("error\n");
		close(i);
		close(j);
		close(k);
		return (-1);
	}
	while (get_next_line(i, &line) == 1)
	{
		write(k, line, strlen(line));
		write(k, &n, 1);
		free(line);
		if (get_next_line(j, &line) == 1)
		{
			write(k, line, strlen(line));
			write(k, &n, 1);
			free(line);
		}
	}
	return (0);
}
