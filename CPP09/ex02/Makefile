# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rarraji <rarraji@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/09 11:58:52 by rarraji           #+#    #+#              #
#    Updated: 2023/12/28 09:30:28 by rarraji          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= PmergeMe
	
CC		= c++
FLAGS	= -Wall -Wextra -Werror -std=c++98 -g -fsanitize=address
RM		= rm -rf
SRC		= main.cpp PmergeMe.cpp
OBJ   = $(SRC:.cpp=.o)

#Colors:

RED = \033[0;31m
GREEN = \033[0;32m
YELLOW = \033[0;33m

%.o : %.cpp
	${CC} ${FLAGS} -c $< -o $@

all: $(NAME)

$(NAME): $(OBJ)
	@printf "$(YELLOW) Compiling $(NAME)... \n"
	@$(CC) $(FLAGS) $(OBJ) -o $(NAME)
	@printf "$(GREEN) $(NAME) ready.\n"

clean:
	@$(RM) $(OBJ)
	@printf "$(RED)    - OBJ removed.\n"

fclean: clean
	@$(RM) $(NAME)
	@printf "$(RED)    - $(NAME) removed.\n"

re: fclean all

.PHONY: all clean fclean re