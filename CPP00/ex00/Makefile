# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rarraji <rarraji@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/14 15:54:50 by rarraji           #+#    #+#              #
#    Updated: 2023/08/26 10:47:37 by rarraji          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone

SRC = magaphone.cpp

OBJ = megaphone.o

CPP = c++ 

CFLAGS = -Wall -Wextra -Werror -std=c++98

%.o : %.c
	${CC} ${CFLAGS} -c $< -o $@

all : $(NAME)

$(NAME) : $(OBJ)
		$(CPP) $(OBJ) $(CFLAGS) -o $(NAME)
clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all

