# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fsantama <fsantama@student.42malaga.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/03 09:12:39 by fsantama          #+#    #+#              #
#    Updated: 2024/09/03 09:12:39 by fsantama         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Nombre del ejecutable
NAME = megaphone

# Compilador
CXX = c++

# Flags de compilación
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

# Objetivo por defecto: compila el ejecutable
all: $(NAME)

# Regla para compilar el archivo de origen
$(NAME): megaphone.cpp
	$(CXX) $(CXXFLAGS) -o $(NAME) megaphone.cpp

# Limpia los archivos generados
clean:
	rm -f $(NAME)

# Limpia y recompila
re: clean all
