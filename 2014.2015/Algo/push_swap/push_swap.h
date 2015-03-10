/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpedro <kpedro@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/26 02:05:56 by kpedro            #+#    #+#             */
/*   Updated: 2015/01/26 02:05:59 by kpedro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <limits.h>
# include <string.h>

typedef struct		s_env
{
	int				i;
	int				*tab1;
	int				*tab2;
	int				len1;
	int				len2;
	int				len_max;
}					t_env;

typedef struct		s_flags
{
	char			v;
	char			p;
}					t_flags;

int					ft_atoi(const char *str);
void				swap_sa(t_env *e);
void				swap_sb(t_env *e);
void				swap_ss(t_env *e);
void				push_ab(t_env *e);
void				push_ba(t_env *e);
void				ft_print(t_env *e);
void				reverse_rotate_a(t_env *e);
void				reverse_b(t_env *e);
void				reverse_ab(t_env *e);
void				rotate_a(t_env *e);
void				rotate_b(t_env *e);
void				rotate_ab(t_env *e);
void				get_algo(t_env *e);
int					check_line(t_env *e);
int					check_double(t_env *e);
int					check_order(t_env *e);
char				*ft_itoa(int n);
int					ft_strequ(const char *s1, const char *s2);
size_t				ft_strlen(const char *s);
int					ft_strcmp(const char *s1, const char *s2);

#endif
