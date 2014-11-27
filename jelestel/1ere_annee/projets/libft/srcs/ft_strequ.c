/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelestel <jelestel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 13:02:29 by jelestel          #+#    #+#             */
/*   Updated: 2014/11/08 18:53:22 by jelestel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_strequ(const char *s1, const char *s2)
{
	size_t	i;

	i = 0;
	if (!s1 || !s2)
		return (0);
	while ((s1[i]) && (s2[i]))
	{
		if (s1[i] != s2[i])
			return (0);
		i++;
	}
	if ((!s1[i]) && (!s2[i]))
		return (1);
	return (0);
}
