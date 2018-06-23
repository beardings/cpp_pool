#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>

class ScavTrap {

	public:
		ScavTrap(void);
		~ScavTrap(void);
		ScavTrap(std::string const name);
		ScavTrap(ScavTrap const & rhs);
		ScavTrap & operator=(ScavTrap const & rhs);

		void setName(std::string const name);
		std::string getName(void) const;

		void rangedAttack(std::string const & target);
		void meleeAttack(std::string const & target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		void challengeNewcomer(void);

	private:
		int _hitPoints;
		int _maxHitPoints;
		int _energyPoints;
		int _maxEnergyPoints;
		int _level;
		std::string _name;
		int _meleeAttackDemage;
		int _rangedAttackDemage;
		int _armorDemageReduction;
};

#endif