# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gabrrodr <gabrrodr@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/11 11:40:34 by gabrrodr          #+#    #+#              #
#    Updated: 2024/03/11 11:40:34 by gabrrodr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC	=	AForm.cpp \
		Bureaucrat.cpp \
		main.cpp \
		PresidentialPardonForm.cpp \
		RobotomyRequestForm.cpp \
		ShrubberyCreationForm.cpp \

OBJ	=	$(SRC:.cpp=.o)

all : AForm

AForm : $(OBJ) AForm.hpp Bureaucrat.hpp PresidentialPardonForm.hpp RobotomyRequestForm.hpp ShrubberyCreationForm.hpp
		c++ -std=c++98 -Wall -Wextra -Werror $(SRC) -o AForm

clean : 
		rm -rf $(OBJ) AForm