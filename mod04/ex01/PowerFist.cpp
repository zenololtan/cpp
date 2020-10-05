#include "PowerFist.hpp"
#include <iostream>

PowerFist::PowerFist() : AWeapon("Power Fist", 50, 8)
{}

PowerFist::PowerFist(const PowerFist& copy)
{
	*this = copy;
}

PowerFist&	PowerFist::operator=(const PowerFist& copy)
{
	if (this != &copy)
	{
		_name = copy._name;
		_dmg = copy._dmg;
		_ap = copy._ap;
	}
	return *this;
}

PowerFist::~PowerFist() {}

void		PowerFist::attack() const
{
	std::cout << "* pschhh... SBAM! *" << std::endl;
}