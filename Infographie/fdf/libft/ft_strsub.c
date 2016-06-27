/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpedro <kpedro@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/10 16:13:23 by kpedro            #+#    #+#             */
/*   Updated: 2014/11/18 22:18:41 by kpedro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	unsigned int	k;
	char			*ret;

	i = start;
	k = 0;
	ret = (char*)ft_memalloc(sizeof(char) * len + 1);
	if (ret == NULL)
		return (NULL);
	while (i < start + len)
	{
		ret[k] = s[i];
		i++;
		k++;
	}
	ret[k] = '\0';
	return (ret);
}
