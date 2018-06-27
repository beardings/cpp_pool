#include "Player.hpp"
#include <cstdlib>

Player::Player(void)
{
	//_y(47), _x(49), _lives(10), _points(0)
	setX(49);
	setY(47);
	setLives(10);
	setPoints(0);
	return;
}

Player::Player(const Player & obj)
{
	*this = obj;
	return ;
}

Player::~Player(void) { return; }

Player   & Player::operator=(const Player & obj)
{
	this->_y = obj._y;
	this->_x = obj._x;
	this->_lives = obj._lives;
	this->_points = obj._points;
	return (*this);
}

void	Player::setX(int x)
{
	this->_x = x;
}

void	Player::setY(int y)
{
	this->_y = y;
}

void	Player::setLives(int lives)
{
	this->_lives = lives;
}

void	Player::setPoints(int points)
{
	this->_points = points;
}

int Player::getX(void) const
{
	return (this->_x);
}

int Player::getY(void) const
{
	return (this->_y);
}

int Player::getLives(void) const
{
	return (this->_lives);
}

int Player::getPoints(void) const
{
	return (this->_points);
}

void	Player::moveLeft(void)
{
	(this->_x > 0) ? this->_x-- : this->_x;
}

void	Player::moveRight(void)
{
	(this->_x < 97) ? this->_x++ : this->_x;
}

void	Player::moveTop(void)
{
	(this->_y > 1) ? this->_y-- : this->_y;
}

void	Player::moveBottom(void)
{
	(this->_y < 47) ? this->_y++ : this->_y;
}

int Player::decreaseLives(void)
{
	system("afplay -t 0.5 hit.mp3 > /dev/null &");
	this->_lives--;
	if (!this->_lives)
		return (1);
	return (0);
}

void Player::addLives(void)
{
	this->_lives++;
}

void	Player::increasePoints(int points)
{
	this->_points += points;
}