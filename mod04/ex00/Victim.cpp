/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Victim.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: zenotan <zenotan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/17 00:43:40 by zenotan       #+#    #+#                 */
/*   Updated: 2020/10/17 00:43:41 by zenotan       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"
#include <iostream>

Victim::Victim(std::string name) : _name(name)
{
	std::cout << "Some random victim called " << _name << " just appeared!" << std::endl;
}

Victim::Victim(const Victim& copy)
{
	*this = copy;
}

Victim&	Victim::operator=(const Victim& copy)
{
	if (this != &copy)
	{
		_name = copy._name;
	}
	return *this;
}

std::ostream& operator<<(std::ostream& out, const Victim& vic)
{
	out << "I'm " << vic.getName() << " and I like otters!" << std::endl;
	return out;
}

std::string	Victim::getName() const
{
	return _name;
}

void	Victim::getPolymorphed() const
{
	std::cout << _name << " has been turned into a cute little sheep!" << std::endl;
}

Victim::~Victim()
{
	std::cout << "Victim " << _name << " just died for no apperent reason!" << std::endl;
}
