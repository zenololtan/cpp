/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ZombieEvent.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: zenotan <zenotan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/15 00:25:11 by zenotan       #+#    #+#                 */
/*   Updated: 2020/10/15 01:57:19 by zenotan       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP

# include "Zombie.hpp"

class ZombieEvent
{
	private:
		std::string	zombie_type;
	public:
		ZombieEvent();
		ZombieEvent(const ZombieEvent& copy);
		ZombieEvent&	operator=(const ZombieEvent& copy);
		~ZombieEvent();

		void			setZombieType(std::string type);
		std::string		randomName();
		std::string		randomType();
		void			randomChump();
		Zombie*			newZombie(std::string name);
	};

#endif
