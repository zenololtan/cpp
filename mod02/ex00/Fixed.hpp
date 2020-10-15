/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: zenotan <zenotan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/15 01:37:48 by zenotan       #+#    #+#                 */
/*   Updated: 2020/10/15 01:37:49 by zenotan       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

class Fixed
{
private:
	static const int	_raw = 8;
	int			fixed_point;
public:
	Fixed();
	~Fixed();
	Fixed(const Fixed &copy);
	Fixed&	operator=(const Fixed &copy);
	void	setRawBits(int const raw);
	int	getRawBits() const;
};

#endif
