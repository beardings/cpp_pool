#ifndef BULLET_HPP
# define BULLET_HPP

class Bullet
{
private:
	int _x;
public:
	Bullet(void);
	Bullet(int x);
	Bullet(const Bullet & obj);
	~Bullet();
	Bullet & operator=(const Bullet & obj);
	
	int		getX() const;
};

#endif
