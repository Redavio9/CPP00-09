# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rarraji <rarraji@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/04 09:54:44 by rarraji           #+#    #+#              #
#    Updated: 2023/12/28 09:51:43 by rarraji          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME    = Btc

CC      = c++
FLAGS   = -Wall -Wextra -Werror -std=c++98
RM      = rm -rf
SRC     = BitcoinExchange.cpp main.cpp
OBJ     = $(SRC:.cpp=.o) 

# Colors
RED = \033[0;31m
GREEN = \033[0;32m
YELLOW = \033[0;33m

%.o : %.cpp BitcoinExchange.hpp
	${CC} ${FLAGS} -c $< -o $@

all: $(NAME)

$(NAME): $(OBJ)
	@printf "$(YELLOW) Compiling $(NAME)... \n"
	@$(CC) $(FLAGS) $(OBJ) -o $(NAME)
	@printf "$(GREEN) Executable ready.\n"

clean:
	@$(RM) $(OBJ)
	@printf "$(RED)    - OBJ removed.\n"

fclean: clean
	@$(RM) $(NAME)
	@printf "$(RED)    - Executable removed.\n"

re: fclean all

.PHONY: all clean fclean re

