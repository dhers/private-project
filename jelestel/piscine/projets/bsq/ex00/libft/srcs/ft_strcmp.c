/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgoeminn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/09 18:24:11 by cgoeminn          #+#    #+#             */
/*   Updated: 2014/07/15 20:40:40 by cgoeminn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		if (!*s1 && !*s2)
			return (0);
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
