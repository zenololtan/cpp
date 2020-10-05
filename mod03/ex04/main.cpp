#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"

int	main(void)
{
	SuperTrap	super("IhateThis");
	FragTrap	fragger("ForFragsSake");

	super.vaulthunter_dot_exe("some poor dude");
	super.ninjaShoebox(fragger);
	return 0;
}
