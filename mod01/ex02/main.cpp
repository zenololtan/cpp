#include <iostream>
#include "Zombie.hpp"
#include "ZombieEvent.hpp"

int	main()
{
	std::string name = "Leader zombeh";
	std::string type = "Different";
	Zombie stackZom;
	Zombie *heapZom;
	ZombieEvent event;

	stackZom.setZombie(name, type);
	stackZom.announce();
	std::cout << "And his zombie groep." << std::endl;

	for (int i = 0; i <= 4; i++)
	{
		event.setZombieType(event.randomType());	
		heapZom = event.randomChump();
		delete heapZom;
	}
	return 0;
}
