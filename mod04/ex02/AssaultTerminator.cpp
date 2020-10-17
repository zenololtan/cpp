/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AssaultTerminator.cpp                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: zenotan <zenotan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/08 19:24:26 by zenotan       #+#    #+#                 */
/*   Updated: 2020/10/17 15:34:39 by zenotan       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "AssaultTerminator.hpp"
#include <iostream>
#define YELLOW		"\033[1m\033[33m"
#define RED			"\033[1m\033[31m"
#define RESET		"\033[0m"

AssaultTerminator::AssaultTerminator()
{
	std::cout << YELLOW << "[AssaultTerminator]: " << RESET << "* teleports from space *" << std::endl;
}

AssaultTerminator::AssaultTerminator(const AssaultTerminator& copy)
{
	*this = copy;
}

AssaultTerminator&	AssaultTerminator::operator=(const AssaultTerminator& copy)
{
	(void)copy; //existential dread
	return *this;
}

AssaultTerminator*	AssaultTerminator::clone() const
{
	return new AssaultTerminator(*this);
}

void				AssaultTerminator::battleCry() const
{
	std::cout << YELLOW << "[AssaultTerminator]: " << RESET << "This code is unclean. PURIFY IT!" << std::endl;
}

void				AssaultTerminator::rangedAttack() const
{
	std::cout << YELLOW << "[AssaultTerminator]: " << RESET << "* does nothing *" << std::endl;
}

void				AssaultTerminator::meleeAttack() const
{
	std::cout << YELLOW << "[AssaultTerminator]: " << RESET << "* attacks with chainfists *" << std::endl;
}

AssaultTerminator::~AssaultTerminator()
{
	std::cout << YELLOW << "[AssaultTerminator]: " << RED << "I'll be boop beep blop..." << RESET << std::endl;
}
