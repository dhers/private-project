/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   formes.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelestel <jelestel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/19 19:00:39 by jelestel          #+#    #+#             */
/*   Updated: 2014/07/20 17:07:17 by jelestel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "colle_2.h"

t_tab		*ft_init_tab2(t_tab *tab)
{
	tab[6].f = &ft_carre;
	tab[6].cmp = &ft_check_space;
	tab[6].str = "rectangle";
	tab[7].f = &ft_carre;
	tab[7].cmp = &ft_check_reverse_space;
	tab[7].str = "carre inverse";
	tab[8].f = &ft_carre;
	tab[8].cmp = &ft_check_reverse_space;
	tab[8].str = "rectangle inverse";
	/*tab[9].f = &sastantua;
	tab[9].cmp = &ft_strcmp;
	tab[9].str = "sastantua";
	tab[10].f = &sastantua;
	tab[10].cmp = &ft_check_reverse_space;
	tab[10].str = "sastantua inverse";*/
	return (tab);
}

char		*ft_carre(int l, int c, char *str)
{
	t_solve	i;

	i.c = 0;
	i.i = 0;
	while ((++i.c <= c) && (str))
	{
		i.l = 0;
		while (++i.l <= l)
		{
			if ((i.c == 1) || (i.c == c) || (i.l == 1) || (i.l == l))
				str[i.i++] = '*';
			else
				str[i.i++] = ' ';
		}
		if (i.c != c)
			str[i.i++] = '\n';
	}
	str[i.i++] = '\n';
	str[i.i++] = '\0';
	return (str);
}

int			ft_check_reverse_space(char *src, char *str)
{
	int		i;

	i = 0;
	if ((str[0] == '\0') || ((str[0] == '\n') && (str[1] == '\n')))
		return (-1);
	while ((src[i]) && (str[i]))
	{
		if (((src[i] == ' ') && (str[i] == ' ')) || ((src[i] != ' ')
			&& (str[i] != ' ') && (src[i] != '\n')
			&& (str[i] != '\n')))
			return (-1);
		i++;
	}
	return (0);
}

/*char

int			ft_found_heigth(int n)
{
	int		i;

	i = 0;
	while (n > ft_base(i))
		i++;
	if (n == ft_base(i))
		return (i);
	else
		return (-1);
}*/
