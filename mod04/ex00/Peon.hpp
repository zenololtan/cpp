/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Peon.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: zenotan <zenotan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/17 00:43:32 by zenotan       #+#    #+#                 */
/*   Updated: 2020/10/17 01:22:50 by zenotan       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_HPP
# define PEON_HPP
# include "Victim.hpp"

class Peon : public Victim
{
	private:
		Peon() {}
	public:
		Peon(const Peon& copy);
		Peon&			operator=(const Peon& copy);
		virtual			~Peon();

		Peon(std::string name);
		virtual void	getPolymorphed() const;
};

#endif
