#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB(std::string name) : Name(name), _weapon(NULL) {}

void	HumanB::setWeapon(Weapon& weapon)
{
	_weapon = &weapon;
}

void	HumanB::attack()
{
	std::cout << Name << " attacks with his " << _weapon->getType() << std::endl;
}
