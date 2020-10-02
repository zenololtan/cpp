#ifndef BRAIN_HPP
#define BRAIN_HPP

# include <string>

class Brain
{
private:
	std::string	thoughts;
	int		IQ;
public:
	Brain();
	std::string	getThoughts() const;
	int		getIQ() const;
	const Brain*	identify() const;
};

#endif
