/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hidenp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpedro <kpedro@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/17 21:48:12 by kpedro            #+#    #+#             */
/*   Updated: 2014/12/17 22:12:47 by kpedro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

char hidenp(char *str1, char *str2)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	k = 0;
	while (str1[i] != '\0')
	{
		while (str2[j] != '\0')
		{
			if (str1[i] == str2[j])
			{
				if (k == ft_strlen(str1))
					return (0);
				i++;
				k++;
			}
			j++;
		}
	}
	return (0);
}

int		main(int argc, char **argv)
{
	if (argc = 3)
	{
		hidenp(argv[1], argv[2]);
		ft_putchar('\n');
	}
	else
		write(1, "\n", 1);
	return (0);
}
