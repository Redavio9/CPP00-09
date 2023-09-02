# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rarraji <rarraji@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/01 20:36:48 by rarraji           #+#    #+#              #
#    Updated: 2023/09/01 20:37:23 by rarraji          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Harl

SRC  = main.cpp Harl.cpp

CC   = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

all : $(NAME)

$(NAME) : $(SRC)
			$(CC) $(CFLAGS) $(SRC) -o $(NAME)

clean : rm -rf $(NAME)

fclean : clean

re: fclean all
