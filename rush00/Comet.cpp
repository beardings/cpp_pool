#include "Comet.hpp"

Comet::Comet(void) : AEnemy(L'☄', 0) {}

Comet::Comet(int x) : AEnemy(L'☄', x) {}

Comet::Comet(const Comet & obj)
{
	*this = obj;
	return ;
}

Comet::~Comet(void)
{
	return ;
}

Comet	& Comet::operator=(const Comet & obj)
{
	this->_view = obj._view;
	this->_x = obj._x;
	return (*this);
	return (*this);
}