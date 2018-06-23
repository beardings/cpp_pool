#include "FragTrap.hpp"
#include "ScavTrap.hpp"


int main(void) 
{

	FragTrap robot("Wallie");
	ScavTrap robot2("Robot2");
	
	std::string const competitor = "Eva";
	std::string const competitor2 = "boooom";

	robot.rangedAttack(competitor);
	robot.meleeAttack(competitor);
	robot.beRepaired(3);
	robot.vaulthunter_dot_exe(competitor);
	robot.beRepaired(15);
	robot.rangedAttack(competitor);


	robot2.rangedAttack(competitor2);
	robot2.meleeAttack(competitor2);
	robot2.beRepaired(3);
	robot2.beRepaired(15);
	robot2.rangedAttack(competitor2);
	robot2.challengeNewcomer();

	return (0);
}