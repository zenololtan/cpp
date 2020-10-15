/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: zenotan <zenotan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/15 00:25:06 by zenotan       #+#    #+#                 */
/*   Updated: 2020/10/15 00:25:08 by zenotan       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>

class Zombie
{
	private:
		std::string z_type;
		std::string z_name;
	public:
		Zombie() {}
		Zombie(const Zombie& copy);
		Zombie&		operator=(const Zombie& copy);
		~Zombie() {}

		void		announce();
		void		setZombie(std::string name, std::string type);
		std::string	getZombieName();
		std::string	getZombieType();
};

#endif
