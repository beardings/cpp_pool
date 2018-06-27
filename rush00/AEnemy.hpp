#ifndef AENEMY_HPP
# define AENEMY_HPP

class AEnemy
{

public:
	AEnemy(void);
	AEnemy(wchar_t view, int x);
	AEnemy(const AEnemy & obj);
	virtual ~AEnemy();
	AEnemy & operator= (const AEnemy & obj);

    //seters
    void setView(wchar_t const view);
    void setX(int const x);


    //geters
	wchar_t	getView(void) const;
	int	getX(void) const;

protected:
	wchar_t _view;
	int _x;


};

#endif
