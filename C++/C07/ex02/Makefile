# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gabrrodr <gabrrodr@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/21 15:34:59 by gabrrodr          #+#    #+#              #
#    Updated: 2024/03/21 15:39:02 by gabrrodr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC			= c++
FLAGS		= -Wall -Wextra -Werror -std=c++98
RM			= rm -rf

SRC	=	main.cpp
OBJ	=	$(SRC:.cpp=.o)

all: array

array: $(OBJ) Array.hpp
	@$(CC) $(OBJ) $(OPTS) -o array

clean:
	@$(RM) $(OBJ)

fclean: clean
	@$(RM) array

re: fclean all