/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpedro <kpedro@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/09 14:06:30 by kpedro            #+#    #+#             */
/*   Updated: 2015/01/06 02:04:45 by kpedro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	char	*mem;

	if (size == 0)
		return (0);
	else
	{
		mem = (void *)malloc(size);
		if (mem == NULL)
			return (NULL);
		ft_bzero(mem, size);
		return (mem);
	}
}
