/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: zenotan <zenotan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/15 00:25:04 by zenotan       #+#    #+#                 */
/*   Updated: 2020/10/15 00:25:05 by zenotan       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie(const Zombie& copy)
{
	*this = copy;
}

Zombie&	Zombie::operator=(const Zombie& copy)
{
	if (this != &copy)
	{
		this->z_name = copy.z_name;
		this->z_type = copy.z_type;
	}
	return *this;
}

void			Zombie::setZombie(std::string name, std::string type)
{
	z_name = name;
	z_type = type;
}

std::string		Zombie::getZombieType()
{
	return z_type;
}

std::string		Zombie::getZombieName()
{
	return z_name;
}

void			Zombie::announce(void)
{
	std::cout << "Name[" << z_name << "] type(" << z_type << "): " << "Got any more BRAIIIINZZZZ?" << std::endl;
}
