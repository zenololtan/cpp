/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: zenotan <zenotan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/15 15:28:27 by zenotan       #+#    #+#                 */
/*   Updated: 2020/10/15 15:28:28 by zenotan       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include <ctime>
#include "FragTrap.hpp"

FragTrap::FragTrap():
	name("Unnamed phragger"),
	lvl(1),
	hit_points(100),
	m_hit_points(100),
	energy_points(100),
	m_energy_points(100),
	melee_ad(30),
	ranged_ad(20),
	armor_dr(5)
{
	std::cout << RESET << "Constructor called: beep boop (well chosen quote) " << YELLOW << name << RESET << " has been made" << std::endl;
}

FragTrap::FragTrap(const std::string name):
	name(name),
	lvl(1),
	hit_points(100),
	m_hit_points(100),
	energy_points(100),
	m_energy_points(100),
	melee_ad(30),
	ranged_ad(20),
	armor_dr(5)
{
	std::cout << RESET << "Constructor called: beep boop (well chosen quote) " << YELLOW << name << RESET << " has been made" << std::endl;
}

FragTrap::FragTrap(const FragTrap &old)
{
	std::cout << "copying " << YELLOW << old.name << RESET << "..." << std::endl;
	*this = old;
}

FragTrap&	FragTrap::operator=(const FragTrap &old)
{
	std::cout << "Assignment operator called" << std::endl;
	if (this != &old)
	{
		name = old.name;
		lvl = old.lvl;
		hit_points = old.hit_points;
		m_hit_points = old.m_hit_points;
		energy_points = old.energy_points;
		m_energy_points = old.m_energy_points;
		melee_ad = old.melee_ad;
		ranged_ad = old.ranged_ad;
		armor_dr = old.armor_dr;
	}
	return *this;
}

void	FragTrap::rangedAttack(std::string const &target)
{
	std::cout  << YELLOW << name << RESET << " attacks " << YELLOW << target << RESET << " at range, causing " << RED << ranged_ad << RESET << " points of damage!" << std::endl;
}

void	FragTrap::meleeAttack(std::string const &target)
{
	std::cout  << YELLOW << name << RESET << " melee attacks " << YELLOW << target << RESET << " causing " << RED << melee_ad << RESET << " points of damage!" << std::endl;
}

void	FragTrap::takeDamage(unsigned int amount)
{
	if (amount <= armor_dr)
		amount = 0;
	else
		amount -= armor_dr;
	if (amount > hit_points)
		amount = hit_points;
	else
		hit_points -= amount;
	std::cout  << YELLOW <<  name << RESET << " gets attacked for " << RED << amount << RESET << " points of damage!" << std::endl;
}

void	FragTrap::beRepaired(unsigned int amount)
{
	if (amount > m_hit_points)
		amount = m_hit_points;
	if (hit_points + amount > m_hit_points)
		amount = (hit_points + amount - m_hit_points) - amount;
	hit_points += amount;
	std::cout << YELLOW << name << RESET << " is being repaired for " << GREEN << amount << RESET << " points" << std::endl;
}

void	FragTrap::vaulthunter_dot_exe(std::string const  &target)
{
	static bool	seed = false;
	int		i;
	
	if (energy_points < 25)
	{
		std::cout << YELLOW << "Not enough energy points for a random attack." << RESET << std::endl;
		return ;
	}
	energy_points -= 25;
	if (seed == false)
	{
		std::srand((unsigned) std::time(0));
		seed = true;
	}
	i = 0 + (std::rand() % 4);
	std::string pool[5] = {" mentaly abuses ", " delivers a tickle death to ", " distracts and gives a demolishing wedgie to ", " does a backflip... nothing realy happens to ", " teleports behind and stabs "};
	std::cout << YELLOW << name << RESET << pool[i] << YELLOW << target << RESET << std::endl;

}

FragTrap::~FragTrap()
{
	std::cout << RESET << "Destructor called: boop boop (another well chosen quote) " << YELLOW << name << RESET << " has been destroyed" << std::endl;
}
