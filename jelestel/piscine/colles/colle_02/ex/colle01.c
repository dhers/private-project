/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle01.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelestel <jelestel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/05 22:19:45 by jelestel          #+#    #+#             */
/*   Updated: 2014/07/19 15:25:38 by jelestel         ###   ########.fr       */
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
			if (((i == 1) && (j == l)) || ((j == 1) && (i == c)))
				ft_putchar('\\');
			else if (((j == 1) && (i == 1)) || ((j == l) && (i == c)))
				ft_putchar('/');
			else if ((i == 1) || (j == 1) || (i == c) || (j == l))
				ft_putchar('*');
			else
				ft_putchar(' ');
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}
