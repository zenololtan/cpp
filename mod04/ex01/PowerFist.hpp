/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PowerFist.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: zenotan <zenotan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/17 15:31:12 by zenotan       #+#    #+#                 */
/*   Updated: 2020/10/17 15:31:13 by zenotan       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef POWERFIST_HPP
# define POWERFIST_HPP
# include "AWeapon.hpp"

class PowerFist : public AWeapon
{
	public:
		PowerFist();
		PowerFist(const PowerFist& copy);
		PowerFist&	operator=(const PowerFist& copy);
		~PowerFist() {}

		void		attack() const;
};

#endif
