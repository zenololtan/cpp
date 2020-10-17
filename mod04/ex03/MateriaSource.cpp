/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   MateriaSource.cpp                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: zenotan <zenotan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/11 19:48:30 by zenotan       #+#    #+#                 */
/*   Updated: 2020/10/17 16:27:41 by zenotan       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "Colors.hpp"
#include <iostream>

MateriaSource::MateriaSource() : _count(0)
{
	for (int i = 0; i < 4; ++i)
		this->spellbook[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource& copy)
{
	for (int i = 0; i <= this->_count; ++i)
		this->spellbook[i] = NULL;
	this->_count = copy._count;
	for (int i = 0; i < this->_count; ++i)
		this->spellbook[i] = this->spellbook[i]->clone();
}

MateriaSource&	MateriaSource::operator=(const MateriaSource& copy)
{
	if (this != &copy)
	{
		for (int i = 0; i < this->_count; ++i)
			delete this->spellbook[i];
		this->_count = copy._count;
		for (int i = 0; i < 4; ++i)
			this->spellbook[i] = NULL;
		for (int i = 0; i < this->_count; ++i)
			this->spellbook[i] = copy.spellbook[i]->clone();
	}
	return *this;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < this->_count; ++i)
		delete this->spellbook[i];
}

void			MateriaSource::learnMateria(AMateria *type)
{
	if (type == NULL || this->_count >= 4)
		return ;
	this->spellbook[this->_count] = type;
	++this->_count;
	std::cout << GREEN << type->getType() << RESET << " has successfully been added" << std::endl;
}

AMateria*		MateriaSource::createMateria(const std::string& type)
{
	for (int i = 0; i < this->_count; ++i)
	{
		if (this->spellbook[i]->getType() == type)
		{
			std::cout << GREEN << type << RESET << " has successfully been learned" << std::endl;
			return this->spellbook[i]->clone();
		}
	}
	return 0;
}
