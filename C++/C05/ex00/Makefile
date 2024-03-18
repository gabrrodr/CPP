# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gabrrodr <gabrrodr@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/29 17:21:12 by gabrrodr          #+#    #+#              #
#    Updated: 2024/02/29 17:21:12 by gabrrodr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC	=	Bureaucrat.cpp \
		main.cpp \

OBJ	=	$(SRC:.cpp=.o)

all : Bureaucrat

Bureaucrat : $(OBJ) Bureaucrat.hpp
		c++ -std=c++98 -Wall -Wextra -Werror $(SRC) -o Bureaucrat

clean :
		rm -rf $(OBJ) Bureaucrat