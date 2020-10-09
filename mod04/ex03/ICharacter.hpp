/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ICharacter.hpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: zenotan <zenotan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/09 15:31:02 by zenotan       #+#    #+#                 */
/*   Updated: 2020/10/09 15:32:23 by zenotan       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTER_HPP	
# define ICHARACTER_HPP

class ICharacter
{
	public:
	virtual ~ICharacter() {}
	virtual std::string const&	getName() const = 0;
	virtual void				equip(AMateria* m) = 0;
	virtual void				unequip(int idx) = 0;
	virtual void				use(int idx, ICharacter& target) = 0;
};

#endif