#include "ClapTrap.hpp"

int main(void)
{
    ClapTrap fight; 
    ClapTrap name("Bob");
    fight = name;

    while (1)
    {
        if (fight.getpv() == 0)
        {
            std::cout << "ClapTrap " << fight.getname() << " has no more life points.." << std::endl;
            std::cout << std::endl;
            break ;
        }
        if (fight.getEnergy() == 0)
        {
            std::cout << "ClapTrap " << fight.getname() << " has no more energy points.." << std::endl;
            std::cout << std::endl;
            break ;
        }
        fight.attack("Sully");
        if (fight.getDamage() == 35)
        {
            std::cout << "ClapTrap " << fight.getname() << " killed his target !" << std::endl;
        }
        fight.beRepaired(1);
    }
    return (0);
}
