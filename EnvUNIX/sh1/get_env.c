/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_env.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpedro <kpedro@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/15 19:03:27 by kpedro            #+#    #+#             */
/*   Updated: 2015/01/15 19:03:30 by kpedro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_minishell1.h"

void	set_var(t_env *e, char *var, char *value)
{
	int	i;

	i = 0;
	while (e->env[i])
	{
		if (!ft_strncmp(e->env[i], var, ft_strlen(var)))
			e->env[i] = ft_strjoin(var, ft_strjoin("=", value));
		i++;
	}
}

char	*get_var(t_env *e, char *var)
{
	int	i;

	i = 0;
	while (e->env[i])
	{
		if (!ft_strncmp(e->env[i], var, ft_strlen(var)))
			return (ft_strchr(e->env[i], '=') + 1);
		i++;
	}
	return (NULL);
}

void	get_path(t_env *e)
{
	int	i;

	i = 0;
	while (e->env[i])
	{
		if (ft_strncmp(e->env[i], "PATH", 4) == 0)
		{
			e->path = ft_strsplit(ft_strchr(e->env[i], '=') + 1, ':');
		}
		i++;
	}
}