/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ISquad.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: zenotan <zenotan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/06 23:05:07 by zenotan       #+#    #+#                 */
/*   Updated: 2020/10/08 21:02:12 by zenotan       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ISPACE_HPP
# define ISPACE_HPP

# include "ISpaceMarine.hpp"

class ISquad
{
	public:
		virtual					~ISquad() {}
		virtual int				getCount() const = 0;
		virtual ISpaceMarine*	getUnit(int i) const = 0;
		virtual int				push(ISpaceMarine* unit) = 0;
};

#endif
