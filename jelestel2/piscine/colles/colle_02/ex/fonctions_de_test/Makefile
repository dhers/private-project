# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jelestel <jelestel@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2014/07/15 11:46:51 by jelestel          #+#    #+#              #
#    Updated: 2014/07/20 19:35:29 by jelestel         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = clang
NAME = colle
SRC = main
FLAG = -Werror -Wextra -Wall -O3

all: $(NAME)

$(NAME):
	$(CC) $(FLAG) -o $(NAME)_00 $(SRC).c $(NAME)00.c
	$(CC) $(FLAG) -o $(NAME)_01 $(SRC).c $(NAME)01.c
	$(CC) $(FLAG) -o $(NAME)_02 $(SRC).c $(NAME)02.c
	$(CC) $(FLAG) -o $(NAME)_03 $(SRC).c $(NAME)03.c
	$(CC) $(FLAG) -o $(NAME)_04 $(SRC).c $(NAME)04.c
	$(CC) $(FLAG) -o carre $(SRC)_carre.c carre.c
	$(CC) $(FLAG) -o rectangle $(SRC)_rectangle.c rectangle.c
	$(CC) $(FLAG) -o carre_inverse $(SRC)_carre_inverse.c carre_inverse.c
	$(CC) $(FLAG) -o rectangle_inverse $(SRC)_rectangle_inverse.c rectangle_inverse.c

fclean:
	rm -f $(NAME)_00
	rm -f $(NAME)_01
	rm -f $(NAME)_02
	rm -f $(NAME)_03
	rm -f $(NAME)_04
	rm -f carre
	rm -f rectangle
	rm -f carre_inverse
	rm -f rectangle_inverse

re: fclean $(NAME)
