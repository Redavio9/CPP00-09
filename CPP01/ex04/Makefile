# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rarraji <rarraji@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/01 10:17:01 by rarraji           #+#    #+#              #
#    Updated: 2023/09/23 22:30:20 by rarraji          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= remplace
	
CC		= c++
FLAGS	= -Wall -Wextra -Werror -std=c++98 -fsanitize=address -g
RM		= rm -rf
SRC		= main.cpp remplace.cpp

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
