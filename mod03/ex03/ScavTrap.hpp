/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: zenotan <zenotan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/15 15:30:31 by zenotan       #+#    #+#                 */
/*   Updated: 2020/10/15 15:30:32 by zenotan       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
public:
	ScavTrap();
	ScavTrap(const std::string _name);
	ScavTrap(const ScavTrap &old);
	ScavTrap&		operator=(const ScavTrap &old);
	void			challengeNewcomer();
	virtual			~ScavTrap();
};

#endif
