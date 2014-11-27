/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle00.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarouss <aarouss@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/05 15:14:18 by aarouss           #+#    #+#             */
/*   Updated: 2014/07/20 18:03:32 by jelestel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "colle_2.h"

char		*colle00(int l, int c, char *str)
{
	t_solve	i;

	i.c = 0;
	i.i = 0;
	while ((++i.c <= c) && (str))
	{
		i.l = 0;
		while (++i.l <= l)
		{
			if (((i.c == 1) || (i.c == c)) && ((i.l == 1) || (i.l == l)))
				str[i.i++] = 'o';
			else if ((i.c == 1) || (i.c == c))
				str[i.i++] = '-';
			else if ((i.l == 1) || (i.l == l))
				str[i.i++] = '|';
			else
				str[i.i++] = ' ';
		}
		str[i.i++] = '\n';
	}
	str[i.i++] = '\0';
	return (str);
}

char		*colle01(int l, int c, char *str)
{
	t_solve	i;

	i.c = 0;
	i.i = 0;
	while ((++i.c <= c) && (str))
	{
		i.l = 0;
		while (++i.l <= l)
		{
			if (((i.l == 1) && (i.c == 1)) || ((i.l == l) && (i.c == c)))
				str[i.i++] = '/';
			else if (((i.c == 1) && (i.l == l)) || ((i.l == 1) && (i.c == c)))
				str[i.i++] = '\\';
			else if ((i.c == 1) || (i.l == 1) || (i.c == c) || (i.l == l))
				str[i.i++] = '*';
			else
				str[i.i++] = ' ';
		}
		str[i.i++] = '\n';
	}
	str[i.i++] = '\0';
	return (str);
}

char		*colle02(int l, int c, char *str)
{
	t_solve	i;

	i.c = 0;
	i.i = 0;
	while ((++i.c <= c) && (str))
	{
		i.l = 0;
		while (++i.l <= l)
		{
			if ((i.c == 1) && ((i.l == 1) || (i.l == l)))
				str[i.i++] = 'A';
			else if ((i.c == c) && ((i.l == 1) || (i.l == l)))
				str[i.i++] = 'C';
			else if ((i.c == 1) || (i.l == 1) || (i.c == c) || (i.l == l))
				str[i.i++] = 'B';
			else
				str[i.i++] = ' ';
		}
		str[i.i++] = '\n';
	}
	str[i.i++] = '\0';
	return (str);
}

char		*colle03(int l, int c, char *str)
{
	t_solve	i;

	i.c = 0;
	i.i = 0;
	while ((++i.c <= c) && (str))
	{
		i.l = 0;
		while (++i.l <= l)
		{
			if ((i.l == 1) && ((i.c == 1) || (i.c == c)))
				str[i.i++] = 'A';
			else if ((i.l == l) && ((i.c == 1) || (i.c == c)))
				str[i.i++] = 'C';
			else if ((i.c == 1) || (i.l == 1) || (i.c == c) || (i.l == l))
				str[i.i++] = 'B';
			else
				str[i.i++] = ' ';
		}
		str[i.i++] = '\n';
	}
	str[i.i++] = '\0';
	return (str);
}

char		*colle04(int l, int c, char *str)
{
	t_solve	i;

	i.c = 0;
	i.i = 0;
	while ((++i.c <= c) && (str))
	{
		i.l = 0;
		while (++i.l <= l)
		{
			if ((i.l == 1) && (i.c == 1))
				str[i.i++] = 'A';
			else if (((i.c == 1) && (i.l == l)) || ((i.l == 1) && (i.c == c)))
				str[i.i++] = 'C';
			else if ((i.l == l) && (i.c == c))
				str[i.i++] = 'A';
			else if ((i.c == 1) || (i.l == 1) || (i.c == c) || (i.l == l))
				str[i.i++] = 'B';
			else
				str[i.i++] = ' ';
		}
		str[i.i++] = '\n';
	}
	str[i.i++] = '\0';
	return (str);
}
