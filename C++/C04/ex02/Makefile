# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gabrrodr <gabrrodr@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/29 12:13:01 by gabrrodr          #+#    #+#              #
#    Updated: 2024/02/29 12:13:01 by gabrrodr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC	=	Animal.cpp \
		Cat.cpp \
		Dog.cpp \
		main.cpp \
		WrongAnimal.cpp \
		WrongCat.cpp \
		Brain.cpp

OBJ	=	$(SRC:.cpp=.o)

all : Animal

Animal : $(OBJ) Animal.hpp Cat.hpp Dog.hpp WrongAnimal.hpp WrongCat.hpp Brain.hpp
		c++ -std=c++98 -Wall -Wextra -Werror $(SRC) -o Animal

clean :
		rm -rf $(OBJ) Animal Cat Dog WrongAnimal WrongCat Brain