/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Human.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: zenotan <zenotan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/15 00:29:01 by zenotan       #+#    #+#                 */
/*   Updated: 2020/10/15 00:29:02 by zenotan       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include "Human.hpp"

const Brain&	Human::getBrain() const
{
	return brian;
}

const Brain*	Human::identify() const
{
	return getBrain().identify();
}
