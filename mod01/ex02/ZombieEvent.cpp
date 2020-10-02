#include <ctime>
#include <cstdlib>
#include <iostream>
#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent()
{
	std::cout << "ZombieEvent has started!" << std::endl;
	std::srand((unsigned) std::time(0));
}

ZombieEvent::~ZombieEvent()
{
	std::cout << "ZombieEvent has ended." << std::endl;
}

void		ZombieEvent::setZombieType(std::string type)
{
	zombie_type = type;
}

std::string	ZombieEvent::randomName()
{
	int i = 0 + (std::rand() % 9);
	std::string pool[10] = {"Barry", "Harry", "Terry", "Dorry", "Ferry", "Garry", "Gerry", "Henry", "Jerry", "Katy Perry"};
	return pool[i];
}

std::string	ZombieEvent::randomType()
{
	int i = 0 + (std::rand() % 9);
	std::string pool[10] = {"Patient zero", "Neigbour", "That dude", "IDK", "Cool zombie", "Cooler zombie", "Not your", "Your", "Class clown", "Katy Perry"};
	return pool[i];
}

Zombie*		ZombieEvent::newZombie(std::string name)
{
	Zombie *zombie = new (std::nothrow) Zombie;
	if (!zombie)
		return (NULL);
	zombie->setZombie(name, zombie_type);
	return zombie;
}

Zombie*		ZombieEvent::randomChump()
{
	Zombie *zombie;
	zombie = new Zombie;
	zombie->setZombie(randomName(), zombie_type);
	zombie->announce();
	return (zombie);
}
