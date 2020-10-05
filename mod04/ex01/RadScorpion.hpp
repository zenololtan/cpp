#ifndef RADSCORPION_HPP
# define RADSCORPION_HPP

# include "Enemy.hpp"

class RadScorpion : public Enemy
{
	public:
		RadScorpion();
		RadScorpion(const RadScorpion& copy);
		RadScorpion&	operator=(const RadScorpion& copy);
		virtual			~RadScorpion();
};

#endif
