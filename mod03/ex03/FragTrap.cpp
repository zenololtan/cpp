/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: zenotan <zenotan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/15 15:30:13 by zenotan       #+#    #+#                 */
/*   Updated: 2020/10/15 15:30:14 by zenotan       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include <ctime>
#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	name = "Unnamed phragger";
	lvl = 1;
	hit_points = 100;
	m_hit_points = 100;
	energy_points = 100;
	m_energy_points = 100;
	melee_ad = 30;
	ranged_ad = 20;
	armor_dr = 5;
	c_reset = "\033[1m\033[0m";
	c_name = "\033[1m\033[33m";
	c_damage = "\033[1m\033[31m";
	c_repair = "\033[1m\033[32m";

	std::cout << c_reset << "FragTrap default constructor called: beep boop (well chosen quote) " << c_name << name << c_reset << " has been made" << std::endl;
}

FragTrap::FragTrap(const std::string _name)
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
	c_name = "\033[1m\033[33m";
	c_damage = "\033[1m\033[31m";
	c_repair = "\033[1m\033[32m";

	std::cout << c_reset << "FragTrap constructor called: beep boop (well chosen quote) " << c_name << name << c_reset << " has been made" << std::endl;
}

FragTrap::FragTrap(const FragTrap &old)
{
	std::cout << "FragTrap copying " << c_name << old.name << c_reset << "..." << std::endl;
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
		c_reset = old.c_reset;
		c_name = old.c_name;
		c_damage = old.c_damage;
		c_repair = old.c_repair;
	}
	return *this;
}

void	FragTrap::vaulthunter_dot_exe(std::string const  &target)
{
	static bool	seed = false;
	int		i;
	
	if (energy_points < 25)
	{
		std::cout << c_name << "Not enough energy points for a random attack." << c_reset << std::endl;
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
	std::cout << c_name << name << c_reset << pool[i] << c_name << target << c_reset << std::endl;

}

FragTrap::~FragTrap()
{
	std::cout << c_reset << "FragTrap destructor called: boop boop (another well chosen quote) " << c_name << name << c_reset << " has been destroyed" << std::endl;
}
