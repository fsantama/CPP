#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fsantama <fsantama@student.42malaga.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/10 12:35:47 by fsantama          #+#    #+#              #
#    Updated: 2024/09/11 10:30:21 by fsantama         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

# Nombre del compilador
CXX = c++

# Opciones de compilación
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

# Nombre del ejecutable
NAME = scavTrap

# Archivos fuente
SRCS = main.cpp ClapTrap.cpp ScavTrap.cpp

# Archivos objeto
OBJS = $(SRCS:.cpp=.o)

# Reglas de construcción
all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
