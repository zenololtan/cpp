/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AssaultTerminator.hpp                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: zenotan <zenotan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/08 19:19:57 by zenotan       #+#    #+#                 */
/*   Updated: 2020/10/08 20:54:44 by zenotan       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ASSAULTTERMINATOR_HPP
# define ASSAULTTERMINATOR_HPP

# include "ISpaceMarine.hpp"

class AssaultTerminator : public ISpaceMarine 
{
	public:
		AssaultTerminator();
		AssaultTerminator(const AssaultTerminator& old_marine);
		AssaultTerminator&	operator=(const AssaultTerminator& other);
		~AssaultTerminator();
		AssaultTerminator*	clone() const;
		void				battleCry() const;
		void				rangedAttack() const;
		void				meleeAttack() const;
};

#endif
