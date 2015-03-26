/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   liste.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpedro <kpedro@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/20 10:21:15 by kpedro            #+#    #+#             */
/*   Updated: 2015/01/20 10:21:16 by kpedro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LISTE_H
# define LISTE_H
# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include "libft.h"

typedef struct		s_mylist
{
	struct s_mylist	*next;
	struct s_mylist	*prev;
	char			*data;

}					t_mylist;

t_mylist 			*create_elem(char *str);
void				pushback(t_mylist **begin_list, char *str);
void				pushfront(t_mylist **begin_list, char *data);
int 				list_size(t_mylist **begin_list);
void 				print(t_mylist **begin_list);

#endif
