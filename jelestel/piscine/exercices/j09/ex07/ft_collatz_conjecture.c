/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_collatz_conjecture.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelestel <jelestel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/18 11:59:53 by jelestel          #+#    #+#             */
/*   Updated: 2014/07/18 12:07:49 by jelestel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int		ft_collatz_conjecture(unsigned int base)
{
	if ((base % 2 == 0) && (base != 1))
		return (1 + ft_collatz_conjecture(base / 2));
	else if ((base % 2 != 0) && (base != 1))
		return (1 + ft_collatz_conjecture((base * 3) + 1));
	else
		return (0);
}
