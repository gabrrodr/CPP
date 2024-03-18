# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gabrrodr <gabrrodr@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/12 11:45:56 by gabrrodr          #+#    #+#              #
#    Updated: 2024/02/12 11:45:56 by gabrrodr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC =	Harl.cpp \
		main.cpp \

OBJ = $(SRC:.cpp=.o)

all : karen

karen : $(OBJ) Harl.hpp
		c++ -std=c++98 -Wall -Wextra -Werror $(SRC) -o karen

clean :
		rm -rf $(OBJ) karen

