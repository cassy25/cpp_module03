#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>
# include <string>
# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
    public:
        FragTrap();
        FragTrap(std::string& name);
        FragTrap(FragTrap const& copy);
        ~FragTrap();
        FragTrap& operator=(FragTrap const& copy);
        void highFivesGuys(void);
        
    private:

};

#endif