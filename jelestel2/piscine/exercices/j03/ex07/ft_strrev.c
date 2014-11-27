/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelestel <jelestel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/04 11:00:14 by jelestel          #+#    #+#             */
/*   Updated: 2014/07/04 13:17:55 by jelestel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char		*ft_strrev(char *str)
{
	int		i;
	int		j;
	char	tmp;

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
