/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelestel <jelestel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 16:10:40 by jelestel          #+#    #+#             */
/*   Updated: 2014/11/04 19:19:35 by jelestel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strrchr(const char *s, int c)
{
	char	*temp;
	size_t	i;

	temp = NULL;
	i = 0;
	while (s[i])
	{
		if (s[i] == ((char)c))
			temp = (char *)&s[i];
		i++;
		if (s[i] == ((char)c))
			temp = (char *)&s[i];
	}
	return (temp);
}
