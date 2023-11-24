# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rarraji <rarraji@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/13 09:36:40 by rarraji           #+#    #+#              #
#    Updated: 2023/11/24 11:21:08 by rarraji          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= Bureaucrat
	
CC		= c++
FLAGS	= -Wall -Wextra -Werror -std=c++98 #-fsanitize=address -g
RM		= rm -rf
SRC		= Bureaucrat.cpp main.cpp AForm.cpp PresidentialPardonForm.cpp ShrubberyCreationForm.cpp RobotomyRequestForm.cpp
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
	@printf "$(GREEN) Executable ready.\n"

clean:
	@$(RM) $(OBJ)
	@printf "$(RED)    - OBJ removed.\n"

fclean: clean
	@$(RM) $(NAME)
	@printf "$(RED)    - Executable removed.\n"

re: fclean all

.PHONY: all clean fclean re