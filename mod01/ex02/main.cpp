/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: zenotan <zenotan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/15 00:24:41 by zenotan       #+#    #+#                 */
/*   Updated: 2020/10/15 02:17:10 by zenotan       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"
#include "ZombieEvent.hpp"

int	main()
{
	Zombie		*heapZom;
	ZombieEvent	event;

	heapZom = event.newZombie("Zombie King"); // newzom creates on the heap
	heapZom->announce();
	std::cout << "And his zombie groep." << std::endl;

	for (int i = 0; i <= 4; i++)
		event.randomChump(); // created on the stack
	delete heapZom; // deleting zomber thatt was created on the heap
	//system("leaks Zombie");
	return 0;
}
