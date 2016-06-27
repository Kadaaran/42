/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpedro <kpedro@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/05 04:04:31 by kpedro            #+#    #+#             */
/*   Updated: 2014/12/20 12:52:45 by kpedro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void	ft_zoom(int keycode, t_env *e)
{
	if (keycode == 65453 && e->zm != 0.5)
	{
		e->zoom -= 100;
		e->zm -= 0.5;
	}
	if (keycode == 65451)
	{
		e->zoom += 100;
		e->zm += 0.5;
	}
}

int		key_hook(int keycode, t_env *e)
{
	if (keycode == 65307)
		exit(0);
	if (keycode == 65363)
		e->xd += 25;
	if (keycode == 65361)
		e->xd -= 25;
	if (keycode == 65362)
		e->yd -= 25;
	if (keycode == 65364)
		e->yd += 25;
	mlx_destroy_image(e->mlx, e->img);
	e->img = mlx_new_image(e->mlx, WIDTH, HEIGHT);
	mlx_clear_window(e->mlx, e->win);
	expose_hook(e);
	return (0);
}

int		expose_hook(t_env *e)
{
	draw_file(e);
	mlx_put_image_to_window(e->mlx, e->win, e->img, 0, 0);
	return (0);
}

int		main(int argc, char **argv)
{
	t_env	e;
	int		fd;

	fd = 0;
	if (argc == 2)
	{
		e.xd = 450;
		e.yd = 200;
		e.tab = get_file(argv[1], &e.column_max, &e.l_max, fd);
		e.mlx = mlx_init();
		e.win = mlx_new_window(e.mlx, WIDTH, HEIGHT, "SEMPAI");
		e.img = mlx_new_image(e.mlx, WIDTH, HEIGHT);
		e.str = mlx_get_data_addr(e.img, &(e.bpp), &(e.sl), &(e.endian));
		mlx_key_hook(e.win, key_hook, &e);
		mlx_expose_hook(e.win, expose_hook, &e);
		mlx_loop(e.mlx);
		return (0);
	}
	return (0);
}
