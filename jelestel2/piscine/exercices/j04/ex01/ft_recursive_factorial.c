/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelestel <jelestel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/07 09:17:47 by jelestel          #+#    #+#             */
/*   Updated: 2014/07/07 09:31:55 by jelestel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_factorial(int nb)
{
	int	sol;

	if ((nb < 0) || (nb > 12))
		sol = 0;
	else
		sol = nb;
	if (nb > 1)
		sol = sol * ft_recursive_factorial(nb - 1);
	return (sol);
}
