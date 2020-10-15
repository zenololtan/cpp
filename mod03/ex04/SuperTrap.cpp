/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   SuperTrap.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: zenotan <zenotan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/15 15:31:11 by zenotan       #+#    #+#                 */
/*   Updated: 2020/10/15 15:31:13 by zenotan       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "SuperTrap.hpp"

SuperTrap::SuperTrap() : ClapTrap(), FragTrap(), NinjaTrap()
{
	name = "???";
	lvl = 1;
	hit_points = 100;
	m_hit_points = 100;
	energy_points = 120;
	m_energy_points = 120;
	melee_ad = 60;
	ranged_ad = 20;
	armor_dr = 5;
	c_reset = "\033[0m";
	c_name = "\033[1m\033[33m";
	c_damage = "\033[1m\033[91m";
	c_repair = "\033[1m\033[92m";
	std::cout << c_reset << "Default SupperTrapper " << c_name << name << c_reset << " has been made" << std::endl;
}

SuperTrap::SuperTrap(const std::string _name)
{
	name = _name;
	lvl = 1;
	hit_points = 100;
	m_hit_points = 100;
	energy_points = 120;
	m_energy_points = 120;
	melee_ad = 60;
	ranged_ad = 20;
	armor_dr = 5;
	c_reset = "\033[0m";
	c_name = "\033[1m\033[90m";
	c_damage = "\033[1m\033[91m";
	c_repair = "\033[1m\033[92m";
	std::cout << c_reset << "SuperTrapper " << c_name << name << c_reset << " has been made" << std::endl;
}

SuperTrap::SuperTrap(const SuperTrap &old)
{
	std::cout << "SuperTrap copying " << c_name << old.name << c_reset << "..." << std::endl;
	*this = old;
}

SuperTrap&	SuperTrap::operator=(const SuperTrap &old)
{
	std::cout << "SuperTrap assignment operator called" << std::endl;
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

SuperTrap::~SuperTrap()
{
	std::cout << c_reset << "Destructor called for SuperTrap " << c_name << name << c_reset << " has been destroyed" << std::endl;
}
