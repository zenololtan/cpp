#include "PlasmaRifle.hpp"
#include <iostream>

PlasmaRifle::PlasmaRifle() : AWeapon("Plasma Rifle", 21 ,5)
{}

PlasmaRifle::PlasmaRifle(const PlasmaRifle& copy)
{
	*this = copy;
}

PlasmaRifle&	PlasmaRifle::operator=(const PlasmaRifle& copy)
{
	if (this != &copy)
	{
		_name = copy._name;
		_dmg = copy._dmg;
		_ap = copy._ap;
	}
	return *this;
}

void			PlasmaRifle::attack() const
{
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
}

PlasmaRifle::~PlasmaRifle() {}
