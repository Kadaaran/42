/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpedro <kpedro@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/20 10:21:43 by kpedro            #+#    #+#             */
/*   Updated: 2015/01/20 10:21:44 by kpedro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "liste.h"

t_list *ft_create_elem(void *str)
{
	t_list	*new_maillon;

	new_maillon = (t_list *)malloc(sizeof(t_list));
	new_maillon->data = str;
	new_maillon->next = NULL;

	return (new_maillon);
}