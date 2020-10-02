#include <iostream>
#include <cstdlib>
#include <ctime>
#include "ScavTrap.hpp"

ScavTrap::ScavTrap():
	name("Unnamed Scaffer"),
	lvl(1),
	hit_points(100),
	m_hit_points(100),
	energy_points(50),
	m_energy_points(50),
	melee_ad(20),
	ranged_ad(15),
	armor_dr(3)
{
	std::cout << RESET << "ScavTrapper " << WHITE << name << RESET << " has been made" << std::endl;
}

ScavTrap::ScavTrap(const std::string name):
	name(name),
	lvl(1),
	hit_points(100),
	m_hit_points(100),
	energy_points(50),
	m_energy_points(50),
	melee_ad(20),
	ranged_ad(15),
	armor_dr(3)
{
	std::cout << RESET << "ScavTrapper " << WHITE << name << RESET << " has been made" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &old)
{
	std::cout << "copying " << WHITE << old.name << RESET << "..." << std::endl;
	*this = old;
}

ScavTrap&	ScavTrap::operator=(const ScavTrap &old)
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

void	ScavTrap::rangedAttack(std::string const &target)
{
	std::cout  << WHITE << name << RESET << " attacks " << WHITE << target << RESET << " at range, causing " << MAGENTA << ranged_ad << RESET << " points of damage!" << std::endl;
}

void	ScavTrap::meleeAttack(std::string const &target)
{
	std::cout  << WHITE << name << RESET << " melee attacks " << WHITE << target << RESET << " causing " << MAGENTA << melee_ad << RESET << " points of damage!" << std::endl;
}

void	ScavTrap::takeDamage(unsigned int amount)
{
	if (amount <= armor_dr)
		amount = 0;
	else
		amount -= armor_dr;
	if (amount > hit_points)
		amount = hit_points;
	else
		hit_points -= amount;
	std::cout  << WHITE <<  name << RESET << " gets attacked for " << MAGENTA << amount << RESET << " points of damage!" << std::endl;
}

void	ScavTrap::beRepaired(unsigned int amount)
{
	if (amount > m_hit_points)
		amount = m_hit_points;
	if (hit_points + amount > m_hit_points)
		amount = (hit_points + amount - m_hit_points) - amount;
	hit_points += amount;
	std::cout << WHITE << name << RESET << " is being repaired for " << BLUE << amount << RESET << " points" << std::endl;
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
	std::cout << RESET << "Destructor called for ScavTrap " << WHITE << name << RESET << " has been destroyed" << std::endl;
}
