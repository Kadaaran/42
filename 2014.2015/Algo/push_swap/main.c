/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpedro <kpedro@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/26 01:59:03 by kpedro            #+#    #+#             */
/*   Updated: 2015/02/02 17:22:08 by kpedro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int			check_order(t_env *e)
{
	int	i;

	i = 0;
	while (i < e->len1 - 1)
	{
		if (e->tab1[i] > e->tab1[i + 1])
			return (0);
		i++;
	}
	return (1);
}

int			check_double(t_env *e)
{
	int	i;
	int	j;

	i = 0;
	while (i < e->len1)
	{
		j = i + 1;
		while (j < e->len1)
		{
			if (e->tab1[i] == e->tab1[j])
				return (-1);
			j++;
		}
		i++;
	}
	return (0);
}

static void	ft_error(void)
{
	write(2, "Error\n", 5);
	exit(1);
}

int			main(int argc, char **argv)
{
	t_env	e;
	int		i;

	i = 0;
	e.len1 = argc - 1;
	e.len2 = 0;
	e.len_max = e.len1;
	if (argc == 1)
		ft_error();
	if ((e.tab1 = (int *)malloc(sizeof(int) * (argc - 1))) == NULL)
		return (-1);
	if ((e.tab2 = (int *)malloc(sizeof(int) * (argc - 1))) == NULL)
		return (-1);
	while (i < e.len1)
	{
		e.tab1[i] = ft_atoi(argv[i + 1]);
		i++;
	}
	if (!ft_strequ(argv[i], ft_itoa(ft_atoi(argv[i]))) || (check_double(&e)))
		ft_error();
	if (check_order(&e) == 1)
		return (0);
	if (!check_order(&e))
		get_algo(&e);
	return (0);
}
