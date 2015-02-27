/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpedro <kpedro@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/27 00:31:53 by kpedro            #+#    #+#             */
/*   Updated: 2015/02/02 15:33:20 by kpedro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_print(int *tabA, int *tabB, int lenA, int lenB)
{
	int i;
	int	j;

	j = 0;
	i = 0;
	write(1, "\n", 1);
	dprintf(1, "Pile A : ");
	while (i < lenA)
	{
		dprintf(1, "%d ", tabA[i]);
		i++;
	}
	dprintf(1, "\n");
	dprintf(1, "Pile B : ");
	while (j < lenB)
	{
		dprintf(1, "%d ", tabB[j]);
		j++;
	}
	write(1, "\n", 1);
}
