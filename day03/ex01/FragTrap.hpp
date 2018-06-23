#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>

class FragTrap {

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

public:
    FragTrap(void);
    ~FragTrap(void);
    FragTrap(std::string const name);
    FragTrap(FragTrap const & rhs);
    FragTrap & operator=(FragTrap const & rhs);

    void setName(std::string const name);
    std::string getName(void) const;

    void rangedAttack(std::string const & target);
    void meleeAttack(std::string const & target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    void vaulthunter_dot_exe(std::string const & target);

};

#endif