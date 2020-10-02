#include "Weapon.hpp"
#include "HumanA.hpp"
#include <iostream>

HumanA::HumanA(std::string name, Weapon& weapon) : Name(name), _Weapon(weapon) {}

void		HumanA::attack()
{
	std::cout << Name << " attacks with his " << _Weapon.getType() << std::endl;
}
