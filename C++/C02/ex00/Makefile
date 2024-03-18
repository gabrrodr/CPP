# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gabrrodr <gabrrodr@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/12 16:58:07 by gabrrodr          #+#    #+#              #
#    Updated: 2024/02/12 16:58:07 by gabrrodr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC =	main.cpp \
		Fixed.cpp \

OBJ =	$(SRC:.cpp=.o)

all : Fixed

Fixed : $(OBJ) Fixed.hpp
		c++ -std=c++98 -Wall -Wextra -Werror $(SRC) -o Fixed

clean :
		rm -rf $(OBJ) Fixed