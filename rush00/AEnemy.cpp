#include "AEnemy.hpp"

AEnemy::AEnemy(void)
{
	return ;
}

AEnemy::AEnemy(wchar_t view, int x) {
	setView(view);
	setX(x);
	return ;
}

AEnemy::AEnemy(const AEnemy & obj)
{
	*this = obj;
}

AEnemy::~AEnemy() {

}

AEnemy & AEnemy::operator= (const AEnemy & obj)
{
	this->_view = obj._view;
	this->_x = obj._x;
	return (*this);
}

void AEnemy::setView(wchar_t const view) 
{
	this->_view = view;
}


void AEnemy::setX(int const x)
{
	this->_x = x;
}


wchar_t	AEnemy::getView(void) const 
{ 
	return (this->_view); 
}

int	AEnemy::getX(void) const 
{ 
	return (this->_x); 
}