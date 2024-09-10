# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fsantama <fsantama@student.42malaga.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/04 14:34:11 by fsantama          #+#    #+#              #
#    Updated: 2024/09/04 14:34:11 by fsantama         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Makefile

CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
NAME = zombie

SRCS = main.cpp Zombie.cpp newZombie.cpp randomChump.cpp
OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
