#include "Bullet.hpp"

Bullet::Bullet(void) 
{
	int nul;
	//need?
	nul = 0;
	this->_x = nul;
	return ;
}

Bullet::Bullet(int x)
{
	this->_x = x;
	return; 
}

Bullet::Bullet(const Bullet & obj)
{
	*this = obj;
	return;
}

Bullet::~Bullet(void) { return; }

Bullet & Bullet::operator=(const Bullet & obj)
{
	this->_x = obj._x;
	return (*this);
}

int		Bullet::getX(void) const
{
	return (this->_x);
}