/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ClapTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: zenotan <zenotan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/15 15:30:36 by zenotan       #+#    #+#                 */
/*   Updated: 2020/10/15 15:30:37 by zenotan       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include <ctime>
#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	name = "???";
	lvl = 1;
	hit_points = 100;
	m_hit_points = 100;
	energy_points = 100;
	m_energy_points = 100;
	melee_ad = 30;
	ranged_ad = 20;
	armor_dr = 5;
	c_reset = "\033[0m";
	c_name = "\033[0m";
	c_damage = "\033[0m";
	c_repair = "\033[0m";

	std::cout << "Default ClapTrap constructor called" << std::endl;
}

ClapTrap::ClapTrap(const std::string _name)
{
	name = _name;
	lvl = 1;
	hit_points = 100;
	m_hit_points = 100;
	energy_points = 100;
	m_energy_points = 100;
	melee_ad = 30;
	ranged_ad = 20;
	armor_dr = 5;
	c_reset = "\033[0m";
	c_name = "\033[0m";
	c_damage = "\033[0m";
	c_repair = "\033[0m";

	std::cout << "ClapTrap constructor has been called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &old)
{
	std::cout << "ClapTrap copying " << old.name << "..." << std::endl;
	*this = old;
}

ClapTrap&	ClapTrap::operator=(const ClapTrap &old)
{
	std::cout << "ClapTrap assignment operator called" << std::endl;
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
		c_reset = old.c_reset;
		c_name = old.c_name;
		c_damage = old.c_damage;
		c_repair = old.c_repair;
	}
	return *this;
}

void	ClapTrap::rangedAttack(std::string const &target)
{
	std::cout  << c_name << name << c_reset << " attacks " << c_name << target << c_reset << " at range, causing " << c_damage << ranged_ad << c_reset << " points of damage!" << std::endl;
}

void	ClapTrap::meleeAttack(std::string const &target)
{
	std::cout  << c_name << name << c_reset << " melee attacks " << c_name << target << c_reset << " causing " << c_damage << melee_ad << c_reset << " points of damage!" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (amount <= armor_dr)
		amount = 0;
	else
		amount -= armor_dr;
	if (amount > hit_points)
		amount = hit_points;
	else
		hit_points -= amount;
	std::cout  << c_name <<  name << c_reset << " gets attacked for " << c_damage << amount << c_reset << " points of damage!" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (amount > m_hit_points)
		amount = m_hit_points;
	if (hit_points + amount > m_hit_points)
		amount -= (hit_points + amount - m_hit_points);
	hit_points += amount;
	std::cout << c_name << name << c_reset << " is being repaired for " << c_repair << amount << c_reset << " points" << std::endl;
}

std::string		ClapTrap::getName()
{
	return name;
}

std::string		ClapTrap::getNameColor()
{
	return c_name;
}

ClapTrap::~ClapTrap()
{
	std::cout << c_reset << "ClapTrap destructor called" << std::endl;
}
