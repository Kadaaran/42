/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpedro <kpedro@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/27 03:34:33 by kpedro            #+#    #+#             */
/*   Updated: 2015/01/27 03:34:36 by kpedro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate_a(t_env *e)
{
	int	i;
	int	tmp;
	int	j;

	i = 0;
	j = e->len1 - 1;
	tmp = e->tab1[0];
	while (i < j)
	{
		e->tab1[i] = e->tab1[i + 1];
		i++;
	}
	e->tab1[j] = tmp;
	write(1, "ra ", 3);
}

void	rotate_b(t_env *e)
{
	int	i;
	int	tmp;
	int	j;

	i = 0;
	j = e->len2 - 1;
	tmp = e->tab2[0];
	while (i < j)
	{
		e->tab2[i] = e->tab2[i + 1];
		i++;
	}
	e->tab2[j] = tmp;
	write(1, "rb ", 3);
}

void	rotate_ab(t_env *e)
{
	rotate_a(e);
	rotate_b(e);
	write(1, "rr ", 3);
}
