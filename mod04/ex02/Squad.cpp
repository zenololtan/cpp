/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Squad.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: zenotan <zenotan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/07 13:06:40 by zenotan       #+#    #+#                 */
/*   Updated: 2020/10/08 23:11:20 by zenotan       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"
#include <string>

Squad::Squad()
{
	this->_count = 0;
	this->_units = new ISpaceMarine*[this->_count];
}

Squad::Squad(const Squad& copy)
{
	this->_count = copy._count;
	this->_units = new ISpaceMarine*[this->_count];
	for (int i = 0; i < this->_count; ++i)
		this->_units[i] = copy._units[i]->clone();
}

Squad&			Squad::operator=(const Squad& copy)
{
	for (int i = 0; i < this->_count; ++i)
		delete this->_units[i];
	delete[] this->_units;

	this->_count = copy._count;
	this->_units = new ISpaceMarine*[this->_count];
	for (int i = 0; i < this->_count; ++i)
		this->_units[i] = copy._units[i]->clone();
	return *this;
}

Squad::~Squad()
{
	for (int i = 0; i < this->_count; ++i)
		delete this->_units[i];
	delete[] this->_units;
}

int				Squad::getCount() const
{
	int i = 0;

	while (this->_units[i] != NULL)
		++i;
	return i;
}

ISpaceMarine*	Squad::getUnit(int i) const
{
	if (i < 0 || i > getCount())
		return NULL;
	return this->_units[i];
	
}

int				Squad::push(ISpaceMarine* unit)
{
	if (!unit)
		return this->_count;
	for (int i = 0; i < this->_count; ++i)
		if (unit == this->_units[i])
			return this->_count;

	ISpaceMarine	**copy = new ISpaceMarine*[_count + 1];
	for (int i = 0; i < this->_count; ++i)
		copy[i] = this->_units[i];
	copy[this->_count] = unit;
	copy[this->_count + 1] = NULL;
	delete[] this->_units;
	this->_units = copy;
	++_count;
	return this->_count;
}
