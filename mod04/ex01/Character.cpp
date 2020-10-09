#include "Character.hpp"
#include <iostream>

Character::Character() :
_name("???"),
_ap(40),
_weapon(NULL) {}

Character::Character(std::string const& name) :
_name(name),
_ap(40),
_weapon(NULL) {}

Character::Character(const Character& copy)
{
	*this = copy;
}

Character&	Character::operator=(const Character& copy)
{
	if (this != &copy)
	{
		_name = copy._name;
		_ap = copy._ap;
		_weapon = copy._weapon;
	}
	return *this;
}

void		Character::recoverAP()
{
	if (_ap + 10 >= 40)
	{
		_ap = 40;
		std::cout << _name << " recovered " << _ap + 10 - 10 << " AP, current AP is " << _ap << std::endl;
	}
	else
	{
		_ap += 10;
		std::cout << _name << " recovered 10 AP, current AP is " << _ap << std::endl;
	}
}

void		Character::equip(AWeapon *wp)
{
	_weapon = wp;
}

void		Character::attack(Enemy *en)
{
	if (!en)
		std::cout << "There is no enemy to attack" << std::endl;
	if (_ap <= _weapon->getAPCost())
		std::cout << _name << " does not have enough AP to attack with this weapon" << std::endl;
	else
	{
		if (!_weapon)
		{
			std::cout << _name << " does not have a weapon equiped" << std::endl;
			return ;
		}
		std::cout << _name << " attacks " << en->getType() << " with a " << _weapon->getName() << std::endl;
		_weapon->attack();
		en->takeDamage(_weapon->getDamage());
		_ap -= _weapon->getAPCost();
		if (en->getHP() == 0)
		{
			delete en;
			en = NULL;
		}
	}
}

std::string	Character::getName() const
{
	return _name;
}

int			Character::getAP() const
{
	return _ap;
}

AWeapon*	Character::getWeapon() const
{
	return _weapon;
}

std::ostream&	operator<<(std::ostream& out, const Character& character)
{
	out << character.getName() << " has " << character.getAP() << " AP";
	if (character.getWeapon() == NULL)
		out << " and is unarmed" << std::endl;
	else
		out << " and wields a " << character.getWeapon()->getName() << std::endl;
	return out;
}

Character::~Character() {}
