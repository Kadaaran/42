/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   env_setenv.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpedro <kpedro@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/15 19:01:39 by kpedro            #+#    #+#             */
/*   Updated: 2015/01/15 19:01:42 by kpedro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_minishell1.h"

void	ft_env(t_env *e)
{
	ft_put_tab(e);
}

int		replace(char **split, t_env *e)
{
	int		i;
	int		k;
	char	**tmp;

	i = 0;
	k = 0;
	while (e->env[i])
	{
		if (ft_strncmp(e->env[i], split[1], ft_strlen(split[1])) == 0)
		{
			tmp = (char **)malloc(sizeof(char *) * ft_strlen(e->env[i]));
			if (tmp == NULL)
				return (-1);
			tmp[k] = e->env[i];
			tmp[k] = ft_strjoin(split[1], "=");
			tmp[k] = ft_strjoin(tmp[k], split[2]);
			e->env[i] = tmp[k];
		}
		i++;
	}
	return (0);
}

void	ft_add(char **split, t_env *e)
{
	int		i;
	char	**tmp;

	i = 0;
	while (e->env[i])
	{
		tmp = (char **)malloc(sizeof(char *) * ft_strlen(e->env[i]) + 2);
		if (tmp == NULL)
			return ;
		i++;
	}
	tmp[i] = e->env[i];
	tmp[i] = ft_strjoin(split[1], "=");
	tmp[i] = ft_strjoin(tmp[i], split[2]);
	tmp[i] = ft_strjoin(tmp[i], "\0");
	e->env[i] = tmp[i];
	e->env[i + 1] = NULL;
}

int		check(t_env *e, char **split)
{
	int		i;

	i = 0;
	while (e->env[i])
	{
		if (ft_strncmp(e->env[i], split[1], ft_strlen(split[1])) == 0)
			return (1);
		i++;
	}
	return (0);
}

void	ft_setenv(t_env *e, char **split)
{
	if (check(e, split) == 0)
		ft_add(split, e);
	else if (split[3])
	{
		if (split[3][0] == '1')
			replace(split, e);
	}
	get_path(e);
}
