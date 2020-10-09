/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cure.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: zenotan <zenotan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/09 15:27:18 by zenotan       #+#    #+#                 */
/*   Updated: 2020/10/09 15:27:53 by zenotan       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP
# include <string>
# include "AMateria.hpp"

class Cure : public AMateria
{
	public:
		Cure();
		Cure(const AMateria& copy);
		Cure&		operator=(const Cure& copy);
		~Cure();

		AMateria*	clone() const;
		void		use(ICharacter& target);
};

#endif
