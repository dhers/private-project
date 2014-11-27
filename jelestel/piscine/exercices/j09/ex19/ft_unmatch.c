/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unmatch.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelestel <jelestel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/18 16:00:08 by jelestel          #+#    #+#             */
/*   Updated: 2014/07/18 16:12:28 by jelestel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_count(int *tab, int length, int ref)
{
	int	i;
	int	j;

	i = -1;
	j = 0;
	while (++i < length)
	{
		if (tab[i] == ref)
			j++;
	}
	return (j);
}

int		ft_unmatch(int *tab, int length)
{
	int	i;

	i = -1;
	while (++i < length)
	{
		if (ft_count(tab, length, tab[i]) % 2 != 0)
			return (tab[i]);
	}
	return (0);
}
