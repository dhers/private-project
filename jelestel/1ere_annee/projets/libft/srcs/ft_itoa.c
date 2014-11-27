/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelestel <jelestel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 18:04:20 by jelestel          #+#    #+#             */
/*   Updated: 2014/11/24 14:15:35 by jelestel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

size_t		ft_size_n(int n)
{
	size_t	i;

	i = 1;
	if (n < 0)
		i++;
	else
		n *= -1;
	while (n < (-10))
	{
		n /= 10;
		i++;
	}
	return (i);
}

char		*ft_itoa(int n)
{
	size_t	ref;
	size_t	i;
	char	*tmp;

	ref = ft_size_n(n);
	i = 0;
	if (!(tmp = ft_memalloc(ref + 1)))
		return (NULL);
	if (n > 0)
		n *= -1;
	while ((i < ref) && (n <= (-10)))
	{
		tmp[i] = ((n % 10) * -1) + 48;
		n /= 10;
		i++;
	}
	tmp[i++] = -n + 48;
	if (i < ref)
		tmp[i] = '-';
	return (ft_strrev(tmp));
}
