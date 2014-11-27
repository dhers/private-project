/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelestel <jelestel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/11 14:36:00 by jelestel          #+#    #+#             */
/*   Updated: 2014/07/14 16:33:39 by jelestel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char		*ft_concat_params(int argc, char **argv)
{
	int		i;
	int		j;
	int		ref;
	char	*str;

	i = 0;
	ref = 0;
	while (++i < argc)
	{
		j = 0;
		while (argv[i][j++])
			ref++;
	}
	str = (char *)malloc(sizeof(char) * (ref + 1 + argc));
	i = 0;
	ref = 0;
	while (++i < argc)
	{
		j = 0;
		while (argv[i][j])
			str[ref++] = argv[i][j++];
		str[ref++] = '\n';
	}
	str[ref] = '\0';
	return (str);
}
