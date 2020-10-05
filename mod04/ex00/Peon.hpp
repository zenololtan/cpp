#ifndef PEON_HPP
# define PEON_HPP
# include "Victim.hpp"

class Peon : public Victim
{
public:
	Peon(std::string name);
	Peon(const Peon& copy);
	Peon&			operator=(const Peon& copy);
	virtual			~Peon();
	virtual void	getPolymorphed() const;
};

#endif
