/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_sasb.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpedro <kpedro@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/26 17:51:14 by kpedro            #+#    #+#             */
/*   Updated: 2015/01/26 17:51:16 by kpedro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_sa(t_env *e)
{
	int	tmp;

	tmp = e->tab1[0];
	if (e->len1 > 1)
	{
		e->tab1[0] = e->tab1[1];
		e->tab1[1] = tmp;
		write(1, "sa ", 3);
	}
}

void	swap_sb(t_env *e)
{
	int	tmp;

	tmp = e->tab2[0];
	if (e->len2 > 1)
	{
		e->tab2[0] = e->tab2[1];
		e->tab2[1] = tmp;
		write(1, "sb ", 3);
	}
}

void	swap_ss(t_env *e)
{
	swap_sa(e);
	swap_sb(e);
	write(1, "ss ", 3);
}
