/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelestel <jelestel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/07 09:06:53 by jelestel          #+#    #+#             */
/*   Updated: 2014/07/07 09:22:36 by jelestel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int	sol;

	if (nb < 0)
		sol = 0;
	else
		sol = 1;
	while (nb > 1)
		sol = sol * nb--;
	return (sol);
}
