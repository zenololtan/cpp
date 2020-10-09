/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Ice.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: zenotan <zenotan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/09 15:08:05 by zenotan       #+#    #+#                 */
/*   Updated: 2020/10/09 15:24:45 by zenotan       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include <iostream>

Ice::Ice() : AMateria("ice") {}

Ice::Ice(const AMateria& copy)
{
	*this = copy;
}

Ice&		Ice::operator=(const Ice& copy)
{
	if (this != &copy)
	{
		this->_type = copy._type;
		this->_xp = copy._xp;
	}
	return *this;
}

AMateria*	Ice::clone() const
{
	return new Ice(*this);
}

void		Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
	this->_xp += 10;
}

Ice::~Ice() {}
