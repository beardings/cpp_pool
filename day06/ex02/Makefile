NAME = identify

SOURCE = main.cpp

OBJECTS = $(SOURCE:.cpp=.o)

CC = clang++
FL = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJECTS)
	@$(CC) $(FL) $(SOURCE) -o $(NAME)

%.o: %.cpp
	@$(CC) $(FL) -c $< -o $@

clean:
	@rm -f $(OBJECTS)

fclean: clean
	@rm -f $(NAME)

re: fclean all