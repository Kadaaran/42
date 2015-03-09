/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_ab.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpedro <kpedro@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/26 22:58:23 by kpedro            #+#    #+#             */
/*   Updated: 2015/01/26 22:58:26 by kpedro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_ba(t_env *e)
{
	int	i;
	int	j;

	i = e->len1;
	j = 0;
	while (i > j)
	{
		e->tab1[i] = e->tab1[i - 1];
		i--;
	}
	e->tab1[0] = e->tab2[0];
	while (j < (e->len2 - 1))
	{
		e->tab2[j] = e->tab2[j + 1];
		j++;
	}
	(e->len2)--;
	(e->len1)++;
	write(1, "pa ", 3);
}

void	push_ab(t_env *e)
{
	int	i;
	int	j;

	i = 0;
	j = e->len2;
	while (j > i)
	{
		e->tab2[j] = e->tab2[j - 1];
		j--;
	}
	e->tab2[0] = e->tab1[0];
	while (i < (e->len1 - 1))
	{
		e->tab1[i] = e->tab1[i + 1];
		i++;
	}
	(e->len2)++;
	(e->len1)--;
	write(1, "pb ", 3);
}
