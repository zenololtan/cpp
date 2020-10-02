#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
public:
	ScavTrap();
	ScavTrap(const std::string _name);
	ScavTrap(const ScavTrap &old);
	ScavTrap& operator=(const ScavTrap &old);
	virtual void	rangedAttack(std::string const &target);
	virtual void	meleeAttack(std::string const &target);
	void		challengeNewcomer();
	virtual		~ScavTrap();
};

#endif
