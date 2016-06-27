/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpedro <kpedro@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/11 15:36:47 by kpedro            #+#    #+#             */
/*   Updated: 2014/11/18 22:17:32 by kpedro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		c;
	int		i;
	char	*dest;

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
			dest[i] = f(i, s[i]);
			i++;
		}
		dest[i] = '\0';
		return (dest);
	}
	return (NULL);
}
