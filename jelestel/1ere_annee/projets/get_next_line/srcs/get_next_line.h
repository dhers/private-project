/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelestel <jelestel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 16:13:47 by jelestel          #+#    #+#             */
/*   Updated: 2014/11/12 19:33:26 by jelestel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include "libft.h"

# define BUFF_SIZE 100

typedef struct s_env	t_env;

struct		s_env
{
	char	*save;
	int		fd;
};

int			get_next_line(const int fd, char **line);

#endif
