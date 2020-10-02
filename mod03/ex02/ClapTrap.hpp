#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <string>

# define RESET	"\033[0m"
# define RED	"\033[31m"
# define YELLOW	"\033[33m"
# define GREEN	"\033[32m"
# define MAGENTA "\033[1m\033[35m"
# define WHITE "\033[1m\033[37m"
# define BLUE "\033[1m\033[34m"

class ClapTrap
{
protected:
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
	ClapTrap();
	ClapTrap(const std::string _name);
	ClapTrap(const ClapTrap &old);
	ClapTrap&	operator=(const ClapTrap &old);
	virtual void	rangedAttack(std::string const &target);
	virtual void	meleeAttack(std::string const &target);
	void		takeDamage(unsigned int amount);
	void		beRepaired(unsigned int amount);
	~ClapTrap();
};

#endif
