#include "TacticalMarine.hpp"
#include <iostream>
#define YELLOW		"\033[1m\033[33m"
#define RED			"\033[1m\033[31m"
#define RESET		"\033[0m"

TacticalMarine::TacticalMarine()
{
	std::cout << YELLOW << "[TacticalMarine]: " << RESET << "Tactical Marine ready for battle!" << std::endl;
}

TacticalMarine::TacticalMarine(const TacticalMarine& copy)
{
	*this = copy;
}

TacticalMarine&	TacticalMarine::operator=(const TacticalMarine& copy)
{
	(void)copy; //existential dread
	return *this;
}

TacticalMarine*	TacticalMarine::clone() const
{
	return new TacticalMarine(*this);
}

void				TacticalMarine::battleCry() const
{
	std::cout << YELLOW << "[TacticalMarine]: " << RESET << "For the holy PLOT!" << std::endl;
}

void				TacticalMarine::rangedAttack() const
{
	std::cout << YELLOW << "[TacticalMarine]: " << RESET << "* attacks with a bolter *" << std::endl;
}

void				TacticalMarine::meleeAttack() const
{
	std::cout << YELLOW << "[TacticalMarine]: " << RESET << "* attacks with a chainsword *" << std::endl;
}

TacticalMarine::~TacticalMarine()
{
	std::cout << YELLOW << "[TacticalMarine]: " << RED << "Aaargh..." << RESET << std::endl;
}
