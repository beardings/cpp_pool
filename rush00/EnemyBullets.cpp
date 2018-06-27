#include "EnemyBullets.hpp"

EnemyBullets::EnemyBullets(void)
{
	for (int i = 0; i < 50; ++i)
	{
		this->_lines[i] = NULL;
	}
}

EnemyBullets::EnemyBullets(const EnemyBullets & obj)
{
	*this = obj;
	return ;
}

EnemyBullets::~EnemyBullets(void)
{
	for (int i = 0; i < 50; ++i)
	{
		if (this->_lines[i])
			delete this->_lines[i];
	}
	return;
}

EnemyBullets	& EnemyBullets::operator=(const EnemyBullets & obj)
{
	for (int i = 0; i < 50; i++) {
		(this->_lines)[i] = new EnemyBulletsLine(*(obj._lines[i]));
	}
	return (*this);
}

void	EnemyBullets::addBullets(int y, int x)
{
	if (y > 49)
		return;
	if (!this->_lines[y])
		this->_lines[y] = new EnemyBulletsLine;
	this->_lines[y]->push(x);
}

void	EnemyBullets::shiftLines(void)
{
	int constLine;
	int i;

	constLine = 49;
	i = constLine;
	if (this->_lines[constLine])
		delete this->_lines[constLine];
	for (int i = constLine; i > 0; --i)
	{
		this->_lines[i] = this->_lines[i - 1];
	}
	this->_lines[0] = NULL;
}

void	EnemyBullets::checkCollision(Player *pl)
{
		if (this->_lines[pl->getY()])
			this->_lines[pl->getY()]->checkCollision(pl);
}

void	EnemyBullets::printLines(WINDOW *game_win)
{
	for (int i = 0; i < 50; ++i)
	{
		if (this->_lines[i])
			this->_lines[i]->print(game_win, i);
	}
}

bool    EnemyBullets::operator==( EnemyBullets const & rhs) const 
{
    return this->_lines == rhs._lines;
}