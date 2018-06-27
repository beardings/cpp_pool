#ifndef HEART_HPP
# define HEART_HPP

# include "AEnemy.hpp"

class Heart : public AEnemy
{
public:
	Heart(void);
	Heart(int x);
	Heart(const Heart & obj);
	~Heart();
	Heart 	& operator=(const Heart & obj);
};

#endif
