/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ClapTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: zenotan <zenotan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/15 15:30:39 by zenotan       #+#    #+#                 */
/*   Updated: 2020/10/15 15:30:40 by zenotan       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <string>

class ClapTrap
{
protected:
	std::string		name;
	unsigned int	lvl;
	unsigned int	hit_points;
	unsigned int	m_hit_points;
	unsigned int	energy_points;
	unsigned int	m_energy_points;
	unsigned int	melee_ad;
	unsigned int	ranged_ad;
	unsigned int	armor_dr;
	std::string		c_reset;
	std::string		c_name;
	std::string		c_damage;
	std::string		c_repair;
public:
	ClapTrap();
	ClapTrap(const std::string _name);
	ClapTrap(const ClapTrap &old);
	ClapTrap&		operator=(const ClapTrap &old);
	~ClapTrap();

	virtual void	rangedAttack(std::string const &target);
	virtual void	meleeAttack(std::string const &target);
	void			takeDamage(unsigned int amount);
	void			beRepaired(unsigned int amount);
	std::string		getName();
	std::string		getNameColor();
};

#endif
