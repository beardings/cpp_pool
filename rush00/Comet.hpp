#ifndef COMET_HPP
# define COMET_HPP

# include "AEnemy.hpp"

class Comet : public AEnemy
{
public:
	Comet(void);
	Comet(int x);
	Comet(const Comet & obj);
	~Comet();
	Comet 	& operator=(const Comet & obj);
};

#endif
