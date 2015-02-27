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

int		ft_atoi(const char *str);
void	swap_sa(int	*tabA, int *lenA);
void	swap_sb(int *tabB, int *lenB);
void	swap_ss(int *tabB, int *tabA, int *lenA, int *lenB);
void	push_ab(int *tabA, int *tabB, int *lenA, int *lenB);
void	push_ba(int *tabA, int *tabB, int *lenA, int *lenB);
void	ft_print(int *tabA, int *tabB, int lenA, int lenB);
void	reverse_a(int *tabA, int *lenA);
void	reverse_b(int *tabB, int *lenB);
void	reverse_ab(int *tabB, int *tabA, int *lenB, int *lenA);
void	rotate_a(int *tabA, int *lenA);
void	rotate_b(int *tabB, int *lenB);
void	rotate_ab(int *tabA, int *lenA, int *tabB, int *lenB);
void	get_algo(int *tabA, int *tabB, int *lenA, int *lenB);

#endif
