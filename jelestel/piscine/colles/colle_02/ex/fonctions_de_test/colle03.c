/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle03.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelestel <jelestel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/05 22:25:12 by jelestel          #+#    #+#             */
/*   Updated: 2014/07/05 22:25:55 by jelestel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	colle(int l, int c)
{
	int	i;
	int	j;

	i = 1;
	while (i <= c)
	{
		j = 1;
		while (j <= l)
		{
			if ((j == 1) && ((i == 1) || (i == c)))
				ft_putchar('A');
			else if ((j == l) && ((i == 1) || (i == c)))
				ft_putchar('C');
			else if ((i == 1) || (j == 1) || (i == c) || (j == l))
				ft_putchar('B');
			else
				ft_putchar(' ');
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}
