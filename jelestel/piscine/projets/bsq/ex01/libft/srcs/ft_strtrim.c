/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfanton <gfanton@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/30 03:07:57 by gfanton           #+#    #+#             */
/*   Updated: 2013/12/05 00:13:58 by gfanton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(const char *s)
{
	int		i;

	if (!s)
		return (NULL);
	while (ft_isspace(*s))
		++s;
	i = ft_strlen(s) - 1;
	while (ft_isspace(s[i]))
		--i;
	return (ft_strsub(s, 0, i + 1));
}
