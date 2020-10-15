/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanA.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: zenotan <zenotan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/15 00:30:06 by zenotan       #+#    #+#                 */
/*   Updated: 2020/10/15 00:30:07 by zenotan       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include <iostream>

HumanA::HumanA(std::string name, Weapon& weapon) : Name(name), _Weapon(weapon) {}

void		HumanA::attack()
{
	std::cout << Name << " attacks with his " << _Weapon.getType() << std::endl;
}
