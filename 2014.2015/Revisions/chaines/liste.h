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

typedef struct		s_list
{
	struct s_list	*next;
	void			*data;

}					t_list;

t_list 				*ft_create_elem(void *str);
void				ft_list_pushback(t_list **begin_list, void *str);
void				ft_list_push_front(t_list **begin_list, void *data);
int 				ft_list_size(t_list **begin_list);
void 				ft_list_reverse(t_list **begin_list);


#endif
