# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fsantama <fsantama@student.42malaga.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/06 08:33:28 by fsantama          #+#    #+#              #
#    Updated: 2024/09/06 08:33:28 by fsantama         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Variables
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
NAME = violence

# Fuentes
SRCS = main.cpp Weapon.cpp HumanA.cpp HumanB.cpp
OBJS = $(SRCS:.cpp=.o)

# Regla por defecto
all: $(NAME)

# Regla para compilar el ejecutable
$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

# Regla para compilar archivos .o
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Limpiar archivos objeto y el ejecutable
clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

# Recompilar todo
re: fclean all
