# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rarraji <rarraji@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/14 15:54:50 by rarraji           #+#    #+#              #
#    Updated: 2023/09/13 09:26:24 by rarraji          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= PhoneBook
	
CC		= c++
FLAGS	= -Wall -Wextra -Werror -std=c++98
RM		= rm -rf
SRC		= Contact.cpp PhoneBook.cpp

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
