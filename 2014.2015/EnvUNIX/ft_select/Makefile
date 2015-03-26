# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kpedro <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/03/24 10:02:53 by kpedro            #+#    #+#              #
#    Updated: 2015/03/24 10:19:54 by kpedro           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_select

FLAGS = -Wall -Werror -Wextra

SRC = main.c create_elem.c pushback.c \
pushfront.c list_size.c print.c

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): 
	make -C libft
	gcc $(FLAGS) -I ./libft -c $(SRC)
	gcc $(FLAGS) -o $(NAME) $(OBJ) -L./libft -lft

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY : all clean fclean re
