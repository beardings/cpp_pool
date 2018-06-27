SRC := main.cpp \
		init_window.cpp \
		play_game.cpp \
		ABulletsLine.cpp \
		AEnemy.cpp \
		Bullet.cpp \
		BulletsLine.cpp \
		Comet.cpp \
		EnemiesMap.cpp \
		EnemyBullets.cpp \
		EnemyBulletsLine.cpp \
		Player.cpp \
		PlayerBullets.cpp \
		Xshot.cpp \
		Line.cpp \
		Heart.cpp

OBJ := $(SRC:.cpp=.o)

NAME = ft_retro

CC = clang++

FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJ)
	@$(CC) $(FLAGS) -o $@ $^ -lncurses

%.o: %.cpp
	@$(CC) $(FLAGS) -c -o $@ $<

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all