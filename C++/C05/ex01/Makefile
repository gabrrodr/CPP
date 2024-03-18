# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gabrrodr <gabrrodr@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/01 15:49:51 by gabrrodr          #+#    #+#              #
#    Updated: 2024/03/01 15:49:51 by gabrrodr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC	=	Bureaucrat.cpp \
		main.cpp \
		Form.cpp \

OBJ	=	$(SRC:.cpp=.o)

all : Bureaucrat

Bureaucrat : $(OBJ) Bureaucrat.hpp Form.hpp
		c++ -std=c++98 -Wall -Wextra -Werror $(SRC) -o Bureaucrat

clean :
		rm -rf $(OBJ) Bureaucrat