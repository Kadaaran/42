/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpedro <kpedro@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/20 10:21:22 by kpedro            #+#    #+#             */
/*   Updated: 2015/01/20 10:21:24 by kpedro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "liste.h"

int main(void)
{
	t_list	*my_list; // set the list0

	my_list = NULL; //initialiser la liste a NULL
	my_list = ft_create_elem("lalala"); // create a new element
	ft_list_pushback(&my_list, "ahahahah"); // add a new elem at the end
	ft_list_push_front(&my_list, "uesshhhhh");
	printf("%d\n", ft_list_size(&my_list));
	while (my_list) // afficher la liste
	{
		printf("%s\n", my_list->data);
		my_list = my_list->next;
	}
	return (0);
}