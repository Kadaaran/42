/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_builtins.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpedro <kpedro@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/15 19:00:02 by kpedro            #+#    #+#             */
/*   Updated: 2015/01/15 19:00:06 by kpedro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_minishell1.h"

int		check_builtin(t_env *e, char **split)
{
	if (ft_strncmp(split[0], "exit", 4) == 0)
	{
		exit(0);
	}
	else if (ft_strncmp(split[0], "env", 3) == 0)
	{
		ft_env(e);
		return (1);
	}
	else if (ft_strncmp(split[0], "setenv", 6) == 0)
	{
		ft_setenv(e, split);
		return (1);
	}
	else if (ft_strncmp(split[0], "unsetenv", 8) == 0)
	{
		ft_unsetenv(e, split);
		return (1);
	}
	else if (ft_strncmp(split[0], "cd", 2) == 0)
	{
		ft_cd(e, split);
		return (1);
	}
	return (0);
}
