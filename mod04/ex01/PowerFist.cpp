/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PowerFist.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: zenotan <zenotan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/17 15:06:04 by zenotan       #+#    #+#                 */
/*   Updated: 2020/10/17 15:06:05 by zenotan       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFist.hpp"
#include <iostream>

PowerFist::PowerFist() : AWeapon("Power Fist", 50, 8)
{}

PowerFist::PowerFist(const PowerFist& copy)
{
	*this = copy;
}

PowerFist&	PowerFist::operator=(const PowerFist& copy)
{
	if (this != &copy)
	{
		_name = copy._name;
		_dmg = copy._dmg;
		_ap = copy._ap;
	}
	return *this;
}

void		PowerFist::attack() const
{
	std::cout << "* pschhh... SBAM! *" << std::endl;
}
