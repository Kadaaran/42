/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cd.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpedro <kpedro@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/15 19:02:02 by kpedro            #+#    #+#             */
/*   Updated: 2015/01/15 19:02:06 by kpedro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_minishell1.h"

int		verify_arg(t_env *e, char **split)
{
	if (!split[1])
	{
		ft_cd_home(e, split);
		return (1);
	}
	else if (ft_strcmp(split[1], "--") == 0)
	{
		ft_cd_home(e, split);
		return (1);
	}
	else if (ft_strcmp(split[1], "~") == 0)
	{
		ft_cd_home(e, split);
		return (1);
	}
	else if (ft_strcmp(split[1], "-") == 0)
	{
		ft_cd_back(e, split);
		return (1);
	}
	return (0);
}

char	*ft_cd_back(t_env *e, char **split)
{
	if (chdir(get_var(e, "OLDPWD")) == 0)
	{
		set_var(e, "PWD", get_var(e, "OLDPWD"));
	}
	else
		check_all(split);
	return (0);
}

char	*ft_cd_home(t_env *e, char **split)
{
	char	*home;

	home = get_var(e, "HOME");
	if (chdir(home) == 0)
	{
		set_var(e, "OLDPWD", get_var(e, "PWD"));
		set_var(e, "PWD", get_var(e, "HOME"));
	}
	else
		check_all(split);
	return (0);
}

char	*ft_cd_move(t_env *e, char **split)
{
	if (chdir(split[1]) == 0)
	{
		set_var(e, "OLDPWD", get_var(e, "PWD"));
		set_var(e, "PWD", getcwd(NULL, 0));
	}
	else
		check_all(split);
	return (0);
}

void	ft_cd(t_env *e, char **split)
{
	if (verify_arg(e, split))
		;
	else if (split[2] == NULL)
	{
		ft_cd_move(e, split);
	}
	else
		ft_putendl("Too much arguments");
}
