# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gabrrodr <gabrrodr@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/22 16:05:06 by gabrrodr          #+#    #+#              #
#    Updated: 2024/03/22 16:08:15 by gabrrodr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC			= c++

FLAGS		= -Wall -Wextra -Werror -std=c++98

RM			= rm -rf

SRC	=	main.cpp
OBJ	=	$(SRC:.cpp=.o)

all: easyfind

easyfind: $(OBJ) easyfind.hpp
	@$(CC) $(OBJ) $(OPTS) -o easyfind

clean:
	@$(RM) $(OBJ)

fclean: clean
	@$(RM) easyfind

re: fclean all