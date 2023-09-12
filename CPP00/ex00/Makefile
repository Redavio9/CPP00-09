# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hp <hp@student.42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/14 15:54:50 by rarraji           #+#    #+#              #
#    Updated: 2023/09/12 13:03:47 by hp               ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= megaphone
	
CC		= c++
FLAGS	= -Wall -Wextra -Werror -std=c++98
RM		= rm -rf

#Colors:
GREEN		=	\e[92;5;118m
YELLOW		=	\e[93;5;226m
GRAY		=	\e[33m


all: $(NAME)

$(NAME): 
	@printf "$(GRAY) 	- Compiling $(NAME)... \n"
	@ $(CC) $(FLAGS) megaphone.cpp -o $(NAME)
	@printf "$(GREEN)    - Executable ready.\n$"

clean:
	@$(RM) $(NAME)
	@printf "$(YELLOW)    - Executable removed.\n"

fclean:
	@$(RM) $(NAME)
	@printf "$(YELLOW)    - Executable removed.\n"

re: clean all
