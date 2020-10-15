/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Weapon.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: zenotan <zenotan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/15 00:30:23 by zenotan       #+#    #+#                 */
/*   Updated: 2020/10/15 00:30:24 by zenotan       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type): _type(type) {}

const std::string&	Weapon::getType()
{
	return _type;
}

void			Weapon::setType(std::string type)
{
	_type = type;
}
