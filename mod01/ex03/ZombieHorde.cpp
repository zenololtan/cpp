/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ZombieHorde.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: zenotan <zenotan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/15 00:26:31 by zenotan       #+#    #+#                 */
/*   Updated: 2020/10/15 02:23:47 by zenotan       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <ctime>
#include <cstdlib>
#include <iostream>
#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int n) : _amount(n)
{
	static bool seed = false;
	if (seed == false)
	{
		std::srand((unsigned) std::time(0));
		seed = true;
	}
	horde  = new Zombie[_amount]; //allocating an array of zombies on the stack
	for (int i = 0; i < _amount; ++i)
	{
		horde[i].setZombieName(randomName());
		horde[i].setZombieType(randomType());
		horde[i].announce();
	}
	std::cout << "A zombie horde has been created." << std::endl;
}

ZombieHorde::ZombieHorde(const ZombieHorde& copy)
{
	*this = copy;
}

ZombieHorde&	 ZombieHorde::operator=(const ZombieHorde& copy)
{
	if (this != &copy)
		this->horde = copy.horde;
	return *this;
}

ZombieHorde::~ZombieHorde()
{
	delete[] horde; // putting [] behind delete deletes the whole array
	std::cout << "A zombie horde has been destroyed." << std::endl;
}

std::string		ZombieHorde::randomName()
{
	int i = 0 + (std::rand() % 9);
	std::string pool[10] = {"Barry", "Harry", "Terry", "Dorry", "Ferry", "Garry", "Gerry", "Henry", "Jerry", "Katy Perry"};
	return pool[i];
}

std::string		ZombieHorde::randomType()
{
	int i = 0 + (std::rand() % 9);
	std::string pool[10] = {"Patient zero", "Neigbour", "That dude", "IDK", "Cool zombie", "Cooler zombie", "Not your", "Your", "Class clown", "Katy Perry"};
	return pool[i];
}
