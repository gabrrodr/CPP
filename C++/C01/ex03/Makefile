# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gabrrodr <gabrrodr@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/07 13:34:56 by gabrrodr          #+#    #+#              #
#    Updated: 2024/02/07 13:34:56 by gabrrodr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC =	HumanA.cpp \
		HumanB.cpp \
		Weapon.cpp \
		main.cpp \

OBJ = $(SRC:.cpp=.o)

all : attack

attack : $(OBJ) HumanA.hpp HumanB.hpp Weapon.hpp
		c++ -std=c++98 -Wall -Wextra -Werror $(SRC) -o attack

clean :
		rm -rf $(OBJ)