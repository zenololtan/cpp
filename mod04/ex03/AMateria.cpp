/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AMateria.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: zenotan <zenotan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/09 14:34:52 by zenotan       #+#    #+#                 */
/*   Updated: 2020/10/09 15:22:04 by zenotan       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include <iostream>

AMateria::AMateria() : _type(NULL), _xp(0)
{}

AMateria::AMateria(std::string const& type) : _type(type), _xp(0)
{}

AMateria::AMateria(const AMateria& copy)
{
	*this = copy;
}

AMateria&			AMateria::operator=(const AMateria& copy)
{
	if (this != &copy)
	{
		this->_type = copy._type;
		this->_xp = copy._xp;
	}
	return *this;
}

std::string const&	AMateria::getType() const
{
	return _type;
}

unsigned int		AMateria::getXP() const
{
	return _xp;
}

void				AMateria::use(ICharacter& target)
{
	std::cout << "Some weird shit happening other then cure or ice " << target.getName() << " starts ferociously barfing and crying on the ground" << std::endl;
	this->_xp += 10;
}

AMateria::~AMateria() {}
