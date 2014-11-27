/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelestel <jelestel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 18:44:39 by jelestel          #+#    #+#             */
/*   Updated: 2014/11/08 18:55:53 by jelestel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strrev(char *str)
{
	int		i;
	int		j;
	char	tmp;

	if (!str)
		return (NULL);
	i = ft_strlen(str) - 1;
	j = 0;
	while (j <= (i / 2))
	{
		tmp = str[i - j];
		str[i - j] = str[j];
		str[j] = tmp;
		j++;
	}
	return (str);
}
