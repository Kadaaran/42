/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpedro <kpedro@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/20 10:22:45 by kpedro            #+#    #+#             */
/*   Updated: 2015/01/20 10:22:46 by kpedro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "liste.h"

int list_size(t_mylist **begin_list)
{
	int		c;
	t_mylist	*tmp;

	c = 1;
	if (*begin_list == NULL)
		return (c);
	else
	{
		tmp = *begin_list;
		while(tmp->next != NULL)
		{
			tmp = tmp->next;
			c++;
		}
		return(c);
	}
}