#ifndef SUPERMUTANT_HPP
# define SUPERMUTANT_HPP
# include "Enemy.hpp"

class SuperMutant : public Enemy
{
	public:
		SuperMutant();
		SuperMutant(const SuperMutant& copy);
		SuperMutant&	operator=(const SuperMutant& copy);
		virtual			~SuperMutant();
		virtual	void	takeDamage(int amount);
};

endif
