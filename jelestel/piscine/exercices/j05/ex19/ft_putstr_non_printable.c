/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelestel <jelestel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/10 17:32:29 by jelestel          #+#    #+#             */
/*   Updated: 2014/07/10 19:04:12 by jelestel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		ft_len3(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_putnbr_base2(int nbr, char *base)
{
	if (nbr < 0)
	{
		ft_putchar('-');
		ft_putnbr_base2(nbr * (-1), base);
	}
	else if (nbr < ft_len3(base))
		ft_putchar(base[nbr]);
	else
	{
		ft_putnbr_base2(nbr / ft_len3(base), base);
		ft_putnbr_base2(nbr % ft_len3(base), base);
	}
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((str[i] < 32) || (str[i] == 127))
		{
			ft_putchar('\\');
			if (str[i] < 16)
				ft_putchar('0');
			ft_putnbr_base2(str[i], "0123456789abcdef");
		}
		else
			ft_putchar(str[i]);
		i++;
	}
}
