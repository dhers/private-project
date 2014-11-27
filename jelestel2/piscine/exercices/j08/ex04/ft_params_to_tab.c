/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_params_to_tab.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelestel <jelestel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/14 18:12:01 by jelestel          #+#    #+#             */
/*   Updated: 2014/07/14 18:56:52 by jelestel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"

int					ft_strlen(char *str)
{
	int				i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char				*ft_strdup(char *str)
{
	int				i;
	char			*cpy;

	i = ft_strlen(str);
	cpy = (char *)malloc(sizeof(char) * (i) + 1);
	if (cpy == NULL)
		return (NULL);
	i = -1;
	while (str[++i])
		cpy[i] = str[i];
	return (cpy);
}

struct s_stock_par	*ft_param_to_tab(int ac, char **av)
{
	t_stock_par 	*tab;
	int				i;

	tab = (t_stock_par *)malloc(sizeof(t_stock_par) * (ac) + 1);
	i = -1;
	while (++i < ac)
	{
		tab[i].size_params = ft_strlen(av[i]);
		tab[i].str = av[i];
		tab[i].copy = ft_strdup(av[i]);
		tab[i].tab = ft_split_whitespaces(av[i]);
	}
	return (tab);
}
