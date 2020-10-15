/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Human.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: zenotan <zenotan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/15 00:29:05 by zenotan       #+#    #+#                 */
/*   Updated: 2020/10/15 00:29:06 by zenotan       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_HPP
# define HUMAN_HPP

#include "Brain.hpp"

class Human
{
private:
	const Brain	brian;
public:
	Human() {}
	~Human() {}

	const Brain&		getBrain() const;
	const Brain*		identify() const;
};

#endif
