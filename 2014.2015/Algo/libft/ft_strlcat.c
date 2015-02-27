/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpedro <kpedro@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/07 14:40:02 by kpedro            #+#    #+#             */
/*   Updated: 2015/01/06 02:08:58 by kpedro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include "libft.h"
#include <string.h>

size_t		ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t		i;
	size_t		dst_mem;

	dst_mem = ft_strlen(dst);
	i = 0;
	if (size <= dst_mem)
		return (size + ft_strlen(src));
	while (dst_mem + i < (size - 1) && src[i] != '\0')
	{
		dst[i + dst_mem] = src[i];
		i++;
	}
	dst[i + dst_mem] = '\0';
	return (dst_mem + ft_strlen(src));
}
