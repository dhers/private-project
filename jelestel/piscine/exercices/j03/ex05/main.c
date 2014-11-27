/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelestel <jelestel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/04 10:31:32 by jelestel          #+#    #+#             */
/*   Updated: 2014/07/10 10:31:39 by jelestel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strlen(char *str);

int	main()
{
	char	*str="coucou, comment va tu ?";
	int	i = 0;

	printf("%d\n", i);
	i = ft_strlen(str);
	printf("%d, %d\n", i, (int)strlen((char *)str));
	return(0);
}
