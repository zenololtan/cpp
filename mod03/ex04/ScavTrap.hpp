#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
public:
	ScavTrap();
	ScavTrap(const std::string _name);
	ScavTrap(const ScavTrap &old);
	ScavTrap&		operator=(const ScavTrap &old);
	void			challengeNewcomer();
	virtual			~ScavTrap();
};

#endif
