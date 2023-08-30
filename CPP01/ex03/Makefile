# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rarraji <rarraji@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/30 15:38:44 by rarraji           #+#    #+#              #
#    Updated: 2023/08/30 19:06:12 by rarraji          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Weapon

SRC = main.cpp  Weapon.cpp HumanA.cpp HumanB.cpp                                            

CPP = c++ 

CFLAGS = -Wall -Wextra -Werror -std=c++98

all : $(NAME)

$(NAME) : $(SRC)
		$(CPP) $(SRC) $(CFLAGS) -o $(NAME)
clean:
	@rm -rf NAME

fclean: clean

re: fclean all