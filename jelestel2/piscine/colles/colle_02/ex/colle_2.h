/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle_2.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelestel <jelestel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/19 10:12:25 by jelestel          #+#    #+#             */
/*   Updated: 2014/07/23 17:38:31 by jelestel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		COLLE_2_H
# define	COLLE_2_H

# include <unistd.h>
# include <stdlib.h>
# include <sys/types.h>
# include <sys/uio.h>

# define BUFF_SIZE 4096

typedef struct	s_solve
{
	int			i;
	int			l;
	int			c;
}				t_solve;

typedef struct	s_tab
{
	char		*str;
	char		*(*f)(int l, int c, char *str);
	int			(*cmp)(char *src, char *str);
}				t_tab;

void			ft_putchar(char c);
void			ft_putstr(char *str);
int				ft_strlen(char *str);
char			*ft_realloc(char *str, int ref, char *buf);
char			*colle00(int l, int c, char *str);
char			*colle01(int l, int c, char *str);
char			*colle02(int l, int c, char *str);
char			*colle03(int l, int c, char *str);
char			*colle04(int l, int c, char *str);
void			ft_solve(char *ref);
void			ft_putnbr(int n);
t_solve			ft_count_param(char *ref);
void			ft_print(t_solve param, char *str, int *test);
t_tab			*ft_init_tab(void);
t_tab			*ft_init_tab2(t_tab *tab);
int				ft_check_space(char *src, char *str);
int				ft_check_reverse_space(char *src, char *str);
char			*ft_carre(int l, int c, char *str);
int				ft_strcmp(char *src, char *str);
/*int				ft_base(int size);
char			*ft_print_door(int n, int i, int width, int ref);
char			*ft_print_sastantua(int n, int base, int width, int ref);
char			*ft_solve_sastantua(int n, int base);
char			*sastantua(int size);
int				ft_found_heigth(int n);*/

#endif
