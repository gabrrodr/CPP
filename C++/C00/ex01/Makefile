# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gabrrodr <gabrrodr@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/30 13:16:04 by gabrrodr          #+#    #+#              #
#    Updated: 2024/02/23 14:00:07 by gabrrodr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC	=	Contact.cpp \
		PhoneBook.cpp \
		main.cpp \

OBJ	=	$(SRC:.cpp=.o)

all	:	PhoneBook

PhoneBook : $(OBJ) Phonebook.hpp Contact.hpp
		c++ -Wall -Wextra -Werror -std=c++98 $(OBJ) -o PhoneBook

clean :
		rm -rf $(OBJ) PhoneBook