/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpedro <kpedro@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/15 19:03:49 by kpedro            #+#    #+#             */
/*   Updated: 2015/01/15 19:03:52 by kpedro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_minishell1.h"

int		check_all(char **split)
{
	struct stat		st;

	lstat(split[1], &st);
	if (access(split[1], F_OK) != 0)
	{
		ft_putstr_fd("cd : no such file or directory :", 2);
		ft_putendl_fd(split[1], 2);
		return (0);
	}
	else if (!S_ISDIR(st.st_mode))
	{
		ft_putstr_fd("cd : not a directory :", 2);
		ft_putendl_fd(split[1], 2);
	}
	else if (access(split[1], X_OK) != 0)
	{
		ft_putstr_fd("cd : permission denied :", 2);
		ft_putendl_fd(split[1], 2);
		return (0);
	}
	return (1);
}

void	ft_put_tab(t_env *e)
{
	int	i;

	i = 0;
	while (e->env[i] != '\0')
	{
		ft_putendl(e->env[i]);
		i++;
	}
}

void	ft_execve(char **split, t_env *e)
{
	pid_t	dark_vador;

	dark_vador = fork();
	if (dark_vador > 0)
	{
		wait(NULL);
	}
	if (dark_vador == 0)
	{
		execve(check_path(e, split[0]), split, e->env);
		execve(check_path_2(e, split[0]), split, e->env);
	}
}

int		main(int argc, char **argv, char **env)
{
	char	*line;
	t_env	e;
	char	**split;

	(void)argc;
	(void)argv;
	e.env = env;
	get_path(&e);
	while (42)
	{
		ft_putstr("Kass$>");
		get_next_line(0, &line);
		split = ft_strsplit(ft_strtrim(line), ' ');
		if (split[0] != NULL)
		{
			if (check_builtin(&e, split))
				;
			else if (check_path(&e, split[0]) == NULL
				&& check_path_2(&e, split[0]) == NULL)
				ft_putendl_fd("Command not found, try again !", 2);
			else
				ft_execve(split, &e);
		}
	}
}
