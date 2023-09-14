# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rarraji <rarraji@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/12 10:05:08 by rarraji           #+#    #+#              #
#    Updated: 2023/09/14 08:58:44 by rarraji          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME	= Animal
	
CC		= c++
FLAGS	= -Wall -Wextra -Werror -std=c++98
RM		= rm -rf
SRC		= main.cpp animal.cpp Dog.cpp Cat.cpp Brain.cpp

#Colors:
RED = \033[0;31m
GREEN = \033[0;32m
YELLOW = \033[0;33m

all: $(NAME)

$(NAME): 
	@printf "$(YELLOW) Compiling $(NAME)... \n"
	@ $(CC) $(FLAGS) $(SRC) -o $(NAME)
	@printf "$(GREEN) $(NAME) ready.\n"

clean:
	@$(RM) $(NAME)
	@printf "$(RED) $(NAME) removed.\n"

fclean:
	@$(RM) $(NAME)
	@printf "$(RED) $(NAME) removed.\n"

re: clean all