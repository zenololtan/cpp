/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ZombieHorde.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: zenotan <zenotan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/15 00:26:33 by zenotan       #+#    #+#                 */
/*   Updated: 2020/10/15 02:20:39 by zenotan       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP

# include "Zombie.hpp"

class ZombieHorde
{
	private:
		int		_amount;
		Zombie	*horde;
		ZombieHorde() {}
	public:
		ZombieHorde(int n);
		ZombieHorde(const ZombieHorde& copy);
		ZombieHorde&	operator=(const ZombieHorde& copy);
		~ZombieHorde();
		std::string		randomName();
		std::string		randomType();
};

#endif
