/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_spy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelestel <jelestel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/18 12:11:31 by jelestel          #+#    #+#             */
/*   Updated: 2014/07/18 13:31:12 by jelestel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
		write(1, &*str++, 1);
}

int		ft_check(char *str, char *to_find)
{
	int	i;
	int j;

	i = 0;
	j = 0;
	while ((str[i] < 'A') || (str[i] > 'z') || (str[i] > 'Z' && str[i] < 'a'))
		i++;
	while ((str[i]) && (to_find[j]))
	{
		if ((to_find[j] == str[i]) || (to_find[j] == str[i] + 32) ||
			(to_find[j] == str[i] - 32))
		{
			i++;
			j++;
		}
		else
			return (0);
	}
	return (1);
}

int		ft_search(int ac, char **av)
{
	int	i;
	int	j;

	i = -1;
	while (++i < ac)
	{
		j = ft_check(av[i], "president");
		if (ft_check(av[i], "powers") + ft_check(av[i], "attack") + j)
			return (1);
	}
	return (0);
}

int		main(int ac, char **av)
{
	ac--;
	av++;
	if ((ac != 0) && (ft_search(ac, av) == 1))
		ft_putstr("Alert!!!\n");
	return (0);
}
