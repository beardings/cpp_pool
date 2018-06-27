#include "ft_retro.hpp"
#include "EnemiesMap.hpp"
#include "PlayerBullets.hpp"
#include "EnemyBullets.hpp"
#include "Player.hpp"

void	move_pl(Player *pl, char ch)
{
	if (ch == LEFT_BTN)
		pl->moveLeft();
	else if (ch == RIGHT_BTN)
		pl->moveRight();
	else if (ch == UP_BTN)
		pl->moveTop();
	else if (ch == DOWN_BTN)
		pl->moveBottom();
}

void	update_win(WINDOW *game_win, EnemiesMap *enemies, Player *pl, PlayerBullets *pl_shots, double seconds, EnemyBullets * en_shots)
{
	werase(game_win);
	
	attron(COLOR_PAIR(INFO_COLOR) | A_BOLD);
	
	mvprintw(1, 2, "⌛");
	mvprintw(1, 4, "Time:   %-5.2f", seconds / 1000);

	mvprintw(2, 2, "💙");
	mvprintw(2, 5, "Lives:  %-5d", pl->getLives());
	
	mvprintw(3, 2, "💠");
	mvprintw(3, 5, "Score:  %-5d", pl->getPoints());
	
	mvprintw(4, 2, "🛑 Exit:   press 'esc'");
	mvprintw(4, 40, "Shots: press 'space'");
	mvprintw(1, 85, "Move up:    ⇧");
	mvprintw(2, 85, "Move down:  ⇩");
	mvprintw(3, 85, "Move left:  ⇦");
	mvprintw(4, 85, "Move right: ⇨");

	wattron(game_win, COLOR_PAIR(MAGENTA_COLOR) | A_BOLD);
	enemies->printLines(game_win);
	
	wattron(game_win, COLOR_PAIR(ENSHOT_COLOR) | A_BOLD);
	en_shots->printLines(game_win);

	wattron(game_win, COLOR_PAIR(PLR_COLOR) | A_BOLD);
	pl_shots->printLines(game_win);
	mvwprintw(game_win, pl->getY(), pl->getX(), "%C", L'∆');

	wrefresh(game_win);
}

void	check_collision(EnemiesMap *enemies, Player *pl, PlayerBullets *pl_shots, EnemyBullets *en_shots, WINDOW *game_win)
{
	char ch;

	pl_shots->checkCollision(enemies, pl, game_win);
	en_shots->checkCollision(pl);
	
	int check = enemies->checkCollision(pl->getY(), pl->getX());


	if (check == 5)
		pl->addLives();
	else if (check == 4)
		pl->decreaseLives();
	
	if (pl->getLives() <= 0)
	{
		mvprintw(pl->getY() + 6, pl->getX(), "💥");

		mvprintw(2, 5, "Lives:  %-5d", pl->getLives());
		delete pl;
		delete enemies;
		attron(COLOR_PAIR(RED_COLOR) | A_BOLD);

		mvprintw(2, 45, "GAME OVER");
		mvprintw(3, 39, "Press escape to finish");
		mvprintw(4, 39, "                     ");

		refresh();
		
		wrefresh(game_win);
		while ((ch = getch()) != ESC_BTN)
			;
		
		endwin();
		exit(0);
	}
}

void	enemy_shot(EnemyBullets *en_shots, EnemiesMap *enemies)
{
	enemies->addBullets(en_shots);
}

void	play_game(WINDOW *game_win)
{
	char ch;
	int i = 0;
	std::chrono::high_resolution_clock::time_point checkTime;
	std::chrono::high_resolution_clock::time_point begin;
	std::chrono::high_resolution_clock::time_point cur;
	double seconds = 0;
	Player *pl = new Player;
	EnemiesMap *enemies = new EnemiesMap;
	PlayerBullets *pl_shots = new PlayerBullets;
	EnemyBullets *en_shots = new EnemyBullets;

	wattron(game_win, A_BOLD);

	begin = checkTime  = std::chrono::high_resolution_clock::now();
	while ((ch = getch()) != ESC_BTN)
	{
		cur = std::chrono::high_resolution_clock::now();
		
		if (i++ % 2000 == 0)
			en_shots->shiftLines();

		if (i % 1000 == 0)
			pl_shots->shiftLines();

		if (i % 30000 == 0)
			enemy_shot(en_shots, enemies);
		
		if (std::chrono::duration_cast<std::chrono::milliseconds>(cur - checkTime).count() > 400)
		{
			checkTime = std::chrono::high_resolution_clock::now();
			enemies->addLine();
		}
		
		if (ch == SHOT_BTN)
			pl_shots->addBullets(pl->getY() - 1, pl->getX());
		
		if (ch > 1 && ch < 6)
			move_pl(pl, ch);
		
		seconds = std::chrono::duration_cast<std::chrono::milliseconds>(cur - begin).count();
		check_collision(enemies, pl, pl_shots, en_shots, game_win);
		update_win(game_win, enemies, pl, pl_shots, seconds, en_shots);
	}

	endwin();
}
