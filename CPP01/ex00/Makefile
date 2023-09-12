# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hp <hp@student.42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/30 08:47:31 by rarraji           #+#    #+#              #
#    Updated: 2023/09/05 13:00:34 by hp               ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = zombie

SRC  = main.cpp newZombie.cpp randomChump.cpp Zombie.cpp 

CC   = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

all : $(NAME)

$(NAME) : $(SRC)
			$(CC) $(CFLAGS) $(SRC) -o $(NAME)

clean : rm -f NAME

fclean : clean

re: fclean all
