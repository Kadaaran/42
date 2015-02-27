# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kpedro <kpedro@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2014/12/14 22:05:33 by kpedro            #+#    #+#              #
#    Updated: 2015/01/15 18:39:10 by kpedro           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_minishell1

FLAGS = -Wall -Wextra -Werror

SRC = get_env.c main.c check_join.c get_next_line.c \
unset_env.c env_setenv.c check_builtins.c ft_cd.c

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME):
	make -C libft
	gcc $(FLAGS) -I ./libft/includes -c $(SRC)
	gcc $(FLAGS) -o $(NAME) $(OBJ) -L./libft -lft

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all
