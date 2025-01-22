# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gabrrodr <gabrrodr@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/20 16:35:37 by gabrrodr          #+#    #+#              #
#    Updated: 2024/03/20 16:36:03 by gabrrodr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


SRC	=	main.cpp \

OBJ	=	$(SRC:.cpp=.o)

all: iter

iter: $(OBJ) iter.hpp
		c++ -std=c++98 -Wall -Wextra -Werror $(SRC) -o iter

clean:
	rm -rf $(OBJ) iter