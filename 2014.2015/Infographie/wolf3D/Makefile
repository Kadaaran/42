# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kpedro <kpedro@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/01/08 02:57:17 by kpedro            #+#    #+#              #
#    Updated: 2015/01/08 02:57:21 by kpedro           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = wolf3d

FLAGS = -Wall -Werror -Wextra

SRC = get_next_line.c main.c get_map.c

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): 
	make -C libft
	gcc $(FLAGS) -I./libft/includes -c $(SRC) -L ./libft -lft
	gcc $(FLAGS) -o $(NAME) $(OBJ) -L/usr/X11/lib -lmlx -lXext -lX11 -L ./libft -lft

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY : all clean fclean re