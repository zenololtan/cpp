#include "RadScorpion.hpp"
#include <iostream>

RadScorpion::RadScorpion() : Enemy(80, "Rad Scorpion")
{
	std::cout << "* click click click *" << std::endl;
}

RadScorpion::RadScorpion(const RadScorpion& copy)
{
	*this = copy;
}

RadScorpion&	RadScorpion::operator=(const RadScorpion& copy)
{
	if (this != &copy)
	{
		_hp = copy._hp;
		_type = copy._type;
	}
	return *this;
}

RadScorpion::~RadScorpion()
{
	std::cout << "* SPROTCH *" << std::endl;
}
