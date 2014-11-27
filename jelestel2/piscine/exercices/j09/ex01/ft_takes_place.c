/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelestel <jelestel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/18 09:23:37 by jelestel          #+#    #+#             */
/*   Updated: 2014/07/18 16:27:37 by jelestel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_takes_place(int hour)
{
	printf("THE FOLLOWING TAKES PLACE BETWEEN ");

	if (hour == 0)
		printf("12.00 A.M. AND 01.00 A.M.\n");
	else if (hour < 11)
		printf("%i.00 A.M. AND %i.00 A.M.\n", hour, hour + 1);
	else if (hour == 11)
		printf("11.00 A.M. AND 12.00 P.M.\n");
	else if (hour == 12)
		printf("12.00 P.M. AND 01.00 P.M.\n");
	else if (hour < 23)
		printf("%i.00 P.M. AND %i.00 P.M.\n", hour - 12, hour - 11);
	else if (hour == 23)
		printf("11.00 P.M. AND 12.00 A.M.\n");
}
