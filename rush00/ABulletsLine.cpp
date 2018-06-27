#include "ABulletsLine.hpp"

ABulletsLine::ABulletsLine(void) : _count(0) { return; }

ABulletsLine::ABulletsLine(const ABulletsLine & obj)
{
	*this = obj;
}

ABulletsLine::~ABulletsLine() 
{
	int j;
	
	j = 0;
	while (j < this->_count) {
		delete this->_bullets[j];
		++j;
	} 

	return ;
}

ABulletsLine & ABulletsLine::operator=(const ABulletsLine & obj)
{
	int j;
	this->_count = obj._count;
	j = 0;

	while (j < this->_count) {
		(this->_bullets)[j] = new Bullet(obj._bullets[j]->getX());
		j++;
	}
	return (*this);
}

void	ABulletsLine::push(int x)
{
	this->_bullets[this->_count] = new Bullet(x);
	this->_count++;
}

void	ABulletsLine::print(WINDOW *game_win, int y)
{
	int j;

	j = 0;
	while (j < this->_count) {
		mvwprintw(game_win, y, this->_bullets[j]->getX(), "%c", '\'');
		j++;
	}
}