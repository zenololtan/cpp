/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AWeapon.cpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: zenotan <zenotan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/17 15:03:13 by zenotan       #+#    #+#                 */
/*   Updated: 2020/10/17 15:03:40 by zenotan       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"
#include <iostream>

AWeapon::AWeapon(std::string const& name, int apcost, int damage) :
_name(name),
_dmg(apcost),
_ap(damage)
{}

AWeapon::AWeapon(const AWeapon& copy)
{
	*this = copy;
}

AWeapon&	AWeapon::operator=(const AWeapon& copy)
{
	if (this != &copy)
	{
		_name = copy._name;
		_dmg = copy._dmg;
		_ap = copy._ap;
	}
	return *this;
}

std::string	AWeapon::getName() const
{
	return _name;
}

int			AWeapon::getAPCost() const
{
	return _ap;
}

int			AWeapon::getDamage() const
{
	return _dmg;
}
