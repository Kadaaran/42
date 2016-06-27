/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test1.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpedro <kpedro@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/06 02:06:08 by kpedro            #+#    #+#             */
/*   Updated: 2014/12/20 12:52:23 by kpedro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

static void		draw_line_x(t_env *e, t_pt2d pt1, int x, int y)
{
	t_pt2d	pt2;

	pt2.x = e->xd + (x + 1 - y) *
		((1 / e->column_max) * 800) + e->l_max / 2;
	pt2.y = e->yd + (x + 1 + y) *
		((1 / e->column_max) * 800) / 2 - (e->tab[y][x + 1] * 4);
	draw_line(e, pt1, pt2, get_color_x(e, x, y));
}

static void		draw_line_y(t_env *e, t_pt2d pt1, int x, int y)
{
	t_pt2d	pt2;

	pt2.x = e->xd + (x - (y + 1)) *
		((1 / e->column_max) * 800) + e->l_max / 2;
	pt2.y = e->yd + (x + y + 1) *
		((1 / e->column_max) * 800) / 2 - (e->tab[y + 1][x] * 4);
	draw_line(e, pt1, pt2, get_color_y(e, x, y));
}

int				get_color_x(t_env *e, int x, int y)
{
	if (e->tab[y][x] > 5 && e->tab[y][x + 1] > 5)
		return (0x00FF00);
	else if ((e->tab[y][x] < 5 && e->tab[y][x + 1] > 5)
		|| (e->tab[y][x] > 5 && e->tab[y][x + 1] < 5))
		return (0x88421D);
	else if ((e->tab[y][x] < 0) && (e->tab[y][x + 1] < 0))
		return (0xFFFFFF);
	else
		return (0x74D0F1);
}

int				get_color_y(t_env *e, int x, int y)
{
	if (e->tab[y][x] > 5 && e->tab[y + 1][x] > 5)
		return (0x00FF00);
	else if ((e->tab[y][x] < 5 && e->tab[y + 1][x] > 5)
		|| (e->tab[y][x] > 5 && e->tab[y + 1][x] < 5))
		return (0x88421D);
	else if (e->tab[y][x] < 0 && e->tab[y + 1][x] < 0)
		return (0xFFFFFF);
	else
		return (0x74D0F1);
}

void			draw_file(t_env *e)
{
	int		x;
	int		y;
	t_pt2d	pt1;

	y = 0;
	while (y < e->l_max)
	{
		x = 0;
		while (x < e->column_max)
		{
			pt1.x = e->xd + (x - y) * ((1 / e->column_max) * 800)
			+ e->l_max / 2;
			pt1.y = e->yd + (x + y) *
			((1 / e->column_max) * 800) / 2 - (e->tab[y][x] * 4);
			if (x != e->column_max - 1)
				draw_line_x(e, pt1, x, y);
			if (y != e->l_max - 1)
				draw_line_y(e, pt1, x, y);
			x++;
		}
		y++;
	}
}
