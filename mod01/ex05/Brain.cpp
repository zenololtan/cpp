#include "Brain.hpp"

Brain::Brain()
{
	thoughts = "Food";
	IQ = 6969;
}

std::string	Brain::getThoughts() const
{
	return thoughts;
}

int		Brain::getIQ() const
{
	return IQ;
}

const Brain*	Brain::identify() const
{
	return this;
}
