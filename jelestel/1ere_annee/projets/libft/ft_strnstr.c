/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelestel <jelestel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 17:05:27 by jelestel          #+#    #+#             */
/*   Updated: 2014/11/03 17:23:23 by jelestel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if ((!s2[j]) || (n == 0))
		return ((char *)s1);
	while ((s1[i + j]) && (s2[j]) && (j < n))
	{
		if (s1[i + j] == s2[j])
			j++;
		else
		{
			j = 0;
			i++;
		}
	}
	if ((!s2[j]) || (j == n))
		return ((char *)&s1[i]);
	return (NULL);
}
