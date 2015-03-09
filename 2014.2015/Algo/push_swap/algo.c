/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpedro <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/07 01:18:41 by kpedro            #+#    #+#             */
/*   Updated: 2015/03/07 01:18:46 by kpedro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_verif(t_env *e)
{
	int	i;
	int max;

	i = 0;
	max = e->len1 - 1;
	if (!check_order(e) && (e->tab1[0] > e->tab1[1]))
		swap_sa(e);
	else if (!check_order(e) && (e->tab1[0] > e->tab1[max]))
		reverse_rotate_a(e);
	if (!check_order(e) && (e->tab1[max] < e->tab1[0]))
		reverse_rotate_a(e);
	if (!check_order(e) && (e->tab1[max - 1] > e->tab1[max]))
	{
		reverse_rotate_a(e);
		reverse_rotate_a(e);
		swap_sa(e);
		rotate_a(e);
		rotate_a(e);
	}
	if (check_order(e) == 1)
		return ;
}

void		get_algo(t_env *e)
{
	int max;

	e->i = 0;
	max = e->len1 - 1;
	ft_verif(e);
	while (e->i < (e->len1 - 1))
	{
		if (e->tab1[e->i] > e->tab1[e->i + 1])
		{
			while (e->len1 > 0)
			{
				if (e->tab1[0] > e->tab1[1])
					swap_sa(e);
				push_ab(e);
			}
			while (e->len2 > 0)
			{
				if (e->tab2[0] < e->tab2[1])
					swap_sb(e);
				push_ba(e);
			}
			e->i = -1;
		}
		e->i++;
	}
}
