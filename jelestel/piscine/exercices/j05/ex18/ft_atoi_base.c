/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelestel <jelestel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/10 16:06:32 by jelestel          #+#    #+#             */
/*   Updated: 2014/07/10 19:01:04 by jelestel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_len2(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int		ft_exp(int n, int exp)
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

int		ft_found_ref(char c, char *base)
{
	int	i;

	i = 0;
	while ((c != base[i]) && (base [i]))
		i++;
	if (!base[i])
		return (0);
	return (i);
}

int		ft_atoi_base(char *str, char *base)
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
			sol = sol + (ft_found_ref(str[j], base)) * ft_exp(ft_len2(base), i);
		i--;
		j++;
	}
	if ((str[0] == '-') || (str[0] == '+'))
		sol = sol * (-1);
	return (sol);
}
