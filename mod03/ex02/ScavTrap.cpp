/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: zenotan <zenotan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/15 15:29:58 by zenotan       #+#    #+#                 */
/*   Updated: 2020/10/15 15:29:59 by zenotan       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include <ctime>
#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
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
	c_name = "\033[1m\033[37m";
	c_damage = "\033[1m\033[35m";
	c_repair = "\033[1m\033[34m";
	std::cout << c_reset << "Default ScavTrapper " << c_name << name << c_reset << " has been made" << std::endl;
}

ScavTrap::ScavTrap(const std::string _name)
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
	c_name = "\033[1m\033[37m";
	c_damage = "\033[1m\033[35m";
	c_repair = "\033[1m\033[34m";
	std::cout << c_reset << "ScavTrapper " << c_name << name << c_reset << " has been made" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &old)
{
	std::cout << "ScavTrap copying " << c_name << old.name << c_reset << "..." << std::endl;
	*this = old;
}

ScavTrap&	ScavTrap::operator=(const ScavTrap &old)
{
	std::cout << "ScavTrap assignment operator called" << std::endl;
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

void	ScavTrap::challengeNewcomer()
{
	static bool	seed = false;
	int		i;

	if (seed == false)
	{
		std::srand((unsigned) std::time(0));
		seed = true;
	}
	i = 0 + (std::rand() % 4);
	std::string challenges[5] = {"do a handstand and count to 10", "go home", "do a funny dance", "kiss the person nearest to you", "not have an existential crisis for 5 minutes"};
	std::cout << "Stranger, to enter I challenge you to " << challenges[i] << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << c_reset << "Destructor called for ScavTrap " << c_name << name << c_reset << " has been destroyed" << std::endl;
}
