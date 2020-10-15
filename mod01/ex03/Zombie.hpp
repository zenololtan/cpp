/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: zenotan <zenotan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/15 00:26:28 by zenotan       #+#    #+#                 */
/*   Updated: 2020/10/15 00:26:30 by zenotan       ########   odam.nl         */
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
		public:
		Zombie() {}
		Zombie(const Zombie& copy);
		Zombie&		operator=(const Zombie& copy);
		~Zombie() {}

		void		announce();
		void		setZombieName(std::string name);
		void		setZombieType(std::string type);
		std::string	getZombieName();
		std::string	getZombieType();
		std::string	randomName();
		std::string	randomType();
};

#endif
