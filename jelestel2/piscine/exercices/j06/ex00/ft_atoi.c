/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelestel <jelestel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/04 13:22:47 by jelestel          #+#    #+#             */
/*   Updated: 2014/07/04 14:29:14 by jelestel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_exp(int n, int exp)
{
	int	i;

	i = 1;
	if (exp == 0)
		return (1);
	while (exp > 0)
	{
		i = i * n;
		exp--;
	}
	return (i);
}

int	ft_atoi(char *str)
{
	int	i;
	int	j;
	int	sol;

	i = 0;
	j = 0;
	sol = 0;
	while (str[i])
		i++;
	i--;
	while (str[j])
	{
		if (str[j] != '-')
			sol = sol + (str[j] - 48) * ft_exp(10, i);
		i--;
		j++;
	}
	if (str[0] == '-')
		sol = sol * (-1);
	return (sol);
}
