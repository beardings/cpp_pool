#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : _hitPoints(100), _maxHitPoints(100), _energyPoints(100), _maxEnergyPoints(100), _level(1), _meleeAttackDemage(30), _rangedAttackDemage(20), _armorDemageReduction(5) {
	std::cout << "Level " << this->_level << std::endl;
	setName("Eva");
}

ScavTrap::ScavTrap(std::string const name) : _hitPoints(100), _maxHitPoints(100), _energyPoints(100), _maxEnergyPoints(100), _level(1), _meleeAttackDemage(30), _rangedAttackDemage(20), _armorDemageReduction(5) {
	setName(name);
}

ScavTrap::~ScavTrap(void) {
}

ScavTrap::ScavTrap(ScavTrap const & rhs) {
	*this = rhs;
}

void ScavTrap::setName(std::string const name) {
	this->_name = name;
}

std::string ScavTrap::getName(void) const {
	return (this->_name);
}

void ScavTrap::rangedAttack(std::string const & target) {
	this->takeDamage(20);
}

void ScavTrap::meleeAttack(std::string const & target) {
	this->takeDamage(30);
}

void ScavTrap::takeDamage(unsigned int amount) {
	this->_hitPoints -= (amount - this->_armorDemageReduction);
	if (this->_hitPoints < 0) {
		std::cout << this->getName() << " feel bad with " << this->_hitPoints << "hit points" << std::endl;
	}
	else {
		std::cout << this->getName() << " Final hit points [" << this->_hitPoints << "]" << std::endl;
	}
	
}

void ScavTrap::beRepaired(unsigned int amount) {
	this->_hitPoints += amount;

	if (this->_hitPoints > this->_maxHitPoints) {
		this->_hitPoints = this->_maxHitPoints;
	}
	if (this->_energyPoints > this->_maxEnergyPoints) {
		this->_energyPoints = this->_maxEnergyPoints;
	}
	std::cout << this->getName() << " repaired [" << amount << "] hit points." << "Total hit points [" << this->_hitPoints << "]"<< std::endl;
	std::cout << this->getName() << " repaired [" << amount << "] energy points" << "Total energy points points [" << this->_energyPoints << "]"<< std::endl;
}

void ScavTrap::challengeNewcomer(void) {
	
	std::string setOfVarious [] = {"go", "gogogo", "boooommm", "heeyyyy", "woooow"};

	int random;

	srand(time(NULL));
	random = (rand() % 5);


	if (this->_energyPoints < 25)
		std::cout << "Function valthunted cost 25 energy points, you have only " << this->_energyPoints << std::endl;
	else {
		
		std::cout << "Valthunted use, energy point before [" << this->_energyPoints << "] energy point after [" << this->_energyPoints - 25 << "]" << std::endl;
		this->_energyPoints -= 25;
	}
	std::cout << this->getName() << " doing " << setOfVarious[random] << std::endl;
}


ScavTrap & ScavTrap::operator=(ScavTrap const & scav) {
	this->_hitPoints = scav._hitPoints;
	this->_hitPoints = scav._hitPoints;
	this->_maxHitPoints = scav._maxHitPoints;
	this->_energyPoints = scav._energyPoints;
	this->_maxEnergyPoints = scav._maxEnergyPoints;
	this->_level = scav._level;
	this->_name = scav.getName();
	this->_meleeAttackDemage = scav._meleeAttackDemage;
	this->_rangedAttackDemage = scav._rangedAttackDemage;
	this->_armorDemageReduction = scav._armorDemageReduction;
	return *this;
}