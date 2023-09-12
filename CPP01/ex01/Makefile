# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hp <hp@student.42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/30 12:12:55 by rarraji           #+#    #+#              #
#    Updated: 2023/09/05 13:00:52 by hp               ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = zombie

SRC  = main.cpp zombieHorde.cpp Zombie.cpp 

CC   = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

all : $(NAME)

$(NAME) : $(SRC)
			$(CC) $(CFLAGS) $(SRC) -o $(NAME)

clean : rm -f $(NAME)

fclean : clean

re: fclean all


