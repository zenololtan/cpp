/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ISpaceMarine.hpp                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: zenotan <zenotan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/06 23:20:46 by zenotan       #+#    #+#                 */
/*   Updated: 2020/10/17 15:35:07 by zenotan       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ISPACEMARINE_HPP
# define ISPACEMARINE_HPP

class ISpaceMarine
{
	public:
		virtual					~ISpaceMarine() {}
		virtual ISpaceMarine*	clone() const = 0;
		virtual void			battleCry() const = 0; 
		virtual void			rangedAttack() const = 0;
		virtual void			meleeAttack() const = 0;
};

#endif
