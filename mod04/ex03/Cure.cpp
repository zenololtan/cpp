/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cure.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: zenotan <zenotan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/09 15:28:12 by zenotan       #+#    #+#                 */
/*   Updated: 2020/10/11 19:15:10 by zenotan       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include <iostream>

Cure::Cure() : AMateria("cure") {}

Cure::Cure(const AMateria& copy)
{
	*this = copy;
}

Cure&		Cure::operator=(const Cure& copy)
{
	if (this != &copy)
	{
		this->_type = copy._type;
		this->_xp = copy._xp;
	}
	return *this;
}

AMateria*	Cure::clone() const
{
	return new Cure(*this);
}

void		Cure::use(ICharacter& target)
{
	std::cout << "* Heals " << target.getName() << "'s wounds *" << std::endl;
	this->_xp += 10;
}

Cure::~Cure() {}
