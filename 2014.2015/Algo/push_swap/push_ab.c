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

void	push_ba(int *tabA, int *tabB, int *lenA, int *lenB)
{
	int	i;
	int	j;

	i = *lenA;
	j = 0;
	while (i > j)
	{
		tabA[i] = tabA[i - 1];
		i--;
	}
	tabA[0] = tabB[0];
	while (j < (*lenB - 1))
	{
		tabB[j] = tabB[j + 1];
		j++;
	}
	(*lenB)--;
	(*lenA)++;
	write(1, "pa ", 3);
}

void	push_ab(int *tabA, int *tabB, int *lenA, int *lenB)
{
	int	i;
	int	j;

	i = 0;
	j = *lenB;
	while (j > i)
	{
		tabB[j] = tabB[j - 1];
		j--;
	}
	tabB[0] = tabA[0];
	while (i < (*lenA - 1))
	{
		tabA[i] = tabA[i + 1];
		i++;
	}
	(*lenB)++;
	(*lenA)--;
	write(1, "pb ", 3);
}
