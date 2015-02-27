/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_pushfront.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpedro <kpedro@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/20 10:22:28 by kpedro            #+#    #+#             */
/*   Updated: 2015/01/20 10:22:29 by kpedro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "liste.h"

void ft_list_push_front(t_list **begin_list, void *str)
{
	t_list	*new_maillon;

	new_maillon = ft_create_elem(str);
	if (*begin_list == NULL)
		*begin_list = new_maillon;
	else
	{
		new_maillon->next = *begin_list;
		*begin_list = new_maillon;
	}
}
