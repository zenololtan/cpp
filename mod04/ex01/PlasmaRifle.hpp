/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PlasmaRifle.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: zenotan <zenotan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/17 15:05:52 by zenotan       #+#    #+#                 */
/*   Updated: 2020/10/17 15:05:52 by zenotan       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLASMARIFLE_HPP
# define PLASMARIFLE_HPP
# include "AWeapon.hpp"

class PlasmaRifle : public AWeapon
{
	public:
		PlasmaRifle();
		PlasmaRifle(const PlasmaRifle& copy);
		PlasmaRifle&	operator=(const PlasmaRifle& copy);
		~PlasmaRifle() {}

		void			attack() const;
};

#endif
