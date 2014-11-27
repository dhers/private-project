/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelestel <jelestel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/14 16:21:56 by jelestel          #+#    #+#             */
/*   Updated: 2014/07/14 18:08:10 by jelestel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char **ft_split_whitespaces(char *str);
void	ft_print_words_tables(char **tab);

int	main(int ac, char **av)
{
	char **tab;
	int	i;

	(void)av;
	if (ac == 2)
	{
		i = 0;
		tab = ft_split_whitespaces("coucou, tu veux voir\nma\tbite ?");
		ft_print_words_tables(tab);
	}
	return (0);
}
