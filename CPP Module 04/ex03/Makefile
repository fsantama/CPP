#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fsantama <fsantama@student.42malaga.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/11 14:20:37 by fsantama          #+#    #+#              #
#    Updated: 2024/09/11 14:20:38 by fsantama         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

# Makefile for Exercise 03

# Compiler and flags
CXX = g++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

# Directories
SRCDIR = .
OBJDIR = obj
BINDIR = bin

# Sources and objects
SOURCES = $(wildcard $(SRCDIR)/*.cpp)
OBJECTS = $(patsubst $(SRCDIR)/%.cpp,$(OBJDIR)/%.o,$(SOURCES))

# Executable
EXEC = $(BINDIR)/main

# Targets
all: $(EXEC)

$(EXEC): $(OBJECTS)
	@mkdir -p $(BINDIR)
	$(CXX) $(CXXFLAGS) -o $@ $^

$(OBJDIR)/%.o: $(SRCDIR)/%.cpp
	@mkdir -p $(OBJDIR)
	$(CXX) $(CXXFLAGS) -c -o $@ $<

clean:
	@rm -rf $(OBJDIR) $(BINDIR)

fclean: clean
	@rm -f $(EXEC)

re: fclean all

.PHONY: all clean fclean re
