# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rarraji <rarraji@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/30 12:12:55 by rarraji           #+#    #+#              #
#    Updated: 2023/08/30 15:43:32 by rarraji          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = zombie

SRC  = main.cpp zombieHorde.cpp Zombie.cpp 

CC   = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

all : $(NAME)

$(NAME) : $(SRC)
			$(CC) $(CFLAGS) $(SRC) -o $(NAME)

clean : rm -rf NAME

fclean : clean

re: fclean all


