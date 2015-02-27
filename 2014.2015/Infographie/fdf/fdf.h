/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpedro <kpedro@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/05 04:58:07 by kpedro            #+#    #+#             */
/*   Updated: 2014/12/05 04:59:36 by kpedro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FDF_H
# define FDF_H
# include <mlx.h>
# include <unistd.h>
# include "libft.h"
# include "get_next_line.h"
# define HEIGHT 1300
# define WIDTH 1300

typedef struct	s_env
{
	void		*mlx;
	void		*win;
	float		l_max;
	float		column_max;
	int			**tab;
	void		*img;
	char		*str;
	int			bpp;
	int			sl;
	int			endian;
	int			xd;
	int			yd;
	int			zm;
	int			zoom;
}				t_env;

typedef	struct	s_d
{
	int			xincr;
	int			yincr;
	int			dx;
	int			dy;
}				t_d;

typedef struct	s_pt2d
{
	float		x;
	float		y;
	int			z;
	int			color;
}				t_pt2d;

int				**get_file(char *file, float *column_max, float *l_max, int fd);
void			draw_file(t_env *e);
int				key_hook(int keycode, t_env *e);
int				expose_hook(t_env *e);
void			draw_line(t_env *env, t_pt2d pt1, t_pt2d pt2, int color);
int				get_color_x(t_env *e, int x, int y);
int				get_color_y(t_env *e, int x, int y);

#endif
