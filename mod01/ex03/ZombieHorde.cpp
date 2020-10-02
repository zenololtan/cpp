#include <ctime>
#include <cstdlib>
#include <iostream>
#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int n)
{
	static bool seed = false;
	if (seed == false)
	{
		std::srand((unsigned) std::time(0));
		seed = true;
	}
	horde  = new Zombie[n];
	for (int i = 0; i < n; ++i)
	{
		horde[i].setZombieName(randomName());
		horde[i].setZombieType(randomType());
		horde[i].announce();
	}
	std::cout << "A zombie horde has been created." << std::endl;
}

ZombieHorde::~ZombieHorde()
{
	delete[] horde;
	std::cout << "A zombie horde has been destroyed." << std::endl;
}

std::string	ZombieHorde::randomName()
{
	int i = 0 + (std::rand() % 9);
	std::string pool[10] = {"Barry", "Harry", "Terry", "Dorry", "Ferry", "Garry", "Gerry", "Henry", "Jerry", "Katy Perry"};
	return pool[i];
}

std::string	ZombieHorde::randomType()
{
	int i = 0 + (std::rand() % 9);
	std::string pool[10] = {"Patient zero", "Neigbour", "That dude", "IDK", "Cool zombie", "Cooler zombie", "Not your", "Your", "Class clown", "Katy Perry"};
	return pool[i];
}
