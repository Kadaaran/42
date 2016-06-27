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

SRC = main.c get_map.c

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): 
	make -C libft
	make -C minilibx_macos
	gcc $(FLAGS) -I./libft/includes -c $(SRC) 
	gcc $(FLAGS) -o $(NAME) $(OBJ) -framework OpenGL -framework AppKit\
		-L ./libft -lft -L minilibx_macos -lmlx

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY : all clean fclean re