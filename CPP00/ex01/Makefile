# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rarraji <rarraji@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/14 15:54:50 by rarraji           #+#    #+#              #
#    Updated: 2023/09/20 22:39:10 by rarraji          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= PhoneBook
	
CC		= c++
FLAGS	= -Wall -Wextra -Werror -std=c++98
RM		= rm -rf
SRC		= main.cpp Contact.cpp PhoneBook.cpp
OBJ   = $(SRC:.cpp=.o)

#Colors:
RED = \033[0;31m
GREEN = \033[0;32m
YELLOW = \033[0;33m

%.o : %.c
	@${CC} ${CFLAGS} -c $< -o $@

all: $(NAME)

$(NAME): $(OBJ)
	@printf "$(YELLOW) Compiling $(NAME)... \n"
	@$(CC) $(FLAGS) $(OBJ) -o $(NAME)
	@printf "$(GREEN) $(NAME) ready.\n"

clean:
	@$(RM) $(OBJ)
	@printf "$(RED) $(OBJ) removed.\n"

fclean: clean
	@$(RM) $(NAME)
	@printf "$(RED) $(NAME) removed.\n"

re: fclean all

.PHONY: all clean fclean re

