/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelestel <jelestel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/19 14:21:47 by jelestel          #+#    #+#             */
/*   Updated: 2014/07/20 15:49:22 by jelestel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "colle_2.h"

t_solve		ft_count_param(char *str)
{
	t_solve	param;

	param.c = 0;
	param.i = 0;
	while (str[param.i])
	{
		param.l = 0;
		if (str[param.i] == '\n')
			param.c++;
		while ((str[param.l]) && (str[param.l] != '\n'))
			param.l++;
		param.i++;
	}
	if (str[0] == '\n')
		param.c = 0;
	return (param);
}

int			ft_strcmp(char *src, char *str)
{
	int		i;

	i = 0;
	while ((src[i]) && (str[i]) && (str[i] == src[i]))
		i++;
	return (src[i] - str[i]);
}

int			ft_check_space(char *src, char *str)
{
	int		i;

	i = 0;
	if ((str[i] == '\0') || ((str[0] == '\n') && (str[1] == '\n')))
		return (-1);
	while ((src[i]) && (str[i]))
	{
		if (((src[i] == ' ') && (str[i] != ' ')) || ((src[i] != ' ')
			&& (str[i] == ' ')))
			return (-1);
		i++;
	}
	return (0);
}

t_tab		*ft_init_tab(void)
{
	t_tab	*tab;

	tab = (t_tab*)malloc(sizeof(t_tab) * 9);
	tab[0].f = &colle00;
	tab[0].cmp = &ft_strcmp;
	tab[0].str = "colle00";
	tab[1].f = &colle01;
	tab[1].cmp = &ft_strcmp;
	tab[1].str = "colle01";
	tab[2].f = &colle02;
	tab[2].cmp = &ft_strcmp;
	tab[2].str = "colle02";
	tab[3].f = &colle03;
	tab[3].cmp = &ft_strcmp;
	tab[3].str = "colle03";
	tab[4].f = &colle04;
	tab[4].cmp = &ft_strcmp;
	tab[4].str = "colle04";
	tab[5].f = &ft_carre;
	tab[5].cmp = &ft_check_space;
	tab[5].str = "carre";
	tab = ft_init_tab2(tab);
	return (tab);
}

void		ft_solve(char *ref)
{
	t_solve	param;
	t_tab	*tab;
	int		k;
	char	*tmp;

	param = ft_count_param(ref);
	k = 0;
	param.i = 0;
	tab = ft_init_tab();
	tmp = (char *)malloc(sizeof(char) * (param.c * param.l) + param.c + 2);
	while ((param.i < 9) && (param.c != 0) && (param.l != 0))
	{
		tmp = tab[param.i].f(param.l, param.c, tmp);
		if (tab[param.i].cmp(tmp, ref) == 0)
		{
			ft_print(param, tab[param.i].str, &k);
			k++;
		}
		//else if ()
		param.i++;
	}
	free(tmp);
	free(tab);
	if (k == 0)
		ft_putstr("aucune");
}
