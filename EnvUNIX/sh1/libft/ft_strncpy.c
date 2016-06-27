/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpedro <kpedro@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 13:48:26 by kpedro            #+#    #+#             */
/*   Updated: 2014/11/21 14:16:14 by kpedro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, char *src, size_t n)
{
	size_t c;

	c = 0;
	if (src[c] == 0)
		return (0);
	while (src[c] != '\0' && c < n)
	{
		dst[c] = src[c];
		c++;
	}
	while (c < n)
	{
		dst[c] = '\0';
		c++;
	}
	dst[c] = '\0';
	return (dst);
}
