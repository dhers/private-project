/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ls.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelestel <jelestel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/14 15:07:41 by jelestel          #+#    #+#             */
/*   Updated: 2014/11/25 16:01:20 by jelestel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"
#include <dirent.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <pwd.h>
#include <grp.h>
#include <uuid/uuid.h>
#include <sys/stat.h>
#include <time.h>
#include <errno.h>

#define ELEM ((t_stat *)((*elem)->content))
#define TMP ((t_stat *)(tmp->content))

#include <stdio.h>

/*
int		ft_ls(char *path, t_ls *options)
{
	open path;
	stock path;
	trie path selon option;
	affiche path;
	si -R : recursive ft_ls dans boucle avec dossier de path;
	free path;
}
*/

char				*add_link(char *lnk)
{
	ssize_t			i;
	char			*buf;

	i = 0;
	buf = (char *)malloc(sizeof(char) * (255 + 1));
	i = readlink(lnk, buf, 255);
	buf[i] = '\0';
	lnk = ft_realloc(lnk, " -> ");
	lnk = ft_realloc(lnk, buf);
	return (lnk);
}

int					ft_fill_lst(t_list **elem, char *path)
{
	struct stat		*buf;

	if ((buf = (struct stat *)malloc(sizeof(struct stat))))
	{
		(*elem)->content = (t_stat *)malloc(sizeof(t_stat));
		lstat(path, buf);
		ELEM->type = ft_strdup(ft_type(buf->st_mode));
		ELEM->rights = ft_right(ft_itoa(ft_dec_to_oct(buf->st_mode & ~S_IFMT)));
		ELEM->links = ft_itoa(buf->st_nlink);
		ELEM->uname = getpwuid(buf->st_uid)->pw_name;
		ELEM->ugrp = getgrgid(buf->st_gid)->gr_name;
		ELEM->size = ft_itoa(buf->st_size);
		ELEM->date = ft_strdup((ctime((const time_t *)&(buf->st_mtime))) + 4);
		ELEM->name = ft_strdup(path);
		ELEM->block = buf->st_blocks;
		free(buf);
		return (ft_strlen(ELEM->size));
	}
	return (-1);
}

int					ft_lst(char *name, t_list **lst/*, char *opt, int i*/)
{
	t_stat			*tmp;
	t_list			*ptr;

	tmp = (t_stat *)malloc(sizeof(t_stat));
	/*if ((name[i] == '.') && ((!(opt)) || (ft_strchr(opt, 'a') == 0)))
		return (0);*/
	if (!(ptr = ft_lstnew(tmp, sizeof(tmp))))
		return (-1);
	free(tmp);
	ft_fill_lst(&ptr, name);
	//printf("------> %i\n", (int)ft_strlen(((t_stat*)(ptr->content))->name));
	//((t_stat *)(ptr->content))->name = ft_strdup(name);
	//printf("-----> %s\n", ((t_stat *)(ptr->content))->name);
	if (!(*lst))
		*lst = ptr;
	else
		ft_lstadd(lst, ptr);
	return (1);
}

void				print_ls_l(t_list *lst, int x, char *optp)
{
	t_list			*tmp;
	size_t			i;
	size_t			j;
	size_t			k;

	tmp = lst;
	i = 0;
	j = 0;
	k = 0;
	while (tmp)
	{
		if (!ft_strcmp(TMP->type, "l"))
			TMP->name = add_link(TMP->name);
		if ((TMP->name[x] == '.') && (!((optp)) || (ft_strchr(optp, 'a') == 0)))
			;
		else
		{
			i = i + TMP->block;
			if (j < ft_strlen(TMP->size))
				j = ft_strlen(TMP->size);
			if (k < ft_strlen(TMP->links))
				k = ft_strlen(TMP->links);
		}
		tmp = tmp->next;
	}
	printf("total %i\n", (int)i);
	tmp = lst;
	while (tmp)
	{
		if ((TMP->name[x] == '.') && (!((optp)) || (ft_strchr(optp, 'a') == 0)))
			;
		else
		{
			i = -1;
			write(1, TMP->type, ft_strlen(TMP->type));
			write(1, TMP->rights, ft_strlen(TMP->rights));
			write(1, "  ", 2);
			while (++i + ft_strlen(TMP->links) < k)
				write(1, " ", 1);
			write(1, TMP->links, ft_strlen(TMP->links));
			write(1, " ", 1);
			write(1, TMP->uname, ft_strlen(TMP->uname));
			write(1, "  ", 2);
			write(1, TMP->ugrp, ft_strlen(TMP->ugrp));
			write(1, "  ", 2);
			i = -1;
			while (++i + ft_strlen(TMP->size) < j)
				write(1, " ", 1);
			write(1, TMP->size, ft_strlen(TMP->size));
			write(1, " ", 1);
			write(1, TMP->date, 12);
			write(1, " ", 1);
			write(1, TMP->name + x, ft_strlen(TMP->name) - x);
			write(1, "\n", 1);
		}
		tmp = tmp->next;
	}
}

void				ft_print(t_list *lst, char *optp, int i)
{
	t_list			*tmp;
	static int	 test;

	tmp = lst;
	test = 0;
	/*while ((TMP->name[i] == '.') && (!((optp)) || (ft_strchr(optp, 'a') == 0)))
		tmp = tmp->next;*/
	if ((optp) && (ft_strchr(optp, 'l')))
		print_ls_l(tmp, i, optp);
	else
	{
		while (tmp)
		{
			if ((TMP->name[i] == '.') && (!((optp)) || (ft_strchr(optp, 'a') == 0)))
				;
			else
			{
				//write(1, TMP->name, ft_strlen(TMP->name));
				write(1, TMP->name + i, ft_strlen(TMP->name) - i);
				ft_putchar('\n');
				test = test + ((t_stat *)(tmp->content))->block;
			}
			tmp = tmp->next;
		}
	}
}

void				ft_ls(char *path, t_ls *opt, int i)
{
	DIR				*fd;
	struct dirent	*file;
	t_list			*lst;
	t_list			*tmp;
	char			*str;
	char			*mem;

	tmp = NULL;
	lst = NULL;
	str = ft_strsub(path, i, ft_strlen(path) - i);
	path = ft_strjoin(path, "/");
	if (!(fd = opendir(path)) && (errno == 2))
	{
		write(1, "ls: ", 4);
		write(1, path, ft_strlen(path) -1);
		write(1, ": ", 2);
		perror("");
		return ;
	}
	else if (errno == 20)
		ft_lst(path, &lst);
	else
	{
		while ((file = readdir(fd)))
		{
			mem = ft_strjoin(path, file->d_name);
			ft_lst(mem, &lst/*, opt->optf, ft_strlen(path)*/);
			free(mem);
		}
	}
	if ((opt->optp) && (ft_strchr(opt->optp, 't')))
		ft_sort_t(&lst);
	if ((opt->optp) && (ft_strchr(opt->optp, 'r')))
		ft_reverse_r(&lst);
	/*while (TAB->car)
	{
		if (ft_strchr(opt->optp, TAB->car))
			TAB->ft(lst);
	}*/
	if ((ft_strlen(str) == 1) || ((str[0] != '.') && ((!(opt->optp))
		|| (!ft_strchr(opt->optp, 'a')))) || ((opt->optp)
		&& (ft_strchr(opt->optp, 'a'))))
		ft_print(lst, opt->optp, ft_strlen(path));
	tmp = lst;
	while ((opt->optp) && (ft_strchr(opt->optp, 'R')) && (tmp))
	{
		if ((ft_strchr((TMP->type), 'd'))
			&& (strcmp((TMP->name + ft_strlen(path)), "."))
			&& (strcmp((TMP->name + ft_strlen(path)), "..")))
		{
			if ((TMP->name[ft_strlen(path)] == '.') && (!ft_strchr(opt->optp, 'a')))
				;
			else
				printf("\n%s:\n", TMP->name);
			ft_ls(((t_stat *)(tmp->content))->name, opt, ft_strlen(path));
		}
		tmp = tmp->next;
	}
	closedir(fd);
}
