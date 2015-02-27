/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpedro <kpedro@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/14 15:00:27 by kpedro            #+#    #+#             */
/*   Updated: 2014/12/20 12:52:59 by kpedro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(int argc, char **argv)
{
	int		i;
	int		j;

	j = 0;
	i = 0;
	if (argc != 3)
	{
		write(1, "\n", 1);
		return (0);
	}
	while (argv[1][i] != '\0')
	{
		if (comp(argv[1], i, argv[1][i]))
			ft_putchar(argv[1][i]);
		i++;
	}
	while (argv[2][j] != '\0')
	{
		if (comp(argv[1], i, argv[2][j]) && comp(argv[2], j, argv[2][j]))
			ft_putchar(argv[2][j]);
		j++;
	}
	return (0);
}
