#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"

class HumanA
{
private:
	std::string	Name;
	Weapon&		_Weapon;
public:
	HumanA(std::string name, Weapon& weapon);
	void		attack();
};

#endif
