/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgoeminn <cgoeminn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/06 17:31:39 by cgoeminn          #+#    #+#             */
/*   Updated: 2014/07/19 15:46:04 by cgoeminn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strcat(char *s1, char *s2)
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
