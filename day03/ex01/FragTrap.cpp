#include "FragTrap.hpp"

FragTrap::FragTrap(void) : _hitPoints(100), _maxHitPoints(100), _energyPoints(100), _maxEnergyPoints(100), _level(1), _meleeAttackDemage(30), _rangedAttackDemage(20), _armorDemageReduction(5) {
	std::cout << "Level " << this->_level << std::endl;
	setName("Eva");
}

FragTrap::FragTrap(std::string const name) : _hitPoints(100), _maxHitPoints(100), _energyPoints(100), _maxEnergyPoints(100), _level(1), _meleeAttackDemage(30), _rangedAttackDemage(20), _armorDemageReduction(5) {
	setName(name);
}

FragTrap::~FragTrap(void) {

}

FragTrap::FragTrap(FragTrap const & trap) {
	*this = trap;
}

void FragTrap::setName(std::string const name) {
	this->_name = name;
}

std::string FragTrap::getName(void) const {
	return (this->_name);
}

void FragTrap::rangedAttack(std::string const & target) {
	std::cout << "FR4G-TP " << this->getName() << " attacks " << target << " at range, causing " << this->_rangedAttackDemage << " points of damage !" << std::endl;
	this->takeDamage(20);
}

void FragTrap::meleeAttack(std::string const & target) {
	this->takeDamage(30);
}

void FragTrap::takeDamage(unsigned int amount) {
	this->_hitPoints -= (amount - this->_armorDemageReduction);

	if (this->_hitPoints < 0)
		std::cout << this->getName() << " feel bad with " << this->_hitPoints << "hit points" << std::endl;
	else {
		std::cout << this->getName() << " Final hit Points [" << this->_hitPoints << "]" << std::endl;
	}

}

void FragTrap::beRepaired(unsigned int amount) {
	this->_hitPoints += amount;

	if (this->_hitPoints > this->_maxHitPoints) {
		this->_hitPoints = this->_maxHitPoints;
	}
	if (this->_energyPoints > this->_maxEnergyPoints) {
		this->_energyPoints = this->_maxEnergyPoints;
	}
	std::cout << this->getName() << " repaired [" << amount << "] hit points. " << "Total hit points [" << this->_hitPoints << "]"<< std::endl;
	std::cout << this->getName() << " repaired [" << amount << "] energy points" << "Total energy points points [" << this->_energyPoints << "]"<< std::endl;
}

void FragTrap::vaulthunter_dot_exe(std::string const & target) {

	std::string randomAttack[] = {"One hit", "Two hit", "Three hit", "Four hit", "Game over"};
	int random;

	srand(time(NULL));
	random = (rand() % 5);


	if (this->_energyPoints < 25)
		std::cout << "You have less then 25 energy points" << this->_energyPoints << std::endl;
	else {

		std::cout << "Valthunted use, energy point before [" << this->_energyPoints << "] energy point after [" << this->_energyPoints - 25 << "]" << std::endl;
		this->_energyPoints -= 25;
	}
	std::cout << this->getName() << " attaked " << target << " by [" << randomAttack[random] << "] attack Type" << std::endl;
}

FragTrap & FragTrap::operator=(FragTrap const & trap) {
	this->_hitPoints = trap._hitPoints;
	this->_hitPoints = trap._hitPoints;
	this->_maxHitPoints = trap._maxHitPoints;
	this->_energyPoints = trap._energyPoints;
	this->_maxEnergyPoints = trap._maxEnergyPoints;
	this->_level = trap._level;
	this->_name = trap.getName();
	this->_meleeAttackDemage = trap._meleeAttackDemage;
	this->_rangedAttackDemage = trap._rangedAttackDemage;
	this->_armorDemageReduction = trap._armorDemageReduction;
	return *this;
}
