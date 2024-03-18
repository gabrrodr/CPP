# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gabrrodr <gabrrodr@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/21 13:48:27 by gabrrodr          #+#    #+#              #
#    Updated: 2024/02/21 13:48:27 by gabrrodr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC	=	bsp.cpp \
		Fixed.cpp \
		main.cpp \
		Point.cpp \

OBJ = $(SRC:.cpp=.o)

all : point

point : $(OBJ) Fixed.hpp Point.hpp
		c++ -std=c++98 -Wall -Wextra -Werror $(SRC) -o point

clean :
		rm -rf $(OBJ) point