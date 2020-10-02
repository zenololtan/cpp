#ifndef SUPERTRAP_HPP
# define SUPERTRAP_HPP

# include "NinjaTrap.hpp"

class ScavTrap : public NinjaTrap, public FragTrap
{
public:
	ScavTrap();
	ScavTrap(const std::string _name);
	ScavTrap(const ScavTrap &old);
	ScavTrap&		operator=(const ScavTrap &old);
	virtual ~ScavTrap();
};

#endif
