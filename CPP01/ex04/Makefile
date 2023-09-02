# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rarraji <rarraji@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/01 10:17:01 by rarraji           #+#    #+#              #
#    Updated: 2023/09/01 20:36:46 by rarraji          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = remplace

SRC  = main.cpp remplace.cpp

CC   = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

all : $(NAME)

$(NAME) : $(SRC)
			$(CC) $(CFLAGS) $(SRC) -o $(NAME)

clean : rm -rf $(NAME)

fclean : clean

re: fclean all
