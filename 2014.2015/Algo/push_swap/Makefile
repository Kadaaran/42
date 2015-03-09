# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kpedro <kpedro@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/01/26 01:58:19 by kpedro            #+#    #+#              #
#    Updated: 2015/01/26 01:58:20 by kpedro           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

FLAGS = -Wall -Wextra -Werror

SRC = main.c ft_atoi.c swap_sasb.c push_ab.c print.c reverse_ab.c rotate.c algo.c ft_itoa.c ft_strequ.c ft_strlen.c ft_strcmp.c

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME):
	cc $(FLAGS) -c $(SRC)
	cc $(FLAGS) -o $(NAME) $(OBJ)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

