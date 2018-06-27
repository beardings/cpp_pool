#ifndef ENEMYBULLETSLINE_HPP
# define ENEMYBULLETSLINE_HPP

# include "ABulletsLine.hpp"
# include "EnemiesMap.hpp"

class EnemyBulletsLine : public ABulletsLine
{
protected:
	void	shiftBullets(int ind);
public:
	EnemyBulletsLine();
	EnemyBulletsLine(const EnemyBulletsLine & obj);
	~EnemyBulletsLine();
	EnemyBulletsLine 	& operator=(const EnemyBulletsLine & obj);

	void		checkCollision(Player *pl);
};

#endif
