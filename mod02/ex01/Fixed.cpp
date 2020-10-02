#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed() : fixed_point(0)
{
	std::cout << "Default constructor called." << std::endl;
}

Fixed::Fixed(const int input)
{
	fixed_point = input << frac_bits;
	std::cout << "Int constructor called." << std::endl;
}

Fixed::Fixed(const float input)
{
	fixed_point = roundf(input * (1 << frac_bits));
	std::cout << "Float constructor called." << std::endl;
}

Fixed::Fixed(const Fixed &copy)
{
	std::cout << "Copy constructor called." << std::endl;
	*this = copy;
}

Fixed&		Fixed::operator=(const Fixed &copy)
{
	std::cout << "Assignation operator called." << std::endl;
	fixed_point = copy.getRawBits();
	return *this;
}

std::ostream&	operator<<(std::ostream &out, const Fixed &copy)
{
	out << copy.toFloat();
	return out;
}

void		Fixed::setRawBits(int const raw)
{
	fixed_point = raw;
}

int		Fixed::getRawBits() const
{
	return fixed_point;
}

float		Fixed::toFloat() const
{
	float	out;

	out = fixed_point >> frac_bits;
	out += (float)(fixed_point & 0xFF) / (1 << frac_bits);
	return out;
}

int		Fixed::toInt() const
{
	float	out;

	out = fixed_point >> frac_bits;
	return out;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called." << std::endl;
}

