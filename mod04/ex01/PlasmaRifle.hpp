#ifndef PLASMARIFLE_HPP
# define PLASMARIFLE_HPP
# include "AWeapon.hpp"

class PlasmaRifle : public AWeapon
{
	public:
		PlasmaRifle();
		PlasmaRifle(const PlasmaRifle& copy);
		PlasmaRifle&	operator=(const PlasmaRifle& copy);
		~PlasmaRifle();
		void			attack() const;
};

#endif
