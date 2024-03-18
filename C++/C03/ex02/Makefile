# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gabrrodr <gabrrodr@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/22 11:32:01 by gabrrodr          #+#    #+#              #
#    Updated: 2024/02/22 11:32:01 by gabrrodr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC =	ClapTrap.cpp \
		main.cpp \
		ScavTrap.cpp \
		FragTrap.cpp \

OBJ =	$(SRC:.cpp=.o)

all : FragTrap

FragTrap : $(OBJ) ClapTrap.hpp ScavTrap.hpp FragTrap.hpp
		c++ -std=c++98 -Wall -Wextra -Werror $(SRC) -o FragTrap

clean :
		rm -rf $(OBJ) ClapTrap ScavTrap FragTrap