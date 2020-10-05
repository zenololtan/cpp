#include "Enemy.hpp"
#include <iostream>

Enemy::Enemy() {}

Enemy::Enemy(int hp, std::string const& type) : _hp(hp), _type(type)
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
		std::cout << "Nothing realy happened..." << std::endl;
	}
	else
	{
		_hp -= amount;
		std::cout << _type << " took " << amount << " damage, its hp is now " << _hp << std::endl;
	}
}

Enemy::~Enemy() {}
