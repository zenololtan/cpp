#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <string>

# define RESET		"\033[0m"
# define MAGENTA	"\033[1m\033[35m"
# define WHITE		"\033[1m\033[37m"
# define BLUE		"\033[1m\033[34m"

class ScavTrap
{
private:
	std::string	name;
	unsigned int	lvl;
	unsigned int	hit_points;
	unsigned int	m_hit_points;
	unsigned int	energy_points;
	unsigned int	m_energy_points;
	unsigned int	melee_ad;
	unsigned int	ranged_ad;
	unsigned int	armor_dr;
public:
	ScavTrap();
	ScavTrap(const std::string name);
	ScavTrap(const ScavTrap &old);
	ScavTrap& operator=(const ScavTrap &old);
	void	rangedAttack(std::string const &target);
	void	meleeAttack(std::string const &target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
	void	challengeNewcomer();
	~ScavTrap();
};



#endif
