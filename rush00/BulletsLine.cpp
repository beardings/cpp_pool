#include "BulletsLine.hpp"

BulletsLine::BulletsLine() {}

BulletsLine::BulletsLine(const BulletsLine & obj)
{
	*this = obj;
	return ;
}

BulletsLine::~BulletsLine(void)
{
	return ;
}

BulletsLine 	& BulletsLine::operator=(const BulletsLine & obj)
{
	this->_count = obj._count;
	for (int i = 0; i < this->_count; i++) {
		(this->_bullets)[i] = new Bullet(obj._bullets[i]->getX());	
	}
	return (*this);
}

void	BulletsLine::shiftBullets(int ind)
{
	while (ind < this->_count - 1)
	{
		this->_bullets[ind] = this->_bullets[ind + 1];
		ind++;
	}
	this->_count--;
}

void		BulletsLine::checkCollision(int y, EnemiesMap *enemies, Player *pl, WINDOW *game_win)
{
	int points;

	(void)game_win;
	for (int i = 0; i < this->_count; ++i)
	{
		if ((points = enemies->checkCollision(y, this->_bullets[i]->getX())))
		{
			system("afplay -t 0.5 burst.mp3 > /dev/null &");
			pl->increasePoints(points);
			delete this->_bullets[i];
			this->shiftBullets(i--);
		}
	}
}