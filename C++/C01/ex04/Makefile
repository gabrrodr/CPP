# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gabrrodr <gabrrodr@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/07 16:36:00 by gabrrodr          #+#    #+#              #
#    Updated: 2024/02/07 16:36:00 by gabrrodr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC =	main.cpp \
		replace.cpp \

OBJ = $(SRC:.cpp=.o)

all : replace

replace : $(OBJ) replace.hpp
		c++	-std=c++98 -Wall -Wextra -Werror $(SRC) -o replace

clean :
		rm -rf $(OBJ) replace