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

void	rotate_a(int *tabA, int *lenA)
{
	int	i;
	int	tmp;
	int	j;

	i = 0;
	j = *lenA - 1;
	tmp = tabA[0];
	while (i < j)
	{
		tabA[i] = tabA[i + 1];
		i++;
	}
	tabA[j] = tmp;
	write(1, "ra ", 3);
}

void	rotate_b(int *tabB, int *lenB)
{
	int	i;
	int	tmp;
	int	j;

	i = 0;
	j = *lenB - 1;
	tmp = tabB[0];
	while (i < j)
	{
		tabB[i] = tabB[i + 1];
		i++;
	}
	tabB[j] = tmp;
	write(1, "rb ", 3);
}

void	rotate_ab(int *tabA, int *lenA, int *tabB, int *lenB)
{
	rotate_a(tabA, lenA);
	rotate_b(tabB, lenB);
	write(1, "rr ", 3);
}
