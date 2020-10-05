NAME = wasteland

FILES =	main.cpp \
	AWeapon.cpp \
	PlasmaRifle.cpp \
	PowerFist.cpp \
	Enemy.cpp \
	SuperMutant.cpp \
	RadScorpion.cpp \
	Character.cpp

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
