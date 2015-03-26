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
	t_mylist	*my_list; // set the list0

	my_list = NULL; //initialiser la liste a NULL
	my_list = create_elem("lalala"); // create a new element
	pushback(&my_list, "ahahahah"); // add a new elem at the end
	pushfront(&my_list, "uesshhhhh"); // add au debut
	printf("%d\n", list_size(&my_list));
	print(&my_list);
	return (0);
}