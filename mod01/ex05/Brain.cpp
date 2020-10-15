/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Brain.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: zenotan <zenotan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/15 00:28:56 by zenotan       #+#    #+#                 */
/*   Updated: 2020/10/15 00:28:57 by zenotan       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	thoughts = "Food";
	IQ = 6969;
}

Brain::Brain(const Brain& copy)
{
	*this = copy;
}

 Brain&			Brain::operator=(const Brain& copy)
{
	if (this != &copy)
	{
		this->thoughts = copy.thoughts;
		this->IQ = copy.IQ;
	}
	return *this;
}

std::string		Brain::getThoughts() const
{
	return thoughts;
}

int				Brain::getIQ() const
{
	return IQ;
}

const Brain*	Brain::identify() const
{
	return this;
}
