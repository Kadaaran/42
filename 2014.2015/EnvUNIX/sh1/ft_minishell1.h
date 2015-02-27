/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_minishell1.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpedro <kpedro@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/14 22:11:40 by kpedro            #+#    #+#             */
/*   Updated: 2015/01/23 18:53:54 by kpedro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_MINISHELL1_H
# define FT_MINISHELL1_H
# include <unistd.h>
# include "get_next_line.h"
# include "libft.h"
# include <sys/stat.h>

typedef struct	s_env
{
	char		**env;
	char		**path;
	char		*pwd;
	char		*home;
	char		*olpwd;

}				t_env;

void			get_olpwd(t_env *e);
void			get_home(t_env *e);
void			get_pwd(t_env *e);
void			get_path(t_env *e);
void			ft_execve(char **split, t_env *e);
char			*join_all(char *path, char *new_command);
char			*check_path(t_env *e, char *line);
void			ft_env(t_env *e);
int				check_builtin(t_env *e, char **split);
void			ft_put_tab(t_env *e);
void			ft_setenv(t_env *e, char **split);
int				replace(char **split, t_env *e);
void			ft_add(char **split, t_env *e);
int				check(t_env *e, char **split);
void			ft_unsetenv(t_env *e, char **split);
int				ft_erase(char **split, t_env *e);
void			change(t_env *e, char **split);
void			set_var(t_env *e, char *var, char *value);
char			*get_var(t_env *e, char *var);
void			ft_cd(t_env *e, char **split);
int				verify_arg(t_env *e, char **split);
char			*ft_cd_home(t_env *e, char **split);
char			*ft_cd_back(t_env *e, char **split);
char			*ft_cd_move(t_env *e, char **split);
int				check_all(char **split);
char			*check_path_2(t_env *e, char *line);

#endif
