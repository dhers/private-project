/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atof.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfanton <gfanton@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/03 16:06:42 by gfanton           #+#    #+#             */
/*   Updated: 2014/04/27 03:30:08 by gfanton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static float		ft_nlen(const char *s)
{
	if (*s && (*s >= 48 && *s <= 57))
		return (ft_nlen(s + 1) + 1);
	return (0);
}

static float		ft_atoi_three(const char *str)
{
	float			a;

	if (*str && (*str >= 48 && *str <= 57))
	{
		a = (*str - 48) / ft_pow(10, ft_nlen(str) - 1);
		return (ft_atoi_three(str + 1) + a);
	}
	return (0);
}

static float		ft_atoi_two(const char *str)
{
	float			a;

	if (*str && (*str >= 48 && *str <= 57))
	{
		a = (*str - 48) * ft_pow(10, ft_nlen(str) - 1);
		return (ft_atoi_two(str + 1) + a);
	}
	else if (*str == '.' || *str == ',')
		ft_atoi_three(str + 1);
	return (0);
}

float				ft_atof(const char *str)
{
	while (ft_isspace(*str))
		str++;
	if (*str == '-')
		return (-1 * ft_atoi_two(str + 1));
	if (*str == '+')
		return (ft_atoi_two(str + 1));
	return (ft_atoi_two(str));
}
