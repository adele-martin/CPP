CC = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

SRC = Zombie.cpp main.cpp zombieHorde.cpp
OBJ = $(SRC:%.cpp=%.o)

RM = rm -f

NAME = brainz

all : $(NAME)

$(NAME) : $(OBJ)
	$(CC) $(FLAGS) -o $(NAME) $(OBJ)

clean :
		$(RM) $(OBJ)

fclean : clean
		$(RM) $(NAME)

re: 	fclean all

.PHONY: all clean fclean re