/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelestel <jelestel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 16:24:26 by jelestel          #+#    #+#             */
/*   Updated: 2014/11/03 17:10:29 by jelestel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strstr(const char *s1, const char *s2)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!s2[j])
		return ((char *)s1);
	while ((s1[i + j]) && (s2[j]))
	{
		if (s1[i + j] == s2[j])
			j++;
		else
		{
			j = 0;
			i++;
		}
	}
	if (!s2[j])
		return ((char *)&s1[i]);
	return (NULL);
}
