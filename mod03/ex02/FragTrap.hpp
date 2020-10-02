#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <string>
# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
public:
	FragTrap();
	FragTrap(const std::string _name);
	FragTrap(const FragTrap &old);
	FragTrap& operator=(const FragTrap &old);
	virtual void	rangedAttack(std::string const &target);
	virtual void	meleeAttack(std::string const &target);
	void		vaulthunter_dot_exe(std::string const &target);
	virtual		~FragTrap();
};



#endif
