#include "wolf3d.h"
#include <stdio.h>

static int		count_words(char *str1, char c)
{
	int		j;
	int		k;

	j = 0;
	k = 0;
	while (str1[j] != '\0')
	{
		while (str1[j] == c)
			j++;
		if (str1[j] == '\0')
			k--;
		while (str1[j] != c && str1[j] != '\0')
			j++;
		k++;
	}
	return (k);
}

static void		size_tab(char *file, float *column_max, float *l_max)
{
	int		fd;
	char	*line;
	int		test;

	test = 0;
	*l_max = 0;
	fd = open(file, O_RDONLY);
	if (fd == -1)
	{
		ft_putstr("Avada Kedavra!");
		exit(-1);
	}
	while (get_next_line(fd, &line) > 0)
	{
		test = count_words(line, ' ');
		if (*l_max == 0)
			*column_max = test;
		else if (*column_max != test)
		{
			ft_putstr("map error");
			exit(-1);
		}
		(*l_max)++;
	}
	close(fd);
}

int				**get_map(char *file, float *column_max, float *l_max, int fd)
{
	char	**split;
	int		x;
	int		y;
	int		**tab;
	char	*line;

	size_tab(file, column_max, l_max);
	if ((tab = (int **)malloc(sizeof(int *) * *l_max)) == 0)
		return (NULL);
	y = 0;
	fd = open(file, O_RDONLY);
	while (y <= *l_max)
	{
		get_next_line(fd, &line);
		x = -1;
		tab[y] = (int *)malloc(sizeof(int) * *column_max);
		while (++x < *column_max)
		{
			split = ft_strsplit(line, ' ');
			tab[y][x] = ft_atoi(split[x]);
		}
		y++;
		ft_putnbr(y);
	}
	close(fd);
	return (tab);
}

