# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hp <hp@student.42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/14 15:54:50 by rarraji           #+#    #+#              #
#    Updated: 2023/09/12 12:22:20 by hp               ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = PhoneBook

SRC = Contact.cpp PhoneBook.cpp                                                 
OBJ = Contact.o PhoneBook.o

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