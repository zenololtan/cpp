#ifndef SUPERTRAP_HPP
# define SUPERTRAP_HPP

# include "NinjaTrap.hpp"
# include "FragTrap.hpp"

class SuperTrap : public FragTrap, public NinjaTrap
{
public:
	SuperTrap();
	SuperTrap(const std::string _name);
	SuperTrap(const SuperTrap &old);
	SuperTrap&		operator=(const SuperTrap &old);
	virtual ~SuperTrap();
};

#endif
