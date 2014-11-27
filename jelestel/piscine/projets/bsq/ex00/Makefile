# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cgoeminn <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2014/07/15 16:42:31 by cgoeminn          #+#    #+#              #
#    Updated: 2014/07/22 19:10:28 by jelestel         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = bsq
INCLUDE = includes/ \
		  libft/includes/
SRCPATH = srcs
OBJPATH = obj
GCC = clang -Wall -Werror -Wextra -O2
C = \033[1;34m
U = $(C)[$(NAME)]----->\033[0m
SRCFILES = \
	ft_error.c \
	ft_error2.c \
	main.c \

SRC = $(addprefix $(SRCPATH)/,$(SRCFILES))

OBJECTS = $(SRC:$(SRCPATH)/%.c=$(OBJPATH)/%.o)

INC = $(addprefix -I , $(INCLUDE))

all: $(NAME)

$(NAME): libft/libft.a $(OBJECTS)
	@echo "$(U)$(C)[COMPILE:\033[1;32m DONE$(C)]\033[0m"
	@$(GCC) -o $@ $(INC) $(OBJECTS) -L libft/ -lft

libft/libft.a: force
	@$(MAKE) -C libft/

$(OBJECTS): $(OBJPATH)/%.o : $(SRCPATH)/%.c
	@mkdir -p $(dir $@)
	@$(GCC) -c $< -o $@ $(INC)

clean:
	@rm -rf $(OBJPATH)
	@$(MAKE) -C libft/ clean

fclean: clean
	@rm -f $(NAME)
	@$(MAKE) -C libft/ fclean

re: fclean all

force:
	@true

.PHONY: all clean fclean re
