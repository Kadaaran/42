# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kpedro <kpedro@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2014/12/02 20:02:07 by kpedro            #+#    #+#              #
#    Updated: 2014/12/18 14:37:10 by kpedro           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fdf

FLAGS = -Wall -Werror -Wextra

SRC = get_next_line.c get_file.c main.c draw_file.c draw_line.c

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
