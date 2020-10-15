/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Ice.hpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: zenotan <zenotan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/09 15:04:45 by zenotan       #+#    #+#                 */
/*   Updated: 2020/10/11 16:21:06 by zenotan       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP
# include <string>
# include "AMateria.hpp"

class Ice : public AMateria
{
	public:
		Ice();
		Ice(const AMateria& copy);
		Ice&		operator=(const Ice& copy);
		~Ice();

		AMateria*	clone() const;
		void		use(ICharacter& target);
};

#endif
