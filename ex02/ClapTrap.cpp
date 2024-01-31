#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

ClapTrap::ClapTrap()
{
    std::cout << "Default constructor called" << std::endl;
    return ;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _pv(100), _energyPoints(100), _attackDamage(30), _damage(0)
{
    std::cout << "Constructor called" << std::endl;
    return ;
}

ClapTrap::ClapTrap(ClapTrap const& copy)
{
    std::cout << "Constructor copy called" << std::endl;
    *this = copy;
}

ClapTrap::~ClapTrap()
{
    std::cout << "Destructor called" << std::endl;
    return ;
}

ClapTrap& ClapTrap::operator=(ClapTrap const& copy)
{
    if (this != &copy)
    {
        _name = copy._name;
        _pv = copy._pv;
        _energyPoints = copy._energyPoints;
        _attackDamage = copy._attackDamage;
        _damage = copy._damage;
    }
    return (*this);
}

void ClapTrap::attack(const std::string& target)
{   
    _damage += 20;
    std::cout << "ClapTrap " << _name << " attacks " << " ScavTrap " << target << " causing " << _attackDamage << " points of damages!" << std::endl;
    std::cout << "ScavTrap " << target << " took " << _damage << " damages in total." << std::endl;
    std::cout << std::endl;
    _energyPoints -= 1;
    std::cout << "ClapTrap " << _name << " lost an energy point! Remaining : " << _energyPoints << std::endl;
    std::cout << std::endl;
    if (_damage == 100)
    {
        std::cout << "Great ! ScavTrap " << target << " is dead !" << std::endl << std::endl;
        return ;
    }    
}

void ClapTrap::takeDamage(unsigned int amount)
{
    std::cout << "ClapTrap " << _name << " takes " << amount << " damages !" << std::endl;
    _pv -= amount;
    std::cout << "Remaining HP : " << _pv << std::endl;
    std::cout << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    _pv += amount;
    _energyPoints -= 1;
    std::cout << "ClapTrap " << _name << " heals itself for " << amount << " health points" << std::endl;
    std::cout << "ClapTrap " << _name << " lost an energy point! Remaining : " << _energyPoints << std::endl;
    std::cout << std::endl;
}

int ClapTrap::getpv()
{
    return (this->_pv);
}

int ClapTrap::getEnergy()
{
    return (this->_energyPoints);
}

std::string ClapTrap::getname()
{
    return (this->_name);
}

int ClapTrap::getDamage()
{
    return (this->_damage);
}