/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelestel <jelestel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/04 10:31:32 by jelestel          #+#    #+#             */
/*   Updated: 2014/07/04 13:19:41 by jelestel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

void	ft_putstr(char *str);
char	*ft_strrev(char *str);
void	ft_putchar(char c);

int	main()
{
	char	*str;


	str = malloc(42);
	puts("entrez une string");
	scanf("%s", str);
	ft_putstr(str);
	ft_putchar('\n');
	str = ft_strrev(str);
	ft_putstr(str);
	return(0);
}
