/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Sorcerer.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: zenotan <zenotan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/17 00:43:35 by zenotan       #+#    #+#                 */
/*   Updated: 2020/10/17 00:43:36 by zenotan       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"
#include <iostream>

Sorcerer::Sorcerer(std::string name, std::string title) :
_name(name),
_title(title)
{
	std::cout << _name << ", " << _title << ", is born!" << std::endl;
}

Sorcerer::Sorcerer(const Sorcerer& copy)
{
	*this = copy;
}

Sorcerer&	Sorcerer::operator=(const Sorcerer& copy)
{
	if (this != &copy)
	{
		_name = copy._name;
	}
	return *this;
}

std::ostream& operator<<(std::ostream& out, const Sorcerer& sorc)
{
	out << "I am, " << sorc.getName() << ", " << sorc.getTitle() << ", and I like ponies!" << std::endl;
	return out;
}

std::string	Sorcerer::getName() const
{
	return _name;
}

std::string	Sorcerer::getTitle() const
{
	return _title;
}

void	Sorcerer::polymorph(Victim const &vic) const
{
	vic.getPolymorphed();
}

Sorcerer::~Sorcerer()
{
	std::cout << _name << ", " << _title << ", is dead. Consequences will never be the same!" << std::endl;
}
