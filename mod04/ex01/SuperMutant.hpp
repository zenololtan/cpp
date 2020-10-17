/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   SuperMutant.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: zenotan <zenotan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/17 15:06:37 by zenotan       #+#    #+#                 */
/*   Updated: 2020/10/17 15:06:42 by zenotan       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERMUTANT_HPP
# define SUPERMUTANT_HPP
# include "Enemy.hpp"

class SuperMutant : public Enemy
{
	public:
		SuperMutant();
		SuperMutant(const SuperMutant& copy);
		SuperMutant&	operator=(const SuperMutant& copy);
		virtual			~SuperMutant();
	
		virtual	void	takeDamage(int amount);
};

#endif
