/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelestel <jelestel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/11 22:48:11 by jelestel          #+#    #+#             */
/*   Updated: 2014/07/12 00:40:49 by jelestel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUDOKU_H
# define SUDOKU_H

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

void	ft_putchar(char c);
void	ft_putstr(char *str);
int		ft_error(int ac, char **av);
char	*ft_concat_params(int ac, char **av);
int		ft_solve(char *tab, int i, char *tab2, int *ptr);
int		ft_check(char *tab, int i, int ref);

#endif
