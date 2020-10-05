#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <string>

# define RESET	"\033[0m"
# define RED	"\033[31m"
# define YELLOW	"\033[33m"
# define GREEN	"\033[32m"

class FragTrap
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
	FragTrap();
	FragTrap(const std::string name);
	FragTrap(const FragTrap &old);
	FragTrap& operator=(const FragTrap &old);
	void	rangedAttack(std::string const &target);
	void	meleeAttack(std::string const &target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
	void	vaulthunter_dot_exe(std::string const &target);
	~FragTrap();
};

#endif
