/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpedro <kpedro@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/11 13:37:19 by kpedro            #+#    #+#             */
/*   Updated: 2014/11/21 17:49:21 by kpedro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*dest;
	int		lens;

	if (s1 == NULL && s2 == NULL)
		return ((char *)NULL);
	if (s1 && s2 == NULL)
		return (ft_strdup(s1));
	if (s2 && s1 == NULL)
		return (ft_strdup(s2));
	lens = ft_strlen(s1) + ft_strlen(s2);
	dest = (char *)malloc(sizeof(*dest) * (lens + 1));
	if (dest == NULL)
		return (NULL);
	ft_strcpy(dest, s1);
	ft_strcat(dest, s2);
	return (dest);
}
