#include "Heart.hpp"
#include "Line.hpp"

Line::Line(void)
{

	static int heart = 0;

	this->_count = rand() % 2;
	for (int i = 0; i < this->_count; ++i)
	{
		if (rand() % 4 == 2)
			this->_enemies[i] = new Xshot(rand() % 98);
		else if (rand() % 4 == 3)
		{
			heart++;
			if (heart == 2)
			{
				heart = 0;
				this->_enemies[i] = new Heart(rand() % 98);
			}
			else
				this->_enemies[i] = new Comet(rand() % 98);
		}
		else
			this->_enemies[i] = new Comet(rand() % 98);
			
	}
}

Line::Line(const Line & obj)
{
	*this = obj;
	return ;
}

Line::~Line(void)
{
	for (int i = 0; i < this->_count; ++i)
	{
		delete this->_enemies[i];
	}
}

Line 	& Line::operator=(const Line & obj)
{
	this->_count = obj._count;
	for (int i = 0; i < this->_count; i++) {
		(this->_enemies)[i] = new AEnemy(obj._enemies[i]->getView(), obj._enemies[i]->getX());
	}
	return (*this);
}

void	Line::print(int y, WINDOW *game_win)
{
	int i;

	i = 0;
	while (i < this->_count)
	{
		mvwprintw(game_win, y, this->_enemies[i]->getX(), "%C", this->_enemies[i]->getView());
		i++;
	}
}

int Line::checkForKill(int x)
{
	int ret = 0;

	for (int i = 0; i < this->_count; ++i)
	{
		if (this->_enemies[i]->getX() == x)
		{
			if (this->_enemies[i]->getView() == L'☠' || this->_enemies[i]->getView() == L'☄')
				ret = 4;
			
			else if (this->_enemies[i]->getView() == L'🚼')
				ret = 5;

			delete this->_enemies[i];
			this->shiftEnemies(i);
			return (ret);
		}
	}
	return (0);
}

void	Line::shiftEnemies(int ind)
{
	while (ind < this->_count - 1)
	{
		this->_enemies[ind] = this->_enemies[ind + 1];
		ind++;
	}
	this->_count--;
}

int		Line::checkIfTarget(int x)
{
	for (int i = 0; i < this->_count; ++i)
	{
		if (this->_enemies[i]->getX() == x)
			return (1);
	}
	return (0);
}

void	Line::addBullets(int y, EnemyBullets *en_shots)
{

	for (int i = 0; i < this->_count; ++i)
	{
		if (this->_enemies[i]->getView() == L'☠')
			en_shots->addBullets(y + 1, this->_enemies[i]->getX());
	}
}