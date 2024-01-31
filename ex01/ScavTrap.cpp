#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    std::cout << "Default constructor ScavTrap called" << std::endl << std::endl;
    return ;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    std::cout << "Constructor ScavTrap called" << std::endl << std::endl;
    return ;
}

ScavTrap::ScavTrap(ScavTrap const& copy)
{
    std::cout << "Constructor copy ScavTrap called" << std::endl;
    *this = copy;
}

ScavTrap::~ScavTrap()
{
    std::cout << "Destructor ScavTrap called" << std::endl;
    return ;
}

ScavTrap& ScavTrap::operator=(ScavTrap const& copy)
{
    ClapTrap::operator=(copy);
    return (*this);
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << ClapTrap::_name << " is now in mode Gate keeper !" << std::endl << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
    ClapTrap::attack(target);
    if (_damage == 100)
        return ;
    std::cout << "ScavTrap " << target << " attack ClapTrap " << target << std::endl;
    guardGate();
    takeDamage(_attackDamage);
}

std::string ScavTrap::getNameScav()
{
    return (this->_name);
}