/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Sorcerer.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: zenotan <zenotan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/17 00:43:37 by zenotan       #+#    #+#                 */
/*   Updated: 2020/10/17 01:23:17 by zenotan       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_HPP
# define SORCERER_HPP
# include <string>
# include "Victim.hpp"

class Sorcerer
{
private:
	std::string	_name;
	std::string	_title;
	Sorcerer();
public:
	Sorcerer(const Sorcerer& copy);
	Sorcerer&	operator=(const Sorcerer& copy);
	~Sorcerer();

	Sorcerer(std::string name, std::string title);
	std::string	getName() const;
	std::string	getTitle() const;
	void		polymorph(Victim const &) const;
};

std::ostream&	operator<<(std::ostream& out, const Sorcerer& sorc);

#endif
