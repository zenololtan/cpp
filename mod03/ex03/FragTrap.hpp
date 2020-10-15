/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: zenotan <zenotan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/15 15:30:15 by zenotan       #+#    #+#                 */
/*   Updated: 2020/10/15 15:30:17 by zenotan       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
public:
	FragTrap();
	FragTrap(const std::string _name);
	FragTrap(const FragTrap &old);
	FragTrap&		operator=(const FragTrap &old);
	virtual			~FragTrap();

	void			vaulthunter_dot_exe(std::string const &target);
};



#endif
