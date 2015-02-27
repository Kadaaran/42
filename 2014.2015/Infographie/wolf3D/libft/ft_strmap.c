/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpedro <kpedro@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/11 14:57:51 by kpedro            #+#    #+#             */
/*   Updated: 2014/11/18 18:03:00 by kpedro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*dest;
	int		i;
	int		c;

	if (s == NULL)
		return (NULL);
	if (s && f)
	{
		c = ft_strlen(s);
		dest = ft_strnew(c + 1);
		i = 0;
		if (f == NULL)
			return (ft_strdup(s));
		while (i < c)
		{
			dest[i] = f(s[i]);
			i++;
		}
		dest[i] = '\0';
		return (dest);
	}
	return (NULL);
}
