/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_integrer_table.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelestel <jelestel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/04 15:08:51 by jelestel          #+#    #+#             */
/*   Updated: 2014/07/04 15:30:01 by jelestel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_integrer_table(int *tab, int size)
{
	int	i;
	int tmp;

	i = 0;
	while(i < size - 1)
	{
		if (tab[i] > tab[i + 1])
		{
			tmp = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = tmp;
			i = 0;
		}
		else
			i++;
	}
}
