/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ls.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelestel <jelestel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/10 15:53:47 by jelestel          #+#    #+#             */
/*   Updated: 2014/11/17 11:58:14 by jelestel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LS_H
# define FT_LS_H

#include "libft.h"

typedef struct s_ls		t_ls;
typedef struct s_stat	t_stat;

struct		s_ls
{
	char	*optf;
	char	*optp;
	char	**tabtp;
};

struct		s_stat
{
	char	*type;
	char	*rights;
	char	*uname;
	char	*ugrp;
	char	*size;
	char	*date;
	char	*name;
};

int			ft_dec_to_oct(int n);
t_ls		*parse_ls(int ac, char **av);
void		ft_ls(char *path, t_ls *opt);
void		print_io(char c);

#endif
