/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelestel <jelestel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 19:37:14 by jelestel          #+#    #+#             */
/*   Updated: 2014/11/04 14:08:58 by jelestel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_num_chfr(const char *str)
{
	int		i;

	i = 0;
	if ((str[0] != '-') && (!ft_isdigit(str[0])))
		return (0);
	if (str[0] == '-')
		i++;
	while (ft_isdigit(str[i]))
		i++;
	return (i);
}

int			ft_atoi(const char *str)
{
	int		i;
	int		j;
	int		ref;

	ref = 0;
	i = 0;
	j = ft_num_chfr(str);
	if (((j == 1) && (str[0] == '-')) || (j == 0))
		return (0);
	if (str[0] == '-')
		i++;
	while (i < j)
	{
		ref += (str[i] - 48) * ft_power(10, (j - i - 1));
		i++;
	}
	if (str[0] == '-')
		ref *= -1;
	return (ref);
}
