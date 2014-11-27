/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelestel <jelestel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/04 14:42:48 by jelestel          #+#    #+#             */
/*   Updated: 2014/07/08 14:27:22 by jelestel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putnbr(int n);

void	ft_putchar(char c);

void	ft_sort_integrer_table(int *tab, int size);

int	main()
{
	int	tab[10];
	int	i;

	i = 0;
	tab[0] = 9;
	tab[1] = 8;
	tab[2] = 7;
	tab[3] = 8;
	tab[4] = 9;
	tab[5] = 0;
	tab[6] = 5;
	tab[7] = 98;
	tab[8] = 7;
	tab[9] = 0;
	while(i < 10)
	{
		ft_putnbr(tab[i++]);
		ft_putchar(' ');
	}
	i = 0;
	ft_putchar('\n');
	ft_sort_integrer_table(tab, 10);
	while(i < 10)
	{
		ft_putnbr(tab[i++]);
		ft_putchar(' ');
	}
	return (0);
}
