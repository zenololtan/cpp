/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: zenotan <zenotan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/15 15:29:47 by zenotan       #+#    #+#                 */
/*   Updated: 2020/10/15 15:29:51 by zenotan       ########   odam.nl         */
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
	virtual			~FragTrap();

	FragTrap&		operator=(const FragTrap &old);
	void			vaulthunter_dot_exe(std::string const &target);
};

#endif
