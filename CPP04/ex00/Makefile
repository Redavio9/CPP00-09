# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rarraji <rarraji@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/12 09:52:07 by rarraji           #+#    #+#              #
#    Updated: 2023/09/12 09:52:51 by rarraji          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Animal

SRC  = main.cpp animal.cpp Dog.cpp Cat.cpp

CC   = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

all : $(NAME)

$(NAME) : $(SRC)
			$(CC) $(CFLAGS) $(SRC) -o $(NAME)

clean : rm -f $(NAME)

fclean : clean

re: fclean all