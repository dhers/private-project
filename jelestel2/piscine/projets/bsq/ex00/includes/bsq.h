/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelestel <jelestel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/21 11:09:40 by jelestel          #+#    #+#             */
/*   Updated: 2014/07/23 22:59:45 by jelestel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		BSQ_H
# define	BSQ_H

# define INIT1 (!(param = (char *)malloc(sizeof(char) * 1)))
# define INIT2 (!(tmp->begin = (t_list **)malloc(sizeof(t_list *) * INIT7)))
# define INIT3 (!(buf = (char *)malloc(sizeof(char) * 4096 * 1)))
# define INIT4 (!(tmp->last = (t_list **)malloc(sizeof(t_list *) * INIT7)))
# define INIT5 (ft_init_list2(&(ptr->save), &(ptr->i), &(ptr->j), tmp))
# define INIT6 (ft_do_list(tmp->begin, ptr->i - 1, ptr->j - 1, tmp->last))
# define INIT7 (tmp->param->line + 1)
# define INIT8 (!(tmp->begin[i] = (t_list *)malloc(sizeof(t_list))))
# define INIT9 (!(tmp->last[i] = (t_list *)malloc(sizeof(t_list))))

# include <stdio.h>

typedef struct		s_param
{
	int				line;
	int				col;
	char			empty;
	char			obst;
	char			full;
}					t_param;

typedef struct		s_error
{
	t_param			*param;
	char			*bit;
}					t_error;

typedef struct		s_arg
{
	int				i;
	int				j;
	int				k;
	int				save;
	int				error;
}					t_arg;

char				*ft_realloc(char *str, int ref, char *buf);
t_error				*ft_error(char *file);
int					ft_strlen(char *str);
int					ft_init(t_error *tmp, int fd);
int					ft_init_param(char *param, t_error *tmp);
int					ft_init_list(char *buf, t_error *tmp, int fd, int ref);
int					ft_init_list2(int *save, int *x, int *y, t_error *tmp);
void				ft_puterror(void);
int					ft_do_list(t_list **begin, int x, int y, t_list **last);
t_list				*ft_create_elem(int x, int y);
void				ft_save_line(t_arg *ptr, char buf, t_error *tmp);

#endif
