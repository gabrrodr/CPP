# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gabrrodr <gabrrodr@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/19 15:28:36 by gabrrodr          #+#    #+#              #
#    Updated: 2025/01/22 16:05:10 by gabrrodr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =	serialize

CXX =	c++
RM =	rm -rf

CXXFLAGS =	-Wall -Wextra -Werror -std=c++98 -g

SRC = 	main.cpp \
		Serializer.cpp \
		
OBJ =	$(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
		@ $(CXX) $(OBJ) $(CXXFLAGS) -o $(NAME)

clean:
		@$(RM) $(OBJ) serialize

fclean:
		@$(RM) $(NAME)

re: clean all