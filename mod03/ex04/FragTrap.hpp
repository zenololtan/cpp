#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
public:
	FragTrap();
	FragTrap(const std::string _name);
	FragTrap(const FragTrap &old);
	FragTrap&		operator=(const FragTrap &old);
	void			vaulthunter_dot_exe(std::string const &target);
	virtual			~FragTrap();
};



#endif
