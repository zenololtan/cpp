#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP
# include "Zombie.hpp"

class ZombieEvent
{
private:
	std::string	zombie_type;
public:
	ZombieEvent();
	~ZombieEvent();
	void		setZombieType(std::string type);
	std::string	randomName();
	std::string	randomType();
	Zombie*		randomChump();
	Zombie*		newZombie(std::string name);
};

#endif
