/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelestel <jelestel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/07 09:04:19 by jelestel          #+#    #+#             */
/*   Updated: 2014/07/08 13:54:11 by jelestel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_eight_queens_puzzle(void);

int	main()
{
	int	i;

	i = ft_eight_queens_puzzle();
	printf("%d\n", i);
	return (0);
}
