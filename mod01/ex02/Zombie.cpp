#include "Zombie.hpp"
#include <iostream>

void	Zombie::setZombie(std::string name, std::string type)
{
	z_name = name;
	z_type = type;
}

std::string	Zombie::getZombieType()
{
	return z_type;
}

std::string	Zombie::getZombieName()
{
	return z_name;
}

void	Zombie::announce(void)
{
	std::cout << "Name[" << z_name << "] type(" << z_type << "): " << "Got any more BRAIIIINZZZZ?" << std::endl;
}
