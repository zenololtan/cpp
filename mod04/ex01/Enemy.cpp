/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Enemy.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: zenotan <zenotan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/17 15:05:02 by zenotan       #+#    #+#                 */
/*   Updated: 2020/10/17 15:05:10 by zenotan       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"
#include <iostream>

Enemy::Enemy(int hp, std::string const& type) : _type(type), _hp(hp)
{}

Enemy::Enemy(const Enemy& copy)
{
	*this = copy;
}

Enemy&	Enemy::operator=(const Enemy& copy)
{
	if (this != &copy)
	{
		_hp = copy._hp;
		_type = copy._type;
	}
	return *this;
}

std::string	Enemy::getType() const
{
	return _type;
}

int			Enemy::getHP() const
{
	return _hp;
}

void		Enemy::takeDamage(int amount)
{
	if (amount >= _hp)
	{
		_hp = 0;
		std::cout << _type << " took a fatal hit!" << std::endl;
	}
	else
	{
		_hp -= amount;
		std::cout << _type << " took " << amount << " damage, its hp is now " << _hp << std::endl;
	}
}
