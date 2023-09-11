# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rarraji <rarraji@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/11 11:42:14 by rarraji           #+#    #+#              #
#    Updated: 2023/09/11 11:42:38 by rarraji          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = FragTrap

SRC  = main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp

CC   = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

all : $(NAME)

$(NAME) : $(SRC)
			$(CC) $(CFLAGS) $(SRC) -o $(NAME)

clean : rm -f $(NAME)

fclean : clean

re: fclean all