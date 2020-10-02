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
