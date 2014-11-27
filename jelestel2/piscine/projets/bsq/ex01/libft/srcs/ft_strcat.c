/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfanton <gfanton@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 14:16:03 by gfanton           #+#    #+#             */
/*   Updated: 2013/12/29 23:24:54 by gfanton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strcat(char *s1, const char *s2)
{
	int	index;

	index = ft_strlen(s1);
	while (*s2)
	{
		s1[index] = *s2;
		s2 = s2 + 1;
		++index;
	}
	s1[index] = '\0';
	return (s1);
}
