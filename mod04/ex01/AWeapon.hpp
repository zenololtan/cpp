/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AWeapon.hpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: zenotan <zenotan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/17 15:31:00 by zenotan       #+#    #+#                 */
/*   Updated: 2020/10/17 15:31:01 by zenotan       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_HPP
# define AWEAPON_HPP
# include <string>

class AWeapon
{
	protected:
		std::string	_name;
		int			_dmg;
		int			_ap;
	public:
		AWeapon() {}
		AWeapon(const AWeapon& copy);
		AWeapon&		operator=(const AWeapon& copy);
		virtual			~AWeapon() {}

		AWeapon(std::string const& name, int apcost, int damage);
		std::string		getName() const;
		int				getAPCost() const;
		int				getDamage() const;
		virtual void	attack() const = 0;
};

#endif
