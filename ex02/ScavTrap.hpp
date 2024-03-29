#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>
# include <string>
# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
    public:
        ScavTrap();
        ScavTrap(std::string name);
        ScavTrap(ScavTrap const& copy);
        ~ScavTrap();
        ScavTrap& operator=(ScavTrap const& copy);
        void guardGate();
        void attack(const std::string& target);
        std::string getNameScav();
        
};

#endif