/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_pushback.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpedro <kpedro@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/20 10:22:21 by kpedro            #+#    #+#             */
/*   Updated: 2015/01/20 10:22:22 by kpedro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "liste.h"

void	pushback(t_mylist **begin_list, char *str)
{
	t_mylist	*new_maillon;

	new_maillon = create_elem(str);
	if (*begin_list == NULL)
		*begin_list = new_maillon;
	else
	{
		t_mylist	*tmp;
		tmp = *begin_list;
		while (tmp->next != NULL)
		{
			tmp = tmp->next;
		}
		tmp->next = new_maillon;
		new_maillon->prev = tmp;
	}
}