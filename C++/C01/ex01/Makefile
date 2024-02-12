# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gabrrodr <gabrrodr@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/05 13:20:28 by gabrrodr          #+#    #+#              #
#    Updated: 2024/02/05 13:20:28 by gabrrodr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC =	main.cpp \
		Zombie.cpp \
		zombieHorde.cpp \

OBJ = $(SRC:.cpp=.o)

all: zombie

zombie : $(OBJ) Zombie.hpp
		c++ -std=c++98 -Wall -Wextra -Werror $(SRC) -o zombie
		
clean : 
		rm -rf $(OBJ)

fclean : clean
		rm -rf zombie

re : fclean all