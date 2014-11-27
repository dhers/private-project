/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelestel <jelestel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/07 10:01:51 by jelestel          #+#    #+#             */
/*   Updated: 2014/07/07 10:19:32 by jelestel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_fibonacci(int index)
{
	if (index < 1)
		return (0);
	else if (index < 2)
		return (1);
	else
	{
		index = ft_fibonacci(index - 2) + ft_fibonacci(index - 1);
		return (index);
	}
}
