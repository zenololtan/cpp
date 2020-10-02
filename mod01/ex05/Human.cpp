#include "Brain.hpp"
#include "Human.hpp"

Human::Human()
{
}

const Brain&	Human::getBrain() const
{
	return brian;
}

const Brain*	Human::identify() const
{
	return getBrain().identify();
}
