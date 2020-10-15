/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanA.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: zenotan <zenotan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/15 00:30:09 by zenotan       #+#    #+#                 */
/*   Updated: 2020/10/15 00:30:10 by zenotan       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"

class HumanA
{
private:
	std::string	Name;
	Weapon&		_Weapon;
public:
	HumanA(std::string name, Weapon& weapon);
	void		attack();
};

#endif
