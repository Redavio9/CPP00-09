# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rarraji <rarraji@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/11 11:09:14 by rarraji           #+#    #+#              #
#    Updated: 2023/09/11 11:09:30 by rarraji          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ScavTrap

SRC  = main.cpp ClapTrap.cpp ScavTrap.cpp

CC   = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

all : $(NAME)

$(NAME) : $(SRC)
			$(CC) $(CFLAGS) $(SRC) -o $(NAME)

clean : rm -f $(NAME)

fclean : clean

re: fclean all