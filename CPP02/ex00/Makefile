# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rarraji <rarraji@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/02 19:56:31 by rarraji           #+#    #+#              #
#    Updated: 2023/09/02 20:42:24 by rarraji          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Fixed

SRC  = main.cpp Fixed.cpp

CC   = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

all : $(NAME)

$(NAME) : $(SRC)
			$(CC) $(CFLAGS) $(SRC) -o $(NAME)

clean : rm -rf $(NAME)

fclean : clean

re: fclean all