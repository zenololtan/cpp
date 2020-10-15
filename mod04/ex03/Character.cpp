/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Character.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: zenotan <zenotan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/11 14:51:29 by zenotan       #+#    #+#                 */
/*   Updated: 2020/10/12 00:50:27 by zenotan       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "Colors.hpp"
#include <iostream>

Character::Character() : _name("Default")
{
	for (int i = 0; i <= 3; ++i)
		this->inventory[i] = NULL;	
}

Character::Character(std::string name) : _name(name)
{
	for (int i = 0; i <= 3; ++i)
		this->inventory[i] = NULL;	
}

Character::Character(const Character& copy)
{
	*this = copy;
}
Character&			Character::operator=(const Character& copy)
{
	if (this != &copy)
	{
		for (int i = 0; i <= 3; ++i)
		{
			this->inventory[i] = NULL;
			this->inventory[i] = copy.inventory[i]->clone();
		}
			
		this->_name = copy._name;
	}
		
	return *this;
}

Character::~Character()
{
	for (int i = 0; i <= 3; ++i)
	{
		delete this->inventory[i];
		this->inventory[i] = NULL;
	}
		
}
		
std::string const&	Character::getName() const
{
	return this->_name;
}

void				Character::equip(AMateria* m)
{
	bool equiped = false;
	int n;
	for (int i = 0; i <= 3; ++i)
	{
		if (this->inventory[i] == NULL)
		{
			this->inventory[i] = m->clone();
			equiped = true;
			n = i;
			break ;
		}
	}
	if (equiped == true)
		std::cout << m->getType() << " has been equiped in slot " << n << ", " << 3 - n << "/4 slots left" << std::endl;
	else
		std::cout << RED << "Could not equip " << m->getType() << RESET << std::endl;
}

void				Character::unequip(int idx)
{
	if ((idx >= 0 && idx < 4) && this->inventory[idx] != NULL)
	{
		std::cout << "Unequiped " << this->inventory[idx]->getType() << " from slot " << idx << std::endl;
		this->inventory[idx] = NULL;
	}
	else
		std::cout << "Invalid index or no item to unequip" << std::endl;
}

void				Character::use(int idx, ICharacter& target)
{
	if (idx >= 0 && idx < 4 && this->inventory[idx] != NULL)
		this->inventory[idx]->use(target);
}
