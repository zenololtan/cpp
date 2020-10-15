/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AMateria.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: zenotan <zenotan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/09 14:18:36 by zenotan       #+#    #+#                 */
/*   Updated: 2020/10/11 19:16:30 by zenotan       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP
# include <string>
# include "ICharacter.hpp"

class ICharacter;

class AMateria
{
	protected:
		std::string		_type;
		unsigned int	_xp;
	public:
		AMateria();
		AMateria(std::string const& type);
		AMateria(const AMateria& copy);
		AMateria&			operator=(const AMateria& copy);
		virtual				~AMateria();

		std::string const&	getType() const; //Returns the materia type
		unsigned int		getXP() const; //Returns the Materia's XP
		virtual AMateria*	clone() const;
		virtual void		use(ICharacter& target);
};

#endif
