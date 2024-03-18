# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gabrrodr <gabrrodr@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/12 13:25:04 by gabrrodr          #+#    #+#              #
#    Updated: 2024/02/12 13:25:04 by gabrrodr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC =	Harl.cpp \
		main.cpp \

OBJ =	$(SRC:.cpp=.o)

all : harlFilter

harlFilter : $(OBJ) Harl.hpp
			c++ -std=c++98 -Wall -Wextra -Werror $(SRC) -o harlFilter

clean :
		rm -rf $(OBJ) harlFilter