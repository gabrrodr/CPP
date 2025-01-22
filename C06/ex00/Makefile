# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gabrrodr <gabrrodr@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/18 14:02:01 by gabrrodr          #+#    #+#              #
#    Updated: 2025/01/22 13:21:15 by gabrrodr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC	=	ScalarConverter.cpp \
		main.cpp \

OBJ	=	$(SRC:.cpp=.o)

all: ScalarConverter

ScalarConverter: $(OBJ) ScalarConverter.hpp
		c++ -std=c++98 -Wall -Wextra -Werror $(SRC) -o ScalarConverter

clean:
	rm -rf $(OBJ) ScalarConverter