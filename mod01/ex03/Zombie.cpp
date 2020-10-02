#include "Zombie.hpp"
#include <iostream>

void		Zombie::setZombieName(std::string name)
{
	z_name = name;
}

void		Zombie::setZombieType(std::string type)
{
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

void		Zombie::announce(void)
{
	std::cout << "Name[" << z_name << "] type(" << z_type << "): " << "Got any more BRAIIIINZZZZ?" << std::endl;
}
