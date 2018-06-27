#include "Heart.hpp"

Heart::Heart(void) : AEnemy(L'🚼', 0) {}

Heart::Heart(int x) : AEnemy(L'🚼', x) {}

Heart::Heart(const Heart & obj)
{
	*this = obj;
	return ;
}

Heart::~Heart(void)
{
	return ;
}

Heart	& Heart::operator=(const Heart & obj)
{
	this->_view = obj._view;
	this->_x = obj._x;
	return (*this);
	return (*this);
}