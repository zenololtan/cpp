#ifndef HUMAN_HPP
# define HUMAN_HPP

#include "Brain.hpp"

class Human
{
private:
	const Brain	brian;
public:
	Human();
	const Brain*	identify() const;
	const Brain&	getBrain() const;
};

#endif
