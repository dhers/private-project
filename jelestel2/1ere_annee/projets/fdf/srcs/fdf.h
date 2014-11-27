/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelestel <jelestel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/24 16:05:13 by jelestel          #+#    #+#             */
/*   Updated: 2014/11/24 17:10:34 by jelestel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FDF_H
# define FDF_H

#include "libft.h"
#include "get_next_line.h"
#include <stdio.h>

typedef struct s_var	t_var;

struct 		s_var
{
	int		i;
	int		j;
};

int			**parse(char *file);

#endif
