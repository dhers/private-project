/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ls.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelestel <jelestel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/10 15:53:47 by jelestel          #+#    #+#             */
/*   Updated: 2014/11/24 11:35:04 by jelestel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LS_H
# define FT_LS_H

#include "libft.h"
#include <sys/stat.h>

typedef struct s_ls		t_ls;
typedef struct s_stat	t_stat;
typedef struct s_tabft	t_tabft;

struct		s_tabft
{
	char	c;
	void	(*f)(t_list **);
};

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
	char	*links;
	char	*uname;
	char	*ugrp;
	char	*size;
	char	*date;
	char	*name;
	int		block;
};

void		ft_reverse_r(t_list **lst);
void		ft_sort_t(t_list **);
char		*ft_type(mode_t tmp);
char		*ft_right(char *nbr);
char		*ft_realloc(char *s1, char *s2);
int			ft_dec_to_oct(int n);
t_ls		*parse_ls(int ac, char **av);
void		ft_ls(char *path, t_ls *opti, int i);
void		print_io(char c);

#endif
