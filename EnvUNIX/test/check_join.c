/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_join.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpedro <kpedro@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/14 22:11:40 by kpedro            #+#    #+#             */
/*   Updated: 2014/12/14 22:13:18 by kpedro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_minishell1.h"

char	*join_all(char *path, char *new_command)
{
	char	*new_path;
	char	*tmp;

	tmp = ft_strjoin(path, "/");
	new_path = ft_strjoin(tmp, new_command);
	return (new_path);
}

char	*check_path(t_env *e, char *line)
{
	int		i;
	char	*new_command;

	i = 0;
	new_command = NULL;
	while (e->path[i])
	{
		if (access(join_all(e->path[i], line), X_OK) == 0)
		{
			new_command = join_all(e->path[i], line);
			break ;
		}
		i++;
	}
	return (new_command);
}

char	*check_path_2(t_env *e, char *line)
{
	int		i;
	char	*new_command;

	i = 0;
	new_command = NULL;
	while (e->path[i])
	{
		if (access(line, X_OK) == 0)
		{
			new_command = line;
			break ;
		}
		i++;
	}
	return (new_command);
}
