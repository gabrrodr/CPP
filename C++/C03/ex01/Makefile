# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gabrrodr <gabrrodr@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/21 16:05:44 by gabrrodr          #+#    #+#              #
#    Updated: 2024/02/21 16:05:44 by gabrrodr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC =	ClapTrap.cpp \
		main.cpp \
		ScavTrap.cpp \

OBJ =	$(SRC:.cpp=.o)

all : ClapTrap

ClapTrap : $(OBJ) ClapTrap.hpp ScavTrap.hpp
		c++ -std=c++98 -Wall -Wextra -Werror $(SRC) -o ClapTrap

clean :
		rm -rf $(OBJ) ClapTrap ScavTrap