# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rarraji <rarraji@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/12 09:52:07 by rarraji           #+#    #+#              #
#    Updated: 2023/10/16 13:36:27 by rarraji          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= Animal
	
CC		= c++
CXXFLAGS	= -Wall -Wextra -Werror -std=c++98
RM		= rm -rf
SRC		= main.cpp Animal.cpp Dog.cpp Cat.cpp WrongAnimal.cpp WrongCat.cpp
OBJ   = $(SRC:.cpp=.o)
#Colors:
RED = \033[0;31m
GREEN = \033[0;32m
YELLOW = \033[0;33m

%.o : %.cpp
	@${CC} ${CFLAGS} -c $< -o $@

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