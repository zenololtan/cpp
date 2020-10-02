#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
private:
	static const int	frac_bits = 8;
	int			fixed_point;
public:
	Fixed();
	Fixed(const int input);
	Fixed(const float input);
	Fixed(const Fixed &copy);
	Fixed&		operator=(const Fixed &copy);
	void		setRawBits(int const raw);
	int		getRawBits() const;
	float		toFloat() const;
	int		toInt() const;
	~Fixed();
};

	std::ostream&	operator<<(std::ostream &out, const Fixed &copy);

#endif
