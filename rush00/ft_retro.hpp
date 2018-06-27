#ifndef FT_RETRO_HPP
# define FT_RETRO_HPP

# include <chrono>
# include <iostream>
# include <fstream>
# include <ncurses.h>
# include <unistd.h>

# define WIN_HEIGHT 55
# define WIN_WIDTH 100

# define FRAME_COLOR 1
# define PLR_COLOR 2
# define RED_COLOR 3
# define INFO_COLOR 4
# define ENSHOT_COLOR 5
# define MAGENTA_COLOR 6

# define ESC_BTN 27
# define UP_BTN 3
# define RIGHT_BTN 5
# define DOWN_BTN 2
# define LEFT_BTN 4
# define SHOT_BTN 32

WINDOW*		init_window(void);

void	play_game(WINDOW *game_win);

#endif