/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelestel <jelestel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/07 10:27:18 by jelestel          #+#    #+#             */
/*   Updated: 2014/07/09 20:45:19 by jelestel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if ((nb < 2) && (nb > -2))
		return (0);
	else if (nb == 2147483647)
		return (1);
	else if (nb < 0)
		return (ft_is_prime(nb * (-1)));
	while ((i * i < nb) && (nb % i != 0))
	{
		if (i > 2)
			i += 2;
		else
			i++;
	}
	if ((i < nb) && (nb % i == 0))
		return (0);
	else
		return (1);
}
