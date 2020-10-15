/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   NinjaTrap.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: zenotan <zenotan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/15 15:31:01 by zenotan       #+#    #+#                 */
/*   Updated: 2020/10/15 15:31:02 by zenotan       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include <ctime>
#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap()
{
	name = "???";
	lvl = 1;
	hit_points = 60;
	m_hit_points = 606;
	energy_points = 120;
	m_energy_points = 120;
	melee_ad = 60;
	ranged_ad = 5;
	armor_dr = 0;
	c_reset = "\033[0m";
	c_name = "\033[1m\033[90m";
	c_damage = "\033[1m\033[91m";
	c_repair = "\033[1m\033[92m";
	std::cout << c_reset << "Default NinjaTrapper " << c_name << name << c_reset << " has been made" << std::endl;
}

NinjaTrap::NinjaTrap(const std::string _name)
{
	name = _name;
	lvl = 1;
	hit_points = 60;
	m_hit_points = 60;
	energy_points = 120;
	m_energy_points = 120;
	melee_ad = 60;
	ranged_ad = 5;
	armor_dr = 0;
	c_reset = "\033[0m";
	c_name = "\033[1m\033[90m";
	c_damage = "\033[1m\033[91m";
	c_repair = "\033[1m\033[92m";
	std::cout << c_reset << "NinjaTrapper " << c_name << name << c_reset << " has been made" << std::endl;
}

NinjaTrap::NinjaTrap(const NinjaTrap &old)
{
	std::cout << "NinjaTrap copying " << c_name << old.name << c_reset << "..." << std::endl;
	*this = old;
}

NinjaTrap&	NinjaTrap::operator=(const NinjaTrap &old)
{
	std::cout << "NinjaTrap assignment operator called" << std::endl;
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

void	NinjaTrap::ninjaShoebox(NinjaTrap &ninja)
{
	std::cout << c_name << name << c_reset << c_damage << " Attacks " << c_reset << ninja.getNameColor() << ninja.getName()<< c_reset << c_damage << " from behind and performs the \"Thausand Years Of Pain\" forbidden ninjutsu" << c_reset << std::endl;
}

void	NinjaTrap::ninjaShoebox(FragTrap &frag)
{
	std::cout << c_name << name << c_reset << c_damage << " Attacks " << c_reset << frag.getNameColor() << frag.getName() << c_reset << c_damage << " from behind and performs the \"Thausand Years Of Pain\" forbidden ninjutsu" << c_reset << std::endl;
}

void	NinjaTrap::ninjaShoebox(ScavTrap &scav)
{
	std::cout << c_name << name << c_reset << c_damage << " Attacks " << c_reset << scav.getNameColor() << scav.getName() << c_reset << c_damage << " from behind and performs the \"Thausand Years Of Pain\" forbidden ninjutsu" << c_reset << std::endl;
}

NinjaTrap::~NinjaTrap()
{
	std::cout << c_reset << "Destructor called for NinjaTrap " << c_name << name << c_reset << " has been destroyed" << std::endl;
}
