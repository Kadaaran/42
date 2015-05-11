/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpedro <kpedro@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/08 02:57:44 by kpedro            #+#    #+#             */
/*   Updated: 2015/01/08 02:57:46 by kpedro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "wolf3d.h"

int		key_hook(int keycode, t_env *e)
{
	(void)e;
	if(keycode == 53)
		exit(0);
	// mlx_destroy_image(e->mlx, e->img);
	// e->img = mlx_new_image(e->mlx, WIDTH, HEIGHT);
	// mlx_clear_window(e->mlx, e->win);
	// expose_hook(e);
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
		e.tab = get_map(argv[1], &e.column_max, &e.l_max, fd);
		e.mlx = mlx_init();
		e.win = mlx_new_window(e.mlx, WIDTH, HEIGHT, "WOLF3D");
		e.img = mlx_new_image(e.mlx, WIDTH, HEIGHT);
		mlx_key_hook(e.win, key_hook, &e);
		mlx_loop(e.mlx);
		return (0);
	}
	return (0);
}
