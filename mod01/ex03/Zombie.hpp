#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <string>

class Zombie
{
private:
	std::string z_type;
	std::string z_name;

public:
	void		announce();
	void		setZombieName(std::string name);
	void		setZombieType(std::string type);
	std::string	getZombieName();
	std::string	getZombieType();
	std::string	randomName();
	std::string	randomType();

};

#endif
