# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gabrrodr <gabrrodr@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/11 14:30:31 by gabrrodr          #+#    #+#              #
#    Updated: 2024/03/11 14:30:31 by gabrrodr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC	=	AForm.cpp \
		Bureaucrat.cpp \
		main.cpp \
		PresidentialPardonForm.cpp \
		RobotomyRequestForm.cpp \
		ShrubberyCreationForm.cpp \
		Intern.cpp \

OBJ	=	$(SRC:.cpp=.o)

all : Intern

Intern : $(OBJ) AForm.hpp Bureaucrat.hpp PresidentialPardonForm.hpp RobotomyRequestForm.hpp ShrubberyCreationForm.hpp Intern.hpp
		c++ -std=c++98 -Wall -Wextra -Werror $(SRC) -o Intern

clean : 
		rm -rf $(OBJ) Intern