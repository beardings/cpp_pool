#ifndef ABULLETSLINE_HPP
# define ABULLETSLINE_HPP

# include "Player.hpp"
# include "Bullet.hpp"
# include "ft_retro.hpp"


class ABulletsLine
{
protected:
	Bullet *_bullets[WIN_WIDTH - 2];
	int _count;
	virtual void	shiftBullets(int ind) = 0;

public:
	ABulletsLine();
	ABulletsLine(const ABulletsLine & obj);
	virtual ~ABulletsLine();
	ABulletsLine & operator=(const ABulletsLine & obj);

	
	void	push(int x);
	void	print(WINDOW *game_win, int y);
};

#endif