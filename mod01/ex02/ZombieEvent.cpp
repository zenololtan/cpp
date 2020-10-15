/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ZombieEvent.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: zenotan <zenotan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/15 00:25:09 by zenotan       #+#    #+#                 */
/*   Updated: 2020/10/15 02:05:59 by zenotan       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <ctime>
#include <cstdlib>
#include <iostream>
#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent()
{
	std::cout << "ZombieEvent has started!" << std::endl;
	std::srand((unsigned) std::time(0));
}

ZombieEvent::ZombieEvent(const ZombieEvent& copy)
{
	*this = copy;
}

ZombieEvent&	ZombieEvent::operator=(const ZombieEvent& copy)
{
	if (this != &copy)
		this->zombie_type = copy.zombie_type;
	return *this;
}

ZombieEvent::~ZombieEvent()
{
	std::cout << "ZombieEvent has ended." << std::endl;
}

void			ZombieEvent::setZombieType(std::string type)
{
	zombie_type = type;
}

std::string		ZombieEvent::randomName()
{
	int i = 0 + (std::rand() % 9);
	std::string pool[10] = {"Barry", "Harry", "Terry", "Dorry", "Ferry", "Garry", "Gerry", "Henry", "Jerry", "Katy Perry"};
	return pool[i];
}

std::string		ZombieEvent::randomType()
{
	int i = 0 + (std::rand() % 9);
	std::string pool[10] = {"Patient zero", "Neigbour", "That dude", "IDK", "Cool zombie", "Cooler zombie", "Not your", "Your", "Class clown", "Katy Perry"};
	return pool[i];
}

Zombie*			ZombieEvent::newZombie(std::string name)
{
	Zombie *zombie = new (std::nothrow) Zombie;
	if (!zombie)
		return (NULL);
	zombie->setZombie(name, randomType());
	return zombie;
} //Allocating newzombie on the heap because it will extend the lifetime of the zombie beyond this function.

void			ZombieEvent::randomChump()
{
	Zombie zombie; // creating a zombie on the stack
	zombie.setZombie(randomName(), randomType());
	zombie.announce();
}
