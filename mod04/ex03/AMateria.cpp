/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AMateria.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: zenotan <zenotan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/09 14:34:52 by zenotan       #+#    #+#                 */
/*   Updated: 2020/10/17 16:02:39 by zenotan       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Colors.hpp"
#include <iostream>

AMateria::AMateria() : _type("Satanic chant"), _xp(0)
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
		this->_xp = copy.getXP();
		this->_type = copy.getType();
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

AMateria*			AMateria::clone() const
{
	return new AMateria(*this);
}

void				AMateria::use(ICharacter& target)
{
	std::cout << RED <<"* Some weird shit is happening other then cure or ice, " << target.getName() << " starts ferociously barfing and crying on the ground oh god oh help what have you done *" << RESET << std::endl;
	this->_xp += 10;
}
