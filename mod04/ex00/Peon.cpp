#include "Peon.hpp"
#include <iostream>

Peon::Peon(std::string name) : Victim::Victim(name)
{
	std::cout << "Zorg zorg." << std::endl;
}

Peon::Peon(const Peon& copy)
{
	*this = copy;
}

Peon&	Peon::operator=(const Peon& copy)
{
	if (this != &copy)
	{
		_name = copy._name;
	}
	return *this;
}

void	Peon::getPolymorphed() const
{
	std::cout << _name << " has been turned into a pink pony!" << std::endl;
}

Peon::~Peon()
{
	std::cout << "Bleuark..." << std::endl;
}
