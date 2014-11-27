/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelestel <jelestel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 13:00:19 by jelestel          #+#    #+#             */
/*   Updated: 2014/11/08 18:51:25 by jelestel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char		*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	size_t	i;
	char	*tmp;

	if (!s || !(*f))
		return (NULL);
	i = ft_strlen(s);
	if ((tmp = (char *)malloc(sizeof(char) * (i + 1))))
	{
		i = 0;
		while (s[i])
		{
			tmp[i] = (*f)((unsigned int)i, s[i]);
			i++;
		}
		tmp[i] = '\0';
	}
	return (tmp);
}
