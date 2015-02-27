/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpedro <kpedro@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/26 01:59:03 by kpedro            #+#    #+#             */
/*   Updated: 2015/02/02 17:22:08 by kpedro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	get_algo(int *tabA, int *tabB, int *lenA, int *lenB)
{
	int	i;
	int	j;

	i = 0;
	j = 1;

	while (i < (*lenA - 1))
	{
		if (tabA[i] > tabA[i + 1])
		{
			while (*lenA > 0)
			{
				if (tabA[0] > tabA[1])
			 		swap_sa(tabA, lenA);
				push_ab(tabA, tabB, lenA, lenB);
			}
			while (*lenB > 0)
			{
				if (tabB[0] < tabB[1])
					swap_sb(tabB, lenB);
				push_ba(tabA, tabB, lenA, lenB);
			}
			i = -1;
		}
		i++;
	}
}

int 	main(int argc, char **argv)
{
	int *tabA;
	int	*tabB;
	int lenA;
	int	lenB;
	int	i;

	i = 0;
	lenA = argc - 1;
	lenB = 0;
	if (argc == 1)
	{
		write(1, "Erreur\n", 6);
		return (0);
	}
	if ((tabA = (int *)malloc(sizeof(int) * (argc - 1))) == NULL)
		return (-1);
	if ((tabB = (int *)malloc(sizeof(int) * (argc - 1))) == NULL)
			return (-1);
	while (i < lenA)
	{
		tabA[i] = ft_atoi(argv[i + 1]);
		i++;
	}
	get_algo(tabA, tabB, &lenA, &lenB);
	ft_print(tabA, tabB, lenA, lenB);
	return (0);
}
