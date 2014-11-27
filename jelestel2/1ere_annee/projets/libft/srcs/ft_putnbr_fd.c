/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelestel <jelestel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 19:26:44 by jelestel          #+#    #+#             */
/*   Updated: 2014/11/05 20:20:21 by jelestel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_write_nbr_fd(int n, int fd)
{
	if (n > -10)
		ft_putchar_fd(-n + 48, fd);
	else
	{
		ft_write_nbr_fd(n / 10, fd);
		ft_write_nbr_fd(n % 10, fd);
	}
}

void	ft_putnbr_fd(int n, int fd)
{
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		ft_write_nbr_fd(n, fd);
	}
	else
		ft_write_nbr_fd(-n, fd);
}
