/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Character.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: zenotan <zenotan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/11 14:45:21 by zenotan       #+#    #+#                 */
/*   Updated: 2020/10/11 16:24:59 by zenotan       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "ICharacter.hpp"

class Character : public ICharacter
{
	private:
		std::string		_name;
		AMateria		*inventory[3];
	public:
		Character();
		Character(std::string name);
		Character(const Character& copy);
		Character&			operator=(const Character& copy);
		~Character();
		
		std::string const&	getName() const;
		void				equip(AMateria* m);
		void				unequip(int idx);
		void				use(int idx, ICharacter& target);
};

#endif
