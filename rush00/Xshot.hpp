#ifndef XSHOT_HPP
# define XSHOT_HPP

# include "AEnemy.hpp"

class Xshot : public AEnemy
{
public:
	Xshot(void);
	Xshot(int x);
	Xshot(const Xshot & obj);
	~Xshot();
	Xshot & operator=(const Xshot & obj);

};

#endif
