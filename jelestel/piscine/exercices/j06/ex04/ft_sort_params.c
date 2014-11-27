/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelestel <jelestel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/10 11:17:54 by jelestel          #+#    #+#             */
/*   Updated: 2014/07/10 11:53:34 by jelestel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void		ft_putchar(char c);

void		ft_putstr(char *str)
{
	while (*str)
		ft_putchar(*str++);
}

int			ft_strcmp(char *s1, char *s2)
{
	int		i;

	i = 0;
	while ((s1[i] == s2[i]) && (s1[i]) && (s2[i]))
		i++;
	return (s1[i] - s2[i]);
}

int			main(int ac, char **av)
{
	int		i;
	char	*tmp;

	i = 0;
	ac--;
	av++;
	while (i < ac - 1)
	{
		if (ft_strcmp(av[i], av[i + 1]) >= 0)
		{
			tmp = av[i];
			av[i] = av[i + 1];
			av[i + 1] = tmp;
			i = 0;
		}
		else
			i++;
	}
	i = 0;
	while (i < ac)
	{
		ft_putstr(av[i++]);
		ft_putchar('\n');
	}
	return (0);
}
