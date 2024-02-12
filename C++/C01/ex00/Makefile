# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gabrrodr <gabrrodr@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/31 14:59:47 by gabrrodr          #+#    #+#              #
#    Updated: 2024/01/31 15:10:15 by gabrrodr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC =	main.cpp \
		newZombie.cpp \
		randomChump.cpp \
		Zombie.cpp \

OBJ = $(SRC:.cpp=.o)

all: zombie

zombie : $(OBJ) Zombie.hpp
		c++ -std=c++98 -Wall -Wextra -Werror $(SRC) -o zombie
		
clean : 
		rm -rf $(OBJ)

fclean : clean
		rm -rf zombie

re : fclean all