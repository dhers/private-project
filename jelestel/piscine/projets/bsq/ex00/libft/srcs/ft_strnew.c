/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgoeminn <cgoeminn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/06 17:36:35 by cgoeminn          #+#    #+#             */
/*   Updated: 2014/07/19 15:52:01 by cgoeminn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strnew(int size)
{
	char	*str;

	str = (char*)malloc(sizeof(char) * (size));
	if (str)
	{
		ft_bzero(str, size);
		return (str);
	}
	return (NULL);
}
