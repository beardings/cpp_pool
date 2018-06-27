#include "EnemyBulletsLine.hpp"

EnemyBulletsLine::EnemyBulletsLine() {}

EnemyBulletsLine::EnemyBulletsLine(const EnemyBulletsLine & obj)
{
	*this = obj;
	return ;
}

EnemyBulletsLine::~EnemyBulletsLine(void)
{
	return ;
}

EnemyBulletsLine 	& EnemyBulletsLine::operator=(const EnemyBulletsLine & obj)
{
	this->_count = obj._count;
	for (int i = 0; i < this->_count; i++) {
		(this->_bullets)[i] = new Bullet(obj._bullets[i]->getX());	
	}
	return (*this);
}

void	EnemyBulletsLine::shiftBullets(int ind)
{
	while (ind < this->_count - 1)
	{
		this->_bullets[ind] = this->_bullets[ind + 1];
		ind++;
	}
	this->_count--;
}

void		EnemyBulletsLine::checkCollision(Player *pl)
{
	for (int i = 0; i < this->_count; ++i)
	{
		if (pl->getX() == this->_bullets[i]->getX())
		{
			pl->decreaseLives();
			delete this->_bullets[i];
			this->shiftBullets(i);
			return;
		}
	}
}