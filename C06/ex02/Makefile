# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gabrrodr <gabrrodr@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/20 13:33:41 by gabrrodr          #+#    #+#              #
#    Updated: 2025/01/22 16:02:52 by gabrrodr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =	base

CXX =	c++
RM =	rm -rf

CXXFLAGS =	-Wall -Wextra -Werror -std=c++98 -g

SRC = 	main.cpp \
		Base.cpp \
		
OBJ =	$(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
		@ $(CXX) $(OBJ) $(CXXFLAGS) -o $(NAME)

clean:
		@$(RM) $(OBJ) base

fclean:
		@$(RM) $(NAME)

re: clean all