/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpedro <kpedro@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/12 19:20:20 by kpedro            #+#    #+#             */
/*   Updated: 2014/11/24 17:27:36 by kpedro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	swap(char *a, char *b)
{
	char	c;

	c = *a;
	*a = *b;
	*b = c;
}

static int	ft_abs(int n)
{
	if (n < 0)
		return (-n);
	else
		return (n);
}

static int	ft_nbrlen(int n)
{
	int	c;

	c = (n < 0) ? 1 : 0;
	if (n == 0)
		return (1);
	while (n != 0)
	{
		n = n / 10;
		c = c + 1;
	}
	return (c);
}

static char	*ft_strrev(char *s)
{
	int	c;
	int	n;

	if (s[0] == '-' || s[0] == '+')
		c = 1;
	else
		c = 0;
	n = (ft_strlen(s) - 1);
	while (s[c])
	{
		if (c == n)
			return (s);
		swap(&s[c], &s[n]);
		if (n == c + 1)
			return (s);
		c++;
		n--;
	}
	return (s);
}

char		*ft_itoa(int n)
{
	char	*str;
	int		len;
	int		i;

	i = 0;
	len = ft_nbrlen(n);
	str = (char*)malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);
	if (n < 0)
	{
		str[i] = '-';
		i++;
	}
	while (i < len)
	{
		str[i] = ft_abs(n % 10) + '0';
		n = n / 10;
		i++;
	}
	str[len] = '\0';
	ft_strrev(str);
	return (str);
}
