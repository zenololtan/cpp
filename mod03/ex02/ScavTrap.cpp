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
	std::cout << "ScavTrap default constructor has been called" << std::endl;
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
	std::cout << RESET << "ScavTrapper " << WHITE << name << RESET << " has been made" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &old)
{
	std::cout << "ScavTrap copying " << WHITE << old.name << RESET << "..." << std::endl;
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
	}
	return *this;
}

ScavTrap::~ScavTrap()
{
	std::cout << RESET << "ScavTrap destructor called" << std::endl;
}
