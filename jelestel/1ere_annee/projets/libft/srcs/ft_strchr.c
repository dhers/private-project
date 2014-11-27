/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelestel <jelestel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 15:57:23 by jelestel          #+#    #+#             */
/*   Updated: 2014/11/07 16:35:00 by jelestel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strchr(const char *s, int c)
{
	char	*temp;
	size_t	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
		{
			temp = (char *)&s[i];
			return (temp);
		}
		i++;
		if (s[i] == (char)c)
		{
			temp = (char *)&s[i];
			return (temp);
		}
	}
	return (NULL);
}
