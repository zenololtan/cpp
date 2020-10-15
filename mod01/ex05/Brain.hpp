/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Brain.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: zenotan <zenotan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/15 00:28:58 by zenotan       #+#    #+#                 */
/*   Updated: 2020/10/15 00:28:59 by zenotan       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

# include <string>

class Brain
{
private:
	std::string	thoughts;
	int			IQ;
public:
	Brain();
	Brain(const Brain& copy);
	Brain&			operator=(const Brain& copy);
	~Brain() {}

	std::string		getThoughts() const;
	int				getIQ() const;
	const Brain*	identify() const;
};

#endif
