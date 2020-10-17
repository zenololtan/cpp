# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: zenotan <zenotan@student.codam.nl>           +#+                      #
#                                                    +#+                       #
#    Created: 2020/10/17 00:43:07 by zenotan       #+#    #+#                  #
#    Updated: 2020/10/17 01:25:47 by zenotan       ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = sorc

FILES =	main.cpp \
	Sorcerer.cpp \
	Victim.cpp \
	Peon.cpp

OBJDIR = obj/

OBJ := $(addprefix $(OBJDIR), $(FILES:%.cpp=%.o))

CC = clang++

FLAGS = -Wall -Wextra -Werror -std=c++98 -pedantic

all: $(NAME)

$(NAME): $(OBJ)
	@echo "Compiling executable..."
	@$(CC) $(FLAGS) $(OBJ) -o $(NAME)

$(OBJDIR)%.o: %.cpp
	@mkdir -p $(OBJDIR)
	@echo "Compiling $@"
	@$(CC) -c $(FLAGS) -o $@ $< 

clean:
	@echo "Removing objects..."
	@rm -rf $(OBJDIR)

fclean: clean
	@echo "Deleting executable..."
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
