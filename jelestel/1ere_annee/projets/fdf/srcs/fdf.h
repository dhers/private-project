/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelestel <jelestel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/24 16:05:13 by jelestel          #+#    #+#             */
/*   Updated: 2014/12/07 00:44:28 by jelestel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FDF_H
# define FDF_H

# include "libft.h"
# include "get_next_line.h"
# include <stdio.h>

typedef struct s_cord	t_cord;
typedef struct s_file	t_file;

struct		s_file
{
	int		x;
	int		y;
	int		z;
	int		cl;
};

t_list		*parse(char *file);
void		fdf(t_list **lst);

#endif
