/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelestel <jelestel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 12:31:58 by jelestel          #+#    #+#             */
/*   Updated: 2014/11/08 18:50:55 by jelestel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char		*ft_strmap(const char *s, char (*f)(char))
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
			tmp[i] = (*f)(s[i]);
			i++;
		}
		tmp[i] = '\0';
	}
	return (tmp);
}
