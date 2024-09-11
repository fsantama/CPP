# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fsantama <fsantama@student.42malaga.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/03 10:30:59 by fsantama          #+#    #+#              #
#    Updated: 2024/09/03 10:30:59 by fsantama         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Variables
CC = g++
CFLAGS = -Wall -Wextra -Werror -std=c++98
SRCS = Account.cpp tests.cpp
OBJS = $(SRCS:.cpp=.o)
NAME = bank_account

# Regla principal: compilar el ejecutable
all: $(NAME)

# Regla para compilar el ejecutable
$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

# Regla para compilar archivos .cpp a .o
%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

# Regla para limpiar los archivos generados
clean:
	rm -f $(OBJS)

# Regla para limpiar todo, incluyendo el ejecutable
fclean: clean
	rm -f $(NAME)

# Regla para recompilar todo desde cero
re: fclean all

# Evita que make intente usar un archivo llamado 'clean', 'fclean' o 're'
.PHONY: all clean fclean re
