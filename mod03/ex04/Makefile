# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: zenotan <zenotan@student.codam.nl>           +#+                      #
#                                                    +#+                       #
#    Created: 2020/10/15 15:30:58 by zenotan       #+#    #+#                  #
#    Updated: 2020/10/15 15:30:59 by zenotan       ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = SuperTrap

FILES =	main.cpp \
	FragTrap.cpp \
	ScavTrap.cpp \
	ClapTrap.cpp \
	NinjaTrap.cpp \
	SuperTrap.cpp

OBJDIR = obj/

OBJ := $(addprefix $(OBJDIR), $(FILES:%.cpp=%.o))

CC = clang++

FLAGS = -Wall -Wextra -Werror -std=c++98 -pedantic

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)

$(OBJDIR)%.o: %.cpp
	@mkdir -p $(OBJDIR)
	@$(CC) -c $(FLAGS) -o $@ $< 

clean:
	@rm -rf $(OBJDIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
