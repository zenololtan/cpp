/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Squad.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: zenotan <zenotan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/07 12:53:46 by zenotan       #+#    #+#                 */
/*   Updated: 2020/10/17 15:35:29 by zenotan       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUAD_HPP
# define SQUAD_HPP

# include "ISquad.hpp"

class Squad : public ISquad
{
	private:
		int				_count;
		ISpaceMarine	**_units;
	public:
		Squad();
		Squad(const Squad &copy);
		Squad&			operator=(const Squad &copy);
		virtual			~Squad();

		int				getCount() const;
		ISpaceMarine*	getUnit(int i) const;
		int				push(ISpaceMarine* unit);
};

#endif
