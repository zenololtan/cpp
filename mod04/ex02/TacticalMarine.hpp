/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   TacticalMarine.hpp                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: zenotan <zenotan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/07 12:50:11 by zenotan       #+#    #+#                 */
/*   Updated: 2020/10/17 15:35:36 by zenotan       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef TACTICALMARINE_HPP
# define TACTICALMARINE_HPP

#include "ISpaceMarine.hpp"

class TacticalMarine : public ISpaceMarine
{
	public:
		TacticalMarine();
		TacticalMarine(const TacticalMarine& old_marine);
		TacticalMarine&		operator=(const TacticalMarine& other);
		~TacticalMarine();

		TacticalMarine*		clone() const;
		void				battleCry() const;
		void				rangedAttack() const;
		void				meleeAttack() const;
};

#endif
