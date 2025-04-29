NAME = convert
SRC = main.cpp ScalarConverter.cpp
OBJ = $(SRC:.cpp=.o)

CC = g++ # c++
CPPFLAGS = -Wall -Wextra -Werror #-std=c++98

all: $(NAME)

$(NAME): $(OBJ) $(SRC)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re