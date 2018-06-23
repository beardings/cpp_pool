#include "FragTrap.hpp"

int main(void) 
{

	FragTrap robot("Wallie");
	
	std::string const competitor = "Eva";

	robot.rangedAttack(competitor);
	robot.meleeAttack(competitor);

	robot.beRepaired(3);
	robot.vaulthunter_dot_exe(competitor);

	robot.beRepaired(15);
	robot.rangedAttack(competitor);
	return (0);
}