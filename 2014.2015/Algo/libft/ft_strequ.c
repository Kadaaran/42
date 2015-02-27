/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpedro <kpedro@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/09 17:34:33 by kpedro            #+#    #+#             */
/*   Updated: 2014/11/20 15:33:26 by kpedro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strequ(const char *s1, const char *s2)
{
	unsigned int	ret;

	if (s1 && s2)
	{
		ret = ft_strcmp(s1, s2);
		if (ret == 0)
			return (1);
		else
			return (0);
	}
	return (0);
}
