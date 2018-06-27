#ifndef ENEMYBULLETS_HPP
# define ENEMYBULLETS_HPP

# include "EnemyBulletsLine.hpp"

class EnemyBulletsLine;

class EnemyBullets
{
private:
	EnemyBulletsLine *_lines[50];
public:
	EnemyBullets();
	EnemyBullets(const EnemyBullets & obj);
	~EnemyBullets();
	EnemyBullets	& operator=(const EnemyBullets & obj);

	bool            operator==( EnemyBullets const & rhs) const;
	
	void	addBullets(int y, int x);
	void	shiftLines();
	void	checkCollision(Player *pl);
	void	printLines(WINDOW *game_win);
};

//std::ostream& operator++(std::ostream& stream, Fixed const & src);

#endif
