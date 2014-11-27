/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelestel <jelestel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/14 16:21:56 by jelestel          #+#    #+#             */
/*   Updated: 2014/07/14 17:35:12 by jelestel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char **ft_split_whitespaces(char *str);

int	main(int ac, char **av)
{
	char **tab;
	int	i;

	i = 0;
	if (ac == 2)
	{
		tab = ft_split_whitespaces(av[1]);
		while (tab[i])
			printf("%s\n", tab[i++]);
	}
	return (0);
}
