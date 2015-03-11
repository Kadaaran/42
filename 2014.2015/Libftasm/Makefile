# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kpedro <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/03/10 07:01:55 by kpedro            #+#    #+#              #
#    Updated: 2015/03/10 07:25:47 by kpedro           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = ft_islower.s \
	  ft_isupper.s \
	  ft_toupper.s \
	  ft_tolower.s \
	  ft_isdigit.s \
	  ft_isprint.s \
	  ft_isascii.s \
	  ft_isalnum.s \
	  ft_isalpha.s \
	  ft_strlen.s \
	  ft_strcat.s \
	  ft_bzero.s \
	  ft_memset.s \
	  ft_memcpy.s \
	  ft_strdup.s \
	  ft_puts.s \
	  ft_cat.s

OBJ = $(SRC:%.s=%.o)
NAME = libfts.a

all: $(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

%.o: %.s libfts.h
	nasm -f macho64 $<

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
