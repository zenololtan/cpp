#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <string>

class Zombie
{
private:
	std::string z_type;
	std::string z_name;

public:
	void	announce();
	void	setZombie(std::string name, std::string type);
	std::string	getZombieName();
	std::string	getZombieType();
};

#endif
