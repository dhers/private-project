/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle00.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarouss <aarouss@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/05 15:14:18 by aarouss           #+#    #+#             */
/*   Updated: 2014/07/05 16:11:58 by jelestel         ###   ########.fr       */
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
			if (((i == 1) || (i == c)) && ((j == 1) || (j == l)))
				ft_putchar('o');
			else if ((i == 1) || (i == c))
				ft_putchar('-');
			else if ((j == 1) || (j == l))
				ft_putchar('|');
			else
				ft_putchar(' ');
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}
