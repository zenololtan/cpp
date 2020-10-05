#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP

# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class NinjaTrap : virtual public ClapTrap
{
public:
	NinjaTrap();
	NinjaTrap(const std::string _name);
	NinjaTrap(const NinjaTrap &old);
	NinjaTrap&		operator=(const NinjaTrap &old);
    void			ninjaShoebox(NinjaTrap &ninja);
	void			ninjaShoebox(FragTrap &frag);
    void			ninjaShoebox(ScavTrap &scav);
	virtual			~NinjaTrap();
};

#endif
