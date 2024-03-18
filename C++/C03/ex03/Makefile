# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gabrrodr <gabrrodr@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/22 12:41:15 by gabrrodr          #+#    #+#              #
#    Updated: 2024/02/22 12:41:15 by gabrrodr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC =	ClapTrap.cpp \
		main.cpp \
		ScavTrap.cpp \
		FragTrap.cpp \
		DiamondTrap.cpp \

OBJ =	$(SRC:.cpp=.o)

all : DiamondTrap

DiamondTrap : $(OBJ) ClapTrap.hpp ScavTrap.hpp FragTrap.hpp DiamondTrap.hpp
		c++ -std=c++98 -Wshadow -Wno-shadow -Wall -Wextra -Werror $(SRC) -o DiamondTrap

clean :
		rm -rf $(OBJ) ClapTrap ScavTrap FragTrap DiamondTrap