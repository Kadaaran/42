/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strapitaliz.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpedro <kpedro@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/17 20:16:16 by kpedro            #+#    #+#             */
/*   Updated: 2014/12/17 22:29:02 by kpedro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

static void	ft_putchar(char c)
{
	write(1, &c, 1);
}

char	strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[0] >= 'a' && str[0] <= 'z')
			str[i] = str[i] - 32;
		if ((str[i - 1] == ' ') && (str[i] >= 'a' && str[i] <= 'z'))
			str[i] = str[i] - 32;
		else if (str[i] >= 'A' && str[i] <= 'Z' && str[i + 1] != ' ')
			str[i] = str[i];
		if (str[i + 1] >= 'A' && str[i + 1] <= 'Z' && str[i + 1] != ' ')
			str[i + 1] = str[i + 1] + 32;
		ft_putchar(str[i]);
		i++;
	}
	return (0);
}

int	main(int argc, char **argv)
{
	int		i;
	i = 0;
	if (argc == 1)
	{
		ft_putchar('\n');
		return (0);
	}
	while (i)
	{
		strcapitalize(argv[1]);
		ft_putchar('\n');
	}
	return (0);
}
