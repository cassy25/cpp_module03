#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>

class ClapTrap
{
    public:
        ClapTrap();
        ClapTrap(std::string name);
        ClapTrap(ClapTrap const& copy);
        ~ClapTrap();
        ClapTrap& operator=(ClapTrap const& copy);
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        int getpv();
        int getEnergy();
        std::string getname();
        int getDamage();

    protected:
        std::string _name;
        int _pv;
        int _energyPoints;
        int _attackDamage;
        int _damage;
};

#endif