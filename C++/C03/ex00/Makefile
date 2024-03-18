# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gabrrodr <gabrrodr@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/21 15:41:49 by gabrrodr          #+#    #+#              #
#    Updated: 2024/02/21 15:41:49 by gabrrodr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC =	ClapTrap.cpp \
		main.cpp \

OBJ =	$(SRC:.cpp=.o)

all : ClapTrap

ClapTrap : $(OBJ) ClapTrap.hpp
		c++ -std=c++98 -Wall -Wextra -Werror $(SRC) -o ClapTrap

clean :
		rm -rf $(OBJ) ClapTrap