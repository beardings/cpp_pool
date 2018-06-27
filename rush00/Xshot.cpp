#include "Xshot.hpp"

Xshot::Xshot(void)
{
	return ;
}

Xshot::Xshot(int x) : AEnemy(L'☠', x) {}

Xshot::Xshot(const Xshot & obj)
{
	*this = obj;
}

Xshot::~Xshot() {}

Xshot & Xshot::operator=(const Xshot & obj)
{
	this->_view = obj._view;
	this->_x = obj._x;
	return (*this);
}