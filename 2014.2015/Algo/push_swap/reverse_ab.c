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

void	reverse_a(int *tabA, int *lenA)
{
	int	tmp;
	int	i;
	int	j;

	j = 0;
	i = *lenA - 1;
	tmp = tabA[i];
	while (i > j)
	{
		tabA[i] = tabA[i - 1];
		i--;
	}
	tabA[0] = tmp;
	write(1, "rra ", 3);
}

void	reverse_b(int *tabB, int *lenB)
{
	int	tmp;
	int	i;
	int	j;

	j = 0;
	i = *lenB - 1;
	tmp = tabB[i];
	while (i > j)
	{
		tabB[i] = tabB[i - 1];
		i--;
	}
	tabB[0] = tmp;
	write(1, "rrb ", 3);
}

void	reverse_ab(int *tabB, int *tabA, int *lenB, int *lenA)
{
	reverse_b(tabB, lenB);
	reverse_a(tabA, lenA);
	write(1, "rrr ", 3);
}