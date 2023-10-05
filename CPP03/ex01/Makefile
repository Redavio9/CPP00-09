# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rarraji <rarraji@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/11 11:09:14 by rarraji           #+#    #+#              #
#    Updated: 2023/10/05 10:45:27 by rarraji          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ScavTrap

SRC  = main.cpp ClapTrap.cpp ScavTrap.cpp

CC   = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

OBJ		= $(SRC:.cpp=.o)

#Colors:
RED = \033[0;31m
GREEN = \033[0;32m
YELLOW = \033[0;33m

%.c: %.o
	@${CC} ${CFLAGS} -c $< -o $@

all: $(NAME)

$(NAME): $(OBJ)
	@printf "$(YELLOW) Compiling $(NAME)... \n"
	@ $(CC) $(FLAGS) $(OBJ) -o $(NAME)
	@printf "$(GREEN) $(NAME) ready.\n"

clean:
	@$(RM) $(OBJ)
	@printf "$(RED) $(OBJ) removed.\n"

fclean: clean
	@$(RM) $(NAME)
	@printf "$(RED) $(NAME) removed.\n"

re: clean all