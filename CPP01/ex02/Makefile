# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rarraji <rarraji@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/30 15:23:15 by rarraji           #+#    #+#              #
#    Updated: 2023/08/30 15:42:33 by rarraji          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = prg

SRC  = main.cpp

CC   = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

all : $(NAME)

$(NAME) : $(SRC)
			$(CC) $(CFLAGS) $(SRC) -o $(NAME)

clean : rm -rf NAME

fclean : clean

re: fclean all