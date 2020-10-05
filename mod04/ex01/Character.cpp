#include "Character.hpp"
#include <iostream>

Character::Character() {}

Character::Character(std::string const& name) :
_name(name),
_ap(40),
_weapon(AWeapon())
{
	
}

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
void		Character::equip(AWeapon *wp)
void		Character::attack(Enemy *en)
std::string	Character::getName() const

Character::~Character()
{

}