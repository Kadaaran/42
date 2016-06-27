/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   unset_env.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpedro <kpedro@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/15 19:06:40 by kpedro            #+#    #+#             */
/*   Updated: 2015/01/15 19:06:42 by kpedro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_minishell1.h"

void	change(t_env *e, char **split)
{
	int		i;
	int		k;
	char	**tmp;

	i = 0;
	k = 0;
	tmp = (char **)malloc(sizeof(char *) * (ft_strlen(e->env[i]) - 1));
	if (tmp == NULL)
		return ;
	while (e->env[i] != NULL)
	{
		if (ft_strncmp(e->env[i], split[1], ft_strlen(split[1])) != 0)
			tmp[k++] = ft_strdup(e->env[i]);
		i++;
	}
	e->env = tmp;
}

void	ft_unsetenv(t_env *e, char **split)
{
	if (check(e, split) == 1)
		change(e, split);
}
