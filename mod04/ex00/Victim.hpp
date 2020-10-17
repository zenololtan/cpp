/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Victim.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: zenotan <zenotan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/17 00:43:43 by zenotan       #+#    #+#                 */
/*   Updated: 2020/10/17 01:23:43 by zenotan       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_HPP
# define VICTIM_HPP
# include <string>

class Victim
{
protected:
	std::string	_name;
	Victim() {}
public:
	Victim(const Victim& copy);
	Victim&			operator=(const Victim& copy);
	virtual			~Victim();

	Victim(std::string name);
	std::string		getName() const;
	virtual void	getPolymorphed() const;
};

std::ostream&		operator<<(std::ostream& out, const Victim& vic);

#endif
