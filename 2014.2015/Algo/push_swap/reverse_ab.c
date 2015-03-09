/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_ab.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpedro <kpedro@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/27 03:01:15 by kpedro            #+#    #+#             */
/*   Updated: 2015/01/27 03:01:18 by kpedro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	reverse_rotate_a(t_env *e)
{
	int	tmp;
	int	i;
	int	j;

	j = 0;
	i = e->len1 - 1;
	tmp = e->tab1[i];
	while (i > j)
	{
		e->tab1[i] = e->tab1[i - 1];
		i--;
	}
	e->tab1[0] = tmp;
	write(1, "rra ", 4);
}

void	reverse_b(t_env *e)
{
	int	tmp;
	int	i;
	int	j;

	j = 0;
	i = e->len2 - 1;
	tmp = e->tab2[i];
	while (i > j)
	{
		e->tab2[i] = e->tab2[i - 1];
		i--;
	}
	e->tab2[0] = tmp;
	write(1, "rrb ", 3);
}

void	reverse_ab(t_env *e)
{
	reverse_b(e);
	reverse_rotate_a(e);
	write(1, "rrr ", 3);
}
