/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: zenotan <zenotan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/15 01:37:45 by zenotan       #+#    #+#                 */
/*   Updated: 2020/10/15 01:37:46 by zenotan       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

Fixed::Fixed() : fixed_point(0)
{
	std::cout << "Default constructor called." << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called." << std::endl;
}

Fixed::Fixed(const Fixed &copy)
{
	std::cout << "Copy constructor called." << std::endl;
	*this = copy;
}

Fixed&	Fixed::operator=(const Fixed &copy)
{
	std::cout << "Assignation operator called." << std::endl;
	fixed_point = copy.getRawBits();
	return *this;
}

void	Fixed::setRawBits(int const raw)
{
	fixed_point = raw;
}

int	Fixed::getRawBits() const
{
	std::cout << "getRawBits member function called." << std::endl;
	return fixed_point;
}
