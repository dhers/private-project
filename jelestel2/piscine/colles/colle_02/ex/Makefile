# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jelestel <jelestel@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2014/07/15 11:46:51 by jelestel          #+#    #+#              #
#    Updated: 2014/07/19 19:54:42 by jelestel         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = clang
NAME = colle-2
FLAG = -Werror -Wextra -Wall -O3
SRC = main.c \
	  colles_00.c \
	  solve.c \
	  print.c \
	  formes.c \

all: $(NAME)

$(NAME):
	$(CC) $(FLAG) -o $(NAME) $(SRC)

fclean:
	rm -f $(NAME)

re: fclean $(NAME)
