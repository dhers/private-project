/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stock_par.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelestel <jelestel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/14 15:26:11 by jelestel          #+#    #+#             */
/*   Updated: 2014/07/14 21:17:17 by jelestel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		FT_STOCK_PAR_H
# define	FT_STOCK_PAR_H

#include <stdlib.h>

char				**ft_split_whitespaces(char *str);
int					ft_strlen(char *str);
char				*ft_strdup(char *str);
void				ft_putchar(char c);
struct s_stock_par	*ft_param_to_tab(int ac, char **av);
void				ft_show_tab(struct s_stock_par *par);

typedef struct	s_stock_par
{
	int		size_params;
	char	*str;
	char	*copy;
	char	**tab;
}				t_stock_par;

#endif
