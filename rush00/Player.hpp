#ifndef PLAYER_HPP
# define PLAYER_HPP

class Player
{

public:
	Player();
	Player(const Player & obj);
	~Player();
	Player 	& operator=(const Player & obj);
	
	
	int		getX() const;
	int		getY() const;

	//seters
	void	setX(int x);
	void	setY(int y);
	void	setLives(int lives);
	void	setPoints(int points);

	//geters
	int		getLives() const;
	int		getPoints() const;

	
	void	moveLeft();
	void	moveRight();
	void	moveTop();
	void	moveBottom();
	int		decreaseLives();
	void	increasePoints(int points);
	void 	addLives();

private:
	int _y;
	int _x;
	int _lives;
	int _points;

};

#endif
