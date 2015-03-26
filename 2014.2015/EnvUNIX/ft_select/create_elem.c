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

t_mylist *create_elem(char *str)
{
	t_mylist	*new_maillon;

	new_maillon = (t_mylist *)malloc(sizeof(t_mylist));
	new_maillon->data = str;
	new_maillon->next = new_maillon;
	new_maillon->prev = new_maillon;
	return (new_maillon);
}