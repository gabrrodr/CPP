# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gabrrodr <gabrrodr@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/20 15:47:12 by gabrrodr          #+#    #+#              #
#    Updated: 2024/03/20 15:49:36 by gabrrodr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC	=	main.cpp \

OBJ	=	$(SRC:.cpp=.o)

all: whatever

whatever: $(OBJ) whatever.hpp
		c++ -std=c++98 -Wall -Wextra -Werror $(SRC) -o whatever

clean:
	rm -rf $(OBJ) whatever