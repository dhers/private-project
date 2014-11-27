/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maintest.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelestel <jelestel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/17 12:12:21 by jelestel          #+#    #+#             */
/*   Updated: 2014/11/19 16:55:07 by jelestel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/stat.h>
#include "ft_ls.h"
#include <dirent.h>
#include <stdlib.h>
#include <sys/types.h>
#include <pwd.h>
#include <uuid/uuid.h>
#include <stdio.h>
#include <grp.h>
#include <unistd.h>
#include <time.h>

int main(int ac, char **av)
{
	/*DIR *fd;
	struct dirent *file;
	struct stat *buf;
	fd = opendir(".");
	while ((file = readdir(fd)))
	{
		buf = (struct stat *)malloc(sizeof(struct stat));
		stat(file->d_name, buf);
		printf("%s -->", file->d_name);
		printf("%s\n", ft_itoa(ft_dec_to_oct(buf->st_mode & S_IFMT)));
		//printf("%s : ", file->d_name);
		free(buf);
	}*/
	ac--;
	av++;
	while (*av)
	{
		write(1, *av, ft_;;strlen(*av));
		ft_putchar('\n');
		av++;
	}
	return (0);
}
