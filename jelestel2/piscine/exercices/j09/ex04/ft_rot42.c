/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rot42.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelestel <jelestel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/18 10:07:43 by jelestel          #+#    #+#             */
/*   Updated: 2014/07/18 10:24:15 by jelestel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_rot42(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
	{
		if ((str[i] >= 'a' && str[i] <= 'j') || (str[i] >= 'A'
				&& str[i] <= 'J'))
			str[i] += 16;
		else if ((str[i] > 'J' && str[i] <= 'Z') || (str[i] > 'j'
					&& (str[i] <= 'z')))
			str[i] -= 10;
	}
	return (str);
}
