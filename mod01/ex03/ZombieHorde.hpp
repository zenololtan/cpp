#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP

# include "Zombie.hpp"

class ZombieHorde
{
private:
	Zombie *horde;
public:
	ZombieHorde(int n);
	~ZombieHorde();
	std::string	randomName();
	std::string	randomType();
};

#endif
