/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wolf3D.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpedro <kpedro@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/08 02:57:36 by kpedro            #+#    #+#             */
/*   Updated: 2015/01/08 02:57:38 by kpedro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WOLF3D_H
# define WOLF3D_H
# include <mlx.h>
# include <unistd.h>
# include "libft.h"
# include "get_next_line.h"
# define HEIGHT 1600
# define WIDTH 1600

typedef struct	s_env
{
	void		*mlx;
	void		*win;
	float		l_max;
	float		column_max;
	int			**tab;
	void		*img;
	int			xd;
	int			yd;


}				t_env;

int				**get_map(char *file, float *column_max, float *l_max, int fd);

#endif