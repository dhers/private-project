#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gfanton <gfanton@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2013/11/19 13:57:53 by gfanton           #+#    #+#              #
#                                                                              #
#******************************************************************************#

NAME = bsq
BIN = bsq
LIB_USER = ft
LIB_DYNAMIQUE =
LIB_PATH =
C = \033[0;35m
CFLAGS = -Wall -Werror -Wextra -O2
TAGS = etags --declarations
SRCPATH = ./srcs/
INCLUDES = ./includes/
SRCS = 	main.c parser.c env.c func_tab.c \

V = 0
S = 0
G = 0
T = 0
SILENCE_1 :=
SILENCE_0 :=@
SKIP_1 :=
SKIP_0 := \033[A
STAT_1 := displaystat
STAT_0 :=
DEBUG_1 := -g
DEBUG_0 :=
TAG_1 := tag
TAG_0 :=
STAT = $(STAT_$(S))
SKIP = $(SKIP_$(V))
DEBUG = $(DEBUG_$(G))
TAG = $(TAG_$(T))
SILENCE = $(SILENCE_$(V))
NORC = $(NORC_$(N))
MYLIB = $(addprefix lib, $(LIB_USER))
ALLIB = $(addprefix -l, $(LIB_DYNAMIQUE)) $(addprefix -l, $(LIB_USER))
INCLUDE = $(addprefix -I, $(INCLUDES))
LIB = $(addprefix -L, $(LIB_PATH)) $(addprefix -L./, $(MYLIB)) $(ALLIB)
CC = $(SILENCE)clang
RM = $(SILENCE)rm -rf
MAKE = $(SILENCE)make V=$(V) G=$(G) S=$(S) N=$(N)
SRC = $(addprefix $(SRCPATH), $(SRCS))
OBJS = $(SRC:.c=.o)
NORMESRC = $(SRC:.c)
LIBALL = $(addprefix -C, $(MYLIB))
STATS = .makefile_stat
U = $(C)[$(NAME)]----->\033[0m

all: $(NORC) liball $(NAME) $(TAG) $(STAT)

$(NAME): $(OBJS)
	@echo "$(U)$(C)[COMPILE:\033[1;32m DONE$(C)]\033[0m"
	@echo "$(U)$(C)[BUILD]\033[0;32m"
	$(CC) -o $(BIN) $(OBJS) $(DEBUG) $(CFLAGS) $(INCLUDE) $(LIB)
	@echo "$(SKIP)\033[2K"
	@echo "$(SKIP)$(U)$(C)[BUILD  :\033[1;32m DONE$(C)]\033[0m"

%o: %c
	@echo "$(U)$(C)[COMPILE: \033[1;31m$<\033[A\033[0m"
	@echo "\033[0;32m"
	$(CC) -o $@ $(DEBUG) $(CFLAGS) $(INCLUDE) -c $<
	@echo "\033[1;31m [.working.]"
	@echo "$(SKIP)\033[2K\033[A\033[2K$(SKIP)"

.clean:
	@echo "$(U)$(C)[CLEAN]\033[0;32m"
	$(RM) $(OBJS)
	@echo "$(SKIP)$(U)$(C)[CLEAN:\033[1;32m   DONE$(C)]\033[0m"

clean: libclean .clean

fclean: libfclean .clean
	@echo "$(U)$(C)[F-CLEAN]\033[0;32m"
	$(RM) $(BIN)
	@echo "$(SKIP)$(U)$(C)[F-CLEAN:\033[1;32m DONE$(C)]\033[0m"

liball: LIBARG = all
liball: $(LIBALL)

libclean: LIBARG = clean
libclean: $(LIBALL)

libfclean: LIBARG = fclean
libfclean: $(LIBALL)

libre: LIBARG = re
libre: $(LIBALL)

$(LIBALL):
	$(MAKE) $(LIBARG) $@

displaystat:
	@echo "$(U)$(C)[STATS]\033[0m"
	@echo "|-->[auteur: \033[0;31m`cat -e auteur |tr -d '\n'`\033[1;37m]\n"
	@echo "|-->[cfiles: `ls -l $(SRCPATH) | grep ".c$$" |wc -l| tr -d ' '`]"
	@echo "     |-->lines : `cat $(SRC) | wc -l | tr -d ' '`"
	@echo "     |-->words : `cat $(SRC) | wc -w | tr -d ' '`"
	@echo "     |-->bytes : `cat $(SRC) | wc -c | tr -d ' '`"
	@echo "\n\033[0m|--->[user symbol]"
	@echo "\033[0;31m`nm -jU ./$(NAME) | cat -n`"
	@echo "\033[0m|--->[other symbol]"
	@echo "\033[0;31m`nm -ju ./$(NAME) | cat -n`"
	@echo "\n$(U)$(C)[STATS:  \033[1;32m DONE$(C)]\033[0m"

tag:
	@echo "$(U)$(C)[TAGING]\033[0;32m"
	$(SILENCE)$(TAGS) $(SRC)
	@echo "$(SKIP)$(U)$(C)[TAGING:\033[1;32m DONE$(C)]\033[0m"

re: libre fclean all

.PHONY: clean .clean fclean
