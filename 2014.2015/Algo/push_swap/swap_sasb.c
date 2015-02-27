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

void	swap_sa(int	*tabA, int *lenA)
{
	int	tmp;

	tmp = tabA[0];
	if (*lenA > 1)
	{
		tabA[0] = tabA[1];
		tabA[1] = tmp;
		write(1, "sa ", 3);
	}
}

void	swap_sb(int *tabB, int *lenB)
{
	int	tmp;

	tmp = tabB[0];
	if (*lenB > 1)
	{
		tabB[0] = tabB[1];
		tabB[1] = tmp;
		write(1, "sb ", 3);
	}
}	

void	swap_ss(int *tabB, int *tabA, int *lenA, int *lenB)
{
	swap_sa(tabA, lenA);
	swap_sb(tabB, lenB);
	write(1, "ss ", 3);
}