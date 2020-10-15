/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanB.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: zenotan <zenotan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/15 00:30:15 by zenotan       #+#    #+#                 */
/*   Updated: 2020/10/15 02:35:11 by zenotan       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"

class HumanB
{
private:
	std::string	Name;
	Weapon*		_weapon; // using a pointer because you cant have an empty ref
public:
	HumanB(std::string name);
	void	setWeapon(Weapon& weapon);
	void	attack();
};

#endif
