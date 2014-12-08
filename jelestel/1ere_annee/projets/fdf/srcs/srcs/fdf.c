/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelestel <jelestel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/07 00:44:49 by jelestel          #+#    #+#             */
/*   Updated: 2014/12/08 06:53:57 by jelestel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"
#include <mlx.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <math.h>

#define ABS(value) ((value) > 0 ? value : (value) * -1)
#define RGB(r, g, b) (256 * 256 * (int)(r) + 256 * (int)(g) + (int)(b))
#define MIN(a, b) (a < b ? a : b)
#define MAX(a, b) (a < b ? b : a)
#define B ((2000 / (float)(-h + 60)) + 255)
#define C 255

typedef struct s_mlx	t_mlx;

struct s_mlx
{
	void	*mlx;
	void	*win;
	int		i;
	int		j;
	t_list	*lst;
};

t_list		*en(t_list *lst, int i)
{
	int		j;
	t_list	*tmp;

	j = 1;
	tmp = lst;
	while ((tmp) && (j < i))
		tmp = tmp->next;
	return (tmp);
}

int			color(int h)
{
	int		r;
	int		g;
	int		b;

	h += 45;
	if ((h < 13) || (h > 90))
	{
		if (h < 0)
			return (RGB(0, 0, -((h + 5000) / (double)(h - 20))));
		else
			return (h < 13 ? RGB(255, 255, 102) : RGB(B, B, B));
	}
	r = h > 40 ? (int)(351 - 12.1 * h + 0.112 * h * h) : 0;
	g = (int)(361 - 9.76 * h + 0.0845 * h * h);
	b = (int)(223 - 9.39 * h + 0.0991 * h * h);
	return (RGB(r, g, b));
}

void		draw_line(void *win, void * mlx, t_file *p1, t_file *p2)
{
	int		i;
	int		tmp;

	i = p1->x;
	while (i <= p2->x)
	{
		if (p1->z < p2->z)
			tmp = (p2->z - p1->z) * ((i - p1->x) / (float)(p2->x - p1->x)) + MIN(p1->z, p2->z);
		else
			tmp = -((p1->z - p2->z) * ((i - p1->x) / (float)(p2->x - p1->x))) + MAX(p1->z, p2->z);
		mlx_pixel_put(mlx, win, i, p1->y + ((p2->y - p1->y) * (i - p1->x)) / (p2->x - p1->x), color(tmp));
		i++;
	}
}

void		draw_line2(void *win, void * mlx, t_file *p1, t_file *p2)
{
	int		i;
	int		tmp;

	i = p1->y;
	while (i <= p2->y)
	{
		if (p1->z < p2->z)
			tmp = (p2->z - p1->z) * ((i - p1->y) / (float)(p2->y - p1->y)) + MIN(p1->z, p2->z);
		else
			tmp = -((p1->z - p2->z) * ((i - p1->y) / (float)(p2->y - p1->y))) + MAX(p1->z, p2->z);
		mlx_pixel_put(mlx, win, p1->x + ((p2->x - p1->x) * (i - p1->y)) / (p2->y - p1->y), i, color(tmp));
		i++;
	}
}

void		line(void *win, void *mlx, t_file *p1, t_file *p2)
{
	int		i;
	int		j;
	int		x;
	int		y;

	i = p1->x;
	j = p1->y;
	x = p2->x;
	y = p2->y;
	if ((i <= x) && ((ABS(y - j)) <= (x - i)))
		draw_line(win, mlx, p1, p2);
    else if ((x <= i) && ((ABS(y - j)) < (i - x)))
		draw_line(win, mlx, p2, p1);
    else if (j <= y && y - j >= ABS(i - x))
		draw_line2(win, mlx, p1, p2);
    else if (j >= y && j - y > ABS(i - x))
		draw_line2(win, mlx, p2, p1);
}

void		draw(void *win, void *mlx, t_mlx *e)
{
	t_list	*tmp;
	int		i;
	int		j;
	int		k;
	int		l;

	tmp = e->lst;
	j = 1;
	while (tmp)
	{
		i = 0;
		while (i < ((t_file *)(tmp->content))->cl)
		{
			k = ((t_file *)(tmp->content))[i].x;
			l = ((t_file *)(tmp->content))[i].y;
			//printf("%i ", k);
			if ((i + 1) < ((t_file *)(tmp->content))->cl)
				line(win, mlx, (tmp->content + (i * 2 * sizeof(tmp->content_size))), (tmp->content + ((i + 1) * 2 * sizeof(tmp->content_size))));
			if ((tmp->next) && (tmp->next->content + (i * 2 * tmp->content_size)))
				line(win, mlx, (tmp->content + (i * 2 * tmp->content_size)), (tmp->next->content + (i * 2 * tmp->content_size)));
			//mlx_pixel_put(mlx, win, k, l, 0xffffff);
			i++;
		}
		//puts("<----->");
		j++;
		tmp = tmp->next;
	}
	if (win == mlx)
		puts("pouet\n");
}

void		set_cord_2(t_file *file, int h, int l, int ref, int c, int pos_ref, int pos_c)
{
	file->x = 100 + ((((l - 200) * 3 / 5) / (c)) * pos_c) + ((((l - 200) * 2 / 5) / (ref)) * ((ref - 1) - pos_ref));
	file->y = 100 + ((((h - 200) / 2) / (ref - 1)) * pos_ref) + ((((h - 200) / 2) / (c - 1)) * pos_c) - file->z;
	printf("%i, %i, %i, %i, %i, %i, x = %i, y = %i, z = %i\n", h, l, ref, c, pos_ref, pos_c, file->x, file->y, file->z);
}

void		set_cord(t_list **lst, int h, int l)
{
	t_list	*tmp;
	int		i;
	int		j;
	int		ref;

	tmp = *lst;
	ref = 0;
	while (tmp)
	{
		ref++;
		tmp = tmp->next;
	}
	tmp = *lst;
	j = 0;
	while (tmp)
	{
		i = 0;
		while (i < ((t_file *)((*lst)->content))->cl)
		{
			set_cord_2((tmp->content + (i * 2 * tmp->content_size)), h, l, ref, ((t_file *)((*lst)->content))->cl, j, i);
			i++;
		}
		j++;
		tmp = tmp->next;
	}
}

int			key_hook(int key, t_mlx *e)
{
	draw(e->win, e->mlx, e);
	if (key == 65307)
		exit(0);
	int i;
	i = -200;
	while (i < 300)
	{
		mlx_pixel_put(e->mlx, e->win, 0, i + 200, color(i / 2));
		mlx_pixel_put(e->mlx, e->win, 1, i + 200, color(i / 2));
		mlx_pixel_put(e->mlx, e->win, 2, i + 200, color(i / 2));
		mlx_pixel_put(e->mlx, e->win, 3, i + 200, color(i / 2));
		mlx_pixel_put(e->mlx, e->win, 4, i + 200, color(i / 2));
		mlx_pixel_put(e->mlx, e->win, 5, i + 200, color(i / 2));
		i++;
	}
	return (0);
}

int			expose_hook(t_mlx *e)
{
	draw(e->win, e->mlx, e);
	return (0);
}

void		fdf(t_list **lst)
{
	t_list	*tmp;
	t_mlx	e;

	tmp = *lst;
	e.mlx = mlx_init();
	e.i = ((t_file *)(tmp->content))->cl;
	e.j = 0;
	e.lst = *lst;
	while (tmp)
	{
		tmp = tmp->next;
		e.j++;
	}
	if (e.i * 5 / 6 >= e.j)
	{
		e.j = 1200 * e.j / e.i + 200;
		e.i = 1200 + 200;
	}
	else
	{
		e.i = 800 * e.i / e.j + 200;
		e.j = 800 + 200;
	}
	printf("--->%d, %d<---\n", e.i, e.j);
	set_cord(lst, e.j, e.i);
	e.win = mlx_new_window(e.mlx, e.i, e.j, "42");
	mlx_key_hook(e.win, key_hook, &e);
	mlx_loop(e.mlx);
}
