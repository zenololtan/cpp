NAME = MoreBrainz

FILES = main.cpp \
	Zombie.cpp \
	ZombieHorde.cpp

CC = clang++

FLAGS = -Wall -Wextra -Werror -std=c++98 -pedantic

NAM = -o $(NAME)

.PHONY: all fclean re

all: $(NAME)

$(NAME):
	$(CC) $(FILES) $(FLAGS) $(NAM)

clean:

fclean: clean
	rm -f $(NAME)

re: fclean all
