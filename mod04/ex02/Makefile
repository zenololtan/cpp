# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: zenotan <zenotan@student.codam.nl>           +#+                      #
#                                                    +#+                       #
#    Created: 2020/10/17 15:34:35 by zenotan       #+#    #+#                  #
#    Updated: 2020/10/17 15:34:36 by zenotan       ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = pure

FILES =	main.cpp \
	Squad.cpp \
	TacticalMarine.cpp \
	AssaultTerminator.cpp

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
