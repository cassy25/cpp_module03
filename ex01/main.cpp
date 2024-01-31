#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
    ScavTrap robot;
    ScavTrap name("Robot");
    robot = name;
    
    while (1)
    {
        
        if (robot.getpv() < 20)
        {
            std::cout << "ClapTrap " << robot.getname() << " has no more life points.. or not enough" << std::endl;
            std::cout << std::endl;
            break ;
        }
        if (robot.getEnergy() == 0)
        {
            std::cout << "ClapTrap " << robot.getname() << " has no more energy points.." << std::endl;
            std::cout << std::endl;
            break ;
        }
        robot.attack(robot.getname());
        if (robot.getDamage() == 100)
        {
            break;
        }
        robot.beRepaired(1);
    }
    return (0);
}
