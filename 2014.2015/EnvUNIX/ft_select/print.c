/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpedro <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/24 11:12:16 by kpedro            #+#    #+#             */
/*   Updated: 2015/03/24 11:17:26 by kpedro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "liste.h"

void	print(t_mylist **begin_list)
{
	t_mylist	*tmp;

	tmp = *begin_list;
	while(tmp)
	{
		ft_putendl(tmp->data);
		tmp = tmp->next;
	}
}

// void	print_rev()
// {
// 	int	c;
// 	c = 0;
// }
