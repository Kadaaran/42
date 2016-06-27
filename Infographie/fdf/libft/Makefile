# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kpedro <kpedro@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2014/11/07 11:09:44 by kpedro            #+#    #+#              #
#    Updated: 2014/12/02 03:25:57 by kpedro           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c \
ft_strcat.c ft_strchr.c ft_strcmp.c ft_strcpy.c ft_strdup.c ft_strlen.c \
ft_strncpy.c ft_tolower.c ft_toupper.c ft_strncat.c ft_putchar.c ft_strstr.c \
ft_memset.c ft_bzero.c ft_strrchr.c ft_memccpy.c ft_memchr.c ft_memcmp.c \
ft_memcpy.c ft_memmove.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_atoi.c \
ft_strlcat.c ft_putstr.c ft_putendl.c ft_putchar_fd.c ft_putstr_fd.c \
ft_putendl_fd.c ft_putnbr.c ft_putnbr_fd.c ft_strclr.c ft_memdel.c \
ft_strdel.c ft_memalloc.c ft_strequ.c ft_striter.c ft_strsub.c \
ft_strjoin.c ft_strmap.c ft_striteri.c ft_strmapi.c ft_strtrim.c \
ft_strlcat.c ft_strsplit.c ft_itoa.c ft_strnequ.c \
ft_strnew.c

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME):
	gcc -Wall -Wextra -Werror -I./includes/ -c $(SRC)
	ar rc $(NAME) $(OBJ) 
	ranlib $(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY : all clean fclean re
