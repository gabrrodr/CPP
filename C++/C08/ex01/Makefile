# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gabrrodr <gabrrodr@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/25 14:13:19 by gabrrodr          #+#    #+#              #
#    Updated: 2024/03/25 15:32:03 by gabrrodr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC			= c++

FLAGS		= -Wall -Wextra -Werror -std=c++98

RM			= rm -rf

SRC	=	main.cpp \
		Span.cpp \
		
OBJ	=	$(SRC:.cpp=.o)

all: Span

Span: $(OBJ) Span.hpp
		c++ -Wall -Wextra -Werror -std=c++98 $(SRC) -o Span

clean:
	@$(RM) $(OBJ)

fclean: clean
	@$(RM) Span

re: fclean all