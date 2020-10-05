#ifndef VICTIM_HPP
# define VICTIM_HPP
# include <string>

class Victim
{
protected:
	std::string	_name;
public:
	Victim();
	Victim(const Victim& copy);
	Victim&			operator=(const Victim& copy);
	Victim(std::string name);
	std::string		getName() const;
	virtual void	getPolymorphed() const;
	virtual			~Victim();
};

std::ostream&		operator<<(std::ostream& out, const Victim& vic);

#endif
