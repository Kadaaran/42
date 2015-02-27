/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpedro <kpedro@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/20 13:24:05 by kpedro            #+#    #+#             */
/*   Updated: 2014/12/03 19:24:50 by kpedro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
//#include "libft.h"

int	main(int argc, char **argv)
{
	(void)argv;
	(void)argc;
//	int	fd;
	char *line;

//	fd = open(", O_RDONLY);
	while (get_next_line(0, &line) > 0)
		ft_putendl(line);
//	close(fd);
	return (0);
}
