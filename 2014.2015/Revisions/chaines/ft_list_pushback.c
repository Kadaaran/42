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

void	ft_list_pushback(t_list **begin_list, void *str)
{
	t_list	*new_maillon;

	new_maillon = ft_create_elem(str);
	if (*begin_list == NULL)
		*begin_list = new_maillon;
	else
	{
		t_list	*tmp;
		tmp = *begin_list;
		while (tmp->next != NULL)
		{
			tmp = tmp->next;
		}
		tmp->next = new_maillon;
	}
}