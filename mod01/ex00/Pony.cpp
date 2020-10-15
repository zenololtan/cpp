/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Pony.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: zenotan <zenotan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/15 00:21:26 by zenotan       #+#    #+#                 */
/*   Updated: 2020/10/15 00:21:27 by zenotan       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"
#include <iostream>

Pony::Pony()
{
	std::cout << "Constructed a pony";
	speed = 1;
	strength = 1;
}

Pony::Pony(const Pony &copy)
{
	std::cout << "Copying a pony";
	*this = copy;
}

Pony&	Pony::operator=(const Pony &copy)
{
	if (this != &copy)
	{
		speed = copy.speed;
		strength = copy.strength;
	}
	return *this;
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
