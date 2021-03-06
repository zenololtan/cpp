/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Character.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: zenotan <zenotan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/17 15:04:57 by zenotan       #+#    #+#                 */
/*   Updated: 2020/10/17 15:04:58 by zenotan       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "AWeapon.hpp"
# include "Enemy.hpp"

class Character
{
	private:
		std::string	_name;
		int			_ap;
		AWeapon		*_weapon;
	public:
		Character();
		Character(const Character& copy);
		Character&	operator=(const Character& copy);
		~Character() {}

		Character(std::string const& name);
		void		recoverAP();
		void		equip(AWeapon *wp);
		void		attack(Enemy *en);
		std::string	getName() const;
		int			getAP() const;
		AWeapon*	getWeapon() const;
};

std::ostream&	operator<<(std::ostream& out, const Character& character);

#endif
