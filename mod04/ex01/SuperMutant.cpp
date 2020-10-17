/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   SuperMutant.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: zenotan <zenotan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/17 15:06:34 by zenotan       #+#    #+#                 */
/*   Updated: 2020/10/17 15:06:35 by zenotan       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "SuperMutant.hpp"
#include <iostream>

SuperMutant::SuperMutant() : Enemy(170, "Super Mutant")
{
	std::cout << "Gaaah. Me want smash heads!" << std::endl;
}

SuperMutant::SuperMutant(const SuperMutant& copy)
{
	*this = copy;
}

SuperMutant&	SuperMutant::operator=(const SuperMutant& copy)
{
	if (this != &copy)
	{
		_hp = copy._hp;
		_type = copy._type;
	}
	return *this;
}

void		SuperMutant::takeDamage(int amount)
{
	if (amount <= 3)
		amount = 0;
	else
		amount -= 3;
	if (amount >= _hp)
	{
		_hp = 0;
		std::cout << "Nothing realy happened..." << std::endl;
	}
	else
	{
		_hp -= amount;
		std::cout << _type << " took " << amount << " damage, its hp is now " << _hp << std::endl;
	}
}

SuperMutant::~SuperMutant()
{
	std::cout << "Aaargh..." << std::endl;
}
