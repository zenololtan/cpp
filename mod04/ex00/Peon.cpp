/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Peon.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: zenotan <zenotan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/17 00:43:28 by zenotan       #+#    #+#                 */
/*   Updated: 2020/10/17 00:43:29 by zenotan       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Peon.hpp"

Peon::Peon(std::string name) : Victim(name)
{
	std::cout << "Zorg zorg." << std::endl;
}

Peon::Peon(const Peon& copy) : Victim("Peony")
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
