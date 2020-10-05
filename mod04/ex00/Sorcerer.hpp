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
	Sorcerer(std::string name, std::string title);
	Sorcerer(const Sorcerer& copy);
	Sorcerer&	operator=(const Sorcerer& copy);
	std::string	getName() const;
	std::string	getTitle() const;
	void		polymorph(Victim const &) const;
	~Sorcerer();
};

std::ostream&	operator<<(std::ostream& out, const Sorcerer& sorc);

#endif
