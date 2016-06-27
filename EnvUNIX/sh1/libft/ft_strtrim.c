/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpedro <kpedro@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/11 16:37:46 by kpedro            #+#    #+#             */
/*   Updated: 2014/11/19 16:27:22 by kpedro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	trimstart(char const *s, int i)
{
	while ((s[i] == ' ') || (s[i] == '\n') || (s[i] == '\t'))
		i++;
	return (i);
}

static	int	trimend(char const *s, int len, int j)
{
	while ((s[len - j] == ' ') || (s[len - j] == '\n') || (s[len - j] == '\t'))
		j++;
	return (j);
}

char		*ft_strtrim(char const *s)
{
	int		i;
	int		j;
	int		k;
	int		len;
	char	*res;

	i = 0;
	k = 0;
	j = 1;
	len = ft_strlen(s);
	i = trimstart(s, i);
	j = trimend(s, len, j);
	if (s[i] == '\0' || s[len - j] == '\0')
		return ("");
	res = (char*)ft_memalloc((sizeof(char)) * (len - (i + j) + 1));
	if (res == NULL)
		return (NULL);
	while (i <= (len - j))
	{
		res[k] = s[i];
		k++;
		i++;
	}
	res[k] = '\0';
	return (res);
}
