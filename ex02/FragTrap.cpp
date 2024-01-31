#include "FragTrap.hpp"

FragTrap::FragTrap()
{
    std::cout << "Default constructor FragTrap called" << std::endl << std::endl;
    return;
}

FragTrap::FragTrap(std::string& name) : ClapTrap(name)
{
    std::cout << "Constructor FragTrap called" << std::endl;
    return ;
}

FragTrap::FragTrap(FragTrap const& copy)
{
    std::cout << "Constructor copy called" << std::endl;
    *this = copy;
}

FragTrap::~FragTrap()
{
    std::cout << "Destructor FragTrap called" << std::endl;
    return ;
}

FragTrap& FragTrap::operator=(FragTrap const& copy)
{
    ClapTrap::operator=(copy);
    return (*this);
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap : Positive high fives request" << std::endl << std::endl;
}