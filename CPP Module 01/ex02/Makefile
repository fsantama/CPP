# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fsantama <fsantama@student.42malaga.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/05 10:16:05 by fsantama          #+#    #+#              #
#    Updated: 2024/09/05 10:16:05 by fsantama         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Nombre del compilador
CXX = c++

# Flags de compilación
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

# Nombre del ejecutable
NAME = brain

# Archivos fuente
SRCS = main.cpp

# Archivos objeto (los .o generados)
OBJS = $(SRCS:.cpp=.o)

# Regla por defecto (compila el programa)
all: $(NAME)

# Regla para compilar el ejecutable
$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

# Regla para compilar los archivos .o
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Regla para limpiar archivos objeto y el ejecutable
clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

# Regla para recompilar
re: fclean all
