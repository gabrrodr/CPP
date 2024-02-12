# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gabrrodr <gabrrodr@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/05 16:22:29 by gabrrodr          #+#    #+#              #
#    Updated: 2024/02/05 16:22:29 by gabrrodr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = main.cpp \

OBJ = $(SRC:.cpp=.o)

all: hi

hi: $(OBJ)
	c++ -std=c++98 -Wall -Wextra -Werror $(SRC) -o hi

clean:
	rm -rf $(OBJ)