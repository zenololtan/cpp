#include "PlasmaRifle.hpp"
#include <iostream>

int	main()
{
	PlasmaRifle rifle;

	rifle.attack();
	std::cout << rifle.getName() << std::endl;
	std::cout << rifle.getAPCost() << std::endl;
	std::cout << rifle.getDamage() << std::endl;

	return 0;
}
