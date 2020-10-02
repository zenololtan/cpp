#include "Pony.hpp"
#include <iostream>

Pony::Pony()
{
	std::cout << "Constructed a pony ";
	speed = 1;
	strength = 1;
}

Pony::~Pony()
{
	std::cout << "Destroyed a pony in brutal manner" << std::endl;
	std::cout << "Pony stats were:\nSpeed: " << speed << "\nStrenght: " << strength << std::endl;
}

void	Pony::pet()
{
	speed += 1;
	std::cout << "Petting pony, str = " << strength << " speed = " << speed << std::endl;
}

void	Pony::ride()
{
	speed += 1;
	strength += 1;
	std::cout << "Riding pony, str = " << strength << " speed = " << speed << std::endl;
}

void	Pony::feed()
{
	speed += 1;
	strength += 1;
	std::cout << "Feeding pony, str = " << strength << " speed = " << speed << std::endl;
}
